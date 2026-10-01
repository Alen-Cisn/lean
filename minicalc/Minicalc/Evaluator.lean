import Minicalc.Expr

/-
A verified evaluator for arithmetic expressions.

`eval` is the simple, total evaluator (Lean's `Int.div` truncates toward zero,
so division never crashes, but `div 1 0 = 0` which is arguably a silent error).
`safeEval` returns `none` on division by zero. The main theorem
`safeEval_correct` shows the two agree whenever `safeEval` succeeds.
-/

namespace Minicalc

/-- Check that no division in the expression divides by zero (syntactically).
Note: a divisor that is not a literal is assumed potentially-zero, so `safeEval`
refuses to evaluate expressions like `1 / (2 - 1)`. This keeps the check simple
and sound; see `Examples.lean` for limitations. -/
def hasNoDivByZero : Expr → Bool
  | .num _ => true
  | .neg e => hasNoDivByZero e
  | .add e1 e2 => hasNoDivByZero e1 && hasNoDivByZero e2
  | .sub e1 e2 => hasNoDivByZero e1 && hasNoDivByZero e2
  | .mul e1 e2 => hasNoDivByZero e1 && hasNoDivByZero e2
  | .div e1 e2 =>
      hasNoDivByZero e1 && hasNoDivByZero e2
        && match e2 with | .num 0 => false | _ => true

/-- Evaluate an expression. Division truncates toward zero (Lean's `Int.div`). -/
def eval : Expr → Int
  | .num n     => n
  | .neg e     => -eval e
  | .add e1 e2 => eval e1 + eval e2
  | .sub e1 e2 => eval e1 - eval e2
  | .mul e1 e2 => eval e1 * eval e2
  | .div e1 e2 => eval e1 / eval e2


/-- Division-by-zero-safe evaluation: returns `none` instead of a junk value.

`safeEval e` succeeds exactly when no division in `e` divides by zero, and in
that case it returns `eval e`. -/
def safeEval (e : Expr) : Option Int :=
  if hasNoDivByZero e then some (eval e) else none

/-- **Correctness theorem.** When `safeEval` succeeds, it agrees with `eval`. -/
theorem safeEval_correct : ∀ (e : Expr) (n : Int), safeEval e = some n → eval e = n := by
  intro e n h
  simp only [safeEval] at h
  split at h
  · simp at h; exact h
  · simp at h

/-- `safeEval` succeeds for every expression without division by zero. -/
theorem safeEval_some_of_noDivByZero : ∀ (e : Expr), hasNoDivByZero e = true →
    ∃ n, safeEval e = some n := by
  intro e h
  exact ⟨eval e, by simp only [safeEval]; rw [if_pos h]⟩


end Minicalc

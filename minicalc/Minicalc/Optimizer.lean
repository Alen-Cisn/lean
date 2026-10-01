import Minicalc.Expr
import Minicalc.Evaluator

/-
A verified constant-folding optimizer.

`fold e` computes the value of `e` as a single integer literal whenever the
whole expression is a compile-time constant (returning `none` on division by
zero or non-constant parts). `optimize` replaces such expressions by literals.
-/

namespace Minicalc

/-- Constant-fold an expression to an integer, if possible.
Returns `none` when the expression is not a constant or divides by zero. -/
def fold : Expr → Option Int
  | .num n => some n
  | .neg e =>
      match fold e with
      | none => none
      | some m => some (-m)
  | .add e1 e2 =>
      match fold e1 with
      | none => none
      | some a =>
          match fold e2 with
          | none => none
          | some b => some (a + b)
  | .sub e1 e2 =>
      match fold e1 with
      | none => none
      | some a =>
          match fold e2 with
          | none => none
          | some b => some (a - b)
  | .mul e1 e2 =>
      match fold e1 with
      | none => none
      | some a =>
          match fold e2 with
          | none => none
          | some b => some (a * b)
  | .div e1 e2 =>
      match fold e2 with
      | none => none
      | some 0 => none
      | some b =>
          match fold e1 with
          | none => none
          | some a => some (a / b)

/-- Replace every fully-constant expression by its literal value.
Subexpressions that are not constants (or divide by zero) are left unchanged. -/
def optimize (e : Expr) : Expr :=
  match fold e with
  | some n => .num n
  | none   => e

/-- **Folding correctness.** When `fold` succeeds, its value is `eval e`. -/
theorem fold_correct : ∀ (e : Expr) (n : Int), fold e = some n → eval e = n := by
  intro e n h
  induction e generalizing n with
  | num m => simp_all [fold, eval]
  | neg e ih =>
      cases hm : fold e with
      | none => simp [fold, hm] at h
      | some m =>
          simp [fold, hm] at h
          subst h
          simp [eval, ih _ hm]
  | add e1 e2 ih1 ih2 =>
      cases ha : fold e1 with
      | none => simp [fold, ha] at h
      | some a =>
          cases hb : fold e2 with
          | none => simp [fold, ha, hb] at h
          | some b =>
              simp [fold, ha, hb] at h
              subst h
              simp [eval, ih1 _ ha, ih2 _ hb]
  | sub e1 e2 ih1 ih2 =>
      cases ha : fold e1 with
      | none => simp [fold, ha] at h
      | some a =>
          cases hb : fold e2 with
          | none => simp [fold, ha, hb] at h
          | some b =>
              simp [fold, ha, hb] at h
              subst h
              simp [eval, ih1 _ ha, ih2 _ hb]
  | mul e1 e2 ih1 ih2 =>
      cases ha : fold e1 with
      | none => simp [fold, ha] at h
      | some a =>
          cases hb : fold e2 with
          | none => simp [fold, ha, hb] at h
          | some b =>
              simp [fold, ha, hb] at h
              subst h
              simp [eval, ih1 _ ha, ih2 _ hb]
  | div e1 e2 ih1 ih2 =>
      cases hb : fold e2 with
      | none => simp [fold, hb] at h
      | some b =>
          by_cases hb0 : b = 0
          · simp [fold, hb, hb0] at h
          · cases ha : fold e1 with
            | none => simp [fold, hb, hb0, ha] at h
            | some a =>
                simp [fold, hb, hb0, ha] at h
                subst h
                simp [eval, ih1 _ ha, ih2 _ hb]

/-- **Optimization correctness theorem.** Evaluating the optimized expression
always yields the same result as evaluating the original. -/
theorem optimize_correct : ∀ e : Expr, eval (optimize e) = eval e := by
  intro e
  unfold optimize
  cases h : fold e with
  | none => rfl
  | some n => rw [fold_correct e n h]; simp [eval]

end Minicalc

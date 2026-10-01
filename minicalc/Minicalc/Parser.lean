import Minicalc.Expr

/-
A tiny recursive-descent parser for arithmetic expressions.

Grammar:
    expr   := term (('+' | '-') term)*
    term   := factor (('*' | '/') factor)*
    factor := '-' factor | '(' expr ')' | digits

Positions are plain `Nat` character indices into the string.
-/

namespace Minicalc

/-- Skip whitespace starting at index `i`. -/
def skipWs (s : String) (i : Nat) : Nat :=
  if h : i < s.length then
    if (s.get ⟨i⟩).isWhitespace then skipWs s (i + 1) else i
  else i
termination_by s.length - i
decreasing_by simp_wf; omega

mutual

/-- Parse a factor; returns the expression and the index right after it. -/
partial def parseFactor (s : String) (i : Nat) : Option (Expr × Nat) :=
  let i := skipWs s i
  if h : i < s.length then
    let c := s.get ⟨i⟩
    if c = '-' then
      match parseFactor s (i + 1) with
      | some (e, j) => some (.neg e, j)
      | none => none
    else if c = '(' then
      match parseExpr s (i + 1) with
      | some (e, j) =>
          let j := skipWs s j
          if h' : j < s.length then
            if s.get ⟨j⟩ = ')' then some (e, j + 1) else none
          else none
      | none => none
    else if c.isDigit then
      match parseDigits s i with
      | some (n, j) => some (.num n, j)
      | none => none
    else none
  else none
termination_by s.length - i
decreasing_by all_goals simp_wf; omega

/-- Parse a run of decimal digits starting at index `i`; returns value and next index. -/
partial def parseDigits (s : String) (i : Nat) : Option (Int × Nat) :=
  if h : i < s.length then
    let c := s.get ⟨i⟩
    if c.isDigit then
      match parseDigits s (i + 1) with
      | some (n, j) =>
          let d : Int := ((c.toNat - '0'.toNat : Nat) : Int)
          some (d + 10 * n, j)
      | none => none
    else some (0, i)
  else some (0, i)
termination_by s.length - i
decreasing_by all_goals simp_wf; omega

/-- Parse a term (a chain of `*` / `/` operations). -/
partial def parseTerm (s : String) (i : Nat) : Option (Expr × Nat) :=
  match parseFactor s i with
  | none => none
  | some (f, j) => parseTermTail s j f
termination_by s.length + 1 - i
decreasing_by all_goals simp_wf; omega

/-- Auxiliary accumulator loop for `parseTerm`. -/
partial def parseTermTail (s : String) (i : Nat) (acc : Expr) : Option (Expr × Nat) :=
  let j := skipWs s i
  if h : j < s.length then
    let c := s.get ⟨j⟩
    if c = '*' || c = '/' then
      match parseFactor s (j + 1) with
      | some (f, k) =>
          let acc' := if c = '*' then .mul acc f else .div acc f
          parseTermTail s k acc'
      | none => none
    else some (acc, j)
  else some (acc, j)
termination_by s.length + 1 - i
decreasing_by all_goals simp_wf; omega

/-- Parse a full expression (a chain of `+` / `-` operations). -/
partial def parseExpr (s : String) (i : Nat) : Option (Expr × Nat) :=
  match parseTerm s i with
  | none => none
  | some (t, j) => parseExprTail s j t
termination_by s.length + 1 - i
decreasing_by all_goals simp_wf; omega

/-- Auxiliary accumulator loop for `parseExpr`. -/
partial def parseExprTail (s : String) (i : Nat) (acc : Expr) : Option (Expr × Nat) :=
  let j := skipWs s i
  if h : j < s.length then
    let c := s.get ⟨j⟩
    if c = '+' || c = '-' then
      match parseTerm s (j + 1) with
      | some (t, k) =>
          let acc' := if c = '+' then .add acc t else .sub acc t
          parseExprTail s k acc'
      | none => none
    else some (acc, j)
  else some (acc, j)
termination_by s.length + 1 - i
decreasing_by all_goals simp_wf; omega

end

/-- Parse a complete input string: the whole string must be consumed. -/
def parse (s : String) : Option Expr := do
  let (e, j) ← parseExpr s 0
  if skipWs s j = s.length then some e else none

end Minicalc

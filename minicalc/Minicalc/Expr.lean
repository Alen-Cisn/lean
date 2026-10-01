/-
An arithmetic expression language.
-/

namespace Minicalc

/-- Expressions: integer literals, negation, and the four arithmetic operations. -/
inductive Expr where
  | num : Int → Expr
  | neg : Expr → Expr
  | add : Expr → Expr → Expr
  | sub : Expr → Expr → Expr
  | mul : Expr → Expr → Expr
  | div : Expr → Expr → Expr

namespace Expr

/-- Pretty-print an expression (fully parenthesized). -/
def toString : Expr → String
  | .num n     => s!"{n}"
  | .neg e     => s!"(-{e.toString})"
  | .add e1 e2 => s!"({e1.toString} + {e2.toString})"
  | .sub e1 e2 => s!"({e1.toString} - {e2.toString})"
  | .mul e1 e2 => s!"({e1.toString} * {e2.toString})"
  | .div e1 e2 => s!"({e1.toString} / {e2.toString})"

instance : ToString Expr := ⟨Expr.toString⟩

end Expr

end Minicalc

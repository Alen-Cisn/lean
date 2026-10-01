import Minicalc.Expr
import Minicalc.Parser
import Minicalc.Evaluator
import Minicalc.Optimizer

/-
Command-line entry point: a simple calculator REPL / one-shot evaluator.

    lake exe minicalc "1 + 2 * 3"     # one-shot mode
    lake exe minicalc                 # REPL mode (read from stdin)
-/

namespace Minicalc

/-- Parse one line into an `Expr`, requiring the whole line to be consumed. -/
def parseLine (s : String) : Option Expr :=
  match parseExpr s 0 with
  | none => none
  | some (e, i) =>
      if i = s.length then some e else none

/-- Run one input line, printing the result, optimized form, or an error message. -/
def runLine (s : String) : IO Unit := do
  match parseLine s with
  | none => IO.println "error: could not parse input"
  | some e =>
      match safeEval e with
      | none => IO.println "error: division by zero"
      | some n =>
          let opt := optimize e
          if toString opt = toString e then
            IO.println s!"{e} = {n}"
          else
            IO.println s!"{e} = {opt} = {n}"

/-- REPL: read lines from stdin until EOF. -/
partial def repl : IO Unit := do
  let line ← (← IO.getStdin).getLine
  let t := line.trimAscii.toString
  if t = "quit" then
    pure ()
  else if t.isEmpty then
    pure ()
  else
    runLine line
    repl

def main (args : List String) : IO UInt32 := do
  match args with
  | [expr] => runLine expr; return 0
  | _ =>
      IO.println "MiniCalc — a formally verified calculator"
      IO.println "usage: minicalc \"<expression>\"   (e.g. minicalc \"1 + 2 * 3\")"
      IO.println "type an expression per line, or 'quit' to exit:"
      repl
      return 0

end Minicalc

import Lake
open Lake DSL

package minicalc

@[default_target]
lean_exe minicalc where
  root := `Main

lean_lib Minicalc


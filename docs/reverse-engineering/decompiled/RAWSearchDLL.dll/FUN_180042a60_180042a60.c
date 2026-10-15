// Function: FUN_180042a60
// Address: 180042a60
// Size: 72 bytes


undefined4 FUN_180042a60(undefined4 *param_1,char param_2)

{
  if (param_2 == '\0') {
    return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((longlong)param_1 + 1))
                             ,*(undefined1 *)((longlong)param_1 + 2)),
                    *(undefined1 *)((longlong)param_1 + 3));
  }
  return *param_1;
}


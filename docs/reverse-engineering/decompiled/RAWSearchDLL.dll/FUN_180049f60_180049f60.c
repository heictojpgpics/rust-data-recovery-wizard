// Function: FUN_180049f60
// Address: 180049f60
// Size: 77 bytes


undefined4 FUN_180049f60(undefined4 *param_1)

{
  if (DAT_180118004 != 0) {
    return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((longlong)param_1 + 1))
                             ,*(undefined1 *)((longlong)param_1 + 2)),
                    *(undefined1 *)((longlong)param_1 + 3));
  }
  return *param_1;
}


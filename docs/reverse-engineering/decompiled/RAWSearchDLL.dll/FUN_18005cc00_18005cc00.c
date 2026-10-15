// Function: FUN_18005cc00
// Address: 18005cc00
// Size: 111 bytes


void FUN_18005cc00(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  if (param_1 != (longlong *)0x0) {
    do {
      uVar2 = *(uint *)(param_1 + 3);
      plVar1 = (longlong *)*param_1;
      if ((uVar2 >> 8 & 1) == 0) {
        if ((longlong *)param_1[2] != (longlong *)0x0) {
          FUN_18005cc00((longlong *)param_1[2]);
          uVar2 = *(uint *)(param_1 + 3);
        }
        if (((uVar2 >> 8 & 1) == 0) && (param_1[4] != 0)) {
          (*DAT_180117f20)();
        }
      }
      if (param_1[8] != 0) {
        (*DAT_180117f20)();
      }
      (*DAT_180117f20)(param_1);
      param_1 = plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}


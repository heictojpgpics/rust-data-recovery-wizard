// Function: FUN_18001c340
// Address: 18001c340
// Size: 187 bytes


longlong FUN_18001c340(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined7 extraout_var;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar3 = FUN_1800340b0(param_2);
    lVar4 = 0;
    while (plVar3 != (longlong *)0x0) {
      lVar4 = lVar4 + plVar3[1];
      *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
      plVar3 = (longlong *)0x0;
      bVar1 = FUN_1800341c0(param_2);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = **(longlong **)(param_2 + 0x30);
        }
        plVar3 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)(lVar5 + 8) +
                    (*(ulonglong *)(param_2 + 0x40) >> 1 & *(longlong *)(lVar5 + 0x10) - 1U) * 8) +
                  (ulonglong)((uint)*(ulonglong *)(param_2 + 0x40) & 1) * 8);
      }
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    return (ulonglong)*(uint *)(param_1 + 0x18) * (longlong)iVar2 * lVar4;
  }
  return 0;
}


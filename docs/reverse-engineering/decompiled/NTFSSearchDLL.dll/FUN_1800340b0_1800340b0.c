// Function: FUN_1800340b0
// Address: 1800340b0
// Size: 152 bytes


longlong * FUN_1800340b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return (longlong *)0x0;
  }
  plVar1 = plVar2;
  if ((undefined8 *)(param_1 + 8) != (undefined8 *)0x0) {
    plVar1 = *(longlong **)(param_1 + 8);
  }
  if (((*(longlong **)(param_1 + 0x30) != plVar1) && (plVar1 != (longlong *)0x0)) &&
     ((undefined8 *)*plVar1 != (undefined8 *)0x0)) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)*plVar1;
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20)
     ) {
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x30);
    }
    plVar2 = *(longlong **)
              (*(longlong *)(plVar2[1] + (*(ulonglong *)(param_1 + 0x40) >> 1 & plVar2[2] - 1U) * 8)
              + (ulonglong)((uint)*(ulonglong *)(param_1 + 0x40) & 1) * 8);
  }
  return plVar2;
}


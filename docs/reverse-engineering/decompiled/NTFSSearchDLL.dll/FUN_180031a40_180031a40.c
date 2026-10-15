// Function: FUN_180031a40
// Address: 180031a40
// Size: 61 bytes


ulonglong FUN_180031a40(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)(*(longlong *)(param_1 + 0x40) + uVar2) != '\0');
    return uVar2;
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
      return (ulonglong)*(ushort *)((longlong)plVar1 + 0x19);
    }
                    /* WARNING: Could not recover jumptable at 0x000180031a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)*plVar1)();
    return uVar2;
  }
  return 0;
}


// Function: FUN_180002650
// Address: 180002650
// Size: 176 bytes


longlong * FUN_180002650(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (((-1 < param_2) && (0 < 0x7fffffff - param_2)) &&
     (uVar3 = param_2 + 8U & 0xfffffff8, param_2 + 1 <= (int)uVar3)) {
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)(int)uVar3;
      if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) <
          (ulonglong)(longlong)param_3) {
        return (longlong *)0x0;
      }
      uVar4 = (longlong)(int)uVar3 * (longlong)param_3;
      if (0xffffffffffffffe7 < uVar4) {
        return (longlong *)0x0;
      }
    }
    plVar2 = (longlong *)HeapAlloc(*(HANDLE *)(*(longlong *)(param_1 + 8) + 8),0,uVar4 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = param_1;
      *(undefined4 *)(plVar2 + 2) = 1;
      *(uint *)((longlong)plVar2 + 0xc) = uVar3 - 1;
      *(undefined4 *)(plVar2 + 1) = 0;
      return plVar2;
    }
  }
  return (longlong *)0x0;
}


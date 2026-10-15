// Function: FUN_1800442d0
// Address: 1800442d0
// Size: 263 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1800442d0(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  uint local_28;
  
  local_28 = 0;
  if (((param_1 != (longlong *)0x0) && (param_2 != 0)) &&
     (lVar2 = (**(code **)(*param_1 + 0x18))(param_1), uVar4 = lVar2 >> 0x3f & 0xfff,
     (lVar2 + uVar4 & 0xfff) != uVar4)) {
    lVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    cVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (((cVar1 == '\0') && (1 < lVar3)) &&
       (local_28 = (uint)(lVar2 / (longlong)((ulonglong)param_2 * lVar3)), local_28 < 0x2001)) {
      dVar5 = (double)FUN_18002f2f0(local_28);
      dVar5 = (double)FUN_18002f310(2,(uint)(longlong)(dVar5 + _DAT_1800731a0));
      local_28 = (uint)(longlong)dVar5;
    }
  }
  return local_28;
}


// Function: FUN_180032350
// Address: 180032350
// Size: 163 bytes


undefined8
FUN_180032350(longlong param_1,longlong *param_2,int param_3,undefined8 *param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    DAT_180096ef0 = 0;
  }
  else {
    iVar1 = FUN_180031d40(param_1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      return 2;
    }
    DAT_180096ef0 = 0;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x118);
      if ((ulonglong)(*(longlong *)(param_1 + 0x130) * 10) <=
          (ulonglong)(((longlong)param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3)) {
        lVar2 = *(longlong *)(param_1 + 0x130);
      }
      *(longlong *)(param_1 + 0x10) = lVar2;
      *(undefined4 *)(param_1 + 0x18) = 0x2b;
    }
  }
  return 1;
}


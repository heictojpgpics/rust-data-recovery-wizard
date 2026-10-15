// Function: FUN_180002020
// Address: 180002020
// Size: 110 bytes


undefined8
FUN_180002020(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  void *pvVar3;
  undefined4 local_res18 [4];
  
  if (((param_3 != (longlong *)0x0) && (param_4 != (longlong *)0x0)) &&
     (lVar1 = *param_4, lVar1 != 0)) {
    iVar2 = FUN_180016f10(param_1,param_5,*(ulonglong *)(lVar1 + 0x10),param_3,&stack0x00000030,
                          local_res18,*(undefined2 *)(lVar1 + 0x2a));
    pvVar3 = (void *)CONCAT44(extraout_var,iVar2);
    if ((void *)*param_4 != (void *)0x0) {
      pvVar3 = FUN_180002090((void *)*param_4);
    }
    *param_4 = 0;
    return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}


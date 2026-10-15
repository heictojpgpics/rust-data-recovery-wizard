// Function: FUN_18000f2b0
// Address: 18000f2b0
// Size: 320 bytes


undefined8 FUN_18000f2b0(longlong param_1,longlong *param_2,char param_3,char param_4,char param_5)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong local_res10;
  
  if ((param_2 != (longlong *)0x0) && (param_2[6] != 0)) {
    uVar1 = *(ulonglong *)(param_1 + 0x838);
    if ((uVar1 != 0) &&
       ((((longlong)uVar1 <= param_2[0xb] && (uVar1 = uVar1 + 8, param_2[0xb] < (longlong)uVar1)) &&
        (uVar1 = __RTDynamicCast(param_2[6],0,&IFileProperties::RTTI_Type_Descriptor,
                                 &CNTFSFileProperties::RTTI_Type_Descriptor,0), uVar1 != 0)))) {
      *(byte *)(uVar1 + 0x72) = *(byte *)(uVar1 + 0x72) | 1;
    }
    if ((param_3 != '\0') &&
       (uVar1 = FUN_180023350(param_1 + 0x888,param_2,param_5), (char)uVar1 == '\0')) {
LAB_18000f3aa:
      uVar1 = (**(code **)(*param_2 + 0x30))(param_2,1);
      return uVar1 & 0xffffffffffffff00;
    }
    if (param_4 != '\0') {
      local_res10 = 0;
      plVar2 = (longlong *)(**(code **)*param_2)(param_2);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x28))
                        (*(longlong **)(param_1 + 0x108),plVar2,1,&local_res10);
      if ((int)uVar1 == 0) {
        uVar1 = local_res10 & 0xffff;
        if ((short)local_res10 == 0x13) {
          *(undefined4 *)(param_1 + 0x118) = 0;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x30))(plVar2,1);
          }
          goto LAB_18000f3aa;
        }
      }
    }
    if (param_3 == '\0') {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
    in_RAX = FUN_1800224d0(param_1 + 0x888,param_2,param_5);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


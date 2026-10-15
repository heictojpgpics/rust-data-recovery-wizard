// Function: FUN_180027970
// Address: 180027970
// Size: 214 bytes


undefined8 FUN_180027970(longlong param_1,longlong *param_2,undefined4 *param_3,char param_4)

{
  ushort uVar1;
  ulonglong in_RAX;
  undefined4 *local_res18 [2];
  
  if ((param_2 != (longlong *)0x0) && (param_3 != (undefined4 *)0x0)) {
    local_res18[0] = param_3;
    if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
      uVar1 = *(ushort *)((longlong)param_2 + 0x23);
    }
    else {
      uVar1 = (*(code *)((undefined **)*param_2)[7])(param_2);
    }
    if ((uVar1 & 0x10) == 0) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
      *local_res18[0] = 0;
    }
    else {
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
      *local_res18[0] = 1;
    }
    LOCK();
    *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
    UNLOCK();
    *(longlong **)(local_res18[0] + 6) = param_2;
    if ((param_4 != '\0') && (param_2[0xb] != -1)) {
      *(longlong *)(local_res18[0] + 8) = param_2[0xb];
    }
    if (*(longlong *)(param_1 + 0x388) != 0) {
      local_res18[0] =
           (undefined4 *)FUN_1800246b0((longlong *)(*(longlong *)(param_1 + 0x388) + 8),local_res18)
      ;
    }
    return CONCAT71((int7)((ulonglong)local_res18[0] >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}


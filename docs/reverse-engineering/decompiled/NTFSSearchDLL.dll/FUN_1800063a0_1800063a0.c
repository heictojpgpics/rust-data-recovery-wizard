// Function: FUN_1800063a0
// Address: 1800063a0
// Size: 82 bytes


longlong FUN_1800063a0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_180006450(param_1,param_2,param_3);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  if (param_4[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_4[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar2 + 0x10) = *param_4;
  *(undefined8 *)(lVar2 + 0x18) = param_4[1];
  return lVar2;
}


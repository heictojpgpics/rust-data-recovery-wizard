// Function: Catch@180061df0
// Address: 180061df0
// Size: 111 bytes


undefined1 * Catch_180061df0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)**(undefined8 **)(param_2 + 0x98);
  __ExceptionPtrCreate((void *)(param_2 + 0x38));
  uVar1 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x20) = uVar1 | 2;
  __ExceptionPtrCurrentException((void *)(param_2 + 0x38));
  *(uint *)(param_2 + 0x20) = uVar1 & 0xfffffffd;
  *(uint *)(param_2 + 0x20) = uVar1 & 0xfffffffd | 1;
  __ExceptionPtrAssign(pvVar2,(void *)(param_2 + 0x38));
  *(uint *)(param_2 + 0x20) = uVar1 & 0xfffffffc;
  __ExceptionPtrDestroy((void *)(param_2 + 0x38));
  return &LAB_180022ccb;
}


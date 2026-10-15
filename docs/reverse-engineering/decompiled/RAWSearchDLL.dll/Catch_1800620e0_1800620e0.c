// Function: Catch@1800620e0
// Address: 1800620e0
// Size: 108 bytes


undefined1 * Catch_1800620e0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)**(undefined8 **)(param_2 + 0x78);
  __ExceptionPtrCreate((void *)(param_2 + 0x40));
  uVar1 = *(uint *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = uVar1 | 2;
  __ExceptionPtrCurrentException((void *)(param_2 + 0x40));
  *(uint *)(param_2 + 0x30) = uVar1 & 0xfffffffd;
  *(uint *)(param_2 + 0x30) = uVar1 & 0xfffffffd | 1;
  __ExceptionPtrAssign(pvVar2,(void *)(param_2 + 0x40));
  *(uint *)(param_2 + 0x30) = uVar1 & 0xfffffffc;
  __ExceptionPtrDestroy((void *)(param_2 + 0x40));
  return &LAB_18002338d;
}


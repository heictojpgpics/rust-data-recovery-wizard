// Function: FUN_18005e394
// Address: 18005e394
// Size: 103 bytes


void FUN_18005e394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  while (_Memory = DAT_1800963b0, DAT_1800963b0 != (undefined8 *)0x0) {
    DAT_1800963b0 = (undefined8 *)*DAT_1800963b0;
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180066648)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180066648)(lVar1,1);
    }
    free(_Memory);
  }
  return;
}


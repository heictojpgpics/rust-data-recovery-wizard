// Function: FUN_18000b960
// Address: 18000b960
// Size: 64 bytes


void FUN_18000b960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,plVar1 != (longlong *)(param_1 + 0x30),param_3,param_4,0xfffffffffffffffe);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}


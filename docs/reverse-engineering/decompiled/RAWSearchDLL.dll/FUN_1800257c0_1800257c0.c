// Function: FUN_1800257c0
// Address: 1800257c0
// Size: 109 bytes


longlong FUN_1800257c0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1800234c0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  lVar2 = FUN_1800012e0(param_1,lVar1 + 0x20);
  FUN_180007060(lVar2,param_2);
  FUN_1800258d0((ulonglong *)(lVar2 + 0x20),param_2 + 4);
  return lVar1;
}


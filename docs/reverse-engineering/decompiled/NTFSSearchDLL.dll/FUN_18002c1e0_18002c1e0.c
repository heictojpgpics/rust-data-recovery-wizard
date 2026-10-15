// Function: FUN_18002c1e0
// Address: 18002c1e0
// Size: 106 bytes


undefined8 FUN_18002c1e0(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_1[10] + param_2;
  if ((uVar1 <= (ulonglong)param_1[2]) && (*param_1 != 0)) {
    lVar2 = 0;
    while( true ) {
      if ((longlong)(param_4 & 0xffffffff) <= lVar2) {
        return 1;
      }
      if ((ulonglong)param_1[2] < uVar1) break;
      *(byte *)(*param_1 + (uVar1 >> 3)) =
           *(byte *)(*param_1 + (uVar1 >> 3)) | '\x01' << ((byte)uVar1 & 7);
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 + 1;
    }
    return 1;
  }
  return 0;
}


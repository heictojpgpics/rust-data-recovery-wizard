// Function: FUN_18002e9a0
// Address: 18002e9a0
// Size: 117 bytes


undefined8
FUN_18002e9a0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong param_6,longlong param_7)

{
  ulonglong uVar1;
  
  if ((((param_2 != (undefined8 *)0x0) && (0x1ff < param_4)) && (-1 < param_5)) &&
     ((-1 < param_6 && (0 < param_7)))) {
    uVar1 = FUN_18002e890(param_2,param_5,param_3,param_7,'\x01');
    if ((int)uVar1 != 0) {
      DAT_18008f065 = 1;
      DAT_18008f044 = 0;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_3 + 0x18) = 0x76;
      return 1;
    }
  }
  return 0;
}


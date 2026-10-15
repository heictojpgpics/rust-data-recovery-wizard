// Function: FUN_18002a1e0
// Address: 18002a1e0
// Size: 191 bytes


void FUN_18002a1e0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_48;
  uVar5 = param_1[2];
  uVar4 = 0;
  local_20 = param_1;
  if (uVar5 != 0) {
    puVar2 = (undefined8 *)FUN_1800016b0(param_1);
    do {
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      cVar1 = *(char *)((longlong)puVar3 + uVar4);
      if ((((0x19 < (byte)(cVar1 + 0x9fU)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
          (9 < (byte)(cVar1 - 0x30U))) &&
         ((0x3f < (byte)(cVar1 - 0x20U) ||
          ((0x8000000100007301U >> ((longlong)(char)(cVar1 - 0x20U) & 0x3fU) & 1) == 0)))) {
        FUN_180001630(param_1);
        goto LAB_18002a27b;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  FUN_180001630(param_1);
LAB_18002a27b:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}


// Function: FUN_180020bd0
// Address: 180020bd0
// Size: 536 bytes


void FUN_180020bd0(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *_Buf1;
  int *piVar3;
  undefined8 *_Dst;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *local_38;
  longlong local_30 [4];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_18008f028 ^ (ulonglong)auStack_68;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  uVar5 = param_3;
  local_38 = param_2;
  if (*piVar3 < DAT_180118354) {
    _Init_thread_header(&DAT_180118354);
    if (DAT_180118354 == -1) {
      FUN_180001690((undefined1 *)&DAT_180118300);
      atexit((_func_5014 *)&LAB_180064d60);
      _Init_thread_footer(&DAT_180118354);
    }
  }
  uVar4 = (undefined1)uVar5;
  if (*piVar3 < DAT_180118350) {
    _Init_thread_header(&DAT_180118350);
    if (DAT_180118350 == -1) {
      FUN_180001780((longlong)local_30);
      puVar2 = (undefined8 *)FUN_1800016b0(local_30);
      puVar2[2] = 0;
      puVar2[3] = 0xf;
      local_48[0] = 0;
      FUN_180001300((undefined1 *)puVar2,local_48);
      if ((ulonglong)puVar2[3] < 9) {
        FUN_1800086f0((longlong)local_30,9,uVar4,"debug_raw");
      }
      else {
        _Dst = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          _Dst = (undefined8 *)*puVar2;
        }
        puVar2[2] = 9;
        memmove(_Dst,"debug_raw",9);
        local_48[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + 9),local_48);
      }
      DAT_18011834c = FUN_18001df00((char *)local_30);
      FUN_180001630(local_30);
      _Init_thread_footer(&DAT_180118350);
    }
  }
  if (DAT_18011834c != '\0') {
    puVar2 = &DAT_180118300;
    if (0xf < DAT_180118318) {
      puVar2 = DAT_180118300;
    }
    _Buf1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      _Buf1 = (longlong *)*param_2;
    }
    if (param_2[2] == DAT_180118310) {
      iVar1 = memcmp(_Buf1,puVar2,param_2[2]);
      if ((iVar1 == 0) && ((ulonglong)(longlong)DAT_180118180 <= param_3)) {
        FUN_180001630(param_2);
        goto LAB_180020ca4;
      }
    }
  }
  FUN_180001630(param_2);
LAB_180020ca4:
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}


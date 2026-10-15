// Function: FUN_180023080
// Address: 180023080
// Size: 551 bytes


void FUN_180023080(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_98 [4];
  longlong local_78 [6];
  ulonglong local_48;
  
  local_a8 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_e8;
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 / 0x48;
    if (lVar2 < 0x21) {
LAB_1800231a9:
      if (1 < lVar2) {
        FUN_180024770(param_1,param_2);
      }
LAB_1800231ba:
      __security_check_cookie(local_48 ^ (ulonglong)auStack_e8);
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_1800243c0((longlong)param_1,(longlong)param_2);
        lVar2 = ((longlong)param_2 - (longlong)param_1) / 0x48;
        if (1 < lVar2) {
          plVar3 = param_2 + -9;
          if (lVar2 < 2) goto LAB_180023280;
          do {
            FUN_18001e970((longlong)local_98,(longlong)plVar3);
            FUN_180024ec0(plVar3,param_1);
            FUN_180025000((longlong)param_1,0,((longlong)plVar3 - (longlong)param_1) / 0x48,local_98
                          ,param_4);
            FUN_180001630(local_78);
            FUN_180001630(local_98);
LAB_180023280:
            plVar3 = plVar3 + -9;
          } while (1 < ((0x48 - (longlong)param_1) + (longlong)plVar3) / 0x48);
        }
        goto LAB_1800231ba;
      }
      goto LAB_1800231a9;
    }
    FUN_180023f20(&local_b8,param_1,param_2);
    plVar1 = local_b0;
    plVar3 = local_b8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar2 = ((longlong)param_2 - (longlong)local_b0) / 0x12 +
            ((longlong)param_2 - (longlong)local_b0 >> 0x3f);
    if (((longlong)local_b8 - (longlong)param_1) / 0x48 < (lVar2 >> 2) - (lVar2 >> 0x3f)) {
      FUN_180023080(param_1,local_b8,param_3,param_4);
      plVar3 = param_2;
      param_1 = plVar1;
    }
    else {
      FUN_180023080(local_b0,param_2,param_3,param_4);
    }
    lVar2 = (longlong)plVar3 - (longlong)param_1;
    param_2 = plVar3;
  } while( true );
}


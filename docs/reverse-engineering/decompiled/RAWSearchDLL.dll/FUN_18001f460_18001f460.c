// Function: FUN_18001f460
// Address: 18001f460
// Size: 844 bytes


void FUN_18001f460(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  char *_Src;
  undefined1 auStack_268 [32];
  undefined1 local_248 [4];
  undefined4 local_244;
  undefined8 *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 *local_218 [4];
  longlong local_1f8 [4];
  longlong local_1d8 [2];
  longlong local_1c8;
  longlong local_1a8 [4];
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_e8 [20];
  ulonglong local_48;
  
  local_228 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_268;
  uVar7 = 0;
  local_244 = 0;
  lVar2 = *param_1;
  _Src = "tail";
  if ((char)param_3 != '\0') {
    _Src = "header";
  }
  local_220 = param_2;
  FUN_180001780((longlong)local_218);
  puVar1 = (undefined8 *)FUN_1800016b0(local_218);
  puVar1[2] = 0;
  puVar1[3] = 0xf;
  local_248[0] = 0;
  FUN_180001300((undefined1 *)puVar1,local_248);
  plVar5 = (longlong *)0xffffffffffffffff;
  do {
    plVar5 = (longlong *)((longlong)plVar5 + 1);
  } while (_Src[(longlong)plVar5] != '\0');
  if ((longlong *)puVar1[3] < plVar5) {
    FUN_1800086f0((longlong)local_218,(ulonglong)plVar5,(char)param_3,_Src);
  }
  else {
    puVar6 = puVar1;
    if ((longlong *)0xf < (longlong *)puVar1[3]) {
      puVar6 = (undefined8 *)*puVar1;
    }
    puVar1[2] = plVar5;
    param_3 = plVar5;
    memmove(puVar6,_Src,(size_t)plVar5);
    local_248[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar6 + (longlong)plVar5),local_248);
  }
  lVar2 = FUN_180057710(lVar2,local_218);
  FUN_180057470(local_e8,lVar2,param_3,_Src);
  FUN_180001630((longlong *)local_218);
  FUN_180001780((longlong)local_218);
  puVar1 = (undefined8 *)FUN_1800016b0(local_218);
  puVar1[2] = 0;
  puVar1[3] = 0xf;
  local_248[0] = 0;
  FUN_180001300((undefined1 *)puVar1,local_248);
  if ((ulonglong)puVar1[3] < 5) {
    _Src = "signs";
    FUN_1800086f0((longlong)local_218,5,(char)param_3,"signs");
  }
  else {
    puVar6 = puVar1;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar6 = (undefined8 *)*puVar1;
    }
    puVar1[2] = 5;
    param_3 = (longlong *)0x5;
    memmove(puVar6,"signs",5);
    local_248[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar6 + 5),local_248);
  }
  plVar5 = (longlong *)FUN_180057710((longlong)local_e8,local_218);
  FUN_180057470(&local_188,(longlong)plVar5,param_3,_Src);
  FUN_180001630((longlong *)local_218);
  iVar4 = 0;
  if (local_180 == 0) {
    if ((local_178 != 0) && (*(int *)(local_178 + 0x18) == 6)) {
      for (puVar1 = *(undefined8 **)(local_178 + 0x10); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (*(int *)(local_180 + 0x18) == 6) {
    iVar4 = 0;
    for (puVar1 = *(undefined8 **)(local_180 + 0x10); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      iVar4 = iVar4 + 1;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_244 = 1;
  if (0 < iVar4) {
    do {
      puVar1 = FUN_1800579b0((longlong)&local_188,uVar7);
      local_238 = (undefined8 *)FUN_180057e80((longlong)puVar1,(longlong)local_1a8);
      uStack_230 = local_238[2];
      if (0xf < (ulonglong)local_238[3]) {
        local_238 = (undefined8 *)*local_238;
      }
      local_218[0] = local_238;
      local_218[1] = (undefined8 *)uStack_230;
      FUN_18001e510((longlong)local_1f8,(undefined1 (*) [16])local_218);
      plVar3 = local_1a8;
      FUN_180001630(plVar3);
      plVar5 = (longlong *)param_1[1];
      if (local_1f8 != plVar5) {
        param_3 = (longlong *)plVar5[2];
        if (0xf < (ulonglong)plVar5[3]) {
          plVar5 = (longlong *)*plVar5;
        }
        plVar3 = local_1f8;
        FUN_1800071e0((longlong)plVar3,plVar5,(ulonglong)param_3);
      }
      if (local_1c8 != 0) {
        plVar5 = (longlong *)param_2[1];
        if ((longlong *)param_2[2] == plVar5) {
          param_3 = local_1f8;
          FUN_180021730(param_2,(longlong)plVar5,(longlong)param_3);
        }
        else {
          lVar2 = FUN_1800012e0(plVar3,plVar5);
          plVar5 = local_1f8;
          FUN_18001e970(lVar2,(longlong)plVar5);
          param_2[1] = param_2[1] + 0x48;
        }
      }
      FUN_180001630(local_1d8);
      FUN_180001630(local_1f8);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar4);
  }
  FUN_180057610(&local_188,plVar5,param_3,_Src);
  FUN_180057610(local_e8,plVar5,param_3,_Src);
  __security_check_cookie(local_48 ^ (ulonglong)auStack_268);
  return;
}


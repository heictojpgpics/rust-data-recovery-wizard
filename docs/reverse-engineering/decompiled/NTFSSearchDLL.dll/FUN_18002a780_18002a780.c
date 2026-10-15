// Function: FUN_18002a780
// Address: 18002a780
// Size: 1058 bytes


void FUN_18002a780(int *param_1,undefined8 *param_2,ulonglong *param_3)

{
  ushort uVar1;
  void *pvVar2;
  bool bVar3;
  short sVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  int *piVar9;
  short sVar10;
  ulonglong *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong *_Src;
  char cVar15;
  undefined1 auStackY_538 [32];
  void *local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  void *local_4e8;
  undefined4 local_4e0;
  ulonglong local_4dc;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined8 uStack_4c4;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined8 local_4b0 [3];
  longlong local_498 [10];
  int local_448 [256];
  ulonglong local_48;
  ulonglong *_Size;
  
  local_4b8 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_538;
  uVar14 = (uint)param_3;
  if ((param_2 == (undefined8 *)0x0) || (uVar14 < 0x60)) goto LAB_18002ab78;
  local_4dc = 0;
  uStack_4d4 = 0;
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  puVar5 = (ulonglong *)0x0;
  local_4bc = 0;
  cVar15 = false;
  sVar4 = *(short *)(param_2 + 6);
  if (sVar4 == 0x16) {
    sVar4 = 0x16;
    if (((*(short *)((longlong)param_2 + 0x32) == 0x15) && (sVar4 = 0x16, param_2[1] == 0)) &&
       (sVar4 = 0x16, param_2[2] == 0)) {
      *(undefined8 *)(param_1 + 0x10) = *param_2;
      sVar4 = *(short *)(param_2 + 6);
      goto LAB_18002a82c;
    }
LAB_18002a832:
    _Size = puVar5;
    _Src = puVar5;
    if (*(short *)((longlong)param_2 + 0x32) == 2) goto LAB_18002a83d;
  }
  else {
LAB_18002a82c:
    if (sVar4 != 2) goto LAB_18002a832;
LAB_18002a83d:
    uVar12 = uVar14 - 0x58;
    _Src = param_2 + 0xb;
    param_3 = (ulonglong *)(ulonglong)DAT_180072a88;
    if (((uint)*_Src != DAT_180072a88) || (*(char *)((longlong)param_2 + 0x5c) != DAT_180072a8c)) {
      uVar12 = uVar14 - 0x60;
      _Src = param_2 + 0xc;
    }
    _Size = (ulonglong *)(ulonglong)uVar12;
    if (((0x70 < uVar12) && (uVar12 < 0x400)) &&
       (((uint)*_Src == DAT_180072a88 && (*(char *)((longlong)_Src + 4) == DAT_180072a8c)))) {
      memset(local_448,0,0x400);
      param_3 = _Size;
      memcpy(local_448,_Src,(size_t)_Size);
      cVar15 = false;
      bVar3 = FUN_180041970((longlong)local_448);
      if (((int)CONCAT71(extraout_var,bVar3) == 0) &&
         (*(longlong **)(param_1 + 0x12) != (longlong *)0x0)) {
        param_3 = (ulonglong *)0x400;
        FUN_1800431d0(local_498,local_448,0x400,0,*(longlong **)(param_1 + 0x12),(undefined8 *)0x0);
        puVar11 = (ulonglong *)(ulonglong)(uint)(param_1[1] * *param_1);
        bVar3 = FUN_180043030(local_498);
        if ((int)CONCAT71(extraout_var_00,bVar3) != 0) {
          puVar5 = (ulonglong *)
                   FUN_180006db0(0,local_498,(longlong)puVar11,(ulonglong *)&uStack_4c8,0x200);
          puVar8 = (ulonglong *)CONCAT44(uStack_4cc,uStack_4d0);
          if (puVar5 != (ulonglong *)0x0) {
            puVar8 = puVar5;
          }
          uStack_4d0 = SUB84(puVar8,0);
          uStack_4cc = (undefined4)((ulonglong)puVar8 >> 0x20);
          param_3 = puVar11;
        }
        FUN_180043170(local_498);
        cVar15 = puVar5 != (ulonglong *)0x0;
      }
      sVar4 = *(short *)(param_2 + 6);
      local_4dc = CONCAT44(local_4dc._4_4_,1);
      uStack_4c4 = uStack_4c4 & 0xffffffff;
    }
  }
  if (sVar4 == 0xf) {
    sVar4 = 0xf;
    if (*(short *)((longlong)param_2 + 0x32) != 0xe) goto LAB_18002a973;
    bVar3 = true;
    sVar4 = 0xf;
LAB_18002a98e:
    sVar10 = sVar4;
    if (bVar3) goto LAB_18002a99a;
  }
  else {
LAB_18002a973:
    bVar3 = false;
    if (sVar4 != 0xd) goto LAB_18002a98e;
    sVar10 = 0xd;
    sVar4 = 0xd;
    if (*(short *)((longlong)param_2 + 0x32) != 0xc) goto LAB_18002a98e;
LAB_18002a99a:
    if (*(short *)((longlong)param_2 + 0x3a) != 0) {
      uVar1 = *(ushort *)(param_2 + 7);
      if (uVar14 < uVar1) goto LAB_18002ab78;
      _Src = (ulonglong *)((longlong)param_2 + (ulonglong)uVar1 + 0x30);
      uVar12 = (uVar14 - uVar1) - 0x30;
      _Size = (ulonglong *)(ulonglong)uVar12;
      if (sVar10 == 0xd) {
        if (*(short *)((longlong)param_2 + 0x32) == 0xc) {
LAB_18002a9dd:
          if (*(longlong *)(param_1 + 0x10) != 0) {
            local_500 = (void *)*param_2;
            local_4f8 = *(longlong *)(param_1 + 0x10);
            FUN_18002af50((longlong *)(param_1 + 0x28),local_4b0,param_3,(ulonglong *)&local_500);
            param_1[0x10] = 0;
            param_1[0x11] = 0;
          }
        }
      }
      else if ((sVar10 == 0xf) && (*(short *)((longlong)param_2 + 0x32) == 0xe)) goto LAB_18002a9dd;
      if (_Src == (ulonglong *)0x0) {
        cVar15 = '\0';
      }
      else {
        uVar6 = FUN_18002a340(_Src,uVar12,(longlong)&local_4f0,(ulonglong *)&uStack_4c8,'\0');
        cVar15 = (char)uVar6;
      }
      local_4dc = local_4dc & 0xffffffff00000000;
      uVar13 = 3;
      if (bVar3) {
        uVar13 = 0;
      }
      uStack_4c4 = CONCAT44(uVar13,(undefined4)uStack_4c4);
    }
  }
  sVar4 = *(short *)(param_2 + 6);
  if (sVar4 == 0xe) {
    if (*(short *)((longlong)param_2 + 0x32) == 0xf) {
      uVar1 = *(ushort *)((longlong)param_2 + 0x34);
      if (uVar14 < uVar1) goto LAB_18002ab78;
      uVar12 = (uVar14 - uVar1) - 0x30;
      _Size = (ulonglong *)(ulonglong)uVar12;
      _Src = (ulonglong *)((longlong)param_2 + (ulonglong)uVar1 + 0x30);
      if (_Src == (ulonglong *)0x0) {
        cVar15 = '\0';
        sVar4 = 0xe;
      }
      else {
        uVar6 = FUN_18002a340(_Src,uVar12,(longlong)&local_4f0,(ulonglong *)&uStack_4c8,'\x01');
        cVar15 = (char)uVar6;
        sVar4 = *(short *)(param_2 + 6);
      }
      local_4dc = local_4dc & 0xffffffff00000000;
      uStack_4c4 = CONCAT44(1,(undefined4)uStack_4c4);
      goto LAB_18002aab7;
    }
  }
  else {
LAB_18002aab7:
    if ((sVar4 == 8) && (*(short *)((longlong)param_2 + 0x32) == 0)) {
      FUN_18002a4f0((longlong)param_1,(longlong)param_2,uVar14,*param_2);
    }
  }
  if ((cVar15 != '\0') && (CONCAT44(uStack_4cc,uStack_4d0) != 0)) {
    uVar13 = SUB84(_Size,0);
    local_500 = (void *)FUN_18002be40((size_t)_Size);
    memcpy(local_500,_Src,(size_t)_Size);
    local_4f0 = *param_2;
    local_4e8 = local_500;
    piVar9 = param_1;
    local_4e0 = uVar13;
    cVar15 = FUN_180029710((longlong)param_1,&local_4f0,(longlong *)_Size);
    if (cVar15 == '\0') {
      free(local_500);
    }
    else {
      pvVar2 = *(void **)(param_1 + 0x36);
      if (*(void **)(param_1 + 0x38) == pvVar2) {
        FUN_180013a20((longlong *)(param_1 + 0x34),pvVar2,&local_500);
      }
      else {
        puVar7 = (undefined8 *)FUN_180001100(piVar9,pvVar2);
        *puVar7 = local_500;
        *(longlong *)(param_1 + 0x36) = *(longlong *)(param_1 + 0x36) + 8;
      }
    }
  }
LAB_18002ab78:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_538);
  return;
}


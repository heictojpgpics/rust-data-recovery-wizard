// Function: FUN_180023f20
// Address: 180023f20
// Size: 1173 bytes


void FUN_180023f20(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined8 local_280;
  longlong local_278 [4];
  longlong local_258 [6];
  longlong local_228 [4];
  longlong local_208 [6];
  longlong local_1d8 [4];
  longlong local_1b8 [6];
  longlong local_188 [4];
  longlong local_168 [6];
  longlong local_138 [4];
  longlong local_118 [6];
  longlong local_e8 [4];
  longlong local_c8 [6];
  longlong local_98 [4];
  longlong local_78 [6];
  ulonglong local_48;
  
  local_280 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_2a8;
  plVar6 = param_2 + (((longlong)param_3 - (longlong)param_2) / 0x48 >> 1) * 9;
  plVar8 = param_3 + -9;
  lVar4 = ((longlong)plVar8 - (longlong)param_2) / 0x48;
  plVar5 = param_2;
  local_288 = param_1;
  if (0x28 < lVar4) {
    lVar4 = lVar4 + 1 >> 3;
    plVar5 = param_2 + lVar4 * 9;
    FUN_180025260(param_2,plVar5,param_2 + lVar4 * 0x12);
    FUN_180025260(plVar6 + lVar4 * -9,plVar6,plVar6 + lVar4 * 9);
    plVar8 = plVar8 + lVar4 * -9;
    FUN_180025260(param_3 + -9 + lVar4 * -0x12,plVar8,param_3 + -9);
  }
  FUN_180025260(plVar5,plVar6,plVar8);
  plVar8 = plVar6 + 9;
  if (param_2 < plVar6) {
    while( true ) {
      uVar1 = plVar6[-3];
      uVar2 = plVar6[6];
      if (uVar1 == uVar2) {
        bVar10 = (ulonglong)plVar6[-1] < (ulonglong)plVar6[8];
      }
      else {
        bVar10 = uVar2 < uVar1;
      }
      if (bVar10) break;
      if (uVar2 == uVar1) {
        bVar10 = (ulonglong)plVar6[8] < (ulonglong)plVar6[-1];
      }
      else {
        bVar10 = uVar1 < uVar2;
      }
      if ((bVar10) || (plVar6 = plVar6 + -9, plVar6 <= param_2)) break;
    }
  }
  plVar5 = plVar8;
  plVar7 = plVar6;
  if (plVar8 < param_3) {
    uVar1 = plVar6[6];
    while( true ) {
      uVar2 = plVar8[6];
      if (uVar2 == uVar1) {
        bVar10 = (ulonglong)plVar8[8] < (ulonglong)plVar6[8];
      }
      else {
        bVar10 = uVar1 < uVar2;
      }
      plVar5 = plVar8;
      if (bVar10) break;
      if (uVar1 == uVar2) {
        bVar10 = (ulonglong)plVar6[8] < (ulonglong)plVar8[8];
      }
      else {
        bVar10 = uVar2 < uVar1;
      }
      if ((bVar10) || (plVar8 = plVar8 + 9, plVar5 = plVar8, param_3 <= plVar8)) break;
    }
  }
joined_r0x0001800240c8:
  do {
    plVar3 = plVar6;
    if (param_3 <= plVar5) {
joined_r0x00018002415f:
      for (; param_2 < plVar6; plVar6 = plVar6 + -9) {
        plVar9 = plVar3 + -9;
        uVar1 = plVar3[-3];
        uVar2 = plVar7[6];
        if (uVar1 == uVar2) {
          bVar10 = (ulonglong)plVar3[-1] < (ulonglong)plVar7[8];
        }
        else {
          bVar10 = uVar2 < uVar1;
        }
        if (!bVar10) {
          if (uVar2 == uVar1) {
            bVar10 = (ulonglong)plVar7[8] < (ulonglong)plVar3[-1];
          }
          else {
            bVar10 = uVar1 < uVar2;
          }
          if (bVar10) break;
          plVar7 = plVar7 + -9;
          if (plVar7 != plVar9) {
            FUN_18001e970((longlong)local_228,(longlong)plVar7);
            FUN_180024ec0(plVar7,plVar9);
            FUN_180024ec0(plVar9,local_228);
            FUN_180001630(local_208);
            FUN_180001630(local_228);
          }
        }
        plVar3 = plVar9;
      }
      if (plVar6 == param_2) {
        if (plVar5 == param_3) {
          *local_288 = plVar7;
          local_288[1] = plVar8;
          __security_check_cookie(local_48 ^ (ulonglong)auStack_2a8);
          return;
        }
        if (plVar8 != plVar5) {
          FUN_18001e970((longlong)local_1d8,(longlong)plVar7);
          FUN_180024ec0(plVar7,plVar8);
          FUN_180024ec0(plVar8,local_1d8);
          FUN_180001630(local_1b8);
          FUN_180001630(local_1d8);
        }
        plVar8 = plVar8 + 9;
        FUN_18001e970((longlong)local_188,(longlong)plVar7);
        FUN_180024ec0(plVar7,plVar5);
        FUN_180024ec0(plVar5,local_188);
        FUN_180001630(local_168);
        FUN_180001630(local_188);
        plVar5 = plVar5 + 9;
        plVar7 = plVar7 + 9;
      }
      else {
        plVar6 = plVar6 + -9;
        if (plVar5 == param_3) {
          plVar7 = plVar7 + -9;
          if (plVar6 != plVar7) {
            FUN_18001e970((longlong)local_138,(longlong)plVar6);
            FUN_180024ec0(plVar6,plVar7);
            FUN_180024ec0(plVar7,local_138);
            FUN_180001630(local_118);
            FUN_180001630(local_138);
          }
          plVar8 = plVar8 + -9;
          FUN_18001e970((longlong)local_e8,(longlong)plVar7);
          FUN_180024ec0(plVar7,plVar8);
          FUN_180024ec0(plVar8,local_e8);
          FUN_180001630(local_c8);
          FUN_180001630(local_e8);
        }
        else {
          FUN_18001e970((longlong)local_98,(longlong)plVar5);
          FUN_180024ec0(plVar5,plVar6);
          FUN_180024ec0(plVar6,local_98);
          FUN_180001630(local_78);
          FUN_180001630(local_98);
          plVar5 = plVar5 + 9;
        }
      }
      goto joined_r0x0001800240c8;
    }
    uVar1 = plVar7[6];
    uVar2 = plVar5[6];
    if (uVar1 == uVar2) {
      bVar10 = (ulonglong)plVar7[8] < (ulonglong)plVar5[8];
    }
    else {
      bVar10 = uVar2 < uVar1;
    }
    if (!bVar10) {
      if (uVar2 == uVar1) {
        bVar10 = (ulonglong)plVar5[8] < (ulonglong)plVar7[8];
      }
      else {
        bVar10 = uVar1 < uVar2;
      }
      if (bVar10) goto joined_r0x00018002415f;
      if (plVar8 != plVar5) {
        FUN_18001e970((longlong)local_278,(longlong)plVar8);
        FUN_180024ec0(plVar8,plVar5);
        FUN_180024ec0(plVar5,local_278);
        FUN_180001630(local_258);
        FUN_180001630(local_278);
      }
      plVar8 = plVar8 + 9;
    }
    plVar5 = plVar5 + 9;
  } while( true );
}


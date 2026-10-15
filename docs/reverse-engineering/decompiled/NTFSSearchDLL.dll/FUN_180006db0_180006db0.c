// Function: FUN_180006db0
// Address: 180006db0
// Size: 1203 bytes


longlong *
FUN_180006db0(longlong param_1,longlong *param_2,longlong param_3,ulonglong *param_4,int param_5)

{
  longlong *plVar1;
  void *_Memory;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  LPCWSTR pWVar9;
  longlong lVar10;
  undefined7 extraout_var;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 extraout_var_00;
  longlong *plVar13;
  longlong *_Memory_00;
  ushort uVar14;
  longlong local_a8 [2];
  LPSTR local_98;
  undefined2 local_90;
  longlong local_8e;
  ushort local_86;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined1 local_6c;
  undefined2 local_6b;
  longlong local_69;
  void *local_61;
  longlong *local_59;
  undefined8 local_51;
  undefined8 local_49;
  undefined2 local_41;
  undefined2 local_3f;
  undefined4 local_3d;
  undefined2 local_39;
  byte local_37;
  
  uVar14 = 0;
  local_86 = 0;
  local_6b = 0;
  local_61 = (void *)0x0;
  local_59 = (longlong *)0x0;
  local_51 = 0;
  local_49 = 0;
  local_3d = 0;
  local_39 = 0;
  local_41 = FUN_180042f90(param_2);
  lVar7 = FUN_1800448b0(param_2);
  if (lVar7 == 0) {
    return (longlong *)0x0;
  }
  uVar8 = FUN_180043660(lVar7);
  local_3f = (undefined2)uVar8;
  uVar8 = FUN_1800438b0(lVar7);
  if ((uVar8 != 0xffffffffffffffff) && (param_4 != (ulonglong *)0x0)) {
    *param_4 = uVar8;
  }
  FUN_1800453e0(lVar7);
  pWVar9 = (LPCWSTR)FUN_180043870(lVar7);
  bVar2 = FUN_180043830(lVar7);
  if (bVar2 == 0) {
    return (longlong *)0x0;
  }
  if (pWVar9 == (LPCWSTR)0x0) {
    return (longlong *)0x0;
  }
  if (bVar2 == 0) {
    return (longlong *)0x0;
  }
  if ((((4 < bVar2) && (*pWVar9 == L'$')) && (pWVar9[1] == L'T')) &&
     (((pWVar9[2] == L'o' && (pWVar9[3] == L'p')) && (pWVar9[4] == L's')))) {
    return (longlong *)0x0;
  }
  if (bVar2 < 7) goto LAB_180006f65;
  if (*pWVar9 == L'$') {
    if (((pWVar9[1] == L'T') && (pWVar9[2] == L'x')) &&
       ((pWVar9[3] == L'f' && (((pWVar9[4] == L'L' && (pWVar9[5] == L'o')) && (pWVar9[6] == L'g'))))
       )) {
      return (longlong *)0x0;
    }
    if (pWVar9[1] != L'R') goto LAB_180006f5b;
    if (((pWVar9[2] == L'm') && (pWVar9[3] == L'M')) &&
       ((pWVar9[4] == L'e' && ((pWVar9[5] == L't' && (pWVar9[6] == L'a')))))) {
      bVar3 = false;
    }
    else {
      if ((pWVar9[2] != L'e') ||
         ((((pWVar9[3] != L'p' || (pWVar9[4] != L'a')) || (pWVar9[5] != L'i')) ||
          (pWVar9[6] != L'r')))) goto LAB_180006f5b;
      bVar3 = false;
    }
  }
  else {
LAB_180006f5b:
    bVar3 = true;
  }
  if (!bVar3) {
    return (longlong *)0x0;
  }
LAB_180006f65:
  FUN_180043730(lVar7);
  uVar4 = FUN_180043700(lVar7);
  if (uVar4 != 0) {
    uVar14 = 0x10;
    local_86 = 0x10;
  }
  local_a8[0] = 0;
  local_98 = FUN_180006610(pWVar9,(ulonglong)bVar2,local_a8);
  if (local_98 == (LPSTR)0x0) {
    local_98 = FUN_1800066f0(pWVar9,(ulonglong)bVar2,local_a8);
  }
  local_90 = (undefined2)local_a8[0];
  local_84 = FUN_1800437f0(lVar7);
  local_7c = FUN_1800437b0(lVar7);
  local_74 = FUN_180043770(lVar7);
  local_8e = FUN_1800436b0(lVar7);
  lVar7 = FUN_180043610(lVar7);
  lVar10 = FUN_1800430b0(param_2,0x10,0,(int *)0x0,(longlong *)0x0);
  if (lVar10 != 0) {
    uVar5 = FUN_180045480(lVar10);
    bVar3 = FUN_180044fb0(lVar10,(ushort)uVar5);
    if ((int)CONCAT71(extraout_var,bVar3) != 0) {
      local_84 = FUN_180045090(lVar10);
      local_7c = FUN_180045040(lVar10);
      local_74 = FUN_180044ff0(lVar10);
      uVar4 = FUN_180044f60(lVar10);
      if ((uVar4 & 1) != 0) {
        uVar14 = uVar14 | 1;
        local_86 = uVar14;
      }
      if ((uVar4 & 2) != 0) {
        uVar14 = uVar14 | 2;
        local_86 = uVar14;
      }
      if ((uVar4 & 4) != 0) {
        uVar14 = uVar14 | 4;
        local_86 = uVar14;
      }
      if ((uVar4 & 0x20) != 0) {
        uVar14 = uVar14 | 0x20;
        local_86 = uVar14;
      }
      if ((uVar4 & 0x400) != 0) {
        local_86 = uVar14 | 0x400;
      }
    }
  }
  local_69 = param_1;
  iVar6 = FUN_180043060(param_2);
  bVar2 = 0;
  if (iVar6 == 0) {
    bVar2 = 8;
  }
  local_37 = bVar2 | local_37 & 0xc0;
  local_6c = bVar2 != 0;
  uVar11 = FUN_1800069e0(param_2,(longlong)&local_98,param_3,param_5,lVar7);
  if ((int)uVar11 == 0) {
    if (local_98 != (LPSTR)0x0) {
      free(local_98);
    }
    _Memory = local_61;
    if (local_61 != (void *)0x0) {
      if (*(void **)((longlong)local_61 + 8) != (void *)0x0) {
        free(*(void **)((longlong)local_61 + 8));
      }
      free(_Memory);
    }
    plVar13 = local_59;
    if (local_59 != (longlong *)0x0) {
      FUN_180003c80(local_59);
      plVar12 = (longlong *)*plVar13;
      _Memory_00 = (longlong *)*plVar12;
      *plVar12 = (longlong)plVar12;
      *(longlong *)(*plVar13 + 8) = *plVar13;
      plVar13[1] = 0;
      plVar12 = (longlong *)*plVar13;
      if (_Memory_00 != plVar12) {
        do {
          plVar1 = (longlong *)*_Memory_00;
          free(_Memory_00);
          plVar12 = (longlong *)*plVar13;
          _Memory_00 = plVar1;
        } while (plVar1 != plVar12);
      }
      free(plVar12);
      free(plVar13);
    }
    return (longlong *)0x0;
  }
  uVar5 = FUN_180042ff0(param_2);
  plVar13 = FUN_180002f90();
  *(undefined8 *)((longlong)plVar13 + 0x25) = local_84;
  *(byte *)((longlong)plVar13 + 0x72) = *(byte *)((longlong)plVar13 + 0x72) & 0xc2;
  *(undefined8 *)((longlong)plVar13 + 0x35) = local_74;
  *(undefined8 *)((longlong)plVar13 + 0x2d) = local_7c;
  *(LPSTR *)((longlong)plVar13 + 0x11) = local_98;
  *(undefined2 *)((longlong)plVar13 + 0x19) = local_90;
  plVar13[8] = local_69;
  *(longlong *)((longlong)plVar13 + 0x1b) = local_8e;
  *(ushort *)((longlong)plVar13 + 0x23) = local_86;
  *(undefined1 *)((longlong)plVar13 + 0x3d) = local_6c;
  *(undefined4 *)((longlong)plVar13 + 100) = local_49._4_4_;
  *(undefined4 *)(plVar13 + 0xc) = (undefined4)local_49;
  plVar13[9] = (longlong)local_61;
  *(undefined2 *)(plVar13 + 0xd) = local_41;
  *(undefined2 *)((longlong)plVar13 + 0x6a) = local_3f;
  plVar13[0xb] = CONCAT44(extraout_var_00,uVar5);
  *(byte *)((longlong)plVar13 + 0x72) = *(byte *)((longlong)plVar13 + 0x72) | local_37 & 0x3d;
  *(undefined2 *)(plVar13 + 0xe) = local_39;
  (**(code **)(*plVar13 + 0x120))(plVar13,local_3d);
  return plVar13;
}


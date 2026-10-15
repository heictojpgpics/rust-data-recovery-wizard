// Function: FUN_1800356d0
// Address: 1800356d0
// Size: 703 bytes


void FUN_1800356d0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,int param_6,int param_7,longlong *param_8)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStackY_1d8 [32];
  CHAR local_188 [63];
  undefined1 uStack_149;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142 [266];
  ulonglong local_38;
  
  local_38 = DAT_180086010 ^ (ulonglong)auStackY_1d8;
  if ((param_4 != (longlong *)0x0) && (param_5 != (longlong *)0x0)) {
    puVar3 = (undefined8 *)*param_4;
    for (puVar10 = (undefined8 *)*puVar3; puVar10 != puVar3; puVar10 = (undefined8 *)*puVar10) {
      lVar9 = 0;
      lVar7 = puVar10[2];
      if (0 < (longlong)puVar10[3]) {
        do {
          if ((param_2 <= lVar7) && (lVar7 <= param_2 + param_3)) goto LAB_180035776;
          lVar9 = lVar9 + 1;
          lVar7 = lVar7 + 2;
        } while (lVar9 < (longlong)puVar10[3]);
      }
    }
LAB_180035776:
    if (puVar10 != puVar3) {
      do {
        lVar7 = puVar10[2];
        (**(code **)(*param_5 + 0x28))(param_5);
        if (param_2 + param_3 <= lVar7) break;
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)*param_4);
    }
  }
  if (param_8 != (longlong *)0x0) {
    local_188[0] = '\0';
    local_188[1] = '\0';
    local_188[2] = '\0';
    local_188[3] = '\0';
    local_188[4] = '\0';
    local_188[5] = '\0';
    local_188[6] = '\0';
    local_188[7] = '\0';
    local_188[8] = '\0';
    local_188[9] = '\0';
    local_188[10] = '\0';
    local_188[0xb] = '\0';
    local_188[0xc] = '\0';
    local_188[0xd] = '\0';
    local_188[0xe] = '\0';
    local_188[0xf] = '\0';
    local_188[0x10] = '\0';
    local_188[0x11] = '\0';
    local_188[0x12] = '\0';
    local_188[0x13] = '\0';
    local_188[0x14] = '\0';
    local_188[0x15] = '\0';
    local_188[0x16] = '\0';
    local_188[0x17] = '\0';
    local_188[0x18] = '\0';
    local_188[0x19] = '\0';
    local_188[0x1a] = '\0';
    local_188[0x1b] = '\0';
    local_188[0x1c] = '\0';
    local_188[0x1d] = '\0';
    local_188[0x1e] = '\0';
    local_188[0x1f] = '\0';
    local_188[0x20] = '\0';
    local_188[0x21] = '\0';
    local_188[0x22] = '\0';
    local_188[0x23] = '\0';
    local_188[0x24] = '\0';
    local_188[0x25] = '\0';
    local_188[0x26] = '\0';
    local_188[0x27] = '\0';
    local_188[0x28] = '\0';
    local_188[0x29] = '\0';
    local_188[0x2a] = '\0';
    local_188[0x2b] = '\0';
    local_188[0x2c] = '\0';
    local_188[0x2d] = '\0';
    local_188[0x2e] = '\0';
    local_188[0x2f] = '\0';
    local_188[0x30] = '\0';
    local_188[0x31] = '\0';
    puVar6 = FUN_18002c550();
    LoadStringA(*(HINSTANCE *)(puVar6 + 0x38),0x1e1,local_188,0x104);
    local_148 = DAT_180072e38;
    local_144 = DAT_180072e3c;
    memset(local_142,0,0xfe);
    puVar8 = &uStack_149;
    do {
      pcVar1 = puVar8 + 1;
      puVar8 = puVar8 + 1;
    } while (*pcVar1 != '\0');
    lVar7 = 0;
    do {
      cVar2 = local_188[lVar7];
      puVar8[lVar7] = cVar2;
      lVar7 = lVar7 + 1;
    } while (cVar2 != '\0');
    (**(code **)(*param_8 + 8))(param_8,&local_148);
  }
  if ((param_4 != (longlong *)0x0) && (param_5 != (longlong *)0x0)) {
    plVar4 = (longlong *)*param_4;
    plVar11 = (longlong *)*plVar4;
    if (plVar11 != plVar4) {
      do {
        lVar9 = 0;
        lVar7 = plVar11[2];
        if (0 < plVar11[3]) {
          do {
            if ((param_2 <= lVar7) && (lVar7 <= param_2 + param_3)) goto LAB_1800358d2;
            lVar9 = lVar9 + 1;
            lVar7 = lVar7 + 2;
          } while (lVar9 < plVar11[3]);
        }
        plVar11 = (longlong *)*plVar11;
      } while (plVar11 != plVar4);
LAB_1800358d2:
      if (plVar11 != plVar4) {
        do {
          lVar7 = plVar11[2];
          iVar5 = (**(code **)(*param_5 + 0x28))(param_5);
          uVar12 = 2;
          if (0x200 < iVar5) {
            uVar12 = 1;
          }
          FUN_180035450(param_1,lVar7,uVar12,param_5,param_6,param_7,(char)plVar11[4]);
        } while ((((param_8 == (longlong *)0x0) ||
                  (iVar5 = (**(code **)(*param_8 + 0x10))(param_8,1), iVar5 != -1)) &&
                 (lVar7 < param_2 + param_3)) &&
                (plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)*param_4));
      }
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_1d8);
  return;
}


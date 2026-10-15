// Function: FUN_180010f50
// Address: 180010f50
// Size: 377 bytes


void FUN_180010f50(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  ulonglong local_50 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_50[1] = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_78;
  local_40 = param_2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar8 = puVar6;
    if (*(char *)((longlong)puVar6[1] + 0x19) == '\0') {
      uVar1 = param_2[3];
      uVar2 = param_2[2];
      puVar6 = (undefined8 *)puVar6[1];
      do {
        plVar9 = puVar6 + 4;
        plVar10 = param_2;
        if (0xf < uVar1) {
          plVar10 = (longlong *)*param_2;
        }
        uVar3 = puVar6[6];
        if (0xf < (ulonglong)puVar6[7]) {
          plVar9 = (longlong *)*plVar9;
        }
        local_58 = uVar2;
        local_50[0] = uVar3;
        puVar5 = FUN_180001e40(local_50,&local_58);
        iVar4 = memcmp(plVar9,plVar10,*puVar5);
        if (iVar4 == 0) {
          if (uVar3 < uVar2) goto LAB_180011090;
LAB_180011006:
          puVar7 = (undefined8 *)*puVar6;
          puVar8 = puVar6;
        }
        else {
          if (-1 < iVar4) goto LAB_180011006;
LAB_180011090:
          puVar7 = (undefined8 *)puVar6[2];
        }
        puVar6 = puVar7;
      } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
      puVar6 = *(undefined8 **)(param_1 + 8);
    }
    if (puVar8 != puVar6) {
      plVar9 = puVar8 + 4;
      uVar1 = puVar8[6];
      if (0xf < (ulonglong)puVar8[7]) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar2 = param_2[2];
      plVar10 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      local_58 = uVar2;
      local_50[0] = uVar1;
      puVar5 = FUN_180001e40(&local_58,local_50);
      iVar4 = memcmp(plVar10,plVar9,*puVar5);
      if (iVar4 == 0) {
        if (uVar1 <= uVar2) {
          if (uVar2 <= uVar1) goto LAB_180011072;
          goto LAB_180011074;
        }
      }
      else {
LAB_180011072:
        if (-1 < iVar4) {
LAB_180011074:
          if (puVar8 != puVar6) {
            FUN_180001630(param_2);
            goto LAB_1800110a3;
          }
        }
      }
    }
  }
  FUN_180001630(param_2);
LAB_1800110a3:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_78);
  return;
}


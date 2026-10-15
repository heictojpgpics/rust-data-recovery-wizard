// Function: FUN_180012d00
// Address: 180012d00
// Size: 1001 bytes


void FUN_180012d00(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_178 [32];
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined2 local_150;
  char local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_178;
  lVar2 = (longlong)param_3;
  uVar8 = (param_4 - *(longlong *)(param_1 + 8)) * lVar2;
  lVar5 = (*(longlong *)(param_5 + 8) - param_4) * lVar2;
  if (uVar8 - *(longlong *)(param_1 + 0x118) != 0 &&
      *(longlong *)(param_1 + 0x118) <= (longlong)uVar8) {
    uVar7 = 4;
    memset(local_148,0,0x104);
    uVar8 = 0xffffffffffffffff;
    do {
      uVar4 = uVar8 + 1;
      lVar2 = uVar8 + 1;
      uVar8 = uVar4;
    } while (local_148[lVar2] != '\0');
    puVar1 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar1[3] < uVar4) {
      FUN_1800086f0(param_1 + 0x20,uVar4,uVar7,local_148);
    }
    else {
      puVar6 = puVar1;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar6 = (undefined8 *)*puVar1;
      }
      puVar1[2] = uVar4;
      memmove(puVar6,local_148,uVar4);
      local_158[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar6 + uVar4),local_158);
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
    goto LAB_1800131ff;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x110);
  if (((longlong)uVar4 <= (longlong)uVar8) || ((longlong)(lVar2 + uVar8 + 10) < (longlong)uVar4))
  goto switchD_180012e9e_caseD_0;
  local_154 = 0x7b3dc4;
  local_150 = 0x740;
  if (*(char *)(param_1 + 0x121) == '\x01') {
    if (param_2 == -7) goto switchD_180012e9e_caseD_0;
    iVar9 = *(byte *)(param_2 + 9) - 0x72;
    switch(iVar9) {
    default:
      goto switchD_180012e9e_caseD_0;
    case 1:
    case 3:
    case 4:
    case 6:
    case 8:
    case 9:
      goto switchD_180012e9e_caseD_1;
    case 2:
      if ((*(uint *)(param_2 + 0x12) < *(uint *)(param_2 + 0xe)) && (*(uint *)(param_2 + 0x12) != 0)
         ) {
        bVar10 = false;
      }
      else {
        bVar10 = *(byte *)(param_2 + 0x16) < 5;
      }
      break;
    case 5:
      bVar10 = *(char *)(param_2 + 0x14) == '\0';
    }
    if (bVar10) {
switchD_180012e9e_caseD_1:
      if (6 < *(ushort *)(param_2 + 0xc)) {
                    /* WARNING: Could not recover jumptable at 0x000180012ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulonglong)*(uint *)(&DAT_180013244 + (longlong)iVar9 * 4) + 0x180000000))
                  ((code *)((ulonglong)*(uint *)(&DAT_180013244 + (longlong)iVar9 * 4) + 0x180000000
                           ));
        return;
      }
    }
  }
  else {
    if ((uVar8 <= uVar4) && (uVar4 <= uVar8 + 7 + lVar5)) {
      lVar3 = (uVar4 - uVar8) + param_2;
      if (lVar3 != 0) {
        iVar9 = *(byte *)(lVar3 + 2) - 0x72;
        switch(iVar9) {
        default:
          goto switchD_180012fda_caseD_0;
        case 1:
        case 3:
        case 4:
        case 6:
        case 8:
        case 9:
          goto switchD_180012fda_caseD_1;
        case 2:
          if ((*(uint *)(lVar3 + 0xb) < *(uint *)(lVar3 + 7)) && (*(uint *)(lVar3 + 0xb) != 0)) {
            bVar10 = false;
          }
          else {
            bVar10 = *(byte *)(lVar3 + 0xf) < 5;
          }
          break;
        case 5:
          bVar10 = *(char *)(lVar3 + 0xd) == '\0';
        }
        if (bVar10) {
switchD_180012fda_caseD_1:
          if (6 < *(ushort *)(lVar3 + 5)) {
                    /* WARNING: Could not recover jumptable at 0x000180013025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulonglong)*(uint *)(&DAT_180013294 + (longlong)iVar9 * 4) + 0x180000000))
                      ((code *)((ulonglong)*(uint *)(&DAT_180013294 + (longlong)iVar9 * 4) +
                               0x180000000));
            return;
          }
        }
      }
switchD_180012fda_caseD_0:
      *(undefined1 *)(param_1 + 0x120) = 0;
    }
    if (*(char *)(param_1 + 0x120) == '\0') {
      uVar4 = *(ulonglong *)(param_1 + 0x110);
      if ((uVar4 < uVar8) || (lVar2 + uVar8 < uVar4)) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        goto LAB_1800131ff;
      }
      if ((((param_2 != 0) && (uVar4 < uVar8 + 7 + lVar5)) &&
          (lVar2 = uVar4 - uVar8, *(int *)(lVar2 + param_2) == 0x7b3dc4)) &&
         ((*(short *)(lVar2 + 4 + param_2) == 0x740 && (*(char *)(lVar2 + 6 + param_2) == '\0')))) {
        uVar7 = 4;
        *(ulonglong *)(param_1 + 0x110) = uVar4 + 7;
        memset(local_148,0,0x104);
        uVar8 = 0xffffffffffffffff;
        do {
          uVar4 = uVar8 + 1;
          lVar2 = uVar8 + 1;
          uVar8 = uVar4;
        } while (local_148[lVar2] != '\0');
        puVar1 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
        if ((ulonglong)puVar1[3] < uVar4) {
          FUN_1800086f0(param_1 + 0x20,uVar4,uVar7,local_148);
        }
        else {
          puVar6 = puVar1;
          if (0xf < (ulonglong)puVar1[3]) {
            puVar6 = (undefined8 *)*puVar1;
          }
          puVar1[2] = uVar4;
          memmove(puVar6,local_148,uVar4);
          local_158[0] = 0;
          FUN_180001300((undefined1 *)((longlong)puVar6 + uVar4),local_158);
        }
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
        goto LAB_1800131ff;
      }
    }
  }
switchD_180012e9e_caseD_0:
LAB_1800131ff:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_178);
  return;
}


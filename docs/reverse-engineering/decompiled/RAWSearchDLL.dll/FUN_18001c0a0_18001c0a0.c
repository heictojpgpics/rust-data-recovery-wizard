// Function: FUN_18001c0a0
// Address: 18001c0a0
// Size: 572 bytes


void FUN_18001c0a0(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong *param_5)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  byte *pbVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  ulonglong local_58;
  
  local_68 = 0xfffffffffffffffe;
  local_58 = DAT_18008f028 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_1 + 0x110) == '\0') && (param_2 != 0)) && (0 < param_3)) {
    lVar7 = (longlong)param_3;
    lVar8 = *(longlong *)(param_1 + 0x118);
    lVar10 = *(longlong *)(param_1 + 8);
    lVar3 = lVar8 / lVar7 + lVar10;
    if ((*param_5 <= lVar3) && (lVar1 = param_5[1], lVar3 < lVar1)) {
      lVar13 = (*param_5 - lVar10) * lVar7;
      lVar3 = (param_4 - lVar10) * lVar7;
      puVar9 = (undefined8 *)0x0;
      if (lVar8 == 0) {
        *(int *)(param_1 + 0x130) = param_3;
        local_60 = (undefined8 *)FUN_1800020c0(8);
        puVar4 = puVar9;
        if (local_60 != (undefined8 *)0x0) {
          *local_60 = 0;
          *local_60 = *(undefined8 *)((param_2 - lVar3) + 4);
          puVar4 = local_60;
        }
        *(undefined8 **)(param_1 + 0x128) = puVar4;
        lVar8 = *(longlong *)(param_1 + 0x118);
      }
      puVar4 = puVar9;
      if (lVar13 <= lVar8) {
        while (iVar11 = (int)puVar4, lVar8 < (lVar1 - lVar10) * lVar7 + -0x18) {
          pbVar12 = (byte *)((lVar8 - lVar3) + param_2);
          puVar4 = (undefined8 *)(ulonglong)(iVar11 + 1);
          if (*pbVar12 != 0) {
            puVar4 = puVar9;
          }
          iVar11 = (int)puVar4;
          if ((0xf < iVar11) && (lVar8 % (longlong)*(int *)(param_1 + 0x130) == 0)) break;
          uVar5 = FUN_18001bcf0(pbVar12);
          if ((char)uVar5 != '\0') {
            local_60 = *(undefined8 **)(pbVar12 + 4);
            pcVar6 = *(char **)(param_1 + 0x128);
            lVar8 = -(longlong)pcVar6;
            do {
              if (pcVar6[(longlong)&local_60 + lVar8] != *pcVar6) {
                bVar2 = true;
                goto LAB_18001c227;
              }
              pcVar6 = pcVar6 + 1;
            } while ((longlong)pcVar6 + lVar8 < 8);
            lVar8 = *(longlong *)(param_1 + 0x118) + 0x18;
          }
          lVar8 = lVar8 + 1;
          *(longlong *)(param_1 + 0x118) = lVar8;
          if (lVar8 < lVar13) break;
        }
        bVar2 = false;
LAB_18001c227:
        if (iVar11 < 0x10) {
          if (bVar2) {
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x118);
            *(undefined1 *)(param_1 + 0x110) = 1;
            FUN_18001c2e0(param_1);
          }
        }
        else {
          *(longlong *)(param_1 + 0x10) = (*(longlong *)(param_1 + 0x118) - (longlong)iVar11) + 1;
          *(undefined1 *)(param_1 + 0x110) = 1;
          FUN_18001c2e0(param_1);
        }
      }
    }
  }
  else {
    uVar5 = *(ulonglong *)(param_1 + 0x10);
    lVar8 = *(longlong *)(param_1 + 0xd0);
    lVar10 = (ulonglong)(uVar5 % (ulonglong)(longlong)*(int *)(param_1 + 0x130) != 0) +
             *(longlong *)(param_1 + 8) + uVar5 / (ulonglong)(longlong)*(int *)(param_1 + 0x130);
    if (*(longlong *)(lVar8 + 0x18) < lVar10) {
      *(longlong *)(lVar8 + 0x18) = lVar10;
    }
    *(ulonglong *)(param_1 + 0x10) = uVar5;
    *(undefined1 *)(lVar8 + 0x10) = 0;
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStack_88);
  return;
}


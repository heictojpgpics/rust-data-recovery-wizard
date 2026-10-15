// Function: FUN_180028430
// Address: 180028430
// Size: 843 bytes


void FUN_180028430(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined7 extraout_var;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  code *pcVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong local_30 [3];
  
  uVar20 = *(ulonglong *)(param_1 + 0x58);
  lVar8 = FUN_180040570((undefined8 *)(param_2[1] + 8),0);
  if (lVar8 != -1) {
    lVar12 = *(longlong *)*param_2;
    sVar2 = *(short *)(*param_2 + 0x1a);
    if (sVar2 != 0) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
      puVar9 = FUN_180021d00(lVar12,lVar8,(int)sVar2,0x10,uVar20,uVar5);
      if (puVar9 != (undefined8 *)0x0) {
        plVar16 = *(longlong **)(param_1 + 0x20);
        FUN_180028180(lVar12,*(undefined8 *)(param_1 + 0x18),(longlong)plVar16,(longlong)puVar9);
        lVar8 = FUN_180040570((undefined8 *)(*param_2 + 8),0);
        if (lVar8 != -1) {
          for (puVar10 = *(undefined8 **)**(longlong **)(param_1 + 0x48);
              puVar10 != (undefined8 *)**(longlong **)(param_1 + 0x48);
              puVar10 = (undefined8 *)*puVar10) {
            plVar16 = *(longlong **)puVar10[2];
            if (*plVar16 == (ulonglong)*(uint *)((longlong)puVar9 + 0xc) * lVar8 + puVar9[2])
            goto LAB_18002862b;
          }
          plVar3 = (longlong *)*param_2;
          if ((*(longlong **)(param_1 + 0x60) != (longlong *)0x0) &&
             (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))(), 0x1ff < iVar6)) {
            FUN_1800025a0(local_30);
            lVar8 = *plVar3;
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))
                              (*(longlong **)(param_1 + 0x60),0x1000 % (ulonglong)uVar5);
            FUN_1800061a0(local_30,(longlong)(iVar6 * 2),plVar16);
            plVar16 = *(longlong **)(param_1 + 0x60);
            pcVar18 = *(code **)(*plVar16 + 8);
            puVar10 = (undefined8 *)FUN_180002680(local_30);
            iVar7 = (*pcVar18)(plVar16,*puVar10,0x1000 / (ulonglong)uVar5 + lVar8,2,
                               uVar20 & 0xffffffffffffff00);
            if (iVar7 == 0) {
              FUN_180005fb0(local_30);
            }
            else {
              uVar11 = FUN_180041bb0((int *)*puVar10,iVar6 * 2);
              FUN_180005fb0(local_30);
              if ((int)uVar11 == 0) {
LAB_18002862b:
                puVar10 = (undefined8 *)**(longlong **)(param_1 + 0x38);
                puVar14 = (undefined8 *)puVar10[1];
                puVar19 = puVar10;
                if (*(char *)((longlong)puVar14 + 0x19) == '\0') {
                  puVar15 = puVar14;
                  do {
                    lVar8 = *(longlong *)(puVar15[4] + 0x10);
                    if (((longlong)puVar9[2] < lVar8) ||
                       (((longlong)puVar9[2] <= lVar8 &&
                        (*(uint *)((longlong)puVar9 + 0xc) < *(uint *)(puVar15[4] + 0xc))))) {
                      puVar17 = (undefined8 *)*puVar15;
                      puVar19 = puVar15;
                    }
                    else {
                      puVar17 = (undefined8 *)puVar15[2];
                    }
                    puVar15 = puVar17;
                  } while (*(char *)((longlong)puVar17 + 0x19) == '\0');
                  do {
                    lVar8 = *(longlong *)(puVar14[4] + 0x10);
                    if ((lVar8 < (longlong)puVar9[2]) ||
                       ((lVar8 <= (longlong)puVar9[2] &&
                        (*(uint *)(puVar14[4] + 0xc) < *(uint *)((longlong)puVar9 + 0xc))))) {
                      puVar15 = (undefined8 *)puVar14[2];
                    }
                    else {
                      puVar15 = (undefined8 *)*puVar14;
                      puVar10 = puVar14;
                    }
                    puVar14 = puVar15;
                  } while (*(char *)((longlong)puVar15 + 0x19) == '\0');
                }
                if (puVar10 != puVar19) {
                  do {
                    uVar5 = *(uint *)(puVar10[4] + 0x9c);
                    uVar13 = uVar5 & 0xfffffff7;
                    if ((uVar5 & 8) == 0) {
                      uVar13 = uVar5;
                    }
                    *(uint *)(puVar10[4] + 0x9c) = uVar13 | 4;
                    puVar14 = (undefined8 *)puVar10[2];
                    if (*(char *)((longlong)puVar14 + 0x19) == '\0') {
                      cVar1 = *(char *)((longlong)*puVar14 + 0x19);
                      puVar10 = puVar14;
                      puVar14 = (undefined8 *)*puVar14;
                      while (cVar1 == '\0') {
                        cVar1 = *(char *)((longlong)*puVar14 + 0x19);
                        puVar10 = puVar14;
                        puVar14 = (undefined8 *)*puVar14;
                      }
                    }
                    else {
                      cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
                      puVar15 = (undefined8 *)puVar10[1];
                      puVar14 = puVar10;
                      while ((puVar10 = puVar15, cVar1 == '\0' &&
                             (puVar14 == (undefined8 *)puVar10[2]))) {
                        cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
                        puVar15 = (undefined8 *)puVar10[1];
                        puVar14 = puVar10;
                      }
                    }
                  } while (puVar10 != puVar19);
                  (**(code **)*puVar9)(puVar9,1);
                  return;
                }
                FUN_180028350(param_1,(longlong)puVar9);
                return;
              }
            }
          }
        }
        bVar4 = FUN_1800268c0(*(undefined8 **)(param_1 + 0x40),(longlong)puVar9,0x10,0);
        FUN_180026ac0(*(undefined8 **)(param_1 + 0x40),(longlong)puVar9,(longlong *)*param_2);
        FUN_1800281e0(param_1,(longlong)puVar9,*(undefined8 *)(param_1 + 0x18),
                      *(longlong *)(param_1 + 0x20));
        if ((int)CONCAT71(extraout_var,bVar4) == 0) {
          FUN_180028780(param_1,(longlong *)*param_2);
        }
        (**(code **)*puVar9)(puVar9,1);
        return;
      }
    }
  }
  FUN_180028780(param_1,(longlong *)*param_2);
  return;
}


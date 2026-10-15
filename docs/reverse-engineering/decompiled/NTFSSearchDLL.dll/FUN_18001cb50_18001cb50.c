// Function: FUN_18001cb50
// Address: 18001cb50
// Size: 630 bytes


void FUN_18001cb50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70 [4];
  longlong local_50 [4];
  ulonglong local_30;
  
  local_78 = 0xfffffffffffffffe;
  local_30 = DAT_180086010 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x38);
  plVar11 = *(longlong **)(lVar1 + 0x60);
  plVar13 = (longlong *)*plVar11;
  if (plVar13 != plVar11) {
    do {
      if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
         (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(), iVar6 == 0)) break;
      if (((longlong *)plVar13[9] != (longlong *)0x0) &&
         (lVar7 = (**(code **)(*(longlong *)plVar13[9] + 0x10))(), lVar7 != 0)) {
        (**(code **)(*(longlong *)plVar13[9] + 0x70))((longlong *)plVar13[9],1);
        *(byte *)(plVar13[9] + 0x72) = *(byte *)(plVar13[9] + 0x72) | 1;
        *(byte *)(plVar13[9] + 0x72) = *(byte *)(plVar13[9] + 0x72) | 4;
        (**(code **)(*(longlong *)plVar13[9] + 0x18))();
        ppuVar2 = *(undefined ***)plVar13[9];
        if (ppuVar2 == CNTFSFileProperties::vftable) {
          bVar5 = (byte)*(undefined2 *)((longlong)plVar13[9] + 0x23);
        }
        else {
          bVar5 = (*(code *)ppuVar2[7])();
        }
        if (((bVar5 >> 4 & 1) != 0) &&
           (cVar3 = FUN_18001eb10(param_1,(longlong)(plVar13 + 5)), cVar3 == '\0')) {
          pvVar8 = (void *)(**(code **)(*(longlong *)plVar13[9] + 0x10))();
          FUN_180003be0(local_70,pvVar8);
          bVar4 = FUN_1800025c0((longlong)local_70);
          if (!bVar4) {
            puVar9 = FUN_1800025e0(local_70);
            FUN_180003be0(local_50,puVar9);
            cVar3 = FUN_1800445e0(local_50);
            FUN_1800025f0(local_50);
            if (((cVar3 == '\0') &&
                (uVar10 = FUN_180020520(local_70,"S-",0), uVar10 == 0xffffffffffffffff)) &&
               (uVar10 = FUN_180020520(local_70,"s-",0), uVar10 == 0xffffffffffffffff)) {
              plVar11 = param_2;
              lVar7 = FUN_180002680(param_2);
              plVar11 = (longlong *)FUN_180002810((longlong)plVar11);
              if (*plVar11 == *(longlong *)(lVar7 + 8)) {
                puVar9 = (undefined8 *)FUN_180002670((longlong)param_2);
                FUN_180020900(param_2,(void *)*puVar9,plVar13 + 5);
              }
              else {
                plVar11 = (longlong *)FUN_180002670((longlong)param_2);
                plVar12 = (longlong *)FUN_180001100(plVar11,*plVar11);
                lVar7 = plVar13[6];
                *plVar12 = plVar13[5];
                plVar12[1] = lVar7;
                lVar7 = plVar13[8];
                plVar12[2] = plVar13[7];
                plVar12[3] = lVar7;
                lVar7 = plVar13[10];
                plVar12[4] = plVar13[9];
                plVar12[5] = lVar7;
                plVar12[6] = plVar13[0xb];
                *plVar11 = *plVar11 + 0x38;
              }
            }
          }
          FUN_1800025f0(local_70);
        }
      }
      plVar11 = (longlong *)plVar13[2];
      if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
        cVar3 = *(char *)(*plVar11 + 0x19);
        plVar13 = plVar11;
        plVar11 = (longlong *)*plVar11;
        while (cVar3 == '\0') {
          cVar3 = *(char *)(*plVar11 + 0x19);
          plVar13 = plVar11;
          plVar11 = (longlong *)*plVar11;
        }
      }
      else {
        cVar3 = *(char *)(plVar13[1] + 0x19);
        plVar12 = (longlong *)plVar13[1];
        plVar11 = plVar13;
        while ((plVar13 = plVar12, cVar3 == '\0' && (plVar11 == (longlong *)plVar13[2]))) {
          cVar3 = *(char *)(plVar13[1] + 0x19);
          plVar12 = (longlong *)plVar13[1];
          plVar11 = plVar13;
        }
      }
    } while (plVar13 != *(longlong **)(lVar1 + 0x60));
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_98);
  return;
}


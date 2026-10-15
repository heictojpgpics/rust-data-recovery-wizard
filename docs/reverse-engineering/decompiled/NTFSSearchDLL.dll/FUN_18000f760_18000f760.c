// Function: FUN_18000f760
// Address: 18000f760
// Size: 560 bytes


void FUN_18000f760(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *pvVar10;
  ulonglong *puVar11;
  undefined1 auStackY_98 [32];
  uint local_68;
  uint local_64;
  ulonglong local_60 [6];
  ulonglong local_30;
  
  local_60[1] = 0xfffffffffffffffe;
  local_30 = DAT_180086010 ^ (ulonglong)auStackY_98;
  lVar5 = FUN_1800430b0(param_2,0x90,0,(int *)0x0,(longlong *)0x0);
  if ((((lVar5 != 0) && (lVar6 = FUN_1800460e0(lVar5), lVar6 != 0)) &&
      (*(char *)(lVar6 + 0x1c) != '\x01')) && (local_64 = *(uint *)(lVar6 + 0x14), local_64 < 0x321)
     ) {
    local_68 = 0;
    uVar7 = FUN_180046060(lVar5,(int *)&local_68,&local_64);
    if ((int)uVar7 != 0) {
      if (local_68 < local_64) {
        puVar11 = (ulonglong *)(lVar5 + (ulonglong)local_68);
        puVar1 = (ulonglong *)((longlong)puVar11 + (ulonglong)local_64);
        if (((puVar11 != (ulonglong *)0x0) && (puVar1 != (ulonglong *)0x0)) && (puVar11 < puVar1)) {
          while ((ulonglong *)((longlong)puVar11 + 0x2aU) < puVar1) {
            uVar2 = (ushort)puVar11[1];
            if ((uVar2 == 0) || (puVar1 <= (ulonglong *)((ulonglong)uVar2 + (longlong)puVar11)))
            break;
            local_60[0] = 5;
            plVar8 = FUN_18000e970((ulonglong)uVar2,puVar11,(uint)uVar2,local_60);
            if (plVar8 != (longlong *)0x0) {
              if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
                bVar4 = (byte)*(undefined2 *)((longlong)plVar8 + 0x23);
              }
              else {
                bVar4 = (*(code *)((undefined **)*plVar8)[7])(plVar8);
              }
              if ((bVar4 >> 4 & 1) == 0) {
                FUN_180022760(param_1 + 0x888,plVar8,local_60[0]);
              }
              else {
                if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
                  pvVar10 = *(void **)((longlong)plVar8 + 0x11);
                }
                else {
                  pvVar10 = (void *)(*(code *)((undefined **)*plVar8)[2])(plVar8);
                }
                FUN_180003be0((longlong *)(local_60 + 2),pvVar10);
                cVar3 = FUN_1800445e0(local_60 + 2);
                FUN_1800025f0((longlong *)(local_60 + 2));
                if (cVar3 == '\0') {
                  plVar9 = FUN_180031070();
                  plVar9[6] = (longlong)plVar8;
                  plVar9[9] = local_60[0];
                  plVar9[10] = plVar8[0xb];
                  plVar9[0xb] = param_3;
                  FUN_18000f2b0(param_1,plVar9,'\x01','\x01','\0');
                  goto LAB_18000f946;
                }
              }
              (**(code **)(*plVar8 + 0x138))(plVar8,1);
            }
LAB_18000f946:
            puVar11 = (ulonglong *)((longlong)puVar11 + (ulonglong)(ushort)puVar11[1]);
            if (puVar1 <= puVar11) break;
          }
        }
      }
    }
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_98);
  return;
}


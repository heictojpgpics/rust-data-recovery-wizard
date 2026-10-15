// Function: FUN_180028c00
// Address: 180028c00
// Size: 664 bytes


void FUN_180028c00(longlong *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 *local_res8;
  
  if ((ulonglong)param_1[1] < 500000) {
    puVar6 = (undefined8 *)FUN_18002be40(0x28);
    local_res8 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_180040cb0(puVar6 + 1);
      *(undefined2 *)(puVar6 + 4) = 0;
    }
    iVar4 = FUN_180044a00(param_3,(ulonglong)param_4,(undefined2 *)(puVar6 + 4));
    if ((iVar4 == 0) ||
       (puVar12 = puVar6, uVar7 = FUN_180039ec0(puVar6,param_3,param_4,param_2), (int)uVar7 == 0)) {
      if (puVar6 != (undefined8 *)0x0) {
        FUN_180013c70(puVar6);
      }
    }
    else {
      plVar8 = (longlong *)param_1[2];
      plVar13 = (longlong *)*plVar8;
      if (plVar13 != plVar8) {
        do {
          plVar1 = (longlong *)plVar13[2];
          uVar14 = (uint)*(short *)(puVar6 + 4);
          if (*(short *)(puVar6 + 4) != 0) {
            plVar2 = (longlong *)*plVar13;
            if ((plVar2 == plVar8) || (*plVar1 + 8 != *(longlong *)plVar2[2])) {
              lVar9 = FUN_180040570(puVar6 + 1,0);
              puVar12 = (undefined8 *)*plVar1;
              uVar5 = (**(code **)(*(longlong *)param_1[9] + 0x28))();
              puVar10 = FUN_180021d00((longlong)puVar12,lVar9,uVar14,0x40,param_1[6],uVar5);
              if (puVar10 != (undefined8 *)0x0) {
                FUN_1800268c0((undefined8 *)param_1[5],(longlong)puVar10,0x40,0);
                (**(code **)*puVar10)();
                puVar12 = puVar10;
              }
              if (*plVar1 != 8) {
                lVar11 = FUN_180040570(puVar6 + 1,0);
                lVar9 = *plVar1;
                uVar5 = (**(code **)(*(longlong *)param_1[9] + 0x28))();
                puVar12 = (undefined8 *)(lVar9 + -8);
                puVar10 = FUN_180021d00((longlong)puVar12,lVar11,uVar14,0x80,param_1[6],uVar5);
                if (puVar10 != (undefined8 *)0x0) {
                  uVar14 = 0x80;
                  puVar12 = puVar10;
                  goto LAB_180028de8;
                }
              }
            }
            else {
              lVar9 = FUN_180040570(puVar6 + 1,0);
              puVar12 = (undefined8 *)*plVar1;
              uVar5 = (**(code **)(*(longlong *)param_1[9] + 0x28))();
              puVar10 = FUN_180021d00((longlong)puVar12,lVar9,uVar14,0xc0,param_1[6],uVar5);
              plVar13 = plVar2;
              if (puVar10 != (undefined8 *)0x0) {
                uVar14 = 0xc0;
                puVar12 = puVar10;
LAB_180028de8:
                FUN_1800268c0((undefined8 *)param_1[5],(longlong)puVar12,uVar14,0);
                (**(code **)*puVar12)();
              }
            }
          }
          plVar13 = (longlong *)*plVar13;
          plVar8 = (longlong *)param_1[2];
        } while (plVar13 != plVar8);
      }
      lVar9 = *param_1;
      plVar8 = *(longlong **)(lVar9 + 8);
      local_res8 = puVar6;
      lVar11 = FUN_1800143b0(puVar12,lVar9,(longlong)plVar8,&local_res8);
      if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
        std::_Xlength_error("list<T> too long");
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1[1] = param_1[1] + 1;
      *(longlong *)(lVar9 + 8) = lVar11;
      *plVar8 = lVar11;
    }
  }
  return;
}


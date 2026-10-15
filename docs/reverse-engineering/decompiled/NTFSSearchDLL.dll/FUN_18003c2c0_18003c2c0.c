// Function: FUN_18003c2c0
// Address: 18003c2c0
// Size: 602 bytes


void FUN_18003c2c0(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong local_res20;
  
  if (param_1[5] != 0) {
    puVar10 = (undefined8 *)*param_2;
    uVar13 = 0;
    if (puVar10 != (undefined8 *)param_2[1]) {
      do {
        plVar1 = (longlong *)*puVar10;
        if (((longlong *)param_1[0xf] != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x88))(), cVar3 != '\0')) {
          return;
        }
        if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x92) == '\0')) {
          if ((ulonglong)param_1[0xc] <= uVar13) {
            return;
          }
          plVar7 = (longlong *)
                   __RTDynamicCast(plVar1[6],0,&IFileProperties::RTTI_Type_Descriptor,
                                   &CNTFSFileProperties::RTTI_Type_Descriptor,0);
          if (plVar7 != (longlong *)0x0) {
            if (((param_3 == '\0') || (iVar6 = (**(code **)(*plVar1 + 8))(plVar1), iVar6 != 0)) ||
               ((*(byte *)((longlong)plVar1 + 0x72) & 4) != 0)) {
LAB_18003c3ba:
              uVar8 = FUN_18003c970((longlong)param_1,plVar1);
              if ((char)uVar8 != '\0') {
                lVar12 = param_1[5];
                lVar11 = *(longlong *)(lVar12 + 0x10);
                bVar4 = FUN_18003ad10((longlong)param_1,plVar1,lVar11,*(longlong *)(lVar12 + 0x60),
                                      *(int *)(lVar12 + 0x58));
                if ((bVar4) && (local_res20 = (**(code **)*plVar1)(plVar1), local_res20 != 0)) {
                  plVar9 = (longlong *)0x2;
                  *(undefined2 *)(local_res20 + 0x6c) = 2;
                  if ((undefined **)*plVar7 == CNTFSFileProperties::vftable) {
                    bVar5 = *(byte *)((longlong)plVar7 + 0x72) & 1;
                  }
                  else {
                    plVar9 = plVar7;
                    bVar5 = (*(code *)((undefined **)*plVar7)[0x1b])();
                  }
                  if (bVar5 == 0) {
                    FUN_18003bc80((longlong)param_1,local_res20);
                    FUN_18003bfa0(param_1,local_res20,lVar11);
                  }
                  else {
                    lVar12 = param_1[5];
                    pvVar2 = *(void **)(lVar12 + 400);
                    if (*(void **)(lVar12 + 0x198) == pvVar2) {
                      FUN_180013520((longlong *)(lVar12 + 0x188),pvVar2,&local_res20);
                    }
                    else {
                      plVar9 = (longlong *)FUN_180001100(plVar9,pvVar2);
                      *plVar9 = local_res20;
                      *(longlong *)(lVar12 + 400) = *(longlong *)(lVar12 + 400) + 8;
                    }
                  }
                  cVar3 = FUN_180031960(plVar1);
                  if (cVar3 == '\0') {
                    if ((undefined **)*plVar7 == CNTFSFileProperties::vftable) {
                      bVar5 = *(byte *)((longlong)plVar7 + 0x72) >> 4 & 1;
                    }
                    else {
                      bVar5 = (*(code *)((undefined **)*plVar7)[0x1d])(plVar7);
                    }
                    if (bVar5 != 0) {
                      (**(code **)(*plVar1 + 0x30))(plVar1);
                      *puVar10 = 0;
                    }
                  }
                }
              }
            }
            else {
              plVar9 = (longlong *)plVar1[6];
              if (plVar9 != (longlong *)0x0) {
                if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
                  bVar5 = (byte)*(undefined2 *)((longlong)plVar9 + 0x23);
                }
                else {
                  bVar5 = (*(code *)((undefined **)*plVar9)[7])();
                }
                if ((bVar5 >> 4 & 1) != 0) goto LAB_18003c3ba;
              }
            }
          }
        }
        puVar10 = puVar10 + 1;
        uVar13 = uVar13 + 1;
      } while (puVar10 != (undefined8 *)param_2[1]);
    }
  }
  return;
}


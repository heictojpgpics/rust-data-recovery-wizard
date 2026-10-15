// Function: FUN_18003a730
// Address: 18003a730
// Size: 785 bytes


undefined8 FUN_18003a730(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 in_RAX;
  longlong *plVar4;
  longlong *plVar5;
  longlong *extraout_RAX;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_3 == (longlong *)0x0) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  plVar9 = (longlong *)*param_1;
  lVar1 = param_3[0xb];
  plVar5 = (longlong *)plVar9[1];
  plVar4 = plVar5;
  plVar8 = plVar9;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    do {
      if (plVar4[4] < param_2) {
        plVar7 = (longlong *)plVar4[2];
      }
      else {
        plVar7 = (longlong *)*plVar4;
        plVar8 = plVar4;
      }
      plVar4 = plVar7;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
    do {
      if (param_2 < plVar5[4]) {
        plVar4 = (longlong *)*plVar5;
        plVar9 = plVar5;
      }
      else {
        plVar4 = (longlong *)plVar5[2];
      }
      plVar5 = plVar4;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
  }
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (plVar8 == plVar9) {
            return (ulonglong)plVar4 & 0xffffffffffffff00;
          }
          plVar5 = (longlong *)plVar8[5];
          if (plVar5 != (longlong *)0x0) break;
          plVar4 = (longlong *)plVar8[2];
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            cVar3 = *(char *)(*plVar4 + 0x19);
            plVar8 = plVar4;
            plVar5 = (longlong *)*plVar4;
            while (cVar3 == '\0') {
              plVar4 = (longlong *)*plVar5;
              plVar8 = plVar5;
              plVar5 = plVar4;
              cVar3 = *(char *)((longlong)plVar4 + 0x19);
            }
          }
          else {
            cVar3 = *(char *)(plVar8[1] + 0x19);
            plVar7 = (longlong *)plVar8[1];
            plVar5 = plVar8;
            while ((plVar4 = plVar7, plVar8 = plVar4, cVar3 == '\0' &&
                   (plVar5 == (longlong *)plVar4[2]))) {
              cVar3 = *(char *)(plVar4[1] + 0x19);
              plVar7 = (longlong *)plVar4[1];
              plVar5 = plVar4;
            }
          }
        }
        plVar4 = (longlong *)
                 __RTDynamicCast(plVar5[6],0,&IFileProperties::RTTI_Type_Descriptor,
                                 &CNTFSFileProperties::RTTI_Type_Descriptor,0);
        if ((plVar4 != (longlong *)0x0) && (plVar5[10] == lVar1)) break;
        plVar4 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar3 = *(char *)(*plVar4 + 0x19);
          plVar8 = plVar4;
          plVar5 = (longlong *)*plVar4;
          while (cVar3 == '\0') {
            plVar4 = (longlong *)*plVar5;
            plVar8 = plVar5;
            plVar5 = plVar4;
            cVar3 = *(char *)((longlong)plVar4 + 0x19);
          }
        }
        else {
          cVar3 = *(char *)(plVar8[1] + 0x19);
          plVar7 = (longlong *)plVar8[1];
          plVar5 = plVar8;
          while ((plVar4 = plVar7, plVar8 = plVar4, cVar3 == '\0' &&
                 (plVar5 == (longlong *)plVar4[2]))) {
            cVar3 = *(char *)(plVar4[1] + 0x19);
            plVar7 = (longlong *)plVar4[1];
            plVar5 = plVar4;
          }
        }
      }
      cVar3 = FUN_180043b90((longlong)plVar5,param_3);
      if (cVar3 != '\0') break;
      plVar4 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar3 = *(char *)(*plVar4 + 0x19);
        plVar8 = plVar4;
        plVar5 = (longlong *)*plVar4;
        while (cVar3 == '\0') {
          plVar4 = (longlong *)*plVar5;
          plVar8 = plVar5;
          plVar5 = plVar4;
          cVar3 = *(char *)((longlong)plVar4 + 0x19);
        }
      }
      else {
        cVar3 = *(char *)(plVar8[1] + 0x19);
        plVar7 = (longlong *)plVar8[1];
        plVar5 = plVar8;
        while ((plVar4 = plVar7, plVar8 = plVar4, cVar3 == '\0' && (plVar5 == (longlong *)plVar4[2])
               )) {
          cVar3 = *(char *)(plVar4[1] + 0x19);
          plVar7 = (longlong *)plVar4[1];
          plVar5 = plVar4;
        }
      }
    }
    if ((*(byte *)((longlong)plVar4 + 0x72) & 0x20) == 0) break;
    FUN_18003c130((longlong)param_1,param_3,plVar4);
    (**(code **)(*plVar5 + 0x30))(plVar5,1);
    plVar5 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar5 + 0x19);
      plVar7 = plVar5;
      plVar4 = (longlong *)*plVar5;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar4 + 0x19);
        plVar7 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar3 = *(char *)(plVar8[1] + 0x19);
      plVar2 = (longlong *)plVar8[1];
      plVar4 = plVar8;
      while ((plVar7 = plVar2, cVar3 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
        cVar3 = *(char *)(plVar7[1] + 0x19);
        plVar2 = (longlong *)plVar7[1];
        plVar4 = plVar7;
      }
    }
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      plVar5 = (longlong *)*plVar5;
      cVar3 = *(char *)((longlong)plVar5 + 0x19);
      while (cVar3 == '\0') {
        plVar5 = (longlong *)*plVar5;
        cVar3 = *(char *)((longlong)plVar5 + 0x19);
      }
    }
    else {
      cVar3 = *(char *)(plVar8[1] + 0x19);
      plVar4 = (longlong *)plVar8[1];
      plVar5 = plVar8;
      while ((plVar2 = plVar4, cVar3 == '\0' && (plVar5 == (longlong *)plVar2[2]))) {
        cVar3 = *(char *)(plVar2[1] + 0x19);
        plVar4 = (longlong *)plVar2[1];
        plVar5 = plVar2;
      }
    }
    plVar5 = FUN_180012020(param_1,plVar8);
    free(plVar5);
    plVar4 = extraout_RAX;
    plVar8 = plVar7;
  }
  uVar6 = FUN_18003c130((longlong)param_1,(longlong *)plVar5[6],param_3);
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}


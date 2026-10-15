// Function: FUN_18003da80
// Address: 18003da80
// Size: 460 bytes


ulonglong FUN_18003da80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *in_RAX;
  longlong *plVar7;
  longlong *local_res8;
  longlong *local_res18;
  
  if (param_1 == 0) {
    return (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar4 = (longlong *)0x0;
  do {
    while( true ) {
      plVar3 = plVar1;
      if (plVar3 == (longlong *)0x0) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      plVar7 = (longlong *)plVar3[6];
      if (plVar7 == (longlong *)0x0) break;
      if ((undefined **)*plVar7 == CNTFSFileProperties::vftable) {
        in_RAX = (undefined8 *)(ulonglong)*(ushort *)((longlong)plVar7 + 0x23);
      }
      else {
        in_RAX = (undefined8 *)(*(code *)((undefined **)*plVar7)[7])();
      }
      if ((((ulonglong)in_RAX & 0x10) == 0) || (plVar3[2] != 0)) {
        plVar1 = (longlong *)plVar3[3];
        plVar4 = plVar3;
      }
      else {
        plVar1 = (longlong *)plVar3[3];
        if (plVar4 == (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 0x10);
          if (plVar3 == *(longlong **)(param_1 + 0x10)) {
            *(longlong **)(param_1 + 0x10) = plVar1;
          }
          else {
            do {
              plVar5 = plVar6;
              if (plVar5 == (longlong *)0x0) goto LAB_18003dbd9;
              plVar7 = (longlong *)plVar5[3];
              plVar6 = plVar7;
            } while (plVar3 != plVar7);
            plVar5[3] = (longlong)plVar1;
            plVar5[4] = (longlong)plVar1;
          }
        }
        else {
          plVar4[3] = (longlong)plVar1;
          plVar4[4] = (longlong)plVar1;
        }
LAB_18003dbd9:
        plVar3[1] = 0;
        plVar3[3] = 0;
        plVar3[4] = 0;
        pvVar2 = (void *)param_2[1];
        local_res18 = plVar3;
        if ((void *)param_2[2] == pvVar2) {
          in_RAX = (undefined8 *)FUN_180013520(param_2,pvVar2,&local_res18);
        }
        else {
          in_RAX = (undefined8 *)FUN_180001100(plVar7,pvVar2);
          *in_RAX = local_res18;
          param_2[1] = param_2[1] + 8;
        }
      }
    }
    plVar1 = (longlong *)plVar3[3];
    if (plVar4 == (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0x10);
      plVar6 = plVar7;
      if (plVar3 == plVar7) {
        *(longlong **)(param_1 + 0x10) = plVar1;
      }
      else {
        do {
          plVar7 = plVar6;
          if (plVar7 == (longlong *)0x0) goto LAB_18003db2e;
          plVar6 = (longlong *)plVar7[3];
        } while (plVar3 != (longlong *)plVar7[3]);
        plVar7[3] = (longlong)plVar1;
        plVar7[4] = (longlong)plVar1;
      }
    }
    else {
      plVar4[3] = (longlong)plVar1;
      plVar4[4] = (longlong)plVar1;
      plVar7 = (longlong *)0x0;
    }
LAB_18003db2e:
    plVar3[1] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    pvVar2 = (void *)param_2[1];
    local_res8 = plVar3;
    if ((void *)param_2[2] == pvVar2) {
      in_RAX = (undefined8 *)FUN_180013520(param_2,pvVar2,&local_res8);
    }
    else {
      in_RAX = (undefined8 *)FUN_180001100(plVar7,pvVar2);
      *in_RAX = local_res8;
      param_2[1] = param_2[1] + 8;
    }
  } while( true );
}


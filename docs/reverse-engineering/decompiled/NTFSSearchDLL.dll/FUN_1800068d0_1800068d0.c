// Function: FUN_1800068d0
// Address: 1800068d0
// Size: 270 bytes


undefined8 * FUN_1800068d0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 local_50;
  undefined8 *local_48;
  
  bVar3 = FUN_180040b50((longlong)param_1);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    lVar7 = 0;
    puVar4 = (undefined8 *)FUN_18002be40(0x48);
    local_res18 = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      FUN_180033ee0(puVar4);
      *puVar4 = CNoneResidentNTFSDataRunList::vftable;
    }
    plVar5 = FUN_180040ad0(param_1,&local_50);
    plVar5 = (longlong *)*plVar5;
    plVar6 = FUN_180040a90(param_1,&local_res20);
    if (plVar5 != (longlong *)*plVar6) {
      do {
        uVar1 = *(undefined8 *)plVar5[2];
        lVar2 = ((undefined8 *)plVar5[2])[2];
        local_res18 = (undefined8 *)FUN_18002be40(0x10);
        if (local_res18 != (undefined8 *)0x0) {
          *local_res18 = uVar1;
          local_res18[1] = lVar2;
        }
        local_48 = local_res18;
        FUN_180034450((longlong)(puVar4 + 1),&local_res18);
        lVar7 = lVar7 + lVar2;
        plVar5 = (longlong *)*plVar5;
        plVar6 = FUN_180040a90(param_1,&local_res20);
      } while (plVar5 != (longlong *)*plVar6);
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar7;
    }
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  return puVar4;
}


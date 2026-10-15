// Function: FUN_180021570
// Address: 180021570
// Size: 436 bytes


ulonglong * FUN_180021570(ulonglong *param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong local_res10;
  ulonglong local_res18 [2];
  longlong local_48;
  ulonglong uStack_40;
  
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = param_2[1];
  lVar8 = *param_2;
  uVar3 = vpextrq_avx(*param_3,1);
  uVar3 = FUN_18000f820(lVar8,uVar6,0,SUB168(*param_3,0),uVar3);
  if (uVar3 != 0xffffffffffffffff) {
    do {
      if (uVar6 < uVar7) {
        FUN_180022320();
        pcVar2 = (code *)swi(3);
        puVar4 = (ulonglong *)(*pcVar2)();
        return puVar4;
      }
      local_res18[0] = uVar3 - uVar7;
      local_res10 = uVar6 - uVar7;
      puVar4 = FUN_180001e40(local_res18,&local_res10);
      uStack_40 = *puVar4;
      local_48 = lVar8 + uVar7;
      puVar1 = (undefined8 *)param_1[1];
      if ((undefined8 *)param_1[2] == puVar1) {
        FUN_180022340(param_1,puVar1,&local_48);
      }
      else {
        plVar5 = (longlong *)FUN_1800012e0(uStack_40,puVar1);
        *plVar5 = local_48;
        plVar5[1] = uStack_40;
        param_1[1] = param_1[1] + 0x10;
      }
      uVar7 = uVar3 + *(longlong *)(*param_3 + 8);
      uVar6 = param_2[1];
      lVar8 = *param_2;
      uVar3 = vpextrq_avx(*param_3,1);
      uVar3 = FUN_18000f820(lVar8,uVar6,uVar7,SUB168(*param_3,0),uVar3);
    } while (uVar3 != 0xffffffffffffffff);
    uVar3 = 0xffffffffffffffff;
    if (uVar6 < uVar7) {
      FUN_180022320();
      pcVar2 = (code *)swi(3);
      puVar4 = (ulonglong *)(*pcVar2)();
      return puVar4;
    }
  }
  local_res18[0] = uVar3 - uVar7;
  local_res10 = uVar6 - uVar7;
  puVar4 = FUN_180001e40(local_res18,&local_res10);
  uStack_40 = *puVar4;
  local_48 = lVar8 + uVar7;
  puVar1 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[2] == puVar1) {
    FUN_180022340(param_1,puVar1,&local_48);
  }
  else {
    plVar5 = (longlong *)FUN_1800012e0(uStack_40,puVar1);
    *plVar5 = local_48;
    plVar5[1] = uStack_40;
    param_1[1] = param_1[1] + 0x10;
  }
  return param_1;
}


// Function: FUN_180021f90
// Address: 180021f90
// Size: 410 bytes


void FUN_180021f90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res10;
  undefined8 local_res18 [2];
  
  FUN_1800230c0(param_1,param_2,param_3,param_4);
  plVar1 = param_1 + 0xf;
  plVar7 = (longlong *)*plVar1;
  plVar6 = (longlong *)*plVar7;
  local_res10 = plVar1;
  FUN_1800126d0(plVar1,local_res18,plVar6,plVar7);
  free((void *)*plVar1);
  plVar1 = param_1 + 0xd;
  lVar2 = *plVar1;
  plVar5 = *(longlong **)(lVar2 + 8);
  lVar3 = lVar2;
  local_res10 = plVar1;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    do {
      FUN_180011da0(plVar1,(longlong *)plVar5[2]);
      plVar4 = (longlong *)*plVar5;
      free(plVar5);
      plVar5 = plVar4;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
    lVar3 = *plVar1;
  }
  *(longlong *)(lVar3 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[0xe] = 0;
  free((void *)*plVar1);
  plVar1 = param_1 + 10;
  local_res10 = plVar1;
  FUN_180011140(plVar1);
  free((void *)*plVar1);
  plVar1 = param_1 + 8;
  plVar5 = (longlong *)*plVar1;
  plVar4 = (longlong *)*plVar5;
  *plVar5 = (longlong)plVar5;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  param_1[9] = 0;
  local_res10 = plVar1;
  if (plVar4 != (longlong *)*plVar1) {
    do {
      plVar5 = (longlong *)*plVar4;
      free(plVar4);
      plVar4 = plVar5;
    } while (plVar5 != (longlong *)*plVar1);
  }
  free((void *)*plVar1);
  plVar1 = param_1 + 5;
  lVar2 = *plVar1;
  local_res10 = plVar1;
  FUN_180013090(plVar1,*(longlong **)(lVar2 + 8),plVar6,plVar7);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[6] = 0;
  free((void *)*plVar1);
  plVar1 = param_1 + 2;
  FUN_180012880(plVar1,&local_res10,*(longlong **)*plVar1,(longlong *)*plVar1);
  free((void *)*plVar1);
  return;
}


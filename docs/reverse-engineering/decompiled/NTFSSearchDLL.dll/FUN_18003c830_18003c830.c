// Function: FUN_18003c830
// Address: 18003c830
// Size: 319 bytes


void FUN_18003c830(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *_Memory;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  
  if (param_2 != 0) {
    lVar6 = 5;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    local_28 = (longlong *)FUN_180012c00(param_1,0,0);
    while( true ) {
      if (param_2 != 0) {
        FUN_18003ae90(param_1,param_2,lVar6,(longlong *)&local_28);
      }
      if ((local_20 == 0) ||
         (((longlong *)param_1[0xf] != (longlong *)0x0 &&
          (cVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x88))(), cVar3 != '\0')))) break;
      plVar4 = FUN_180003ba0(&local_28,local_res10);
      param_2 = *(longlong *)(*plVar4 + 0x10);
      if (param_2 == 0) break;
      lVar6 = *(longlong *)(param_2 + 0x50);
      puVar5 = FUN_180003ba0(&local_28,&local_res20);
      plVar4 = (longlong *)*puVar5;
      lVar1 = *plVar4;
      *(longlong *)plVar4[1] = lVar1;
      *(longlong *)(*plVar4 + 8) = plVar4[1];
      local_20 = local_20 + -1;
      free(plVar4);
      FUN_1800378b0(plVar4,&local_30,lVar1);
    }
    _Memory = local_28;
    plVar4 = (longlong *)*local_28;
    *local_28 = (longlong)local_28;
    local_28[1] = (longlong)local_28;
    local_20 = 0;
    while (plVar4 != _Memory) {
      plVar2 = (longlong *)*plVar4;
      free(plVar4);
      plVar4 = plVar2;
    }
    free(_Memory);
  }
  return;
}


// Function: FUN_180037ec0
// Address: 180037ec0
// Size: 354 bytes


undefined8 * FUN_180037ec0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = BruteForce::TiffAnalyzer::TiffRawFileInfo::vftable;
  FUN_180001630(param_1 + 0x39);
  FUN_180001630(param_1 + 0x35);
  plVar1 = param_1 + 0x2c;
  lVar2 = *plVar1;
  plVar5 = *(longlong **)(lVar2 + 8);
  lVar4 = lVar2;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    do {
      FUN_18003abf0(plVar1,(longlong *)plVar5[2]);
      plVar3 = (longlong *)*plVar5;
      free(plVar5);
      plVar5 = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[0x2d] = 0;
  free((void *)*plVar1);
  plVar1 = param_1 + 0x2a;
  lVar2 = *plVar1;
  lVar4 = lVar2;
  plVar5 = *(longlong **)(lVar2 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      FUN_18003abf0(plVar1,(longlong *)plVar5[2]);
      plVar3 = (longlong *)*plVar5;
      free(plVar5);
      plVar5 = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[0x2b] = 0;
  free((void *)*plVar1);
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


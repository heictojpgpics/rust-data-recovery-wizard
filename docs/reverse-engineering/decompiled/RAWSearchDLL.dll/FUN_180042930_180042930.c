// Function: FUN_180042930
// Address: 180042930
// Size: 290 bytes


undefined * FUN_180042930(longlong *param_1,ulonglong param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar4 = FUN_1800424b0();
  if (((longlong *)*plVar4 != (longlong *)0x0) &&
     (iVar3 = (**(code **)(*(longlong *)*plVar4 + 0x10))(), iVar3 == 0)) {
    return (undefined *)0x0;
  }
  uVar5 = param_2 / (ulonglong)(longlong)(int)param_1[3];
  if (param_1[2] == uVar5) {
    return &DAT_180096f00 + param_2 % (ulonglong)(longlong)(int)param_1[3];
  }
  lVar6 = uVar5 * 0x80 + param_1[1];
  memset(&DAT_180096f00,0,0x81000);
  iVar3 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_180096f00,lVar6,0x81,0)
  ;
  if (iVar3 == 0) {
    plVar4 = (longlong *)*param_1;
    ppuVar1 = (undefined **)*plVar4;
    pcVar2 = (code *)ppuVar1[1];
    if (ppuVar1 == CRawFileCellTestStorageDevice::vftable) {
      iVar3 = (int)plVar4[7];
    }
    else {
      iVar3 = (*(code *)ppuVar1[3])(plVar4);
    }
    iVar3 = (*pcVar2)(plVar4,&DAT_180096f00,lVar6,iVar3 - (int)lVar6 & 0x7f,0);
    if (iVar3 == 0) {
      return (undefined *)0x0;
    }
  }
  param_1[2] = param_2 / (ulonglong)(longlong)(int)param_1[3];
  return &DAT_180096f00 + param_2 % (ulonglong)(longlong)(int)param_1[3];
}


// Function: FUN_180043fb0
// Address: 180043fb0
// Size: 297 bytes


undefined4 FUN_180043fb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  
  local_30 = *(undefined8 *)(param_2 + 8);
  local_28 = 0xffffffffffffffff;
  local_38 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_20 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_20 = *(int *)((longlong)param_3 + 0xc);
    if (local_20 < 1) {
      local_20 = 0x200;
    }
  }
  else {
    local_20 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_20 = local_20 << 7;
  iVar7 = 1;
  pcVar3 = FUN_180042930((longlong *)&local_38,0);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  uVar5 = 5;
  cVar6 = pcVar3[4];
  puVar4 = FUN_180001350();
  uVar1 = *(ulonglong *)(puVar4 + 0x70);
LAB_180044061:
  if (iVar7 != 0) goto LAB_18004406a;
LAB_180044065:
  uVar8 = 1;
  if (*pcVar3 != '{') goto LAB_1800440aa;
LAB_18004406a:
  iVar2 = iVar7 + 1;
  if (cVar6 != '{') {
    iVar2 = iVar7;
  }
  iVar7 = iVar2 + -1;
  if (cVar6 != '}') {
    iVar7 = iVar2;
  }
  uVar5 = uVar5 + 1;
  uVar8 = 1;
  if (uVar1 < uVar5) goto LAB_1800440aa;
  pcVar3 = FUN_180042930((longlong *)&local_38,uVar5);
  if (pcVar3 == (char *)0x0) goto LAB_1800440a7;
  cVar6 = *pcVar3;
  if (cVar6 == '\0') goto code_r0x0001800440a3;
  goto LAB_180044061;
code_r0x0001800440a3:
  if (iVar7 != 0) {
LAB_1800440a7:
    uVar8 = 0;
LAB_1800440aa:
    *(ulonglong *)(param_2 + 0x10) = uVar5;
    return uVar8;
  }
  goto LAB_180044065;
}


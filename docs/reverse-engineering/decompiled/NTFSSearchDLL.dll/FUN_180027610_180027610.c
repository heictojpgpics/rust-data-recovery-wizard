// Function: FUN_180027610
// Address: 180027610
// Size: 437 bytes


void FUN_180027610(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  LPSTR pCVar7;
  CHAR *pCVar8;
  undefined1 auStack_d8 [32];
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  void **local_98;
  undefined8 local_90;
  CHAR local_88 [112];
  ulonglong local_18;
  
  local_90 = 0xfffffffffffffffe;
  local_18 = DAT_180086010 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x390) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    local_98 = &local_b8;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_b8 = (void *)FUN_180012ea0();
    local_a0 = 0;
    local_a8 = uVar1;
    FUN_1800375a0((longlong *)&local_b8,*(longlong **)(param_1 + 0x390),param_1 + 0x28);
    pCVar7 = (LPSTR)0x64;
    memset(local_88,0,100);
    lVar5 = FUN_180040570((undefined8 *)(**(longlong **)(param_1 + 0x390) + 8),0);
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x34) * lVar5;
    plVar2 = *(longlong **)(param_1 + 0x18);
    if ((plVar2 == (longlong *)0x0) || (iVar4 = (**(code **)(*plVar2 + 0x28))(), iVar4 == 0x200)) {
      iVar4 = 0x400;
    }
    else {
      iVar4 = (**(code **)(*plVar2 + 0x28))();
    }
    if (lVar5 < 0) {
      iVar4 = 0;
    }
    else {
      pCVar7 = local_88;
      iVar4 = FUN_1800377e0(lVar5,*(longlong **)(param_1 + 0x18),pCVar7,iVar4);
    }
    pCVar8 = local_88;
    if (iVar4 == 0) {
      pCVar8 = (CHAR *)0x0;
    }
    lVar6 = FUN_180037ca0(0,*(undefined4 *)(param_1 + 0x34),pCVar7,pCVar8);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x390) + 0x18);
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x10);
      while (lVar3 != 0) {
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(longlong *)(lVar3 + 8) = lVar6;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        uVar1 = *(undefined8 *)(lVar6 + 0x10);
        *(undefined8 *)(lVar3 + 0x18) = uVar1;
        *(undefined8 *)(lVar3 + 0x20) = uVar1;
        *(longlong *)(lVar6 + 0x10) = lVar3;
        *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar6 + 0x50);
        lVar3 = *(longlong *)(lVar5 + 0x10);
      }
    }
    local_98 = &local_b8;
    FUN_180011400((longlong *)&local_b8);
    free(local_b8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_d8);
  return;
}


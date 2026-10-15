// Function: FUN_1800347d0
// Address: 1800347d0
// Size: 711 bytes


undefined8 FUN_1800347d0(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *local_res20;
  longlong local_48 [2];
  
  uVar6 = 0;
  uVar12 = uVar6;
  while( true ) {
    iVar11 = (int)uVar6;
    if (param_3 <= iVar11) {
      return 1;
    }
    lVar8 = (longlong)iVar11;
    bVar1 = *(byte *)(lVar8 + param_2);
    if (bVar1 == 0) {
      return 1;
    }
    bVar7 = bVar1 >> 4;
    uVar4 = bVar1 & 0xf;
    local_48[0] = 0;
    local_res20 = (longlong *)0x0;
    iVar11 = bVar7 + uVar4 + iVar11;
    if (param_3 <= iVar11) {
      return 1;
    }
    if (8 < (ulonglong)uVar4) break;
    if (8 < bVar7) {
      return 1;
    }
    memcpy(local_48,(void *)(param_2 + 1 + lVar8),(ulonglong)uVar4);
    memcpy(&local_res20,(void *)(lVar8 + 1 + (ulonglong)uVar4 + param_2),(ulonglong)bVar7);
    plVar9 = local_res20;
    switch((uint)bVar7) {
    case 1:
      plVar9 = (longlong *)(longlong)(char)local_res20;
      break;
    case 2:
      plVar9 = (longlong *)(longlong)(short)local_res20;
      break;
    case 3:
      if (0x800000 < (longlong)local_res20) {
        plVar9 = local_res20 + -0x200000;
      }
      break;
    case 4:
      plVar9 = (longlong *)(longlong)(int)local_res20;
      break;
    case 5:
      if (((ulonglong)local_res20 & 0x8000000000) != 0) {
        plVar9 = local_res20 + -0x2000000000;
      }
      break;
    case 6:
      if (((ulonglong)local_res20 & 0x800000000000) != 0) {
        plVar9 = local_res20 + -0x200000000000;
      }
      break;
    case 7:
      if (((ulonglong)local_res20 & 0x80000000000000) != 0) {
        plVar9 = local_res20 + -0x20000000000000;
      }
    }
    local_res20 = (longlong *)FUN_18002be40(0x10);
    if (local_res20 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *local_res20 = 0;
      local_res20[1] = 0;
      plVar10 = local_res20;
    }
    lVar8 = -1;
    if (bVar1 >> 4 != 0) {
      lVar8 = (longlong)plVar9 + uVar12;
    }
    *plVar10 = lVar8;
    plVar10[1] = local_48[0];
    uVar5 = *(ulonglong *)(param_1 + 0x20);
    if ((((int)*(longlong *)(param_1 + 0x28) + (int)uVar5 & 1U) == 0) &&
       (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 2U >> 1)) {
      FUN_1800331d0(param_1 + 8,uVar5);
      uVar5 = *(ulonglong *)(param_1 + 0x20);
    }
    uVar5 = *(longlong *)(param_1 + 0x18) * 2 - 1U & uVar5;
    *(ulonglong *)(param_1 + 0x20) = uVar5;
    uVar5 = *(longlong *)(param_1 + 0x28) + uVar5;
    uVar6 = *(longlong *)(param_1 + 0x18) - 1U & uVar5 >> 1;
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar8 = uVar6 * 8;
    if (*(longlong *)(lVar3 + uVar6 * 8) == 0) {
      uVar2 = FUN_18002be40(0x10);
      *(undefined8 *)(lVar8 + *(longlong *)(param_1 + 0x10)) = uVar2;
      lVar3 = *(longlong *)(param_1 + 0x10);
    }
    uVar4 = iVar11 + 1;
    uVar6 = (ulonglong)uVar4;
    uVar12 = uVar12 + (longlong)plVar9;
    *(longlong **)(*(longlong *)(lVar8 + lVar3) + (ulonglong)((uint)uVar5 & 1) * 8) = plVar10;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    if ((int)uVar4 < 0) {
      return 1;
    }
  }
  return 1;
}


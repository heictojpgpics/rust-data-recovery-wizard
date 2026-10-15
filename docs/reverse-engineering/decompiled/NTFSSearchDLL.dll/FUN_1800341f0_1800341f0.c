// Function: FUN_1800341f0
// Address: 1800341f0
// Size: 245 bytes


void FUN_1800341f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8[0] = (undefined4)*(undefined8 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 0x78))(param_2,local_res8,4,param_4,0xfffffffffffffffe);
  plVar1 = (longlong *)0x0;
  puVar4 = (undefined8 *)(param_1 + 8);
  uVar5 = *(ulonglong *)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (longlong *)*puVar4;
  }
  plVar6 = (longlong *)0x0;
  if ((plVar1 != (longlong *)0x0) && ((undefined8 *)*plVar1 != (undefined8 *)0x0)) {
    plVar6 = *(longlong **)*plVar1;
  }
  while( true ) {
    uVar2 = *(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20);
    uVar8 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar8 = *puVar4;
    }
    if (uVar5 == uVar2) break;
    if (plVar6 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar6;
    }
    (**(code **)(*param_2 + 0x78))
              (param_2,*(undefined8 *)
                        (*(longlong *)
                          (*(longlong *)(lVar3 + 8) +
                          (uVar5 >> 1 & *(longlong *)(lVar3 + 0x10) - 1U) * 8) +
                        (ulonglong)((uint)uVar5 & 1) * 8),0x10,*param_2,uVar7,uVar8,0,uVar2);
    uVar5 = uVar5 + 1;
  }
  return;
}


// Function: FUN_18000ce60
// Address: 18000ce60
// Size: 298 bytes


void FUN_18000ce60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 8);
  (**(code **)(*param_2 + 0x78))(param_2,&local_res8,8);
  plVar2 = *(longlong **)**(longlong **)(param_1 + 0xd0);
  if (plVar2 != (longlong *)**(longlong **)(param_1 + 0xd0)) {
    do {
      lVar1 = plVar2[2];
      (**(code **)(*param_2 + 0x78))(param_2,lVar1,8);
      (**(code **)(*param_2 + 0x78))(param_2,lVar1 + 0x18,1);
      (**(code **)(*param_2 + 0x78))(param_2,lVar1 + 0x1a,2);
      FUN_1800403f0((undefined8 *)(lVar1 + 8),param_2);
      plVar2 = (longlong *)*plVar2;
    } while (plVar2 != (longlong *)**(longlong **)(param_1 + 0xd0));
  }
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8);
  (**(code **)(*param_2 + 0x78))(param_2,&local_res8,8);
  plVar2 = *(longlong **)**(longlong **)(param_1 + 0xd8);
  if (plVar2 != (longlong *)**(longlong **)(param_1 + 0xd8)) {
    do {
      (**(code **)(*param_2 + 0x78))(param_2,plVar2 + 2,8);
      (**(code **)(*param_2 + 0x78))(param_2,plVar2 + 3,8);
      plVar2 = (longlong *)*plVar2;
    } while (plVar2 != (longlong *)**(longlong **)(param_1 + 0xd8));
  }
  return;
}


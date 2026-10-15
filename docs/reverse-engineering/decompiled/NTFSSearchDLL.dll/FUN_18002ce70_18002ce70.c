// Function: FUN_18002ce70
// Address: 18002ce70
// Size: 162 bytes


void FUN_18002ce70(undefined8 *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined1 local_res10 [24];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10 [2];
  
  local_res10[0] = param_2;
  puVar3 = (ulonglong *)FUN_180002670((longlong)param_1);
  uVar1 = *puVar3;
  plVar4 = FUN_180003b90(param_1,&local_20);
  lVar2 = *plVar4;
  plVar4 = FUN_180003ba0(param_1,&local_18);
  FUN_18002d080((longlong)param_1,local_10,*plVar4,lVar2,local_res10,uVar1);
  return;
}


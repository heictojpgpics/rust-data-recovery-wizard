// Function: FUN_180042320
// Address: 180042320
// Size: 241 bytes


void FUN_180042320(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10 [2];
  
  FUN_180003b10(&local_40);
  plVar1 = FUN_180003ba0(param_1,&local_28);
  local_40 = *plVar1;
  while( true ) {
    plVar1 = FUN_180003b90(param_1,&local_20);
    uVar2 = FUN_180003ae0(&local_40,plVar1);
    if ((uVar2 & 0xff) == 0) break;
    puVar3 = (undefined8 *)FUN_180003b00(&local_40);
    plVar1 = (longlong *)*puVar3;
    if ((param_2 == *plVar1) || (*plVar1 == -1)) {
      puVar3 = FUN_180003d40(&local_40,&local_18);
      local_38 = (longlong *)*puVar3;
      FUN_180003d50((longlong)param_1,local_10,local_38);
      local_30 = plVar1;
      free(plVar1);
    }
    else {
      FUN_180003af0(&local_40);
    }
  }
  return;
}


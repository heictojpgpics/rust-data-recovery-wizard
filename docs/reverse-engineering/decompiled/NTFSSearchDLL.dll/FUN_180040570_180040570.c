// Function: FUN_180040570
// Address: 180040570
// Size: 273 bytes


longlong FUN_180040570(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  undefined7 extraout_var;
  longlong *plVar2;
  ulonglong uVar3;
  longlong local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  bVar1 = FUN_180040b50((longlong)param_1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    FUN_180003b10(&local_40);
    local_38 = param_1;
    plVar2 = FUN_180003ba0(param_1,&local_28);
    local_40 = *plVar2;
    while( true ) {
      local_30 = param_1;
      plVar2 = FUN_180003b90(param_1,local_18);
      uVar3 = FUN_180003ae0(&local_40,plVar2);
      if ((uVar3 & 0xff) == 0) break;
      plVar2 = (longlong *)FUN_180003b00(&local_40);
      plVar2 = (longlong *)*plVar2;
      if (((plVar2 != (longlong *)0x0) && (plVar2[1] <= param_2)) &&
         (param_2 < plVar2[1] + plVar2[2])) {
        return (param_2 - plVar2[1]) + *plVar2;
      }
      FUN_180003d40(&local_40,&local_20);
    }
  }
  return -1;
}


// Function: FUN_180040b80
// Address: 180040b80
// Size: 297 bytes


void FUN_180040b80(longlong param_1,char *param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = FUN_18003ff50(param_2,param_3);
  if ((int)uVar1 != 0) {
    FUN_180011820(local_20);
    FUN_18003fa20((longlong)param_2,param_3,(longlong)local_20);
    FUN_180003b10(&local_50);
    local_58 = 0;
    plVar2 = FUN_180003ba0(local_20,&local_38);
    local_50 = *plVar2;
    while( true ) {
      plVar2 = FUN_180003b90(local_20,&local_28);
      uVar3 = FUN_180003ae0(&local_50,plVar2);
      if ((uVar3 & 0xff) == 0) break;
      plVar2 = (longlong *)FUN_180003b00(&local_50);
      local_58 = *plVar2;
      if (local_58 != 0) {
        *(longlong *)(local_58 + 8) = *(longlong *)(local_58 + 8) + param_4;
        local_48 = param_1;
        FUN_18002cd90(param_1,&local_58);
      }
      FUN_180003d40(&local_50,&local_30);
    }
    FUN_180011600(local_20);
  }
  return;
}


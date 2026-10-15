// Function: FUN_1800420d0
// Address: 1800420d0
// Size: 523 bytes


undefined4
FUN_1800420d0(longlong param_1,int param_2,longlong param_3,uint param_4,longlong param_5,
             int param_6,longlong *param_7)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50 [2];
  longlong local_40;
  code *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_30 = 0xfffffffffffffffe;
  FUN_180011820(local_50);
  FUN_18003fa20(param_1,param_2,(longlong)local_50);
  local_60 = 0;
  iVar1 = (**(code **)(*param_7 + 0x28))(param_7);
  FUN_180003b10(&local_68);
  plVar2 = FUN_180003ba0(local_50,&local_28);
  local_68 = *plVar2;
  while( true ) {
    plVar2 = FUN_180003b90(local_50,local_18);
    uVar3 = FUN_180003ae0(&local_68,plVar2);
    if ((uVar3 & 0xff) == 0) break;
    plVar2 = (longlong *)FUN_180003b00(&local_68);
    plVar2 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      local_40 = FUN_1800422f0(*plVar2,param_5,param_6);
      lVar4 = (plVar2[2] * (longlong)param_6 + local_60) * (longlong)iVar1;
      if (lVar4 - (ulonglong)param_4 != 0 && (longlong)(ulonglong)param_4 <= lVar4) break;
      local_38 = *(code **)(*param_7 + 8);
      (*local_38)(param_7,param_3 + local_60 * iVar1,local_40,plVar2[2] * (longlong)param_6,0);
      local_60 = local_60 + plVar2[2] * (longlong)param_6;
    }
    FUN_180003d40(&local_68,&local_20);
  }
  FUN_180013490(local_50);
  local_58 = 1;
  FUN_180011600(local_50);
  return local_58;
}


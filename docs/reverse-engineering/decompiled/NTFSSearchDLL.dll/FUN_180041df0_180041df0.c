// Function: FUN_180041df0
// Address: 180041df0
// Size: 546 bytes


longlong FUN_180041df0(longlong param_1,int param_2,int param_3,uint param_4,int *param_5,
                      undefined8 *param_6)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  int local_res10;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong local_60 [2];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_38 = 0xfffffffffffffffe;
  local_70 = 0;
  local_30 = 0;
  local_68 = (undefined8 *)0x0;
  FUN_18002d7c0(&local_78);
  local_50 = param_1 + 0x20;
  plVar3 = FUN_18002d890(local_50,&local_28);
  local_78 = *plVar3;
  local_res10 = param_2;
  do {
    local_48 = param_1 + 0x20;
    plVar3 = FUN_18002d820(local_48,local_18);
    bVar1 = FUN_18002d710(&local_78,plVar3);
    if (!bVar1) {
      return 0;
    }
    local_68 = (undefined8 *)FUN_18002d7a0(&local_78);
    local_68 = (undefined8 *)*local_68;
    piVar4 = (int *)FUN_1800427a0(local_68);
    if (piVar4 != (int *)0x0) {
      FUN_180041cf0(local_60,piVar4,0x400,0);
      bVar1 = FUN_180041c50(local_60);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        FUN_180041c70(local_60);
      }
      else {
        iVar2 = FUN_1800414c0((longlong)piVar4,param_3);
        if (param_4 < (uint)(local_res10 + iVar2)) {
          local_70 = FUN_180041850((longlong)piVar4,param_3,param_4 - local_res10);
          if (local_70 != 0) {
            if (param_5 != (int *)0x0) {
              *param_5 = (int)local_70 - (int)piVar4;
            }
            if (param_6 != (undefined8 *)0x0) {
              uVar5 = FUN_180042780((longlong)local_68);
              *param_6 = uVar5;
            }
          }
          local_40 = local_70;
          FUN_180041c70(local_60);
          return local_40;
        }
        local_res10 = local_res10 + iVar2;
        FUN_180041c70(local_60);
      }
    }
    FUN_18002d750(&local_78,&local_20);
  } while( true );
}


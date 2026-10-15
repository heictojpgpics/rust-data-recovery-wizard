// Function: FUN_18001a3c0
// Address: 18001a3c0
// Size: 384 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001a3c0(undefined8 param_1,byte param_2,longlong *param_3,undefined8 *param_4,
                  longlong param_5,short param_6)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 extraout_var;
  undefined1 auStackY_10098 [32];
  longlong alStack_10058 [2];
  undefined8 uStack_10048;
  int aiStack_10038 [16388];
  
  uStack_10048 = 0xfffffffffffffffe;
  uVar3 = DAT_180086010 ^ (ulonglong)auStackY_10098;
  memset(aiStack_10038,0,0x10000);
  iVar2 = (**(code **)(*param_3 + 8))(param_3,aiStack_10038);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_3 + 0x28))(param_3);
    uVar4 = FUN_180041bb0(aiStack_10038,iVar2 * (uint)param_2);
    if (((int)uVar4 != 0) && (iVar2 = FUN_1800411d0(aiStack_10038), iVar2 != 0)) {
      lVar5 = FUN_180041850((longlong)aiStack_10038,0x20,0);
      if (lVar5 == 0) {
        iVar2 = (**(code **)(*param_3 + 0x28))(param_3);
        FUN_180041cf0(alStack_10058,aiStack_10038,iVar2 * (uint)param_2,0);
        bVar1 = FUN_180041c50(alStack_10058);
        if ((int)CONCAT71(extraout_var,bVar1) == 0) {
          FUN_180041c70(alStack_10058);
        }
        else {
          FUN_180007550(param_4,alStack_10058,param_1);
          FUN_180041c70(alStack_10058);
        }
      }
      else {
        LogInfo("MFT file record has 0x20 attribute, MFT start sector is %I64d\n");
        FUN_18001a540(aiStack_10038,param_1,param_2,param_3,param_5,param_6,param_4 + 1);
      }
    }
  }
  __security_check_cookie(uVar3 ^ (ulonglong)auStackY_10098);
  return;
}


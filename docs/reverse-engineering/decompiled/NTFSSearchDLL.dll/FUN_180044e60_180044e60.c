// Function: FUN_180044e60
// Address: 180044e60
// Size: 246 bytes


void FUN_180044e60(undefined4 *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                  int param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 local_10;
  
  uVar2 = FUN_180045480((longlong)param_1);
  if (((param_5 != 0) ||
      (bVar1 = FUN_180045440((longlong)param_1), (int)CONCAT71(extraout_var,bVar1) == 0)) &&
     (uVar4 = FUN_1800454a0(param_1,uVar2), (int)uVar4 != 0)) {
    pcVar5 = (char *)FUN_180043b40((longlong)param_1);
    iVar3 = FUN_180043b00((longlong)param_1);
    lVar6 = FUN_1800438f0((longlong)param_1);
    *param_3 = lVar6;
    local_10 = 0;
    if ((pcVar5 != (char *)0x0) && (0 < iVar3)) {
      FUN_180040b80(param_4,pcVar5,iVar3,lVar6);
      local_10 = FUN_180045200((longlong)param_1);
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = local_10;
    }
  }
  return;
}


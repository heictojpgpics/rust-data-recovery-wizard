// Function: FUN_1800439f0
// Address: 1800439f0
// Size: 118 bytes


undefined8 FUN_1800439f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (char *)FUN_180043b40(param_1);
  if (pcVar2 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_180043b00(param_1);
    uVar3 = FUN_18003ff50(pcVar2,iVar1);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_18003fa20((longlong)pcVar2,iVar1,param_3);
      uVar3 = 1;
    }
  }
  return uVar3;
}


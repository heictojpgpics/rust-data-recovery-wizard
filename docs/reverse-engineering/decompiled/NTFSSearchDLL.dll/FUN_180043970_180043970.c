// Function: FUN_180043970
// Address: 180043970
// Size: 109 bytes


longlong FUN_180043970(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  pcVar2 = (char *)FUN_180043b40(param_1);
  if (pcVar2 == (char *)0x0) {
    lVar3 = -1;
  }
  else {
    iVar1 = FUN_180043b00(param_1);
    uVar4 = FUN_18003ff50(pcVar2,iVar1);
    if ((int)uVar4 == 0) {
      lVar3 = -1;
    }
    else {
      lVar3 = FUN_18003fe40(pcVar2);
    }
  }
  return lVar3;
}


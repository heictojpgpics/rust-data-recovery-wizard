// Function: FUN_180031d00
// Address: 180031d00
// Size: 49 bytes


int FUN_180031d00(undefined8 param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = (int)param_2;
  pcVar2 = param_2 + (longlong)param_3 + -3;
  bVar3 = param_2 < pcVar2;
  while( true ) {
    if (!bVar3) {
      return 0;
    }
    if (((*param_2 == -1) && (param_2[1] == -0x28)) && (param_2[2] == -1)) break;
    param_2 = param_2 + 1;
    bVar3 = param_2 < pcVar2;
  }
  return (int)param_2 - iVar1;
}


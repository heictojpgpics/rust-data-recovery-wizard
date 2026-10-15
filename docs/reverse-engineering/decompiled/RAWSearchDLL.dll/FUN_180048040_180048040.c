// Function: FUN_180048040
// Address: 180048040
// Size: 272 bytes


void FUN_180048040(char *param_1,uint param_2,LPSTR param_3,LPSTR param_4)

{
  char cVar1;
  uint uVar2;
  size_t sVar3;
  size_t local_38 [2];
  
  local_38[0] = 0x400;
  memset(param_3,0,0x104);
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    uVar2 = param_2 - 1;
    if (0x104 < param_2 - 1) {
      uVar2 = 0x104;
    }
    if (param_1 + 1 == (LPCSTR)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = FUN_180030400(param_1 + 1,(ulonglong)(uVar2 + 1),param_4,local_38);
      if (0x103 < sVar3) {
        return;
      }
    }
    memcpy(param_3,param_4,sVar3);
    param_3[uVar2] = '\0';
  }
  else if (cVar1 == '\x01') {
    if (((3 < param_2) && (param_1[1] == -1)) && (param_1[2] == -2)) {
      local_38[0] = 0x104;
      if ((LPCWSTR)(param_1 + 3) != (LPCWSTR)0x0) {
        sVar3 = FUN_180030340((LPCWSTR)(param_1 + 3),(ulonglong)(param_2 - 3 >> 1),param_3,local_38)
        ;
        param_3[sVar3] = '\0';
        return;
      }
      *param_3 = '\0';
      return;
    }
  }
  else if ((cVar1 == '\x03') && (param_2 - 1 < 0x104)) {
    memcpy(param_3,param_1 + 1,(ulonglong)(param_2 - 1));
    return;
  }
  return;
}


// Function: FUN_18005d3c0
// Address: 18005d3c0
// Size: 360 bytes


byte * FUN_18005d3c0(longlong param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  
  if (param_2 != (char *)0x0) {
    iVar2 = strncmp(param_2,"null",4);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 2;
      return (byte *)(param_2 + 4);
    }
    iVar2 = strncmp(param_2,"false",5);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      return (byte *)(param_2 + 5);
    }
    iVar2 = strncmp(param_2,"true",4);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined8 *)(param_1 + 0x28) = 1;
      return (byte *)(param_2 + 4);
    }
    cVar1 = *param_2;
    if (cVar1 == '\"') {
      pbVar3 = FUN_18005ce30(param_1,param_2,param_3);
      return pbVar3;
    }
    if ((cVar1 == '-') || ((byte)(cVar1 - 0x30U) < 10)) {
      pbVar3 = (byte *)FUN_18005cc70(param_1,param_2);
      return pbVar3;
    }
    if (cVar1 == '[') {
      pbVar3 = FUN_18005d7a0(param_1,param_2,param_3);
      return pbVar3;
    }
    if (cVar1 == '{') {
      pbVar3 = FUN_18005db30(param_1,param_2,param_3);
      return pbVar3;
    }
    *param_3 = param_2;
  }
  return (byte *)0x0;
}


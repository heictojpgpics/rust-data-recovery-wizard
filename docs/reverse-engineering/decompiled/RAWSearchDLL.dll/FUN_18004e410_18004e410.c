// Function: FUN_18004e410
// Address: 18004e410
// Size: 48 bytes


char * FUN_18004e410(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    pcVar3 = param_1;
    while (cVar2 != '\0') {
      if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        *pcVar3 = cVar2 + -0x20;
      }
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
    }
    return param_1;
  }
  return (char *)0x0;
}


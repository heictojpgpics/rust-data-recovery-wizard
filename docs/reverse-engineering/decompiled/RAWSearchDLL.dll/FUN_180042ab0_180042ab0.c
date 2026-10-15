// Function: FUN_180042ab0
// Address: 180042ab0
// Size: 120 bytes


int FUN_180042ab0(char *param_1,int param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1 + ((longlong)param_2 - (longlong)param_3);
  while( true ) {
    if (pcVar2 < param_1) {
      return 0;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 == *param_4)) &&
       (iVar1 = memcmp(pcVar2 + 1,param_4 + 1,(longlong)(param_5 + -1)), iVar1 == 0)) break;
    pcVar2 = pcVar2 + -1;
  }
  return ((int)pcVar2 - (int)param_1) + param_5;
}


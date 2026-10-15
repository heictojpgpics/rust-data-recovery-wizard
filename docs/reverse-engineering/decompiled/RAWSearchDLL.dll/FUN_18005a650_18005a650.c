// Function: FUN_18005a650
// Address: 18005a650
// Size: 177 bytes


char * FUN_18005a650(longlong param_1,char *param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  pcVar3 = param_2;
  do {
    if (cVar1 == '\0') {
      pcVar3 = (char *)0x0;
LAB_18005a6aa:
      FUN_18005b870(*(longlong *)(param_1 + 8),0xb,*(undefined4 *)(param_1 + 0x30),0);
      return pcVar3;
    }
    if ((cVar1 == '?') && (iVar2 = strncmp(pcVar3,"?>",2), iVar2 == 0)) {
      if ((*(uint *)(param_1 + 0x18) & 0x200) != 0) {
        free(*(void **)(param_1 + 0x20));
      }
      *(char **)(param_1 + 0x28) = pcVar3;
      *(char **)(param_1 + 0x20) = param_2;
      *(undefined4 *)(param_1 + 0x18) = 0x102;
      pcVar3 = pcVar3 + 2;
      if (pcVar3 != (char *)0x0) {
        return pcVar3;
      }
      goto LAB_18005a6aa;
    }
    if (*pcVar3 == '\n') {
      *param_4 = *param_4 + 1;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  } while( true );
}


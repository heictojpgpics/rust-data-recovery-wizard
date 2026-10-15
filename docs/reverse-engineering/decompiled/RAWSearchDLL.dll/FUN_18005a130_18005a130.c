// Function: FUN_18005a130
// Address: 18005a130
// Size: 391 bytes


char * FUN_18005a130(longlong param_1,char *param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  cVar1 = DAT_18006e558;
  if (*(char *)(param_1 + 0x68) == '\0') {
    cVar2 = *(char *)(*(longlong *)(param_1 + 8) + 0x69);
    uVar5 = (cVar2 != '\0') + 2;
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x70) == 1) {
      uVar5 = (cVar2 != '\0') + 6;
    }
    cVar2 = *param_2;
    pcVar4 = param_2;
    do {
      if (cVar2 == '\0') {
LAB_18005a254:
        FUN_18005b870(*(longlong *)(param_1 + 8),8,*(undefined4 *)(param_1 + 0x30),0);
        return (char *)0x0;
      }
      if ((cVar2 == cVar1) && (iVar3 = strncmp(pcVar4,"<",1), iVar3 == 0)) {
        if ((*(uint *)(param_1 + 0x18) & 0x200) != 0) {
          free(*(void **)(param_1 + 0x20));
        }
        *(char **)(param_1 + 0x20) = param_2;
        *(char **)(param_1 + 0x28) = pcVar4;
        *(uint *)(param_1 + 0x18) = uVar5 | 0x100;
        if (pcVar4 + 1 != (char *)0x0) {
          if (pcVar4[1] == '\0') {
            return (char *)0x0;
          }
          return pcVar4;
        }
        goto LAB_18005a254;
      }
      if (*pcVar4 == '\n') {
        *param_4 = *param_4 + 1;
      }
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    } while( true );
  }
  cVar1 = *param_2;
  pcVar4 = param_2;
  do {
    if (cVar1 == '\0') {
      pcVar4 = (char *)0x0;
LAB_18005a192:
      FUN_18005b870(*(longlong *)(param_1 + 8),9,*(undefined4 *)(param_1 + 0x30),0);
      return pcVar4;
    }
    if ((cVar1 == ']') && (iVar3 = strncmp(pcVar4,"]]>",3), iVar3 == 0)) {
      if ((*(uint *)(param_1 + 0x18) & 0x200) != 0) {
        free(*(void **)(param_1 + 0x20));
      }
      *(char **)(param_1 + 0x28) = pcVar4;
      *(char **)(param_1 + 0x20) = param_2;
      *(undefined4 *)(param_1 + 0x18) = 0x102;
      pcVar4 = pcVar4 + 3;
      if (pcVar4 != (char *)0x0) {
        return pcVar4;
      }
      goto LAB_18005a192;
    }
    if (*pcVar4 == '\n') {
      *param_4 = *param_4 + 1;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 1;
  } while( true );
}


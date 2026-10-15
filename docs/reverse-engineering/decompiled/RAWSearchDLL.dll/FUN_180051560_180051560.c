// Function: FUN_180051560
// Address: 180051560
// Size: 899 bytes


void FUN_180051560(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    pcVar3 = (char *)(param_1 + 0xf0);
    *(undefined4 *)(param_2 + 0x18) = 0x58;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar3;
      pcVar6 = pcVar3;
      while (cVar1 != '\0') {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          *pcVar6 = cVar1 + -0x20;
        }
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
      }
    }
    if (*(int *)(param_1 + 0x17c) == 0) {
      return;
    }
    pcVar3 = strstr(pcVar3,"GOPRO");
    if (pcVar3 == (char *)0x0) {
      return;
    }
    *(undefined4 *)(param_2 + 0x18) = 0x9a;
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0x59;
    return;
  }
  pcVar3 = (char *)(param_1 + 0xf0);
  pcVar6 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    pcVar4 = pcVar3;
    while (pcVar6 = pcVar3, cVar1 != '\0') {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        *pcVar4 = cVar1 + -0x20;
      }
      pcVar6 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar6;
    }
  }
  pcVar3 = (char *)(param_1 + 0x130);
  pcVar4 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    pcVar5 = pcVar3;
    while (pcVar4 = pcVar3, cVar1 != '\0') {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        *pcVar5 = cVar1 + -0x20;
      }
      pcVar4 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar4;
    }
  }
  pcVar3 = strstr(pcVar6,"NIKON");
  if (pcVar3 != (char *)0x0) {
    pcVar3 = (char *)(param_1 + 0x58);
    *(undefined4 *)(param_2 + 0x18) = 0x4d;
    if (0xf < *(ulonglong *)(param_1 + 0x70)) {
      pcVar3 = *(char **)pcVar3;
    }
    pcVar3 = strstr(pcVar3,"COOLPIX P");
    if (pcVar3 == (char *)0x0) {
      return;
    }
    *(undefined4 *)(param_2 + 0x18) = 0x4e;
    return;
  }
  pcVar3 = strstr(pcVar6,"CANON");
  if (pcVar3 != (char *)0x0) {
    *(undefined4 *)(param_2 + 0x18) = 0x53;
    return;
  }
  pcVar3 = strstr(pcVar6,"SONY");
  if (pcVar3 != (char *)0x0) {
    pcVar3 = (char *)(param_1 + 0x58);
    if (0xf < *(ulonglong *)(param_1 + 0x70)) {
      pcVar3 = *(char **)pcVar3;
    }
    pcVar3 = strstr(pcVar3,"DSC-R1");
    *(uint *)(param_2 + 0x18) = 0x55 - (uint)(pcVar3 != (char *)0x0);
    return;
  }
  pcVar3 = strstr(pcVar6,"PANASONIC");
  if (pcVar3 != (char *)0x0) {
    if ((param_3 != '\0') && ((*(int *)(param_1 + 0x4c) == 0 || (*(int *)(param_1 + 0x50) == 0)))) {
      *(undefined4 *)(param_2 + 0x18) = 0x56;
      return;
    }
    *(undefined4 *)(param_2 + 0x18) = 0x57;
    return;
  }
  pcVar3 = strstr(pcVar6,"LEICA");
  if (pcVar3 != (char *)0x0) {
    if (param_3 == '\0') {
      return;
    }
    *(undefined4 *)(param_2 + 0x18) = 0x56;
    return;
  }
  pcVar3 = strstr(pcVar6,"KODAK");
  if (pcVar3 != (char *)0x0) {
    pcVar3 = (char *)(param_1 + 0x58);
    if (0xf < *(ulonglong *)(param_1 + 0x70)) {
      pcVar3 = *(char **)pcVar3;
    }
    pcVar3 = strstr(pcVar3,"DCS Pro SLR");
    *(uint *)(param_2 + 0x18) = 0x62 - (uint)(pcVar3 != (char *)0x0);
    return;
  }
  pcVar3 = strstr(pcVar6,"EPSON");
  if (pcVar3 != (char *)0x0) {
    *(undefined4 *)(param_2 + 0x18) = 100;
    return;
  }
  pcVar3 = strstr(pcVar6,"HASSELBLAD");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = strstr(pcVar6,"MAMIYA");
    if (pcVar3 != (char *)0x0) {
      *(undefined4 *)(param_2 + 0x18) = 0x65;
      return;
    }
    pcVar3 = strstr(pcVar6,"PENTAX");
    if (pcVar3 != (char *)0x0) {
      *(undefined4 *)(param_2 + 0x18) = 0x68;
      return;
    }
    pcVar3 = strstr(pcVar6,"SAMSUNG");
    if (pcVar3 != (char *)0x0) {
      *(undefined4 *)(param_2 + 0x18) = 0x6a;
      return;
    }
    pcVar3 = strstr(pcVar6,"OLYMPUS");
    if ((pcVar3 == (char *)0x0) &&
       (pcVar3 = strstr(pcVar6,"OM DIGITAL SOLUTIONS"), pcVar3 == (char *)0x0)) {
      *(undefined4 *)(param_2 + 0x18) = 0x40;
      return;
    }
    *(undefined4 *)(param_2 + 0x18) = 0x6b;
    return;
  }
  pcVar3 = strstr(pcVar4,"100C");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = strstr(pcVar4,"H5D");
    uVar2 = 0x9d;
    if (pcVar3 == (char *)0x0) goto LAB_18005182c;
  }
  uVar2 = 99;
LAB_18005182c:
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  return;
}


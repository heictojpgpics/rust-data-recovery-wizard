// Function: FUN_180038bc0
// Address: 180038bc0
// Size: 999 bytes


char * FUN_180038bc0(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x188) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x58;
    if (*(int *)(param_1 + 0x24c) != 0) {
      pcVar4 = (char *)(param_1 + 0x1a8);
      if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
        pcVar4 = *(char **)pcVar4;
      }
      in_RAX = strstr(pcVar4,"GOPRO");
      if (in_RAX != (char *)0x0) {
        *(undefined4 *)(param_1 + 0x18) = 0x9a;
        return in_RAX;
      }
    }
    return in_RAX;
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x59;
    return in_RAX;
  }
  pcVar4 = (char *)(param_1 + 0x1a8);
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"NIKON");
  if (pcVar3 != (char *)0x0) {
    uVar1 = 0x4d;
    if (*(int *)(param_1 + 0x24c) == 0) {
      uVar1 = 0x40;
    }
    pcVar4 = (char *)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    if (0xf < *(ulonglong *)(param_1 + 0x1e0)) {
      pcVar4 = *(char **)pcVar4;
    }
    pcVar4 = strstr(pcVar4,"COOLPIX P");
    if (pcVar4 == (char *)0x0) {
      return (char *)0x0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0x4e;
    return pcVar4;
  }
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"CANON");
  if (pcVar3 != (char *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0x53;
    return pcVar3;
  }
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"SONY");
  if (pcVar3 != (char *)0x0) {
    pcVar4 = (char *)(param_1 + 0x1c8);
    if (0xf < *(ulonglong *)(param_1 + 0x1e0)) {
      pcVar4 = *(char **)pcVar4;
    }
    pcVar4 = strstr(pcVar4,"DSC-R1");
    *(uint *)(param_1 + 0x18) = 0x55 - (uint)(pcVar4 != (char *)0x0);
    return (char *)-(longlong)pcVar4;
  }
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"PANASONIC");
  if (pcVar3 != (char *)0x0) {
    if (*(int *)(param_1 + 0x180) != 0) {
      uVar2 = (*(int *)(param_1 + 0x18c) != 0) + 0x56;
      *(uint *)(param_1 + 0x18) = uVar2;
      return (char *)(ulonglong)uVar2;
    }
    *(undefined4 *)(param_1 + 0x18) = 0x57;
    return (char *)0x57;
  }
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"LEICA");
  if (pcVar3 != (char *)0x0) {
    if (*(int *)(param_1 + 0x180) == 0) {
      return pcVar3;
    }
    *(undefined4 *)(param_1 + 0x18) = 0x56;
    return pcVar3;
  }
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"KODAK");
  if (pcVar3 != (char *)0x0) {
    pcVar4 = (char *)(param_1 + 0x1c8);
    if (0xf < *(ulonglong *)(param_1 + 0x1e0)) {
      pcVar4 = *(char **)pcVar4;
    }
    pcVar4 = strstr(pcVar4,"DCS Pro SLR");
    *(uint *)(param_1 + 0x18) = 0x62 - (uint)(pcVar4 != (char *)0x0);
    return (char *)-(longlong)pcVar4;
  }
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"EPSON");
  if (pcVar3 != (char *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 100;
    return pcVar3;
  }
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"HASSELBLAD");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = pcVar4;
    if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
      pcVar3 = *(char **)pcVar4;
    }
    pcVar3 = strstr(pcVar3,"MAMIYA");
    if (pcVar3 != (char *)0x0) {
      *(undefined4 *)(param_1 + 0x18) = 0x65;
      return pcVar3;
    }
    pcVar3 = pcVar4;
    if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
      pcVar3 = *(char **)pcVar4;
    }
    pcVar3 = strstr(pcVar3,"PENTAX");
    if (pcVar3 == (char *)0x0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
        pcVar3 = *(char **)pcVar4;
      }
      pcVar3 = strstr(pcVar3,"SAMSUNG");
      if (pcVar3 != (char *)0x0) {
        *(undefined4 *)(param_1 + 0x18) = 0x6a;
        return pcVar3;
      }
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
        pcVar3 = *(char **)pcVar4;
      }
      pcVar3 = strstr(pcVar3,"OLYMPUS");
      if (pcVar3 == (char *)0x0) {
        if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
          pcVar4 = *(char **)pcVar4;
        }
        pcVar3 = strstr(pcVar4,"OM DIGITAL SOLUTIONS");
        if (pcVar3 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      *(undefined4 *)(param_1 + 0x18) = 0x6b;
      return pcVar3;
    }
    *(undefined4 *)(param_1 + 0x18) = 0x68;
    return pcVar3;
  }
  pcVar4 = (char *)(param_1 + 0x1c8);
  pcVar3 = pcVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x1e0)) {
    pcVar3 = *(char **)pcVar4;
  }
  pcVar3 = strstr(pcVar3,"100C");
  if (pcVar3 == (char *)0x0) {
    if (0xf < *(ulonglong *)(param_1 + 0x1e0)) {
      pcVar4 = *(char **)pcVar4;
    }
    pcVar4 = strstr(pcVar4,"H5D");
    pcVar3 = (char *)0x9d;
    if (pcVar4 == (char *)0x0) goto LAB_180038eb6;
  }
  pcVar3 = (char *)0x63;
LAB_180038eb6:
  *(int *)(param_1 + 0x18) = (int)pcVar3;
  return pcVar3;
}


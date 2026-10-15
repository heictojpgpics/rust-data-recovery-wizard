// Function: FUN_18003f480
// Address: 18003f480
// Size: 323 bytes


ulonglong FUN_18003f480(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  
  iVar3 = _strnicmp((char *)(param_1 + 3),"NTFS    ",8);
  if (iVar3 == 0) {
    uVar5 = 0;
    if (((*(ushort *)(param_1 + 0xb) & 0x1ff) == 0) &&
       (uVar5 = (ulonglong)*(ushort *)(param_1 + 0xb), *(ushort *)(param_1 + 0xb) != 0)) {
      if (*(short *)(param_1 + 0xe) == 0) {
        uVar4 = FUN_18003f5d0(param_1);
        sVar2 = (short)uVar4;
        if (((((sVar2 == 1) || (sVar2 == 2)) || (sVar2 == 4)) ||
            (((sVar2 == 8 || (sVar2 == 0x10)) ||
             ((sVar2 == 0x20 || ((sVar2 == 0x40 || (sVar2 == 0x80)))))))) ||
           ((sVar2 == 0x100 ||
            ((((sVar2 == 0x200 || (sVar2 == 0x400)) || (sVar2 == 0x800)) || (sVar2 == 0x1000)))))) {
          uVar1 = *(ushort *)(param_1 + 0xe);
          if (uVar1 < 0x65) {
            uVar5 = CONCAT71((uint7)(byte)(uVar1 >> 8),1);
          }
          else {
            uVar5 = (ulonglong)(uVar1 >> 8) << 8;
          }
        }
        else {
          uVar5 = (ulonglong)(uint3)(int3)(char)(uVar4 >> 8) << 8;
        }
      }
      else {
        uVar5 = (ulonglong)(byte)((ushort)*(short *)(param_1 + 0xe) >> 8) << 8;
      }
    }
    else {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    uVar5 = CONCAT44(extraout_var,iVar3) & 0xffffffffffffff00;
  }
  return uVar5;
}


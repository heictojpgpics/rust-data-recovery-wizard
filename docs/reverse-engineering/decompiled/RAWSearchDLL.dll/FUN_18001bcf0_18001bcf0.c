// Function: FUN_18001bcf0
// Address: 18001bcf0
// Size: 209 bytes


ulonglong FUN_18001bcf0(byte *param_1)

{
  ulonglong in_RAX;
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 != (byte *)0x0) {
    uVar2 = 0;
    if ((param_1 != (byte *)0xfffffffffffffffc) &&
       (pbVar1 = param_1, uVar3 = uVar2, param_1 < param_1 + 4)) {
      do {
        in_RAX = (ulonglong)*pbVar1;
        pbVar1 = pbVar1 + 1;
        uVar3 = uVar3 << 8 | in_RAX;
      } while (pbVar1 != param_1 + 4);
      if (uVar3 == 0x1b3) {
        pbVar1 = param_1 + 0xc;
        if (((pbVar1 != (byte *)0x0) && (param_1 != (byte *)0xfffffffffffffff0)) &&
           (uVar3 = uVar2, pbVar1 < param_1 + 0x10)) {
          do {
            in_RAX = (ulonglong)*pbVar1;
            pbVar1 = pbVar1 + 1;
            uVar3 = uVar3 << 8 | in_RAX;
          } while (pbVar1 != param_1 + 0x10);
          if (uVar3 == 0x1b8) {
            pbVar1 = param_1 + 0x14;
            if (((pbVar1 != (byte *)0x0) && (param_1 != (byte *)0xffffffffffffffe8)) &&
               (pbVar1 < param_1 + 0x18)) {
              do {
                in_RAX = (ulonglong)*pbVar1;
                pbVar1 = pbVar1 + 1;
                uVar2 = uVar2 << 8 | in_RAX;
              } while (pbVar1 != param_1 + 0x18);
              if (uVar2 == 0x100) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


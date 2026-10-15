// Function: FUN_180034560
// Address: 180034560
// Size: 206 bytes


ushort FUN_180034560(double param_1,longlong param_2,longlong param_3,byte *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  longlong in_RCX;
  ushort uVar4;
  bool bVar5;
  
  sVar3 = *(short *)(param_2 + 6);
  if ((sVar3 == 0x4949) || (sVar3 == 0x4d4d)) {
    bVar5 = sVar3 == 0x4949;
    *(bool *)(in_RCX + 0x110) = bVar5;
    if (bVar5) {
      uVar1 = *(undefined1 *)(param_2 + 9);
      uVar2 = *(undefined1 *)(param_2 + 8);
    }
    else {
      uVar1 = *(undefined1 *)(param_2 + 8);
      uVar2 = *(undefined1 *)(param_2 + 9);
    }
    if (CONCAT11(uVar1,uVar2) == 0x2a) {
      if (sVar3 == 0x4949) {
        uVar4 = *(ushort *)(param_2 + -2);
      }
      else {
        uVar4 = CONCAT11(*(undefined1 *)(param_2 + -2),*(undefined1 *)(param_2 + -1));
      }
      FUN_180034630(param_1,(byte *)(param_2 + 0xe),param_3,bVar5,param_2 + 6,uVar4,param_4);
      return uVar4;
    }
  }
  return 0;
}


// Function: FUN_180020390
// Address: 180020390
// Size: 169 bytes


ulonglong FUN_180020390(undefined8 param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  if (((((param_2 != (longlong *)0x0) && (lVar2 = *(longlong *)(param_3 + 0x18), lVar2 != 0)) &&
       (in_RAX = *(ulonglong *)(param_3 + 0x10), in_RAX != 0)) &&
      ((0x4f < *(uint *)(in_RAX + 0x18) &&
       ((*(int *)(param_3 + 8) == 0xb || (*(int *)(param_3 + 0xc) == 0xb)))))) &&
     (*(short *)(in_RAX + 0x36) == 0x18)) {
    uVar1 = *(ushort *)(in_RAX + 0x34);
    if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
      in_RAX = *(ulonglong *)((longlong)param_2 + 0x1b);
    }
    else {
      in_RAX = (*(code *)((undefined **)*param_2)[3])(param_2);
      lVar2 = *(longlong *)(param_3 + 0x18);
    }
    if (in_RAX == *(ulonglong *)((ulonglong)uVar1 + 0x30 + lVar2)) {
      in_RAX = (ulonglong)uVar1;
      lVar2 = *(longlong *)(in_RAX + 0x40 + lVar2);
      if (lVar2 != 0) {
        *(longlong *)((longlong)param_2 + 0x1b) = lVar2;
        return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


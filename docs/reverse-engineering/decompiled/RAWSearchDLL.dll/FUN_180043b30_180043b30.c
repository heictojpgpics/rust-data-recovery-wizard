// Function: FUN_180043b30
// Address: 180043b30
// Size: 100 bytes


undefined8 FUN_180043b30(undefined8 param_1,short *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  
  if ((((((*param_2 == -0x74e1) && ((char)param_2[1] == '\b')) && (param_2 != (short *)0x0)) &&
       ((*(char *)((longlong)param_2 + 1) == -0x75 && ((char)param_2[1] == '\b')))) &&
      ((bVar1 = *(byte *)((longlong)param_2 + 3), (bVar1 & 0x60) == 0 &&
       ((-1 < (char)bVar1 && (bVar2 = *(byte *)((longlong)param_2 + 9), bVar2 < 0xe)))))) &&
     (((bVar1 & 0xc0) == 0 && ((bVar2 < 0xe || (bVar2 == 0xff)))))) {
    *(undefined4 *)(param_3 + 0x18) = 0x1f;
    return 1;
  }
  return 0;
}


// Function: FUN_180032d70
// Address: 180032d70
// Size: 374 bytes


undefined8 FUN_180032d70(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar4 = *(ulonglong *)(param_1 + 0x110);
  uVar6 = 2;
  uVar3 = uVar4;
  if (*(char *)(param_1 + 0x118) != '\0') {
    bVar2 = (byte)*(undefined2 *)(param_2 + 10);
    if ((char)bVar2 < '\0') {
      uVar3 = (longlong)(1 << (bVar2 & 7) + 1) * 3 + 0xd;
    }
    else {
      uVar3 = 0xd;
    }
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  uVar7 = (ulonglong)param_3;
  if ((longlong)uVar4 < (longlong)uVar7) {
    uVar4 = uVar3;
    iVar1 = 0;
    while( true ) {
      if ((uVar7 <= uVar4) || (0x400 < iVar1)) goto LAB_180032ea8;
      if ((*(longlong *)(param_1 + 0x128) != 0) &&
         (((uVar4 + 8 < uVar7 && (*(int *)(uVar4 + param_2) == 0)) &&
          (*(int *)(uVar4 + 4 + param_2) == 0)))) break;
      bVar2 = *(byte *)(uVar4 + param_2);
      if (bVar2 == 0x21) {
        uVar4 = uVar4 + 2;
        bVar2 = *(byte *)(uVar4 + param_2);
LAB_180032e8f:
        uVar4 = uVar4 + bVar2;
      }
      else if (bVar2 == 0x2c) {
        bVar2 = (byte)*(undefined2 *)(uVar4 + 9 + param_2);
        if ((char)bVar2 < '\0') {
          uVar4 = uVar4 + (longlong)(1 << (bVar2 & 7) + 1) * 3 + 10;
        }
        else {
          uVar4 = uVar4 + 10;
        }
      }
      else if (bVar2 == 0x3b) {
        *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + 1;
      }
      else if (bVar2 != 0) goto LAB_180032e8f;
      uVar4 = uVar4 + 1;
      iVar1 = iVar1 + 1;
    }
    uVar6 = 1;
  }
LAB_180032ea8:
  *(ulonglong *)(param_1 + 0x110) = uVar4 - uVar7;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar7;
  puVar5 = FUN_180001350();
  if (*(ulonglong *)(puVar5 + 0x70) < *(ulonglong *)(param_1 + 0x10)) {
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(puVar5 + 0x70);
    return 1;
  }
  return uVar6;
}


// Function: FUN_18000a300
// Address: 18000a300
// Size: 100 bytes


ulonglong FUN_18000a300(longlong param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  pbVar4 = (byte *)*puVar1;
  if (pbVar4 != (byte *)0x0) {
    if (pbVar4 < pbVar4 + **(int **)(param_1 + 0x50)) {
LAB_18000a35a:
      return (ulonglong)*pbVar4;
    }
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if ((pbVar2 != (byte *)0x0) && ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
      pbVar5 = *(byte **)(param_1 + 0x68);
      if (*(byte **)(param_1 + 0x68) < pbVar2) {
        pbVar5 = pbVar2;
      }
      if (pbVar4 < pbVar5) {
        *(byte **)(param_1 + 0x68) = pbVar5;
        uVar3 = *puVar1;
        *puVar1 = uVar3;
        **(int **)(param_1 + 0x50) = (int)pbVar5 - (int)uVar3;
        pbVar4 = (byte *)**(undefined8 **)(param_1 + 0x38);
        goto LAB_18000a35a;
      }
    }
  }
  return 0xffffffff;
}


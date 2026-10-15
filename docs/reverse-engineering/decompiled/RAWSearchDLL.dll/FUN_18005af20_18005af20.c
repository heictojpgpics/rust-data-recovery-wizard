// Function: FUN_18005af20
// Address: 18005af20
// Size: 186 bytes


uint * FUN_18005af20(longlong *param_1,byte *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  
  do {
    bVar4 = *param_2;
    if (((uint)(int)(char)bVar4 >> 7 & 1) != 0) {
LAB_18005af6d:
      if (bVar4 == 0x2f) {
        *(undefined4 *)(param_1 + 0xd) = 2;
        param_2 = param_2 + 1;
      }
      pbVar2 = FUN_1800590f0((uint *)(param_1 + 3),param_2);
      if (param_1[4] == param_1[5]) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)FUN_18005ac90(param_1,pbVar2,param_4);
        if (((puVar3 != (uint *)0x0) && ((char)*puVar3 != '\0')) && ((int)param_1[0xd] == 0)) {
          puVar3 = FUN_180059c30(param_1,puVar3,param_3);
        }
      }
      return puVar3;
    }
    iVar1 = isspace((uint)bVar4);
    if (iVar1 == 0) {
      bVar4 = *param_2;
      goto LAB_18005af6d;
    }
    if ((param_4 != (int *)0x0) && (*param_2 == 10)) {
      *param_4 = *param_4 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}


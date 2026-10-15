// Function: FUN_180045690
// Address: 180045690
// Size: 187 bytes


undefined8
FUN_180045690(int *param_1,int *param_2,undefined8 param_3,byte param_4,longlong *param_5,
             undefined8 *****param_6,uint *param_7,undefined4 *param_8,undefined8 *param_9)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0x2014b50) {
      FUN_180046120((longlong)param_1,param_2,param_4,(undefined4 *)param_5);
    }
    else if (iVar1 == 0x4034b50) {
      FUN_180045750((undefined8 *)param_1,param_2,param_3,(ulonglong)param_4,param_5,param_6,param_7
                    ,param_8,param_9);
    }
    else {
      if (iVar1 != 0x6054b50) {
        return 0;
      }
      *param_2 = *(ushort *)(param_1 + 5) + 0x16;
    }
    uVar2 = 1;
  }
  return uVar2;
}


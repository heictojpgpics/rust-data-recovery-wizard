// Function: FUN_180041cd0
// Address: 180041cd0
// Size: 169 bytes


undefined8 FUN_180041cd0(undefined8 param_1,int *param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  
  if (((param_2 != (int *)0x0) && ((short)param_2[2] == DAT_18006cf40)) &&
     (*(char *)((longlong)param_2 + 10) == DAT_18006cf42)) {
    *(undefined4 *)(param_3 + 0x18) = 0x50;
    FUN_180001350();
    lVar2 = 0;
    if (((*param_2 == DAT_18006cf38) && ((short)param_2[2] == DAT_18006cf40)) &&
       (*(char *)((longlong)param_2 + 10) == DAT_18006cf42)) {
      uVar1 = (ushort)param_2[1];
      uVar3 = (ushort)((uint)param_2[1] >> 0x10);
      lVar2 = ((longlong)(int)((uint)(ushort)(uVar1 << 8 | uVar1 >> 8) << 0x10) |
              (ulonglong)(ushort)(uVar3 << 8 | uVar3 >> 8)) + 8;
    }
    *(longlong *)(param_3 + 0x10) = lVar2;
    return 1;
  }
  return 0;
}


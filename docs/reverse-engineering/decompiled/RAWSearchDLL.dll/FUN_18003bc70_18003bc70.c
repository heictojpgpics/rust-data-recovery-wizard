// Function: FUN_18003bc70
// Address: 18003bc70
// Size: 49 bytes


undefined8 FUN_18003bc70(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((((param_2 != 0) &&
       ((ushort)(*(ushort *)(param_2 + 4) << 8 | *(ushort *)(param_2 + 4) >> 8) == 1)) &&
      (*(short *)(param_2 + 6) == 0)) && (*(int *)(param_2 + 8) == 0)) {
    *(undefined4 *)(param_3 + 0x18) = 0x36;
    return 1;
  }
  return 0;
}


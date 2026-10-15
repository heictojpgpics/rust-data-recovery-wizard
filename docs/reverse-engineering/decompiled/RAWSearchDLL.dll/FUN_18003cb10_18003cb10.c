// Function: FUN_18003cb10
// Address: 18003cb10
// Size: 216 bytes


undefined8 FUN_18003cb10(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 4) == DAT_180093804) && (*(short *)(param_2 + 8) == DAT_180093808)) {
      if (((*(int *)(param_2 + 10) == DAT_18009380a) && (*(char *)(param_2 + 0xe) == DAT_18009380e))
         || ((*(int *)(param_2 + 10) == DAT_18009383a && (*(char *)(param_2 + 0xe) == DAT_18009383e)
             ))) goto LAB_18003cbd7;
      if (*(int *)(param_2 + 10) != DAT_180093882) {
        return 0;
      }
      bVar1 = *(char *)(param_2 + 0xe) == DAT_180093886;
    }
    else {
      if (*(int *)(param_2 + 4) != DAT_180093864) {
        return 0;
      }
      if (*(short *)(param_2 + 8) != DAT_180093868) {
        return 0;
      }
      if (((*(int *)(param_2 + 10) == DAT_18009386a) && (*(char *)(param_2 + 0xe) == DAT_18009386e))
         || ((*(int *)(param_2 + 10) == DAT_180093852 && (*(char *)(param_2 + 0xe) == DAT_180093856)
             ))) goto LAB_18003cbd7;
      if (*(int *)(param_2 + 10) != DAT_180093822) {
        return 0;
      }
      bVar1 = *(char *)(param_2 + 0xe) == DAT_180093826;
    }
    if (bVar1) {
LAB_18003cbd7:
      *(undefined4 *)(param_3 + 0x18) = 0x12;
      return 1;
    }
  }
  return 0;
}


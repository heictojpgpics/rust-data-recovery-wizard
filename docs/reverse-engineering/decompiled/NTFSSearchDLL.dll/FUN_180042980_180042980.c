// Function: FUN_180042980
// Address: 180042980
// Size: 238 bytes


longlong FUN_180042980(longlong param_1,short param_2,longlong param_3,undefined8 *param_4,
                      byte param_5)

{
  longlong lVar1;
  
  if ((param_2 == 0) || (param_4 == (undefined8 *)0x0)) {
    lVar1 = -1;
  }
  else {
    lVar1 = FUN_180040570(param_4,(longlong)(param_1 * (ulonglong)param_5) / (longlong)param_2);
    if (lVar1 == -1) {
      lVar1 = -1;
    }
    else {
      lVar1 = param_3 + lVar1 * param_2 +
              (longlong)(param_1 * (ulonglong)param_5) % (longlong)param_2;
    }
  }
  return lVar1;
}


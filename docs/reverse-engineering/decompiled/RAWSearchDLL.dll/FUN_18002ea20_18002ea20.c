// Function: FUN_18002ea20
// Address: 18002ea20
// Size: 35 bytes


char FUN_18002ea20(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_18002ea50(param_2);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_3 + 0x18) = 0x76;
  }
  return cVar1;
}


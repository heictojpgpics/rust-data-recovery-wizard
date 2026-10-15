// Function: FUN_18003ee10
// Address: 18003ee10
// Size: 48 bytes


undefined8 FUN_18003ee10(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (((param_2 != 0) && (*(longlong *)(param_2 + 4) == DAT_1800938cc)) &&
     (*(short *)(param_2 + 0xc) == DAT_1800938d4)) {
    *(undefined4 *)(param_3 + 0x18) = 0x78;
    return 1;
  }
  return 0;
}


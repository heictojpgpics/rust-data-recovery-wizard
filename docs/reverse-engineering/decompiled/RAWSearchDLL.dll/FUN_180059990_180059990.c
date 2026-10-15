// Function: FUN_180059990
// Address: 180059990
// Size: 172 bytes


void FUN_180059990(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = tinyxml2::XMLNode::vftable;
  FUN_180059a70((longlong)param_1);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if (param_1 == *(undefined8 **)(lVar1 + 0x38)) {
      *(undefined8 *)(lVar1 + 0x38) = (*(undefined8 **)(lVar1 + 0x38))[10];
    }
    if (param_1 == *(undefined8 **)(lVar1 + 0x40)) {
      *(undefined8 *)(lVar1 + 0x40) = (*(undefined8 **)(lVar1 + 0x40))[9];
    }
    if (param_1[9] != 0) {
      *(undefined8 *)(param_1[9] + 0x50) = param_1[10];
    }
    if (param_1[10] != 0) {
      *(undefined8 *)(param_1[10] + 0x48) = param_1[9];
    }
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
  }
  if ((*(uint *)(param_1 + 3) & 0x200) != 0) {
    free((void *)param_1[4]);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


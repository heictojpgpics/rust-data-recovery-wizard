// Function: FUN_180058eb0
// Address: 180058eb0
// Size: 43 bytes


undefined8 * FUN_180058eb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = tinyxml2::MemPool::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


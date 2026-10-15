// Function: FUN_180032400
// Address: 180032400
// Size: 85 bytes


undefined8 * FUN_180032400(undefined8 *param_1,uint param_2)

{
  *param_1 = BruteForce::CM2TSAnalyser::CM2TSFileInfo::vftable;
  DAT_18008f066 = 1;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


// Function: FUN_180032620
// Address: 180032620
// Size: 78 bytes


undefined8 * FUN_180032620(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = BruteForce::CM2TSAnalyser::vftable;
  param_1[2] = BruteForce::CM2TSAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


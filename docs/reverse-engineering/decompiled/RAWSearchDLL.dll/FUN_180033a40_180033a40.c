// Function: FUN_180033a40
// Address: 180033a40
// Size: 72 bytes


void FUN_180033a40(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    lVar1 = __RTDynamicCast(*(longlong *)(param_1 + 0xd0),0,&IRawFileAnalyser::RTTI_Type_Descriptor,
                            &BruteForce::JpegAnalyzer::RTTI_Type_Descriptor,0);
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0x18);
    }
  }
  return;
}


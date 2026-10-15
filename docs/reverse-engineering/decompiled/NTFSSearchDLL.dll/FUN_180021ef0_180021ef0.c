// Function: FUN_180021ef0
// Address: 180021ef0
// Size: 156 bytes


longlong FUN_180021ef0(longlong param_1,uint param_2)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = FUN_180044580(param_2);
  if (DAT_180073198 < dVar2) {
    lVar1 = __RTDynamicCast(*(undefined8 *)(param_1 + 0x30),0,&IFileProperties::RTTI_Type_Descriptor
                            ,&CNTFSFileProperties::RTTI_Type_Descriptor,0);
    if (lVar1 != 0) {
      return (longlong)
             ((double)*(longlong *)(param_1 + 0x58) - (double)*(longlong *)(lVar1 + 0x58) * dVar2);
    }
  }
  return -0x8000000000000000;
}


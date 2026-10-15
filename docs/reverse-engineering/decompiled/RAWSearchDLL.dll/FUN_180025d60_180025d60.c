// Function: FUN_180025d60
// Address: 180025d60
// Size: 268 bytes


undefined8 * FUN_180025d60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res10;
  undefined8 *local_res18;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x148);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  local_res18 = puVar1;
  FUN_18000b520(puVar1);
  *puVar1 = RawFormat_xjq::MOBIAnalyser::MOBIRawFileInfo::vftable;
  FUN_180001690((undefined1 *)(puVar1 + 0x24));
  local_res10 = (undefined8 *)FUN_1800020c0(0x48);
  puVar4 = (undefined8 *)0x0;
  puVar2 = puVar4;
  if (local_res10 != (undefined8 *)0x0) {
    *(undefined1 *)(local_res10 + 1) = 0;
    local_res10[2] = puVar1;
    local_res10[3] = 0;
    local_res10[4] = 0;
    local_res10[5] = 0x1f400000;
    local_res10[6] = 0x200;
    *local_res10 = RawFormat_xjq::
                   CalculateSize_EndTag<class_RawFormat_xjq::MOBIAnalyser::MOBIRawFileInfo,__int64>
                   ::vftable;
    local_res10[7] = 0xe98e0d0a;
    *(undefined4 *)(local_res10 + 8) = 4;
    *(undefined1 *)((longlong)local_res10 + 0x44) = 1;
    puVar2 = local_res10;
  }
  puVar1[0x28] = puVar2;
  puVar1[0x22] = 0;
  *(undefined1 *)(puVar1 + 0x23) = 0;
  puVar3 = (undefined8 *)FUN_1800016b0(puVar1 + 0x24);
  puVar2 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    puVar2 = (undefined8 *)*puVar3;
  }
  puVar3[2] = puVar4;
  local_res10 = (undefined8 *)((ulonglong)local_res10 & 0xffffffffffffff00);
  FUN_180001300((undefined1 *)puVar2,(undefined1 *)&local_res10);
  *(undefined4 *)(puVar1 + 3) = 0x85;
  return puVar1;
}


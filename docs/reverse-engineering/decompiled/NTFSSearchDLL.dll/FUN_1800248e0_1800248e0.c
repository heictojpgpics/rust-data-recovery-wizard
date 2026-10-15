// Function: FUN_1800248e0
// Address: 1800248e0
// Size: 160 bytes


longlong * FUN_1800248e0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x50;
  puVar1 = (undefined8 *)FUN_18002be40(0x50);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = std::_Ref_count_obj<class_CMFTInfo>::vftable;
    puVar2 = (undefined8 *)FUN_180001100(uVar3,puVar1 + 2);
    FUN_1800073c0(puVar2,param_2);
  }
  FUN_180005f80(param_1);
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  return param_1;
}


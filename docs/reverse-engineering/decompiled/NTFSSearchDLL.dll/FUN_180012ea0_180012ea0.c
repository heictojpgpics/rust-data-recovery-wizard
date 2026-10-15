// Function: FUN_180012ea0
// Address: 180012ea0
// Size: 85 bytes


longlong FUN_180012ea0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = FUN_18002be40(0x28);
  lVar3 = lVar1;
  plVar2 = (longlong *)FUN_180001100(lVar1,lVar1);
  *plVar2 = lVar3;
  plVar2 = (longlong *)FUN_180001100(lVar1,lVar3 + 8);
  *plVar2 = lVar1;
  plVar2 = (longlong *)FUN_180001100(lVar1,lVar1 + 0x10);
  *plVar2 = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return lVar1;
}


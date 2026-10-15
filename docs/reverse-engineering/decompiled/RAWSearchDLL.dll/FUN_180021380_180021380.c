// Function: FUN_180021380
// Address: 180021380
// Size: 85 bytes


longlong FUN_180021380(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = FUN_1800020c0(0x50);
  lVar3 = lVar1;
  plVar2 = (longlong *)FUN_1800012e0(lVar1,lVar1);
  *plVar2 = lVar3;
  plVar2 = (longlong *)FUN_1800012e0(lVar1,lVar3 + 8);
  *plVar2 = lVar1;
  plVar2 = (longlong *)FUN_1800012e0(lVar1,lVar1 + 0x10);
  *plVar2 = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return lVar1;
}


// Function: Catch@1800496eb
// Address: 1800496eb
// Size: 62 bytes


void Catch_1800496eb(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x70);
  plVar1 = (longlong *)FUN_180002670(lVar2);
  FUN_180013ef0(lVar2,*(void **)(param_2 + 0x20),*plVar1,*(void **)(param_2 + 0x78));
  *plVar1 = *(longlong *)(param_2 + 0x88);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


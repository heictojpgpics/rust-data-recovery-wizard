// Function: Catch@180062020
// Address: 180062020
// Size: 93 bytes


void Catch_180062020(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)FUN_180021080(0x180118390);
  plVar1 = *(longlong **)(param_2 + 0x90);
  puVar3 = &DAT_180118390;
  FUN_180022300(&DAT_180118390,(longlong)plVar1,*plVar2,*(longlong *)(param_2 + 0x88));
  FUN_1800212d0(puVar3,plVar1,(longlong *)*plVar2);
  *plVar2 = *(longlong *)(param_2 + 0x98);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


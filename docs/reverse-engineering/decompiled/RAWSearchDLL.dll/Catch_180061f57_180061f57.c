// Function: Catch@180061f57
// Address: 180061f57
// Size: 127 bytes


void Catch_180061f57(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x88);
  lVar5 = *(longlong *)(param_2 + 0x80) * 0x90 + lVar2;
  lVar1 = lVar2 + *(longlong *)(param_2 + 0x80) * 0x48;
  FUN_180022300(&DAT_180118390,lVar1,lVar5,lVar2);
  plVar4 = (longlong *)FUN_180021080(0x180118390);
  FUN_180023d50(lVar5,*plVar4,lVar1);
  plVar3 = *(longlong **)(param_2 + 0x98);
  FUN_1800212d0(lVar5,plVar3,(longlong *)*plVar4);
  *plVar4 = (longlong)plVar3;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


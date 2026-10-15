// Function: Catch@180049664
// Address: 180049664
// Size: 95 bytes


void Catch_180049664(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  void *pvVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  pvVar3 = *(void **)(param_2 + 0x78);
  pvVar5 = (void *)(lVar2 * 0x10 + (longlong)pvVar3);
  pvVar1 = (void *)((longlong)pvVar3 + lVar2 * 8);
  FUN_180013ef0(lVar2,pvVar1,(longlong)pvVar5,pvVar3);
  plVar4 = (longlong *)FUN_180002670(*(longlong *)(param_2 + 0x70));
  FUN_180013c20(pvVar5,*plVar4,pvVar1);
  *plVar4 = *(longlong *)(param_2 + 0x88);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


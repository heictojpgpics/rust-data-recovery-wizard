// Function: Catch@180049760
// Address: 180049760
// Size: 104 bytes


void Catch_180049760(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_2 + 0x70);
  plVar1 = *(longlong **)(param_2 + 0x20);
  if (plVar5 != plVar1) {
    lVar2 = *(longlong *)(param_2 + 0x68);
    lVar3 = *(longlong *)(param_2 + 0x60);
    do {
      plVar4 = *(longlong **)(lVar2 + 8);
      *(longlong *)plVar4[1] = *plVar4;
      *(longlong *)(*plVar4 + 8) = plVar4[1];
      free(plVar4);
      plVar4 = (longlong *)(lVar3 + 8);
      *plVar4 = *plVar4 + -1;
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != plVar1);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


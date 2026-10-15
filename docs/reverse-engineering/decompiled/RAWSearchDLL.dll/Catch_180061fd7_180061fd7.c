// Function: Catch@180061fd7
// Address: 180061fd7
// Size: 72 bytes


void Catch_180061fd7(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180021080(0x180118390);
  lVar1 = *(longlong *)(param_2 + 0x88);
  FUN_1800212d0(*(longlong *)(param_2 + 0x80),
                (longlong *)(lVar1 + *(longlong *)(param_2 + 0x80) * 0x48),(longlong *)*plVar2);
  *plVar2 = lVar1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


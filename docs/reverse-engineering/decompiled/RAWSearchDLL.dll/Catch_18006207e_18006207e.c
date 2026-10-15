// Function: Catch@18006207e
// Address: 18006207e
// Size: 63 bytes


void Catch_18006207e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_180118390;
  puVar1 = (undefined8 *)FUN_180021080(0x180118390);
  FUN_1800212d0(puVar2,*(longlong **)(param_2 + 0x90),(longlong *)*puVar1);
  *puVar1 = *(undefined8 *)(param_2 + 0x88);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


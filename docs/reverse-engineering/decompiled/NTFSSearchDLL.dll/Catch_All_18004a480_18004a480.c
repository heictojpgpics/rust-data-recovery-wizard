// Function: Catch_All@18004a480
// Address: 18004a480
// Size: 59 bytes


void Catch_All_18004a480(undefined8 param_1,longlong param_2)

{
  _guard_check_icall();
  deallocate(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
             *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


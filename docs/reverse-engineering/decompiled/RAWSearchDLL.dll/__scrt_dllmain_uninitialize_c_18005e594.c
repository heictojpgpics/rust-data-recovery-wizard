// Function: __scrt_dllmain_uninitialize_c
// Address: 18005e594
// Size: 48 bytes


/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Library: Visual Studio 2017 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_1800963d0);
    return;
  }
  uVar2 = FUN_18000bae0();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}


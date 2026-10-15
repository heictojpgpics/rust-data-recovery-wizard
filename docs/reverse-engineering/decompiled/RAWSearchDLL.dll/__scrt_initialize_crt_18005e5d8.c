// Function: __scrt_initialize_crt
// Address: 18005e5d8
// Size: 73 bytes


/* Library Function - Single Match
    __scrt_initialize_crt
   
   Library: Visual Studio 2017 Release */

longlong __scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_1800963c8 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180012540();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180012540();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180012540();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}


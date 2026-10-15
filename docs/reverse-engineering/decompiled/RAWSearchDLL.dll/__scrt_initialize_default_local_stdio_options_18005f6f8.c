// Function: __scrt_initialize_default_local_stdio_options
// Address: 18005f6f8
// Size: 27 bytes


/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_18000b450();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180058e40();
  *puVar1 = *puVar1 | 2;
  return;
}


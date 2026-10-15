// Function: __scrt_initialize_default_local_stdio_options
// Address: 18003eec0
// Size: 27 bytes


/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180007960();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_18003df20();
  *puVar1 = *puVar1 | 2;
  return;
}


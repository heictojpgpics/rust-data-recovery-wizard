// Function: dllmain_dispatch
// Address: 18003e380
// Size: 301 bytes


/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_1800866c4 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) ||
          (((DAT_18004c400 == 0 ||
            (iVar1 = (*(code *)PTR__guard_dispatch_icall_18004c388)(), iVar1 != 0)) &&
           (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0)))) {
    uVar2 = FUN_180001080();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_180001080();
      dllmain_crt_dispatch(param_1,0,param_3);
      if (DAT_18004c400 != 0) {
        (*(code *)PTR__guard_dispatch_icall_18004c388)(param_1,0,param_3);
      }
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0)) {
      if (DAT_18004c400 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = (*(code *)PTR__guard_dispatch_icall_18004c388)(param_1,param_2,param_3);
      }
    }
  }
  return iVar1;
}


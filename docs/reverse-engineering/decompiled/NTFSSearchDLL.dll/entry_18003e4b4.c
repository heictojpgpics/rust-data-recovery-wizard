// Function: entry
// Address: 18003e4b4
// Size: 61 bytes


void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}


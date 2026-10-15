// Function: FUN_180013ef0
// Address: 180013ef0
// Size: 60 bytes


longlong FUN_180013ef0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  void *_Dst;
  undefined8 local_res8;
  
  _Dst = param_4;
  local_res8 = param_1;
  FUN_180002ca0((undefined1 *)&local_res8);
  memmove(_Dst,param_2,param_3 - (longlong)param_2);
  return (param_3 - (longlong)param_2) + (longlong)param_4;
}


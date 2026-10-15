// Function: FUN_180058fc0
// Address: 180058fc0
// Size: 98 bytes


int FUN_180058fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_18000b450();
  iVar1 = __stdio_common_vsnprintf_s
                    (*puVar2,param_1,param_2,0xffffffffffffffff,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


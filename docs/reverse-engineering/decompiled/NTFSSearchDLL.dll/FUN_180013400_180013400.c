// Function: FUN_180013400
// Address: 180013400
// Size: 102 bytes


int FUN_180013400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180007960();
  iVar1 = __stdio_common_vswprintf_s(*puVar2,param_1,0x104,param_2,0,&local_res18,uVar3);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


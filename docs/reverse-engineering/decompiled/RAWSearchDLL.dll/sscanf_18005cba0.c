// Function: sscanf
// Address: 18005cba0
// Size: 82 bytes


/* Library Function - Single Match
    sscanf
   
   Library: Visual Studio 2019 Release */

int __cdecl sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180058e40();
  iVar1 = __stdio_common_vsscanf(*puVar2,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar1;
}


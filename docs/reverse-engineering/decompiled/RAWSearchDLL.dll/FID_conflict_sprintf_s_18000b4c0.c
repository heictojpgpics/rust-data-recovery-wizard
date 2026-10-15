// Function: FID_conflict:sprintf_s
// Address: 18000b4c0
// Size: 88 bytes


/* Library Function - Multiple Matches With Different Base Names
    sprintf_s
    swprintf_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl FID_conflict_sprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_18000b450();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,_Dst,_SizeInWords,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


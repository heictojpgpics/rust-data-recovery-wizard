// Function: memcmp
// Address: 180046c03
// Size: 6 bytes


int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180046c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}


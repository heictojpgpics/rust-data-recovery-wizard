// Function: __scrt_is_nonwritable_in_current_image
// Address: 18005e6fc
// Size: 151 bytes


/* Library Function - Single Match
    __scrt_is_nonwritable_in_current_image
   
   Library: Visual Studio 2017 Release */

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint7 uVar4;
  longlong lVar5;
  
  uVar3 = 0x5a4d;
  if (((IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) &&
      (uVar2 = (ulonglong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew, uVar3 = uVar2,
      *(int *)(uVar2 + 0x180000000) == 0x4550)) &&
     (uVar3 = 0x20b,
     *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + (uVar2 - 4)) == 0x20b)) {
    lVar5 = uVar2 + 0x180000018 +
            (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + (uVar2 - 8));
    uVar3 = (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + uVar2 + 6);
    lVar1 = lVar5 + uVar3 * 0x28;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x28) {
      if (((ulonglong)*(uint *)(lVar5 + 0xc) <= param_1 - 0x180000000U) &&
         (uVar3 = (ulonglong)(*(int *)(lVar5 + 8) + *(uint *)(lVar5 + 0xc)),
         param_1 - 0x180000000U < uVar3)) goto LAB_18005e773;
    }
    lVar5 = 0;
LAB_18005e773:
    if (lVar5 == 0) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar4 = (uint7)(uVar3 >> 8);
      if (*(int *)(lVar5 + 0x24) < 0) {
        uVar3 = (ulonglong)uVar4 << 8;
      }
      else {
        uVar3 = CONCAT71(uVar4,1);
      }
    }
  }
  else {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}


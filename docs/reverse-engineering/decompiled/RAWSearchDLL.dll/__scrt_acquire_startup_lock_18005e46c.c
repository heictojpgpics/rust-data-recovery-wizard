// Function: __scrt_acquire_startup_lock
// Address: 18005e46c
// Size: 57 bytes


/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Library: Visual Studio 2017 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  ulonglong uVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT71(extraout_var,bVar2);
  if ((int)uVar3 == 0) {
LAB_18005e49a:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      uVar3 = 0;
      LOCK();
      bVar2 = DAT_1800963c0 == 0;
      uVar1 = *(ulonglong *)((longlong)Self + 8);
      if (!bVar2) {
        uVar3 = DAT_1800963c0;
        uVar1 = DAT_1800963c0;
      }
      DAT_1800963c0 = uVar1;
      UNLOCK();
      if (bVar2) goto LAB_18005e49a;
    } while (*(ulonglong *)((longlong)Self + 8) != uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}


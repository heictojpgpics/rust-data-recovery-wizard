// Function: __scrt_acquire_startup_lock
// Address: 18003e870
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
LAB_18003e89e:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      uVar3 = 0;
      LOCK();
      bVar2 = DAT_180086718 == 0;
      uVar1 = *(ulonglong *)((longlong)Self + 8);
      if (!bVar2) {
        uVar3 = DAT_180086718;
        uVar1 = DAT_180086718;
      }
      DAT_180086718 = uVar1;
      UNLOCK();
      if (bVar2) goto LAB_18003e89e;
    } while (*(ulonglong *)((longlong)Self + 8) != uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}


// Function: __report_gsfailure
// Address: 18005f0ec
// Size: 209 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_gsfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x18005f116;
  capture_previous_context((PCONTEXT)&DAT_1800964f0);
  _DAT_180096460 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180096588 = puVar3 + 0x40;
  _DAT_180096570 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180096450 = 0xc0000409;
  _DAT_180096454 = 1;
  _DAT_180096468 = 1;
  DAT_180096470 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18008f028;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18008f020;
  *(undefined8 *)(puVar3 + -8) = 0x18005f1b8;
  DAT_1800965e8 = _DAT_180096460;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180066810);
  return;
}


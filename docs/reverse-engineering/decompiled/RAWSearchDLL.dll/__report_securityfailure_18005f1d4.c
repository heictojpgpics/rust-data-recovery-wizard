// Function: __report_securityfailure
// Address: 18005f1d4
// Size: 155 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x18005f1fe;
  capture_current_context((PCONTEXT)&DAT_1800964f0);
  _DAT_180096460 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_180096588 = puVar3 + 0x30;
  _DAT_180096450 = 0xc0000409;
  _DAT_180096454 = 1;
  _DAT_180096468 = 1;
  DAT_180096470 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18005f26a;
  DAT_1800965e8 = _DAT_180096460;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180066810);
  return;
}


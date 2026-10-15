// Function: __report_gsfailure
// Address: 18003ecb0
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
  *(undefined8 *)(puVar3 + -8) = 0x18003ecda;
  capture_previous_context((PCONTEXT)&DAT_180086800);
  _DAT_180086770 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180086898 = puVar3 + 0x40;
  _DAT_180086880 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180086760 = 0xc0000409;
  _DAT_180086764 = 1;
  _DAT_180086778 = 1;
  DAT_180086780 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180086010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180086008;
  *(undefined8 *)(puVar3 + -8) = 0x18003ed7c;
  DAT_1800868f8 = _DAT_180086770;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18004c530);
  return;
}


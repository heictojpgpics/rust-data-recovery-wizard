// Function: FUN_180009400
// Address: 180009400
// Size: 253 bytes


ulonglong FUN_180009400(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x38);
  if ((pbVar2 != (byte *)0x0) && (pbVar2 < pbVar2 + **(int **)(param_1 + 0x50))) {
    return (ulonglong)*pbVar2;
  }
  uVar7 = FUN_180009130(param_1);
  uVar5 = (uint)uVar7;
  uVar8 = uVar7 & 0xffffffff;
  if (uVar5 == 0xffffffff) {
    return uVar7;
  }
  uVar3 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar3 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar3)) &&
     (*(byte *)(uVar3 - 1) == uVar5)) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    return uVar7 & 0xffffffff;
  }
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (iVar6 = ungetc(uVar5 & 0xff,*(FILE **)(param_1 + 0x80)), iVar6 != -1)) {
      return uVar8;
    }
    pbVar1 = param_1 + 0x70;
    if ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x38) !=
        pbVar1) {
      *pbVar1 = SUB81(uVar8,0);
      pbVar4 = (basic_streambuf<char,struct_std::char_traits<char>_> *)
               **(longlong **)(param_1 + 0x18);
      if (pbVar4 != pbVar1) {
        *(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_1 + 0x88) = pbVar4;
        *(longlong *)(param_1 + 0x90) =
             (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
      }
      **(longlong **)(param_1 + 0x18) = (longlong)pbVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)pbVar1;
      **(int **)(param_1 + 0x50) = ((int)param_1 - (int)pbVar1) + 0x71;
    }
  }
  return uVar8;
}


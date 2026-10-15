// Function: FUN_180008d80
// Address: 180008d80
// Size: 213 bytes


longlong *
FUN_180008d80(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,longlong *param_2,
             longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar2 = FUN_180009b00(param_1);
    if (cVar2 != '\0') {
      iVar3 = fsetpos(*(FILE **)(param_1 + 0x80),&local_res8);
      if (iVar3 == 0) {
        lVar4 = param_3[2];
        *(longlong *)(param_1 + 0x74) = lVar4;
        if ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18)
            == param_1 + 0x70) {
          lVar4 = *(longlong *)(param_1 + 0x88);
          uVar1 = *(undefined8 *)(param_1 + 0x90);
          **(longlong **)(param_1 + 0x18) = lVar4;
          **(longlong **)(param_1 + 0x38) = lVar4;
          **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar4;
          lVar4 = *(longlong *)(param_1 + 0x74);
        }
        *param_2 = local_res8;
        param_2[1] = 0;
        param_2[2] = lVar4;
        return param_2;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}


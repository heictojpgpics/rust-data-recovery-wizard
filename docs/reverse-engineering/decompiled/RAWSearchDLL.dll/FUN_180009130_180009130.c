// Function: FUN_180009130
// Address: 180009130
// Size: 704 bytes


void FUN_180009130(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulonglong *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStackY_a8 [32];
  char local_68;
  char local_67 [7];
  undefined1 local_60 [8];
  char *local_58;
  char *local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18008f028 ^ (ulonglong)auStackY_a8;
  uVar8 = **(ulonglong **)(param_1 + 0x38);
  if ((uVar8 == 0) || ((longlong)**(int **)(param_1 + 0x50) + uVar8 <= uVar8)) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
          param_1 + 0x70) {
        uVar1 = *(undefined8 *)(param_1 + 0x90);
        lVar11 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar11;
        **(longlong **)(param_1 + 0x38) = lVar11;
        **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar11;
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        fgetc(*(FILE **)(param_1 + 0x80));
      }
      else {
        FUN_180001690((undefined1 *)local_30);
        uVar3 = fgetc(*(FILE **)(param_1 + 0x80));
        uVar8 = (ulonglong)uVar3;
        if (uVar3 != 0xffffffff) {
          pcVar5 = (char *)FUN_1800016b0(local_30);
LAB_180009230:
          local_60[0] = (undefined1)uVar8;
          uVar10 = *(ulonglong *)(pcVar5 + 0x10);
          uVar2 = *(ulonglong *)(pcVar5 + 0x18);
          if (uVar10 < uVar2) {
            *(ulonglong *)(pcVar5 + 0x10) = uVar10 + 1;
            pcVar7 = pcVar5;
            if (0xf < uVar2) {
              pcVar7 = *(char **)pcVar5;
            }
            pcVar7 = pcVar7 + uVar10;
            FUN_180001300(pcVar7,local_60);
            local_60[0] = 0;
            FUN_180001300(pcVar7 + 1,local_60);
          }
          else {
            FUN_1800084c0((longlong)local_30,uVar8,(char)uVar2,local_60[0]);
          }
          pcVar7 = pcVar5;
          if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
            pcVar7 = *(char **)pcVar5;
          }
          pcVar9 = pcVar5;
          if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
            pcVar9 = *(char **)pcVar5;
          }
          iVar4 = std::codecvt<char,char,struct__Mbstatet>::in
                            (*(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68),
                             (_Mbstatet *)(param_1 + 0x74),pcVar9,pcVar7 + local_20,&local_58,
                             &local_68,local_67,&local_50);
          if ((-1 < iVar4) && (iVar4 < 2)) {
            if (local_50 == &local_68) goto code_r0x0001800092f3;
            if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
              pcVar5 = *(char **)pcVar5;
            }
            pcVar5 = pcVar5 + (local_20 - (longlong)local_58);
            while (0 < (longlong)pcVar5) {
              pcVar5 = pcVar5 + -1;
              ungetc((int)pcVar5[(longlong)local_58],*(FILE **)(param_1 + 0x80));
            }
          }
        }
LAB_180009362:
        FUN_180001630(local_30);
      }
    }
  }
  else {
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Gninc(param_1);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_a8);
  return;
code_r0x0001800092f3:
  uVar8 = *(ulonglong *)(pcVar5 + 0x18);
  pcVar7 = pcVar5;
  if (0xf < uVar8) {
    pcVar7 = *(char **)pcVar5;
  }
  uVar10 = *(ulonglong *)(pcVar5 + 0x10);
  local_40 = (longlong)local_58 - (longlong)pcVar7;
  local_48 = uVar10;
  puVar6 = FUN_180001e40(&local_40,&local_48);
  uVar2 = *puVar6;
  pcVar7 = pcVar5;
  if (0xf < uVar8) {
    pcVar7 = *(char **)pcVar5;
  }
  lVar11 = uVar10 - uVar2;
  *(longlong *)(pcVar5 + 0x10) = lVar11;
  memmove(pcVar7,pcVar7 + uVar2,lVar11 + 1);
  uVar3 = fgetc(*(FILE **)(param_1 + 0x80));
  uVar8 = (ulonglong)uVar3;
  if (uVar3 == 0xffffffff) goto LAB_180009362;
  goto LAB_180009230;
}


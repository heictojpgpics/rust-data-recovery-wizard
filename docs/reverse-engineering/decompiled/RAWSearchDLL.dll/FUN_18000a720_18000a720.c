// Function: FUN_18000a720
// Address: 18000a720
// Size: 589 bytes


basic_istream<char,struct_std::char_traits<char>_> *
FUN_18000a720(basic_istream<char,struct_std::char_traits<char>_> *param_1,longlong param_2,
             byte param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 local_res20 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [4];
  uint local_74;
  uint local_70;
  ulonglong local_68;
  ulonglong local_60;
  basic_istream<char,struct_std::char_traits<char>_> *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = 0xfffffffffffffffe;
  uVar9 = 0;
  local_74 = 0;
  bVar3 = false;
  plVar1 = *(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48);
  local_58 = param_1;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_1800097b0) {
      if ((FILE *)plVar1[0x10] != (FILE *)0x0) {
        _lock_file((FILE *)plVar1[0x10]);
      }
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  local_50 = std::basic_istream<char,struct_std::char_traits<char>_>::_Ipfx(param_1,true);
  if ((bool)local_50) {
    puVar4 = (undefined8 *)FUN_1800016b0(param_2);
    local_res20[0] = 0;
    puVar6 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar6 = (undefined8 *)*puVar4;
    }
    puVar4[2] = 0;
    FUN_180001300((undefined1 *)puVar6,local_res20);
    local_70 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sgetc
                         (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                           (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    while (uVar10 = (undefined1)local_70, local_70 != 0xffffffff) {
      if (local_70 == param_3) {
        bVar3 = true;
        std::basic_streambuf<char,struct_std::char_traits<char>_>::sbumpc
                  (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                    (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
        uVar9 = 0;
        goto LAB_18000a876;
      }
      local_40 = 0xffffffffffffffff;
      local_38 = 0x10;
      local_68 = 0xfffffffffffffffe;
      local_60 = FUN_1800012f0();
      puVar8 = &local_68;
      puVar5 = FUN_180001e40(&local_60,puVar8);
      if (*puVar5 <= *(ulonglong *)(param_2 + 0x10)) {
        uVar9 = 2;
        local_74 = uVar9;
        goto LAB_18000a876;
      }
      uVar2 = puVar4[2];
      local_80[0] = uVar10;
      if (uVar2 < (ulonglong)puVar4[3]) {
        puVar4[2] = uVar2 + 1;
        puVar6 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar6 = (undefined8 *)*puVar4;
        }
        puVar7 = (undefined1 *)(uVar2 + (longlong)puVar6);
        FUN_180001300(puVar7,local_80);
        local_78[0] = 0;
        FUN_180001300(puVar7 + 1,local_78);
      }
      else {
        FUN_1800084c0(param_2,(ulonglong)puVar8,uVar10,uVar10);
      }
      bVar3 = true;
      local_70 = std::basic_streambuf<char,struct_std::char_traits<char>_>::snextc
                           (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                             (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    }
    uVar9 = 1;
    local_74 = uVar9;
LAB_18000a876:
    if (bVar3) goto LAB_18000a90a;
  }
  uVar9 = uVar9 | 2;
LAB_18000a90a:
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),uVar9,false);
  plVar1 = *(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) == FUN_180009790) {
      if ((FILE *)plVar1[0x10] != (FILE *)0x0) {
        _unlock_file((FILE *)plVar1[0x10]);
      }
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}


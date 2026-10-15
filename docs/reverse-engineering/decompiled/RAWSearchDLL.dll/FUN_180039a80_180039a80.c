// Function: FUN_180039a80
// Address: 180039a80
// Size: 820 bytes


void FUN_180039a80(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  char ****_Str;
  ulonglong _Size;
  undefined1 uVar10;
  longlong *_Src;
  undefined8 *_Dst;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [4];
  undefined4 local_104;
  ulonglong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  char ***local_e0 [3];
  ulonglong local_c8;
  longlong local_c0 [2];
  longlong local_b0;
  undefined8 local_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  ulonglong local_58;
  
  local_e8 = 0xfffffffffffffffe;
  local_58 = DAT_18008f028 ^ (ulonglong)auStackY_138;
  local_104 = 0;
  uVar1 = *(uint *)(param_6 + 8);
  local_59 = 0;
  uVar9 = (ulonglong)(uVar1 + *(int *)(param_6 + 0xc));
  if (*(longlong *)(param_1 + 0x138) < (longlong)uVar9) {
    *(ulonglong *)(param_1 + 0x138) = uVar9;
  }
  if ((param_4 <= *(longlong *)(param_1 + 8)) &&
     ((longlong)(ulonglong)(uVar1 + 0x3f) <
      (param_5 - *(longlong *)(param_1 + 8)) * (longlong)(int)param_3)) {
    lVar4 = FUN_180038fb0(param_1,param_2,(int)param_3,param_4,param_5);
    uVar10 = (undefined1)param_3;
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x128) = 1;
    }
    else {
      plVar6 = (longlong *)(lVar4 + (ulonglong)uVar1);
      local_98 = *plVar6;
      lStack_90 = plVar6[1];
      lStack_88 = plVar6[2];
      lStack_80 = plVar6[3];
      local_78 = plVar6[4];
      lStack_70 = plVar6[5];
      local_68 = plVar6[6];
      local_60 = (undefined4)plVar6[7];
      local_5c = *(undefined2 *)((longlong)plVar6 + 0x3c);
      local_5a = *(undefined1 *)((longlong)plVar6 + 0x3e);
      FUN_180001780((longlong)local_c0);
      puVar5 = (undefined8 *)FUN_1800016b0(local_c0);
      puVar5[2] = 0;
      puVar5[3] = 0xf;
      local_108[0] = 0;
      FUN_180001300((undefined1 *)puVar5,local_108);
      uVar9 = 0xffffffffffffffff;
      do {
        _Size = uVar9 + 1;
        lVar4 = uVar9 + 1;
        uVar9 = _Size;
      } while (*(char *)((longlong)&local_98 + lVar4) != '\0');
      if ((ulonglong)puVar5[3] < _Size) {
        FUN_1800086f0((longlong)local_c0,_Size,uVar10,&local_98);
      }
      else {
        puVar7 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar7 = (undefined8 *)*puVar5;
        }
        puVar5[2] = _Size;
        memmove(puVar7,&local_98,_Size);
        local_108[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar7 + _Size),local_108);
      }
      plVar6 = (longlong *)FUN_180007060((longlong)&local_98,local_c0);
      local_f0 = plVar6;
      if ((ulonglong)plVar6[2] < 4) {
        bVar2 = false;
      }
      else {
        FUN_180001780((longlong)local_e0);
        puVar7 = (undefined8 *)FUN_1800016b0(local_e0);
        puVar7[2] = 0;
        puVar7[3] = 0xf;
        local_108[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_108);
        local_100 = 4;
        local_f8 = plVar6[2];
        puVar8 = FUN_180001e40(&local_100,&local_f8);
        uVar9 = *puVar8;
        _Src = plVar6;
        if (0xf < (ulonglong)plVar6[3]) {
          _Src = (longlong *)*plVar6;
        }
        if ((ulonglong)puVar7[3] < uVar9) {
          FUN_1800086f0((longlong)local_e0,uVar9,(char)puVar7,_Src);
        }
        else {
          _Dst = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            _Dst = (undefined8 *)*puVar7;
          }
          puVar7[2] = uVar9;
          memmove(_Dst,_Src,uVar9);
          local_108[0] = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + uVar9),local_108);
        }
        local_104 = 1;
        _Str = local_e0;
        if (0xf < local_c8) {
          _Str = (char ****)local_e0[0];
        }
        iVar3 = atoi((char *)_Str);
        bVar2 = 0x7a7 < iVar3;
        local_104 = 0;
        FUN_180001630((longlong *)local_e0);
      }
      FUN_180001630(plVar6);
      if (!bVar2) {
        puVar7 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar7 = (undefined8 *)*puVar5;
        }
        puVar5[2] = 0;
        local_108[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_108);
      }
      if (local_b0 - 10U < 0x1f) {
        local_f0 = &local_98;
        plVar6 = (longlong *)FUN_180007060((longlong)&local_98,local_c0);
        FUN_1800174f0(param_1,plVar6);
      }
      else {
        puVar7 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar7 = (undefined8 *)*puVar5;
        }
        puVar5[2] = 0;
        local_108[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_108);
      }
      FUN_180001630(local_c0);
    }
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_138);
  return;
}


// Function: FUN_18003b400
// Address: 18003b400
// Size: 850 bytes


void FUN_18003b400(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *_Str2;
  uint uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  uint local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c3;
  undefined1 local_bf;
  undefined4 local_be;
  undefined1 local_ba;
  undefined4 local_b9;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_af;
  undefined1 local_ab;
  undefined4 local_aa;
  undefined1 local_a6;
  undefined4 local_a5;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_9b;
  undefined1 local_97;
  undefined4 local_96;
  undefined1 local_92;
  undefined4 local_91;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_87;
  undefined1 local_83;
  undefined4 local_82;
  undefined1 local_7e;
  undefined4 local_7d;
  undefined1 local_79;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_73;
  undefined1 local_6f;
  undefined4 local_6e;
  undefined1 local_6a;
  undefined4 local_69;
  undefined1 local_65;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5f;
  undefined1 local_5b;
  undefined4 local_5a;
  undefined1 local_56;
  undefined4 local_55;
  undefined1 local_51;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_f8;
  uVar2 = *(ushort *)(param_2 + 4) << 8 | *(ushort *)(param_2 + 4) >> 8;
  local_d0 = param_3;
  if ((ushort)(uVar2 - 1) < 0x1f) {
    uVar7 = 0;
    local_d8 = (uint)uVar2;
    local_c8 = DAT_18006c560;
    local_c4 = DAT_18006c564;
    local_c3 = DAT_18006c580;
    local_bf = DAT_18006c584;
    local_be = DAT_18006c578;
    local_ba = DAT_18006c57c;
    local_b9 = DAT_18006c570;
    local_b5 = DAT_18006c574;
    local_b4 = DAT_18006c568;
    local_b0 = DAT_18006c56c;
    local_af = DAT_18006c5a0;
    local_ab = DAT_18006c5a4;
    local_aa = DAT_18006c598;
    local_a6 = DAT_18006c59c;
    local_a5 = DAT_18006c590;
    local_a1 = DAT_18006c594;
    local_a0 = DAT_18006aff8;
    local_9c = DAT_18006affc;
    local_9b = DAT_18006c588;
    local_97 = DAT_18006c58c;
    local_96 = DAT_18006c5c0;
    local_92 = DAT_18006c5c4;
    local_91 = DAT_18006c5b8;
    local_8d = DAT_18006c5bc;
    local_8c = DAT_18006c5b0;
    local_88 = DAT_18006c5b4;
    local_87 = DAT_18006c5a8;
    local_83 = DAT_18006c5ac;
    local_82 = DAT_18006c5e0;
    local_7e = DAT_18006c5e4;
    local_7d = DAT_18006c5d8;
    local_79 = DAT_18006c5dc;
    local_78 = DAT_18006c5d0;
    local_74 = DAT_18006c5d4;
    local_73 = DAT_18006c5c8;
    local_6f = DAT_18006c5cc;
    uVar6 = local_d8 * 0x10 + 0xc;
    local_6e = DAT_18006c600;
    local_6a = DAT_18006c604;
    local_69 = DAT_18006c5f8;
    local_65 = DAT_18006c5fc;
    local_64 = DAT_18006c5f0;
    local_60 = DAT_18006c5f4;
    local_5f = DAT_18006c5e8;
    local_5b = DAT_18006c5ec;
    local_5a = DAT_18006c618;
    local_56 = DAT_18006c61c;
    local_55 = DAT_18006c610;
    local_51 = DAT_18006c614;
    local_50 = DAT_18006c608;
    local_4c = DAT_18006c60c;
    if (uVar2 != 0) {
      puVar5 = (undefined4 *)(param_2 + 0x18);
      _Str2 = (char *)(param_2 + 0xc);
      uVar8 = (ulonglong)(uint)uVar2;
      do {
        uVar4 = 0;
        uVar2 = (ushort)*puVar5;
        uVar3 = (ushort)((uint)*puVar5 >> 0x10);
        uVar6 = uVar6 + (CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar3 << 8 | uVar3 >> 8) + 3U & 0xfffffffc
                        );
        do {
          iVar1 = strncmp((char *)((longlong)&local_c8 + (longlong)(int)uVar4 * 5),_Str2,4);
          if (iVar1 == 0) {
            uVar7 = uVar7 + 1;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x19);
        _Str2 = _Str2 + 0x10;
        puVar5 = puVar5 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (DAT_18006ee48 <= (float)uVar7 / (float)(int)local_d8) {
      *(ulonglong *)(local_d0 + 0x10) = (ulonglong)uVar6;
      *(undefined4 *)(local_d0 + 0x18) = 0x41;
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_f8);
  return;
}


// Function: FUN_18001dc70
// Address: 18001dc70
// Size: 650 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001dc70(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [24];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_18008f028 ^ (ulonglong)auStack_58;
  auVar1 = vpcmpeqb_avx(SUB3216(*param_1,0x10),SUB3216(*param_2,0x10));
  auVar2 = vpcmpeqb_avx(SUB3216(*param_1,0),SUB3216(*param_2,0));
  uVar3 = 0;
  local_40._16_16_ = auVar1;
  local_40._0_16_ = auVar2;
  if (param_3 != 0) {
    auVar1 = vpand_avx(SUB3216(_DAT_18006ef60,0x10),auVar1);
    auVar2 = vpand_avx(SUB3216(_DAT_18006ef60,0),auVar2);
    do {
      uVar4 = vpextrb_avx(auVar2,1);
      uVar5 = vpextrb_avx(auVar2,2);
      local_40[1] = (char)uVar4 != '\0';
      local_40[0] = auVar2[0] != '\0';
      uVar4 = vpextrb_avx(auVar2,3);
      local_40[2] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar2,4);
      local_40[3] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar2,5);
      local_40[4] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar2,6);
      local_40[5] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar2,7);
      local_40[6] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar2,8);
      local_40[7] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar2,9);
      local_40[8] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar2,10);
      local_40[9] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar2,0xb);
      local_40[10] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar2,0xc);
      local_40[0xb] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar2,0xd);
      local_40[0xc] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar2,0xe);
      local_40[0xd] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar2,0xf);
      local_40[0xe] = (char)uVar5 != '\0';
      local_40[0xf] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,1);
      local_40[0x10] = auVar1[0] != '\0';
      uVar5 = vpextrb_avx(auVar1,2);
      local_40[0x11] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,3);
      local_40[0x12] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar1,4);
      local_40[0x13] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,5);
      local_40[0x14] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar1,6);
      local_40[0x15] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,7);
      local_40[0x16] = (char)uVar5 != '\0';
      local_40[0x17] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,8);
      uVar5 = vpextrb_avx(auVar1,9);
      local_40[0x18] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,10);
      local_40[0x19] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar1,0xb);
      local_40[0x1a] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,0xc);
      local_40[0x1b] = (char)uVar5 != '\0';
      uVar5 = vpextrb_avx(auVar1,0xd);
      local_40[0x1c] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,0xe);
      local_40[0x1d] = (char)uVar5 != '\0';
      local_40[0x1e] = (char)uVar4 != '\0';
      uVar4 = vpextrb_avx(auVar1,0xf);
      local_40[0x1f] = (char)uVar4 != '\0';
      if (local_40[uVar3] == '\0') break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  __security_check_cookie(DAT_18008f028 ^ (ulonglong)auStack_58 ^ (ulonglong)auStack_58);
  return;
}


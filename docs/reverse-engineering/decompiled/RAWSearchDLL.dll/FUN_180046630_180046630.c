// Function: FUN_180046630
// Address: 180046630
// Size: 381 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180046630(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  
  if (param_2 != 0) {
    DAT_180118028 = s_Exception_OFFICE_Depress_18006da90[0x18];
    _DAT_180118010 = s_Exception_OFFICE_Depress_18006da90._0_8_;
    uRam0000000180118018 = s_Exception_OFFICE_Depress_18006da90._8_8_;
    _DAT_180118020 = s_Exception_OFFICE_Depress_18006da90._16_8_;
    if ((*(void **)(param_1 + 0x110) != (void *)0x0) &&
       (memset(*(void **)(param_1 + 0x110),0,0x2801), *(uint *)(param_3 + 0x16) < 0x2801)) {
      local_38 = FUN_180056280;
      local_60 = 0;
      local_68 = 0;
      local_48 = 0;
      local_28 = 0;
      local_30 = FUN_180056290;
      local_40 = FUN_180056280(0,1,0x2548);
      if (local_40 != 0) {
        *(undefined4 *)(local_40 + 8) = 0;
        *(undefined4 *)(local_40 + 0x28) = 0xf;
        *(undefined8 *)(local_40 + 0x38) = 0;
        uVar4 = FUN_180054a90((longlong)&local_68);
        if ((int)uVar4 == 0) {
          local_60 = *(undefined4 *)(param_3 + 0x12);
          local_68 = param_2 + param_4;
          local_50 = *(undefined4 *)(param_3 + 0x16);
          local_58 = *(undefined8 *)(param_1 + 0x110);
          iVar3 = FUN_180054c10(&local_68);
          uVar4 = local_28;
          pcVar2 = local_30;
          lVar1 = local_40;
          if ((local_40 != 0) && (local_30 != (code *)0x0)) {
            if (*(longlong *)(local_40 + 0x38) != 0) {
              (*local_30)(local_28);
            }
            (*pcVar2)(uVar4,lVar1);
          }
          if (-1 < iVar3) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


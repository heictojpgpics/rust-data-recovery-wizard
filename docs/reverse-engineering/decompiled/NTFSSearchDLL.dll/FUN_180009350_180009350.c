// Function: FUN_180009350
// Address: 180009350
// Size: 1138 bytes


void FUN_180009350(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  UINT UVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char *pcVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_b78 [32];
  undefined1 local_b28 [10];
  undefined8 local_b1e;
  ushort local_b16;
  undefined8 local_b14;
  undefined8 local_b0c;
  undefined8 local_b04;
  undefined1 local_afc;
  undefined8 local_af9;
  undefined8 local_af1;
  undefined8 local_ae1;
  undefined4 local_ad9;
  undefined4 local_ad5;
  undefined2 local_ad1;
  undefined2 local_acf;
  undefined2 local_ac9;
  byte local_ac7;
  undefined8 local_ab8;
  undefined1 local_aa8 [512];
  wchar_t local_8a8 [32];
  WCHAR local_868 [264];
  wchar_t local_658 [264];
  wchar_t local_448 [264];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_ab8 = 0xfffffffffffffffe;
  local_28 = DAT_180086010 ^ (ulonglong)auStackY_b78;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_1 + 0x7f8);
    FUN_180011140((longlong *)(param_1 + 0x7e8));
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_1 + 0x7f8);
    *(undefined8 *)(param_1 + 0x7a0) = 0;
    *(undefined1 *)(param_1 + 0x918) = 0;
    FUN_180009060(param_1);
    lVar8 = *(longlong *)(param_1 + 0xf8);
    if ((lVar8 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
      *(undefined8 *)(lVar8 + 0x30) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0xe0);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
      *(undefined8 *)(lVar8 + 0x58) = uVar5;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
      *(int *)(param_1 + 0x120) = iVar3 * 0x10;
      uVar5 = FUN_18002be40((ulonglong)(uint)(*(int *)(param_1 + 0x11c) * iVar3 + iVar3 * 0x10));
      *(undefined8 *)(param_1 + 0xc0) = uVar5;
      *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(param_1 + 0xb8);
      *(longlong *)(param_1 + 0x888) = param_1 + 0x140;
      DAT_180086050 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
      FUN_18003f9f0(local_aa8);
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
      uVar2 = 0;
      if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
        iVar3 = FUN_18001a320(*(longlong **)(param_1 + 0xb8),0,local_aa8);
        uVar2 = 0;
        if (iVar3 != 0) {
          uVar2 = FUN_18003f940((longlong)local_aa8);
          *(uint *)(param_1 + 0x798) = (uint)uVar2;
        }
      }
      plVar6 = (longlong *)FUN_180031ae0();
      if (plVar6 != (longlong *)0x0) {
        puVar7 = FUN_180002f90();
        if (puVar7 != (undefined8 *)0x0) {
          memset(local_b28,0,0x62);
          lVar8 = FUN_18002be40(5);
          pcVar9 = "NTFS";
          do {
            cVar1 = *pcVar9;
            pcVar9[lVar8 + -0x18004c758] = cVar1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          *(undefined8 *)((longlong)puVar7 + 0x25) = local_b14;
          *(undefined8 *)((longlong)puVar7 + 0x35) = local_b04;
          *(undefined8 *)((longlong)puVar7 + 0x2d) = local_b0c;
          *(longlong *)((longlong)puVar7 + 0x11) = lVar8;
          *(undefined2 *)((longlong)puVar7 + 0x19) = 4;
          puVar7[8] = local_af9;
          *(undefined8 *)((longlong)puVar7 + 0x1b) = local_b1e;
          *(ushort *)((longlong)puVar7 + 0x23) = local_b16 | 0x10;
          *(undefined1 *)((longlong)puVar7 + 0x3d) = local_afc;
          puVar7[0xb] = local_ae1;
          *(undefined4 *)((longlong)puVar7 + 100) = local_ad5;
          *(undefined4 *)(puVar7 + 0xc) = local_ad9;
          puVar7[9] = local_af1;
          *(undefined2 *)(puVar7 + 0xd) = local_ad1;
          *(undefined2 *)((longlong)puVar7 + 0x6a) = local_acf;
          *(byte *)((longlong)puVar7 + 0x72) = *(byte *)((longlong)puVar7 + 0x72) & 0xc2;
          *(byte *)((longlong)puVar7 + 0x72) = *(byte *)((longlong)puVar7 + 0x72) | local_ac7 & 0x3d
          ;
          *(undefined2 *)(puVar7 + 0xe) = local_ac9;
        }
        plVar6[6] = (longlong)puVar7;
        (**(code **)(*plVar6 + 0x38))(plVar6,0,uVar2);
        (**(code **)(*plVar6 + 0x40))(plVar6,3);
        plVar6[10] = 5;
        *(undefined4 *)((longlong)plVar6 + 0x1ec) = 1;
        *(longlong **)(param_1 + 0x788) = plVar6;
        (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))
                  (*(longlong **)(param_1 + 0x108),plVar6,0,0);
      }
      *(undefined1 *)(param_1 + 0x128) = 0;
      memset(local_448,0,0x208);
      local_8a8[0] = L'\0';
      local_8a8[1] = L'\0';
      local_8a8[2] = L'\0';
      local_8a8[3] = L'\0';
      local_8a8[4] = L'\0';
      local_8a8[5] = L'\0';
      local_8a8[6] = L'\0';
      local_8a8[7] = L'\0';
      local_8a8[8] = L'\0';
      local_8a8[9] = L'\0';
      local_8a8[10] = L'\0';
      local_8a8[0xb] = L'\0';
      local_8a8[0xc] = L'\0';
      local_8a8[0xd] = L'\0';
      local_8a8[0xe] = L'\0';
      local_8a8[0xf] = L'\0';
      local_8a8[0x10] = L'\0';
      local_8a8[0x11] = L'\0';
      local_8a8[0x12] = L'\0';
      local_8a8[0x13] = L'\0';
      local_8a8[0x14] = L'\0';
      local_8a8[0x15] = L'\0';
      local_8a8[0x16] = L'\0';
      local_8a8[0x17] = L'\0';
      local_8a8[0x18] = L'\0';
      local_8a8[0x19] = L'\0';
      local_8a8[0x1a] = L'\0';
      local_8a8[0x1b] = L'\0';
      local_8a8[0x1c] = L'\0';
      local_8a8[0x1d] = L'\0';
      local_8a8[0x1e] = L'\0';
      local_8a8[0x1f] = L'\0';
      memset(local_658,0,0x208);
      memset(local_868,0,0x208);
      GetModuleFileNameW((HMODULE)0x0,local_868,0x207);
      _wsplitpath_s(local_868,local_8a8,0x20,local_658,0x104,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
      pwVar10 = local_8a8;
      FID_conflict_sprintf_s(local_448,0x104,L"%s%s");
      memset(local_238,0,0x208);
      FUN_180013400(local_238,L"%sConfig.dat",local_448,pwVar10);
      UVar4 = GetPrivateProfileIntW(L"search",L"fastsearch",1,local_238);
      *(UINT *)(param_1 + 0x124) = UVar4;
      lVar8 = __RTDynamicCast(*(undefined8 *)(param_1 + 0xb8),0,
                              &IStorageDevice::RTTI_Type_Descriptor,
                              &CStorageDeviceWithCache::RTTI_Type_Descriptor);
      if (lVar8 != 0) {
        FUN_18000fae0(param_1);
      }
      FUN_18003f9e0();
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_b78);
  return;
}


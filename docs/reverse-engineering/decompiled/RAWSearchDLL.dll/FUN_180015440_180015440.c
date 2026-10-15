// Function: FUN_180015440
// Address: 180015440
// Size: 972 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180015440(longlong param_1,ushort *param_2,int param_3,longlong param_4,longlong param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  undefined8 local_140;
  char local_138 [272];
  ulonglong local_28;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_168;
  lVar8 = (longlong)param_3;
  lVar6 = (param_4 - *(longlong *)(param_1 + 8)) * lVar8;
  if ((*(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8) <= lVar6) &&
     (lVar6 % (longlong)*(int *)(param_1 + 0x118) == 0)) {
    if (lVar6 - *(longlong *)(param_1 + 0x110) == 0 || lVar6 < *(longlong *)(param_1 + 0x110)) {
      if (*(int *)(param_1 + 0x124) == 0) {
        if (8 < *(int *)(param_5 + 0x14)) {
          uVar10 = 4;
          memset(local_138,0,0x104);
          uVar9 = 0xffffffffffffffff;
          do {
            uVar7 = uVar9 + 1;
            lVar6 = uVar9 + 1;
            uVar9 = uVar7;
          } while (local_138[lVar6] != '\0');
          puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
          if ((ulonglong)puVar2[3] < uVar7) {
            FUN_1800086f0(param_1 + 0x20,uVar7,uVar10,local_138);
          }
          else {
            puVar12 = puVar2;
            if (0xf < (ulonglong)puVar2[3]) {
              puVar12 = (undefined8 *)*puVar2;
            }
            puVar2[2] = uVar7;
            memmove(puVar12,local_138,uVar7);
            local_148[0] = 0;
            FUN_180001300((undefined1 *)((longlong)puVar12 + uVar7),local_148);
          }
          uVar9 = (param_4 - *(longlong *)(param_1 + 8)) * lVar8;
          *(ulonglong *)(param_1 + 0x10) =
               uVar9 - uVar9 % (ulonglong)(longlong)*(int *)(param_1 + 0x118);
        }
      }
      else {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4) < DAT_180118240) {
          puVar5 = &DAT_180118240;
          lVar11 = param_4;
          _Init_thread_header(&DAT_180118240);
          if (DAT_180118240 == -1) {
            _DAT_180118248 = (undefined1  [16])0x0;
            DAT_180118258 = 0;
            FUN_180015880(puVar5,&DAT_1800936c8,0x1800936ec,(char)lVar11);
            atexit((_func_5014 *)&LAB_1800642e0);
            _Init_thread_footer(&DAT_180118240);
          }
        }
        uVar1 = *param_2;
        for (puVar3 = DAT_180118248; puVar3 != DAT_180118250; puVar3 = puVar3 + 1) {
          if (*puVar3 == (uint)uVar1) {
            if (puVar3 != DAT_180118250) {
              if (uVar1 == 0) goto LAB_180015626;
              *(undefined4 *)(param_1 + 0x11c) = 0;
              goto LAB_180015637;
            }
            break;
          }
        }
        if (uVar1 == 0) {
LAB_180015626:
          *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x120) = 1;
          if (lVar6 / (longlong)*(int *)(param_1 + 0x118) == 1) {
            *(undefined4 *)(param_1 + 0x124) = 0;
            goto LAB_1800155e7;
          }
        }
        if (*(int *)(param_1 + 0x11c) < 0x24) {
LAB_180015637:
          if (*(int *)(param_1 + 0x120) == 0) goto LAB_1800155e7;
        }
        uVar10 = 4;
        memset(local_138,0,0x104);
        uVar9 = 0xffffffffffffffff;
        do {
          uVar7 = uVar9 + 1;
          lVar6 = uVar9 + 1;
          uVar9 = uVar7;
        } while (local_138[lVar6] != '\0');
        puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
        if ((ulonglong)puVar2[3] < uVar7) {
          FUN_1800086f0(param_1 + 0x20,uVar7,uVar10,local_138);
        }
        else {
          puVar12 = puVar2;
          if (0xf < (ulonglong)puVar2[3]) {
            puVar12 = (undefined8 *)*puVar2;
          }
          puVar2[2] = uVar7;
          memmove(puVar12,local_138,uVar7);
          local_148[0] = 0;
          FUN_180001300((undefined1 *)((longlong)puVar12 + uVar7),local_148);
        }
        iVar4 = *(int *)(param_1 + 0x11c) + -1;
        if (*(int *)(param_1 + 0x11c) == 0) {
          iVar4 = 0;
        }
        *(longlong *)(param_1 + 0x10) =
             (param_4 - *(longlong *)(param_1 + 8)) * lVar8 -
             (longlong)(iVar4 * *(int *)(param_1 + 0x118));
      }
    }
    else {
      uVar10 = 4;
      memset(local_138,0,0x104);
      uVar9 = 0xffffffffffffffff;
      do {
        uVar7 = uVar9 + 1;
        lVar6 = uVar9 + 1;
        uVar9 = uVar7;
      } while (local_138[lVar6] != '\0');
      puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
      if ((ulonglong)puVar2[3] < uVar7) {
        FUN_1800086f0(param_1 + 0x20,uVar7,uVar10,local_138);
      }
      else {
        puVar12 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar12 = (undefined8 *)*puVar2;
        }
        puVar2[2] = uVar7;
        memmove(puVar12,local_138,uVar7);
        local_148[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar12 + uVar7),local_148);
      }
      *(longlong *)(param_1 + 0x10) = (param_4 - *(longlong *)(param_1 + 8)) * lVar8;
    }
  }
LAB_1800155e7:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_168);
  return;
}


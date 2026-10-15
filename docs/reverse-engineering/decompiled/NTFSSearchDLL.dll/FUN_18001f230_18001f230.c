// Function: FUN_18001f230
// Address: 18001f230
// Size: 771 bytes


void FUN_18001f230(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  ushort uVar1;
  void *_Src;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 *puVar11;
  size_t _Size;
  int iVar12;
  int iVar13;
  undefined1 auStack_c68 [32];
  undefined8 *local_c48;
  undefined8 local_c40;
  undefined1 local_c38 [1024];
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_c40 = 0xfffffffffffffffe;
  local_38 = DAT_180086010 ^ (ulonglong)auStack_c68;
  if (((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
     (_Src = (void *)param_2[1], _Src == (void *)0x0)) goto LAB_18001f4c9;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 0x50);
  puVar11 = puVar2;
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    puVar7 = (undefined8 *)puVar2[1];
    do {
      if ((ulonglong)puVar7[4] < *param_2) {
        puVar8 = (undefined8 *)puVar7[2];
      }
      else {
        puVar8 = (undefined8 *)*puVar7;
        puVar11 = puVar7;
      }
      puVar7 = puVar8;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
  }
  if ((puVar11 == puVar2) || (*param_2 < (ulonglong)puVar11[4])) {
    puVar11 = puVar2;
  }
  iVar12 = 0;
  if (puVar11 != puVar2) {
    do {
      if (((*(int *)(puVar11 + 6) == 9) &&
          (iVar13 = iVar12, *(int *)((longlong)puVar11 + 0x34) == 9)) ||
         (iVar13 = iVar12 + 1, 200 < iVar12)) break;
      puVar7 = (undefined8 *)puVar11[2];
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar3 = *(char *)((longlong)*puVar7 + 0x19);
        puVar11 = puVar7;
        puVar7 = (undefined8 *)*puVar7;
        while (cVar3 == '\0') {
          cVar3 = *(char *)((longlong)*puVar7 + 0x19);
          puVar11 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      else {
        cVar3 = *(char *)((longlong)puVar11[1] + 0x19);
        puVar8 = (undefined8 *)puVar11[1];
        puVar7 = puVar11;
        while ((puVar11 = puVar8, cVar3 == '\0' && (puVar7 == (undefined8 *)puVar11[2]))) {
          cVar3 = *(char *)((longlong)puVar11[1] + 0x19);
          puVar8 = (undefined8 *)puVar11[1];
          puVar7 = puVar11;
        }
      }
      iVar12 = iVar13;
    } while (puVar11 != puVar2);
    if ((puVar11 != puVar2) && (iVar13 < 200)) {
      memset(local_838,0,0x800);
      iVar12 = (int)param_2[2];
      if (0x800 < iVar12) {
        iVar12 = 0x800;
      }
      memcpy(local_838,_Src,(longlong)iVar12);
      lVar4 = FUN_180041850((longlong)local_838,0x80,0);
      if (lVar4 != 0) {
        local_c48 = (undefined8 *)
                    CONCAT44(local_c48._4_4_,*(int *)(lVar4 + 4) - (uint)*(ushort *)(lVar4 + 0x20));
        pbVar9 = (byte *)((ulonglong)*(ushort *)(lVar4 + 0x20) + lVar4);
        if ((pbVar9 == (byte *)0x0) ||
           (cVar3 = FUN_18001d5f0(param_1,pbVar9,(int *)&local_c48), cVar3 == '\0'))
        goto LAB_18001f4c9;
        iVar12 = (int)local_c48;
        _Size = (size_t)(int)local_c48;
        if (0x3ff < (int)local_c48 - 1U) goto LAB_18001f4c9;
        memset(local_c38,0,0x400);
        memcpy(local_c38,(void *)((ulonglong)*(ushort *)(lVar4 + 0x20) + lVar4),_Size);
        uVar1 = *(ushort *)(puVar11[7] + 0x36);
        if (0x400 < (int)(iVar12 + (uint)uVar1)) goto LAB_18001f4c9;
        memcpy(local_c38 + _Size,
               (void *)(puVar11[8] + (ulonglong)*(ushort *)(puVar11[7] + 0x34) + 0x30),
               (ulonglong)uVar1);
        local_c48 = (undefined8 *)FUN_18003ec54(0x48);
        if (local_c48 == (undefined8 *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = FUN_180034760(local_c48);
        }
        FUN_1800347d0((longlong)plVar5,(longlong)local_c38,0x400);
        plVar6 = FUN_1800340b0((longlong)plVar5);
        if (plVar6 == (longlong *)0x0) {
          if (plVar5 != (longlong *)0x0) {
            (**(code **)*plVar5)(plVar5,1);
          }
          plVar5 = (longlong *)0x0;
        }
        else if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
                (lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(),
                lVar10 = (plVar6[1] + *plVar6) * (ulonglong)*(uint *)(param_1 + 0x18),
                lVar10 - lVar4 != 0 && lVar4 <= lVar10)) goto LAB_18001f4c9;
        FUN_180003250(param_2[4],plVar5);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
  }
  *(undefined8 *)(param_2[4] + 0x1b) = param_3;
LAB_18001f4c9:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_c68);
  return;
}


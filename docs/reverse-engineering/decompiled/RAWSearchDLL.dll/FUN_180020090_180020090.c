// Function: FUN_180020090
// Address: 180020090
// Size: 578 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180020090(undefined8 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50 [3];
  
  FUN_18001fae0(local_50);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_180118348) && (_Init_thread_header(&DAT_180118348), DAT_180118348 == -1)) {
    _DAT_180118368 = (undefined1  [16])0x0;
    _Init_thread_footer(&DAT_180118348);
  }
  FUN_180021ba0(local_50[0],(longlong *)&local_60,param_1);
  lVar13 = 0;
  if (local_60 != local_58) {
    do {
      lVar13 = lVar13 + 1;
      plVar14 = (longlong *)local_60[2];
      if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar14 + 0x19);
        local_60 = plVar14;
        plVar14 = (longlong *)*plVar14;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar14 + 0x19);
          local_60 = plVar14;
          plVar14 = (longlong *)*plVar14;
        }
      }
      else {
        cVar1 = *(char *)(local_60[1] + 0x19);
        plVar6 = (longlong *)local_60[1];
        plVar14 = local_60;
        while ((local_60 = plVar6, cVar1 == '\0' && (plVar14 == (longlong *)local_60[2]))) {
          cVar1 = *(char *)(local_60[1] + 0x19);
          plVar6 = (longlong *)local_60[1];
          plVar14 = local_60;
        }
      }
    } while (local_60 != local_58);
    if (lVar13 != 0) {
      puVar9 = (undefined8 *)*local_50[0];
      puVar12 = puVar9;
      if (*(char *)((longlong)puVar9[1] + 0x19) == '\0') {
        uVar2 = param_1[3];
        uVar3 = param_1[2];
        puVar10 = (undefined8 *)puVar9[1];
        do {
          plVar14 = puVar10 + 4;
          puVar11 = param_1;
          if (0xf < uVar2) {
            puVar11 = (undefined8 *)*param_1;
          }
          uVar4 = puVar10[6];
          if (0xf < (ulonglong)puVar10[7]) {
            plVar14 = (longlong *)*plVar14;
          }
          local_res8 = uVar3;
          local_res10 = uVar4;
          puVar8 = FUN_180001e40(&local_res10,&local_res8);
          iVar7 = memcmp(plVar14,puVar11,*puVar8);
          if (iVar7 == 0) {
            if (uVar3 <= uVar4) goto LAB_1800201ee;
LAB_18002026b:
            puVar11 = (undefined8 *)puVar10[2];
          }
          else {
            if (iVar7 < 0) goto LAB_18002026b;
LAB_1800201ee:
            puVar11 = (undefined8 *)*puVar10;
            puVar12 = puVar10;
          }
          puVar10 = puVar11;
        } while (*(char *)((longlong)puVar11 + 0x19) == '\0');
      }
      if (puVar12 != puVar9) {
        plVar14 = puVar12 + 4;
        uVar2 = puVar12[6];
        if (0xf < (ulonglong)puVar12[7]) {
          plVar14 = (longlong *)*plVar14;
        }
        uVar3 = param_1[2];
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        local_res18 = uVar2;
        local_res20 = uVar3;
        puVar8 = FUN_180001e40(&local_res20,&local_res18);
        iVar7 = memcmp(param_1,plVar14,*puVar8);
        if (iVar7 == 0) {
          if (uVar2 <= uVar3) {
LAB_180020273:
            return puVar12 + 8;
          }
        }
        else if (-1 < iVar7) goto LAB_180020273;
      }
      std::_Xout_of_range("invalid map<K, T> key");
      pcVar5 = (code *)swi(3);
      puVar9 = (undefined8 *)(*pcVar5)();
      return puVar9;
    }
  }
  return (undefined8 *)&DAT_180118368;
}


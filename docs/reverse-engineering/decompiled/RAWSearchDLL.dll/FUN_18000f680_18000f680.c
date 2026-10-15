// Function: FUN_18000f680
// Address: 18000f680
// Size: 273 bytes


longlong * FUN_18000f680(longlong *param_1,longlong *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  ulonglong local_res8;
  ulonglong local_res10;
  
  puVar8 = (undefined8 *)*param_1;
  if (*(char *)((longlong)puVar8[1] + 0x19) != '\0') {
    *param_2 = (longlong)puVar8;
    return param_2;
  }
  uVar3 = *(ulonglong *)(param_3 + 8);
  uVar4 = *(ulonglong *)(param_3 + 0xc);
  puVar12 = (undefined8 *)puVar8[1];
  do {
    puVar11 = (ushort *)(puVar12 + 4);
    puVar9 = param_3;
    if (7 < uVar4) {
      puVar9 = *(ushort **)param_3;
    }
    uVar5 = puVar12[6];
    if (7 < (ulonglong)puVar12[7]) {
      puVar11 = *(ushort **)puVar11;
    }
    local_res8 = uVar3;
    local_res10 = uVar5;
    puVar6 = FUN_180001e40(&local_res10,&local_res8);
    iVar14 = 0;
    uVar7 = *puVar6;
    if (uVar7 != 0) {
      uVar1 = *puVar11;
      uVar2 = *puVar9;
      if (uVar2 <= uVar1) {
        bVar15 = uVar1 < uVar2;
        bVar16 = uVar1 == uVar2;
        puVar10 = puVar9;
        do {
          if (!bVar15 && !bVar16) {
            iVar14 = 1;
            goto LAB_18000f739;
          }
          if (uVar7 == 1) goto LAB_18000f739;
          uVar1 = *(ushort *)((longlong)puVar11 + (2 - (longlong)puVar9) + (longlong)puVar10);
          puVar10 = puVar10 + 1;
          uVar7 = uVar7 - 1;
          bVar15 = uVar1 < *puVar10;
          bVar16 = uVar1 == *puVar10;
        } while (!bVar15);
      }
      iVar14 = -1;
    }
LAB_18000f739:
    if (iVar14 == 0) {
      if (uVar3 <= uVar5) goto LAB_18000f743;
LAB_18000f77c:
      puVar13 = (undefined8 *)puVar12[2];
    }
    else {
      if (iVar14 < 0) goto LAB_18000f77c;
LAB_18000f743:
      puVar13 = (undefined8 *)*puVar12;
      puVar8 = puVar12;
    }
    puVar12 = puVar13;
    if (*(char *)((longlong)puVar13 + 0x19) != '\0') {
      *param_2 = (longlong)puVar8;
      return param_2;
    }
  } while( true );
}


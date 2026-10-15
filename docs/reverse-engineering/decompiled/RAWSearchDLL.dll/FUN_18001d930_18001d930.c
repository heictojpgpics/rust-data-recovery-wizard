// Function: FUN_18001d930
// Address: 18001d930
// Size: 405 bytes


ulonglong FUN_18001d930(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  byte local_res8 [8];
  
  puVar5 = (undefined8 *)FUN_1800016b0(param_2);
  local_res8[0] = 0;
  puVar8 = puVar5;
  if (0xf < (ulonglong)puVar5[3]) {
    puVar8 = (undefined8 *)*puVar5;
  }
  puVar5[2] = 0;
  uVar6 = FUN_180001300((undefined1 *)puVar8,local_res8);
  if ((param_1[2] & 1) == 0) {
    lVar7 = FUN_180011560(param_2,(ulonglong)param_1[2] >> 1);
    uVar6 = 0;
    if (param_1[2] != 0) {
      do {
        puVar8 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar8 = (undefined8 *)*param_1;
        }
        iVar4 = toupper((int)*(char *)((longlong)puVar8 + uVar6));
        cVar3 = (char)iVar4;
        bVar10 = cVar3 - 0x30;
        if (9 < bVar10) {
          if ((byte)(cVar3 + 0xbfU) < 6) {
            bVar10 = cVar3 - 0x37;
          }
          else {
            bVar10 = 0xff;
          }
        }
        puVar8 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar8 = (undefined8 *)*param_1;
        }
        iVar4 = toupper((int)*(char *)((longlong)puVar8 + uVar6 + 1));
        cVar3 = (char)iVar4;
        local_res8[0] = cVar3 - 0x30;
        if (9 < local_res8[0]) {
          if ((byte)(cVar3 + 0xbfU) < 6) {
            local_res8[0] = cVar3 - 0x37;
          }
          else {
            local_res8[0] = 0xff;
          }
        }
        if ((bVar10 == 0xff) || (local_res8[0] == 0xff)) {
          local_res8[0] = 0;
          puVar8 = puVar5;
          if (0xf < (ulonglong)puVar5[3]) {
            puVar8 = (undefined8 *)*puVar5;
          }
          puVar5[2] = 0;
          uVar6 = FUN_180001300((undefined1 *)puVar8,local_res8);
          goto LAB_18001dac1;
        }
        local_res8[0] = bVar10 << 4 | local_res8[0];
        uVar1 = puVar5[2];
        uVar2 = puVar5[3];
        if (uVar1 < uVar2) {
          puVar5[2] = uVar1 + 1;
          puVar8 = puVar5;
          if (0xf < uVar2) {
            puVar8 = (undefined8 *)*puVar5;
          }
          puVar9 = (undefined1 *)(uVar1 + (longlong)puVar8);
          FUN_180001300(puVar9,local_res8);
          local_res8[0] = 0;
          lVar7 = FUN_180001300(puVar9 + 1,local_res8);
        }
        else {
          lVar7 = FUN_1800084c0(param_2,uVar2,param_3,local_res8[0]);
        }
        uVar6 = uVar6 + 2;
      } while (uVar6 < (ulonglong)param_1[2]);
    }
    uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
  else {
LAB_18001dac1:
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}


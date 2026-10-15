// Function: FUN_18001dd80
// Address: 18001dd80
// Size: 926 bytes


void FUN_18001dd80(undefined8 *param_1,void *param_2,uint param_3,longlong *param_4,char param_5,
                  char param_6,void *param_7,uint *param_8,uint *param_9,char param_10)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined7 extraout_var;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char cVar16;
  undefined1 auStackY_8f8 [32];
  char local_888 [4];
  uint local_884;
  uint local_880;
  undefined8 *local_878;
  uint *local_870;
  void *local_868;
  undefined1 local_858 [1024];
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_180086010 ^ (ulonglong)auStackY_8f8;
  local_868 = param_7;
  local_870 = param_9;
  local_878 = param_1;
  if (0x6f < param_3) {
    uVar4 = 0xffffffff;
    local_884 = 0xffffffff;
    memset(local_458,0,0x400);
    cVar16 = false;
    bVar2 = false;
    local_888[0] = '\0';
    local_880 = 0xffffffff;
    if (param_6 == '\0') {
      memset(local_858,0,0x400);
      if (0x400 < param_3) {
        param_3 = 0x400;
      }
      memcpy(local_858,param_2,(ulonglong)param_3);
      iVar13 = 0;
      do {
        uVar4 = FUN_180041730((longlong)local_858,0x80,iVar13);
        if ((uVar4 == 0xffffffff) || (0x400 < (int)uVar4)) break;
        lVar6 = FUN_180041850((longlong)local_858,0x80,iVar13);
        bVar3 = FUN_180045440(lVar6);
        if ((int)CONCAT71(extraout_var,bVar3) == 0) {
          local_884 = (uint)*(ushort *)(lVar6 + 0x20);
          break;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 5);
      local_880 = local_884;
      if (param_10 != '\0') {
        cVar16 = uVar4 == 0xffffffff;
        local_888[0] = cVar16;
      }
    }
    local_880 = local_880 + uVar4;
    *param_8 = local_880;
    uVar10 = param_4[0xb];
    if (param_10 != '\0') {
      uVar5 = FUN_180041820((longlong)param_2);
      uVar10 = (ulonglong)uVar5;
    }
    puVar15 = *(undefined8 **)(local_878[7] + 0x70);
    puVar11 = (undefined8 *)puVar15[1];
    puVar7 = puVar11;
    puVar14 = puVar15;
    puVar12 = local_878;
    if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
      do {
        if ((longlong)puVar7[4] < (longlong)uVar10) {
          puVar8 = (undefined8 *)puVar7[2];
        }
        else {
          puVar8 = (undefined8 *)*puVar7;
          puVar14 = puVar7;
        }
        puVar7 = puVar8;
      } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
      do {
        if ((longlong)uVar10 < (longlong)puVar11[4]) {
          puVar7 = (undefined8 *)*puVar11;
          puVar15 = puVar11;
        }
        else {
          puVar7 = (undefined8 *)puVar11[2];
        }
        puVar11 = puVar7;
      } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
    }
    while ((puVar14 != puVar15 && ((!bVar2 || (cVar16 == '\0'))))) {
      if (((puVar14[8] != 0) && (puVar14[7] != 0)) &&
         (((cVar16 != '\0' ||
           ((*(int *)(puVar14 + 6) == 9 &&
            (uVar9 = FUN_18001db20((longlong)puVar12,local_868,(longlong)local_458,
                                   (longlong)(puVar14 + 5),param_4,local_870,local_888,param_6,uVar4
                                   ,local_884,local_880,param_10,param_5), puVar7 = puVar12,
            puVar12 = local_878, cVar16 = local_888[0], (char)uVar9 != '\0')))) &&
          (uVar10 = FUN_180020390(puVar7,param_4,(longlong)(puVar14 + 5)), puVar12 = local_878,
          (char)uVar10 != '\0')))) {
        bVar2 = true;
      }
      puVar11 = (undefined8 *)puVar14[2];
      if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)*puVar11 + 0x19);
        puVar14 = puVar11;
        puVar11 = (undefined8 *)*puVar11;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar11 + 0x19);
          puVar14 = puVar11;
          puVar11 = (undefined8 *)*puVar11;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar8 = (undefined8 *)puVar14[1];
        puVar11 = puVar14;
        while ((puVar14 = puVar8, cVar1 == '\0' && (puVar11 == (undefined8 *)puVar14[2]))) {
          cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
          puVar8 = (undefined8 *)puVar14[1];
          puVar11 = puVar14;
        }
      }
    }
    FUN_18001f7b0((longlong)puVar12,param_4);
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_8f8);
  return;
}


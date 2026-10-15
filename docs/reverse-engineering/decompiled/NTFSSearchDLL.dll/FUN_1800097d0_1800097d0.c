// Function: FUN_1800097d0
// Address: 1800097d0
// Size: 532 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800097d0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined7 extraout_var;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_2068 [32];
  undefined1 local_2048;
  longlong local_2038 [2];
  longlong *local_2028;
  undefined8 local_2020;
  int local_2018 [3];
  uint uStack_200c;
  undefined8 local_1ff0;
  longlong local_1fe8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1800097dc;
  local_2020 = 0xfffffffffffffffe;
  local_18 = DAT_180086010 ^ (ulonglong)auStack_2068;
  memset(local_2018,0,0x2000);
  local_2048 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                    (*(longlong **)(param_1 + 0xb8),local_2018,*(undefined8 *)(param_2 + 0x10),1);
  if (iVar5 == 0) {
    if (*(longlong *)(param_2 + 0x10) < 0) {
      *(undefined8 *)(param_2 + 0x68) = 0xfffffffffffffff6;
    }
    goto LAB_1800099bf;
  }
  cVar3 = FUN_18003f6d0(local_2018);
  if (cVar3 == '\0') goto LAB_1800099bf;
  uVar9 = uStack_200c >> 8 & 0xff;
  if (*(uint *)(param_2 + 0xc) != uVar9) goto LAB_1800099bf;
  uVar6 = *(uint *)(param_2 + 0xc);
  if (*(longlong *)(param_2 + 0x10) < 0) {
    *(longlong *)(param_2 + 0x68) = *(longlong *)(param_2 + 0x68) + 0x32;
    *(uint *)(param_2 + 0xc) = uVar9;
    *(undefined8 *)(param_2 + 0x60) = local_1ff0;
    uVar6 = uVar9;
  }
  uVar12 = (ulonglong)uVar6 * local_1fe8 + *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 200) == -1) {
    *(ulonglong *)(param_2 + 200) = uVar12;
  }
  if (*(char *)(param_2 + 0xf2) != '\0') goto LAB_1800099bf;
  local_2048 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                    (*(longlong **)(param_1 + 0xb8),local_2018,uVar12);
  if (iVar5 == 0) goto LAB_1800099bf;
  FUN_180041cf0(local_2038,local_2018,0x400,0);
  bVar4 = FUN_180041c50(local_2038);
  if ((int)CONCAT71(extraout_var,bVar4) != 0) {
    iVar5 = FUN_180041050(local_2038);
    if (iVar5 != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x108);
      puVar10 = *(ulonglong **)(param_2 + 0x100);
      if (puVar10 != puVar1) {
        do {
          if (*puVar10 == uVar12) break;
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar1);
        if (puVar10 != puVar1) goto LAB_1800099b5;
      }
      plVar7 = FUN_180007460(local_2038,uVar12,*(longlong **)(param_1 + 0xb8),'\x01');
      local_2028 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *(undefined1 *)(param_2 + 0xf2) = 1;
        *(undefined1 *)(param_2 + 0x7d) = 1;
        plVar11 = (longlong *)(param_2 + 0x118);
        pvVar2 = *(void **)(param_2 + 0x120);
        if (*(void **)(param_2 + 0x128) == pvVar2) {
          FUN_180013a20(plVar11,pvVar2,&local_2028);
        }
        else {
          puVar8 = (undefined8 *)FUN_180001100(plVar11,pvVar2);
          *puVar8 = plVar7;
          plVar11[1] = plVar11[1] + 8;
        }
      }
    }
  }
LAB_1800099b5:
  FUN_180041c70(local_2038);
LAB_1800099bf:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2068);
  return;
}


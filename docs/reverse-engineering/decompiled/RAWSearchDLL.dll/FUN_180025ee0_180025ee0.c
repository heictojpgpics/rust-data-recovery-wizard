// Function: FUN_180025ee0
// Address: 180025ee0
// Size: 471 bytes


void FUN_180025ee0(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  longlong *local_78;
  longlong local_70 [4];
  ulonglong local_50;
  
  local_80 = 0xfffffffffffffffe;
  local_50 = DAT_18008f028 ^ (ulonglong)auStackY_b8;
  if (((*(char *)(param_1 + 0x118) == '\0') && (param_2 != 0)) && (0 < param_3)) {
    lVar11 = (longlong)param_3;
    lVar10 = *(longlong *)(param_1 + 0x110);
    lVar1 = *(longlong *)(param_1 + 8);
    lVar4 = lVar10 / lVar11 + lVar1;
    lVar2 = *param_5;
    if ((lVar2 <= lVar4) && (lVar3 = param_5[1], lVar4 < lVar3)) {
      lVar4 = (param_4 - lVar1) * lVar11;
      if (lVar10 == 0) {
        puVar9 = (undefined1 *)(param_2 - lVar4);
        FUN_180001780((longlong)local_70);
        puVar5 = (undefined1 *)FUN_1800016b0(local_70);
        *(longlong *)(puVar5 + 0x10) = lVar10;
        *(undefined8 *)(puVar5 + 0x18) = 0xf;
        local_88[0] = (undefined1)lVar10;
        FUN_180001300(puVar5,local_88);
        FUN_180011560((longlong)local_70,(ulonglong)((int)lVar10 + 0x20));
        FUN_1800262c0((longlong)local_70,puVar9,puVar9 + 0x20);
        FUN_180019970((longlong *)(param_1 + 0x120),local_70);
        FUN_180001630(local_70);
        local_78 = local_70;
        plVar6 = (longlong *)FUN_180007060((longlong)local_70,(undefined8 *)(param_1 + 0x120));
        FUN_1800173f0(param_1,plVar6);
        *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x28) = 0x1f400000;
        *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x30) = lVar11;
      }
      uVar7 = FUN_1800260c0(*(longlong *)(param_1 + 0x140),param_2,(lVar2 - lVar1) * lVar11,
                            (lVar3 - lVar1) * lVar11,lVar4);
      lVar10 = *(longlong *)(param_1 + 0x140);
      if ((char)uVar7 == '\0') {
        *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar10 + 0x20);
      }
      else {
        if (*(char *)(lVar10 + 8) == '\0') {
          uVar8 = 0xffffffffffffffff;
        }
        else {
          uVar8 = *(undefined8 *)(lVar10 + 0x18);
        }
        *(undefined8 *)(param_1 + 0x10) = uVar8;
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
    }
  }
  __security_check_cookie(local_50 ^ (ulonglong)auStackY_b8);
  return;
}


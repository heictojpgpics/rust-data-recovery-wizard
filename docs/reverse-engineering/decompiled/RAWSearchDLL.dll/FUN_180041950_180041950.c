// Function: FUN_180041950
// Address: 180041950
// Size: 487 bytes


void FUN_180041950(longlong param_1,int *param_2,int param_3,longlong param_4,longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *_Dst;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  undefined8 local_140;
  char local_138 [272];
  ulonglong local_28;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStackY_178;
  if (param_2 == (int *)0x0) goto LAB_180041b1c;
  if (*(int *)(param_1 + 0x120) == 0) {
    if (*param_2 == DAT_180093918) {
      *(undefined4 *)(param_1 + 0x120) = 1;
      goto LAB_1800419b2;
    }
    if (((param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3 <
         *(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8)) ||
       (uVar2 = FUN_180041b40(param_1,(short *)param_2,param_3,param_4,param_5), (int)uVar2 != 0))
    goto LAB_180041b1c;
    if ((ulonglong)((param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3) <
        *(ulonglong *)(param_1 + 0x118)) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
    }
    else {
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x118);
    }
  }
  else {
LAB_1800419b2:
    uVar4 = 0;
    lVar5 = param_4 - *(longlong *)(param_1 + 8);
    lVar6 = (longlong)param_3;
    uVar7 = lVar5 * lVar6;
    if ((uVar7 < 0x44c) && (0x44c < (ulonglong)((lVar5 + 1) * lVar6))) {
      lVar5 = -uVar7;
      lVar3 = lVar5 + 0x44c;
      if ((lVar3 < 0) ||
         ((lVar6 < lVar5 + 0x450 ||
          (uVar4 = (ulonglong)(*(int *)(lVar3 + (longlong)param_2) + 0x480),
          *(longlong *)(param_1 + 0x118) < (longlong)uVar4)))) goto LAB_180041b1c;
    }
    if (uVar4 == 0) goto LAB_180041b1c;
    *(ulonglong *)(param_1 + 0x10) = uVar4;
  }
  memset(local_138,0,0x104);
  lVar5 = param_1 + 0x20;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar7 = uVar4 + 1;
    lVar6 = uVar4 + 1;
    uVar4 = uVar7;
  } while (local_138[lVar6] != '\0');
  puVar1 = (undefined8 *)FUN_1800016b0(lVar5);
  if ((ulonglong)puVar1[3] < uVar7) {
    FUN_1800086f0(lVar5,uVar7,(char)lVar5,local_138);
  }
  else {
    _Dst = puVar1;
    if (0xf < (ulonglong)puVar1[3]) {
      _Dst = (undefined8 *)*puVar1;
    }
    puVar1[2] = uVar7;
    memmove(_Dst,local_138,uVar7);
    local_148[0] = 0;
    FUN_180001300((undefined1 *)((longlong)_Dst + uVar7),local_148);
  }
LAB_180041b1c:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_178);
  return;
}


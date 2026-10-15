// Function: FUN_180040f10
// Address: 180040f10
// Size: 451 bytes


undefined8 FUN_180040f10(ulonglong param_1,byte *param_2,longlong param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong local_res8;
  longlong local_40 [5];
  
  lVar8 = param_3;
  local_res8 = param_1;
  puVar2 = FUN_180010a40();
  uVar7 = (undefined1)lVar8;
  FUN_180001780((longlong)local_40);
  puVar3 = (undefined8 *)FUN_1800016b0(local_40);
  uVar6 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  local_res8 = local_res8 & 0xffffffffffffff00;
  FUN_180001300((undefined1 *)puVar3,(undefined1 *)&local_res8);
  if ((ulonglong)puVar3[3] < 4) {
    FUN_1800086f0((longlong)local_40,4,uVar7,&DAT_18006cc84);
  }
  else {
    _Dst = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      _Dst = (undefined8 *)*puVar3;
    }
    puVar3[2] = 4;
    memmove(_Dst,&DAT_18006cc84,4);
    local_res8 = local_res8 & 0xffffffffffffff00;
    FUN_180001300((undefined1 *)((longlong)_Dst + 4),(undefined1 *)&local_res8);
  }
  cVar1 = FUN_180010f50((longlong)puVar2,local_40);
  if ((cVar1 != '\0') && (param_2 != (byte *)0x0)) {
    pbVar10 = param_2 + 4;
    uVar5 = uVar6;
    if ((param_2 != (byte *)0xfffffffffffffffc) && (pbVar4 = param_2, param_2 < pbVar10)) {
      do {
        uVar5 = uVar5 << 8 | (ulonglong)*pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (pbVar4 != pbVar10);
    }
    pbVar4 = param_2 + 8;
    uVar9 = uVar6;
    if (((param_2 != (byte *)0xfffffffffffffffc) && (pbVar4 != (byte *)0x0)) &&
       (uVar9 = 0, pbVar10 < pbVar4)) {
      for (pbVar10 = param_2 + 7; pbVar10 != param_2 + 3; pbVar10 = pbVar10 + -1) {
        uVar9 = uVar9 << 8 | (ulonglong)*pbVar10;
      }
    }
    if (((pbVar4 != (byte *)0x0) && (param_2 != (byte *)0xfffffffffffffff4)) &&
       (pbVar4 < param_2 + 0xc)) {
      do {
        uVar6 = uVar6 << 8 | (ulonglong)*pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (pbVar4 != param_2 + 0xc);
    }
    if ((uVar5 == 0x52494646) && (uVar6 == 0x57454250)) {
      *(ulonglong *)(param_3 + 0x10) = uVar9 + 8;
      *(undefined4 *)(param_3 + 0x18) = 0x7e;
      return 1;
    }
  }
  return 0;
}


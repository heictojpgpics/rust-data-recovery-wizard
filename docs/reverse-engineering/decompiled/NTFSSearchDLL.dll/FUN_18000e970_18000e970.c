// Function: FUN_18000e970
// Address: 18000e970
// Size: 827 bytes


undefined8 * FUN_18000e970(undefined8 param_1,ulonglong *param_2,uint param_3,ulonglong *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  LPSTR lpMultiByteStr;
  undefined8 *puVar8;
  undefined2 uVar9;
  longlong local_res10;
  BOOL local_d8;
  uint local_d4;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  
  if (param_2 == (ulonglong *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_3 < 0x54) {
    return (undefined8 *)0x0;
  }
  uVar3 = param_2[9];
  if ((uVar3 & 0x10000020) == 0) {
    return (undefined8 *)0x0;
  }
  if (((byte)uVar3 & 6) == 6) {
    return (undefined8 *)0x0;
  }
  bVar1 = (byte)param_2[10];
  if (param_3 < (uint)bVar1 * 2 + 0x52) {
    return (undefined8 *)0x0;
  }
  uVar4 = param_2[3];
  local_b8 = *param_2 >> 0x30;
  local_c0 = *param_2 & 0xffffffffffff;
  uVar5 = param_2[6];
  uVar6 = param_2[4];
  local_c8 = (longlong)(param_2[8] << 0x10) >> 0x10;
  local_d4 = local_d4 & 0xffff0000;
  if ((uVar3 >> 0x1c & 1) != 0) {
    local_d4 = 0x10;
  }
  if ((LPCWSTR)((longlong)param_2 + 0x52) == (LPCWSTR)0x0) {
    return (undefined8 *)0x0;
  }
  if (bVar1 == 0) {
    return (undefined8 *)0x0;
  }
  iVar7 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)((longlong)param_2 + 0x52),(uint)bVar1,(LPSTR)0x0,0,
                              (LPCSTR)0x0,(LPBOOL)0x0);
  local_res10 = CONCAT44(local_res10._4_4_,iVar7);
  if (0 < iVar7) {
    lpMultiByteStr = (LPSTR)FUN_18002be40((longlong)(iVar7 + 1));
    memset(lpMultiByteStr,0,(longlong)(iVar7 + 1));
    iVar7 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)((longlong)param_2 + 0x52),(uint)bVar1,
                                lpMultiByteStr,(int)local_res10,(LPCSTR)0x0,(LPBOOL)0x0);
    local_res10 = (longlong)iVar7;
    if (lpMultiByteStr != (LPSTR)0x0) {
      uVar9 = (undefined2)iVar7;
      goto LAB_18000ebd1;
    }
  }
  if (bVar1 == 0) {
    return (undefined8 *)0x0;
  }
  local_d8 = 1;
  local_res10 = CONCAT62(local_res10._2_6_,0x5f);
  iVar7 = WideCharToMultiByte(0,0x200,(LPCWSTR)((longlong)param_2 + 0x52),(uint)bVar1,(LPSTR)0x0,0,
                              (LPCSTR)&local_res10,&local_d8);
  if (iVar7 < 1) {
    return (undefined8 *)0x0;
  }
  lpMultiByteStr = (LPSTR)FUN_18002be40((longlong)(iVar7 + 1));
  memset(lpMultiByteStr,0,(longlong)(iVar7 + 1));
  iVar7 = WideCharToMultiByte(0,0x200,(LPCWSTR)((longlong)param_2 + 0x52),(uint)bVar1,lpMultiByteStr
                              ,iVar7,(LPCSTR)&local_res10,&local_d8);
  uVar9 = (undefined2)iVar7;
  if (lpMultiByteStr == (LPSTR)0x0) {
    return (undefined8 *)0x0;
  }
LAB_18000ebd1:
  uVar2 = *(undefined2 *)((longlong)param_2 + 0x16);
  puVar8 = FUN_180002f90();
  if (puVar8 != (undefined8 *)0x0) {
    *(byte *)((longlong)puVar8 + 0x72) = *(byte *)((longlong)puVar8 + 0x72) & 0xc2;
    *(longlong *)((longlong)puVar8 + 0x1b) = local_c8;
    puVar8[8] = 0;
    *(ulonglong *)((longlong)puVar8 + 0x25) = uVar4;
    *(ulonglong *)((longlong)puVar8 + 0x35) = uVar5;
    *(ulonglong *)((longlong)puVar8 + 0x2d) = uVar6;
    *(LPSTR *)((longlong)puVar8 + 0x11) = lpMultiByteStr;
    *(undefined2 *)((longlong)puVar8 + 0x19) = uVar9;
    *(short *)((longlong)puVar8 + 0x23) = (short)local_d4;
    puVar8[0xb] = local_c0;
    *(short *)(puVar8 + 0xd) = (short)local_b8;
    *(undefined1 *)((longlong)puVar8 + 0x3d) = 0;
    *(byte *)((longlong)puVar8 + 0x72) = *(byte *)((longlong)puVar8 + 0x72) | 1;
    puVar8[0xc] = 0;
    puVar8[9] = 0;
    *(undefined2 *)((longlong)puVar8 + 0x6a) = uVar2;
    *(undefined2 *)(puVar8 + 0xe) = 0;
    *param_4 = param_2[2] & 0xffffffffffff;
  }
  return puVar8;
}


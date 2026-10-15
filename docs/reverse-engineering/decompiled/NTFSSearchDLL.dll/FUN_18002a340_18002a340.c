// Function: FUN_18002a340
// Address: 18002a340
// Size: 426 bytes


ulonglong FUN_18002a340(ulonglong *param_1,uint param_2,longlong param_3,ulonglong *param_4,
                       char param_5)

{
  LPCWSTR pWVar1;
  byte bVar2;
  ulonglong uVar3;
  LPSTR in_RAX;
  longlong local_98 [2];
  LPSTR local_88;
  undefined2 local_80;
  ulonglong local_7e;
  undefined2 local_76;
  ulonglong local_74;
  ulonglong local_6c;
  ulonglong local_64;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined8 local_59;
  undefined8 local_51;
  undefined8 local_49;
  ulonglong local_41;
  undefined8 local_39;
  undefined2 local_31;
  undefined2 local_2f;
  undefined4 local_2d;
  undefined2 local_29;
  byte local_27;
  
  if ((((0x53 < param_2) && (uVar3 = param_1[9], (uVar3 & 0x10000020) != 0)) &&
      (in_RAX = (LPSTR)(uVar3 & 6), (char)in_RAX != '\x06')) &&
     ((param_5 == '\0' || ((uVar3 >> 0x1c & 1) != 0)))) {
    bVar2 = (byte)param_1[10];
    in_RAX = (LPSTR)(ulonglong)param_2;
    if ((LPSTR)((longlong)(int)(uint)bVar2 * 2 + 0x52U) <= in_RAX) {
      pWVar1 = (LPCWSTR)((longlong)param_1 + 0x52);
      local_27 = local_27 & 0xc0;
      local_76 = 0;
      local_41 = *param_1 & 0xffffffffffff;
      local_5c = 0;
      local_74 = param_1[3];
      local_6c = param_1[4];
      local_64 = param_1[6];
      local_7e = param_1[8];
      *(ulonglong *)(param_3 + 0x18) = param_1[7];
      in_RAX = (LPSTR)(ulonglong)(uint)param_1[9];
      local_5a = 0;
      local_59 = 0;
      local_51 = 0;
      local_49 = 0;
      local_39 = 0;
      local_2d = 0;
      local_29 = 0;
      if (((uint)param_1[9] >> 0x1c & 1) != 0) {
        in_RAX = (LPSTR)0x0;
        local_76 = 0x10;
        if ((param_1[7] != 0) || (param_1[8] != 0)) goto LAB_18002a4c7;
      }
      local_98[0] = 0;
      if ((pWVar1 != (LPCWSTR)0x0) &&
         ((in_RAX = FUN_180006610(pWVar1,(ulonglong)bVar2,local_98), in_RAX != (LPSTR)0x0 ||
          (in_RAX = FUN_1800066f0(pWVar1,(ulonglong)bVar2,local_98), in_RAX != (LPSTR)0x0)))) {
        local_80 = (undefined2)local_98[0];
        local_2f = *(undefined2 *)((longlong)param_1 + 0x16);
        local_31 = *(undefined2 *)((longlong)param_1 + 6);
        local_88 = in_RAX;
        in_RAX = (LPSTR)FUN_180002f90();
        if (in_RAX != (LPSTR)0x0) {
          FUN_180003020((longlong)in_RAX,&local_88);
          *(LPSTR *)(param_3 + 0x20) = in_RAX;
          uVar3 = param_1[2];
          *param_4 = uVar3 & 0xffffffffffff;
          return CONCAT71((int7)((uVar3 & 0xffffffffffff) >> 8),1);
        }
      }
    }
  }
LAB_18002a4c7:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


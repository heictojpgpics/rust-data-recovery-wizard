// Function: FUN_180018e00
// Address: 180018e00
// Size: 918 bytes


void FUN_180018e00(longlong param_1,int *param_2,undefined **param_3,uint *param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *******pppppppuVar6;
  longlong ****pppplVar7;
  ulonglong _Size;
  undefined8 *_Dst;
  undefined1 uVar9;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8 [8];
  _FILETIME local_1d0;
  longlong ***local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  _FILETIME local_1a8;
  longlong ***local_1a0;
  undefined8 local_198;
  _SYSTEMTIME local_190;
  undefined8 ******local_180 [2];
  ulonglong local_170;
  ulonglong local_168;
  char local_158 [272];
  ulonglong local_48;
  ulonglong uVar8;
  
  local_198 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_228;
  local_1d0 = (_FILETIME)((ulonglong)local_1d0 & 0xffffffff00000000);
  *param_4 = 0;
  FUN_180001690((undefined1 *)local_180);
  plVar1 = (longlong *)(param_1 + 0x256);
  uVar3 = FUN_180045690(param_2,(int *)param_4,param_3,*(byte *)(param_1 + 0x110),plVar1,local_180,
                        &local_1d0.dwLowDateTime,param_5,param_6);
  if ((int)uVar3 == 0) {
LAB_180018ea6:
    FUN_180001630((longlong *)local_180);
  }
  else {
    if ((*param_2 == 0x2014b50) && (*param_4 == 0x2e)) {
      local_1c0 = *(undefined8 *)(param_1 + 8);
      local_1c8 = *(longlong ****)(param_1 + 0xe8);
      local_1b8 = 0xffffffffffffffff;
      if ((longlong ****)local_1c8 == (longlong ****)0x0) {
        local_1b0 = 0x200;
      }
      else {
        param_3 = CRawFileCellTestStorageDevice::vftable;
        if (*local_1c8 == (longlong **)CRawFileCellTestStorageDevice::vftable) {
          local_1b0 = *(int *)((longlong)local_1c8 + 0xc);
          if (local_1b0 < 1) {
            local_1b0 = 0x200;
          }
        }
        else {
          local_1b0 = (*(code *)(*local_1c8)[5])();
        }
      }
      local_1b0 = local_1b0 << 7;
      piVar4 = (int *)FUN_180042930((longlong *)&local_1c8,*(ulonglong *)(param_1 + 0x10));
      uVar3 = FUN_180045690(piVar4,(int *)param_4,param_3,*(byte *)(param_1 + 0x110),plVar1,
                            local_180,&local_1d0.dwLowDateTime,param_5,param_6);
      if ((int)uVar3 == 0) goto LAB_180018ea6;
    }
    *(bool *)(param_1 + 0x112) = (local_1d0.dwLowDateTime - 8 & 0xfffff7ff) != 0;
    if ((local_170 != 0) && (*(longlong *)(param_1 + 0xc0) == 0)) {
      *(bool *)(param_1 + 0x111) = (local_1d0.dwLowDateTime - 8 & 0xfffff7ff) != 0;
      if ((undefined8 *******)(param_1 + 0xb0) != local_180) {
        pppppppuVar6 = local_180;
        if (0xf < local_168) {
          pppppppuVar6 = (undefined8 *******)local_180[0];
        }
        FUN_1800071e0(param_1 + 0xb0,pppppppuVar6,local_170);
      }
      local_1d0.dwLowDateTime = 0;
      local_1d0.dwHighDateTime = 0;
      DosDateTimeToFileTime(*(WORD *)(param_2 + 3),*(WORD *)((longlong)param_2 + 10),&local_1d0);
      local_1a8.dwLowDateTime = 0;
      local_1a8.dwHighDateTime = 0;
      FileTimeToLocalFileTime(&local_1d0,&local_1a8);
      local_190.wYear = 0;
      local_190.wMonth = 0;
      local_190.wDayOfWeek = 0;
      local_190.wDay = 0;
      local_190.wHour = 0;
      local_190.wMinute = 0;
      local_190.wSecond = 0;
      local_190.wMilliseconds = 0;
      FileTimeToSystemTime(&local_1a8,&local_190);
      memset(local_158,0,0x104);
      uVar9 = 0x90;
      snprintf(local_158,0x104,"%d:%d:%d %d:%d:%d",local_190._0_8_ & 0xffff);
      FUN_180001780((longlong)&local_1c8);
      puVar5 = (undefined8 *)FUN_1800016b0(&local_1c8);
      puVar5[2] = 0;
      puVar5[3] = 0xf;
      local_1d8[0] = 0;
      FUN_180001300((undefined1 *)puVar5,local_1d8);
      uVar8 = 0xffffffffffffffff;
      do {
        _Size = uVar8 + 1;
        lVar2 = uVar8 + 1;
        uVar8 = _Size;
      } while (local_158[lVar2] != '\0');
      if ((ulonglong)puVar5[3] < _Size) {
        FUN_1800086f0((longlong)&local_1c8,_Size,uVar9,local_158);
      }
      else {
        _Dst = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          _Dst = (undefined8 *)*puVar5;
        }
        puVar5[2] = _Size;
        memmove(_Dst,local_158,_Size);
        local_1d8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_1d8);
      }
      local_1a0 = (longlong ***)&local_1c8;
      if ((longlong ****)(param_1 + 0x40) != &local_1c8) {
        pppplVar7 = &local_1c8;
        if (0xf < CONCAT44(uStack_1ac,local_1b0)) {
          pppplVar7 = (longlong ****)local_1c8;
        }
        FUN_1800071e0(param_1 + 0x40,pppplVar7,local_1b8);
      }
      FUN_180001630((longlong *)&local_1c8);
    }
    if (*(int *)plVar1 != 0x48) {
      *(int *)(param_1 + 0x18) = *(int *)plVar1;
    }
    *(longlong *)(param_1 + 0x113) = *(longlong *)(param_1 + 0x113) + (ulonglong)*param_4;
    FUN_180001630((longlong *)local_180);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_228);
  return;
}


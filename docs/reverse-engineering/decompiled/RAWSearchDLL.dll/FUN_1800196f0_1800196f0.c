// Function: FUN_1800196f0
// Address: 1800196f0
// Size: 412 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1800196f0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                 longlong param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *_Dst;
  char **ppcVar6;
  undefined1 uVar7;
  size_t _Size;
  char *local_res10;
  ushort local_38 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  iVar5 = 0;
  iVar1 = 0;
  if (((param_2 != 0) &&
      ((DAT_180096ee0 == 0 ||
       (uVar4 = (param_5 - _DAT_180096ee8) * param_4,
       DAT_180096ee0 <= uVar4 && uVar4 - DAT_180096ee0 != 0)))) &&
     ((*(ushort *)(param_2 + 8) < 0x14 || (*(ushort *)(param_2 + 8) == 0x62)))) {
    *(undefined4 *)(param_3 + 0x18) = 0x48;
    _DAT_180096ee8 = param_5;
    local_res10 = "project.xml";
    ppcVar6 = &local_res10;
    do {
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while ((*ppcVar6)[_Size] != '\0');
      iVar1 = _memicmp((void *)(param_2 + 0x1e),*ppcVar6,_Size);
      uVar7 = (undefined1)_Size;
      if (iVar1 == 0) {
        *(undefined4 *)(param_3 + 0x18) = 0x91;
        puVar2 = FUN_180001350();
        local_28 = 0;
        local_20 = 0;
        puVar3 = (undefined8 *)FUN_1800016b0(local_38);
        puVar3[2] = 0;
        puVar3[3] = 7;
        local_res10 = (char *)((ulonglong)local_res10 & 0xffffffffffff0000);
        FUN_180001790((undefined2 *)puVar3,(undefined2 *)&local_res10);
        if ((ulonglong)puVar3[3] < 3) {
          FUN_18000f8f0((longlong)local_38,3,uVar7,&DAT_180067c88);
        }
        else {
          _Dst = puVar3;
          if (7 < (ulonglong)puVar3[3]) {
            _Dst = (undefined8 *)*puVar3;
          }
          puVar3[2] = 3;
          memmove(_Dst,&DAT_180067c88,6);
          local_res10 = (char *)((ulonglong)local_res10 & 0xffffffffffff0000);
          FUN_180001790((undefined2 *)((longlong)_Dst + 6),(undefined2 *)&local_res10);
        }
        FUN_18000ed00((longlong)(puVar2 + 0x60),local_38);
        break;
      }
      iVar5 = iVar5 + 1;
      ppcVar6 = ppcVar6 + 1;
    } while (iVar5 == 0);
    iVar1 = 1;
  }
  return iVar1;
}


// Function: FUN_18002a4f0
// Address: 18002a4f0
// Size: 641 bytes


void FUN_18002a4f0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  void *_Dst;
  undefined8 *puVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong *_Src;
  uint uVar10;
  void **_Size;
  void *local_res10 [2];
  undefined8 local_res20;
  ulonglong local_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  void *pvStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  piVar1 = (int *)(param_2 + 0x58);
  uVar10 = param_3 - 0x58;
  local_res20 = param_4;
  uVar6 = FUN_180045b80(piVar1,uVar10);
  uVar3 = local_res20;
  if ((int)uVar6 != 0) {
    _Src = (ulonglong *)((longlong)(*(int *)(param_2 + 0x70) + 0x18) + (longlong)piVar1);
    uVar5 = *(uint *)(param_2 + 0x74);
    if (uVar10 <= *(uint *)(param_2 + 0x74)) {
      uVar5 = uVar10;
    }
    if (_Src < (ulonglong *)((ulonglong)uVar5 + (longlong)piVar1)) {
      do {
        if ((ulonglong)param_3 + param_2 < (longlong)_Src + 0x54U) {
          return;
        }
        uVar4 = (ushort)_Src[1];
        if (uVar4 == 0) {
          return;
        }
        if ((ulonglong)param_3 + param_2 < (ulonglong)uVar4 + (longlong)_Src) {
          return;
        }
        local_c0 = 0;
        pvStack_b8 = (void *)0x0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (longlong *)0x0;
        uStack_98 = 0;
        local_90 = 0;
        local_c8 = 5;
        FUN_18002a340(_Src,(uint)uVar4,(longlong)&local_c0,&local_c8,'\0');
        plVar8 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          if ((undefined **)*local_a0 == CNTFSFileProperties::vftable) {
            uVar4 = *(ushort *)((longlong)local_a0 + 0x23);
          }
          else {
            uVar4 = (*(code *)((undefined **)*local_a0)[7])(local_a0);
          }
          if ((uVar4 & 0x10) == 0) {
            (**(code **)(*plVar8 + 0x138))(plVar8,1);
          }
          else {
            uVar4 = (ushort)_Src[1];
            local_b0 = CONCAT44(1,(uint)uVar4);
            local_c0 = uVar3;
            _Dst = (void *)FUN_18002be40((ulonglong)uVar4);
            _Size = (void **)(ulonglong)uVar4;
            local_res10[0] = _Dst;
            memcpy(_Dst,_Src,(size_t)_Size);
            pvVar2 = *(void **)(param_1 + 0xd8);
            if (*(void **)(param_1 + 0xe0) == pvVar2) {
              _Size = local_res10;
              FUN_180013a20((longlong *)(param_1 + 0xd0),pvVar2,_Size);
            }
            else {
              puVar7 = (undefined8 *)FUN_180001100(_Dst,pvVar2);
              *puVar7 = local_res10[0];
              *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 8;
            }
            pvStack_b8 = local_res10[0];
            uStack_98 = local_c8;
            if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
              pcVar9 = *(char **)((longlong)plVar8 + 0x11);
            }
            else {
              pcVar9 = (char *)(*(code *)((undefined **)*plVar8)[2])(plVar8);
            }
            if ((pcVar9 != (char *)0x0) && (*pcVar9 != '$')) {
              local_c8 = plVar8[0xb];
              uVar6 = FUN_180002680(&local_c8);
              puVar7 = (undefined8 *)FUN_180002680(uVar6);
              local_88 = *puVar7;
              local_80 = local_c0;
              pvStack_78 = pvStack_b8;
              local_70 = local_b0;
              uStack_68 = uStack_a8;
              local_60 = local_a0;
              uStack_58 = uStack_98;
              local_50 = local_90;
              plVar8 = (longlong *)FUN_18002b3d0((undefined8 *)(param_1 + 0xc0),(longlong)&local_88)
              ;
              FUN_18002b440((longlong *)(param_1 + 0xc0),local_48,_Size,plVar8 + 4,plVar8);
            }
          }
        }
        _Src = (ulonglong *)((longlong)_Src + (ulonglong)(ushort)_Src[1]);
      } while (_Src < (ulonglong *)((ulonglong)uVar5 + (longlong)piVar1));
    }
  }
  return;
}


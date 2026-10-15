// Function: FUN_180029dd0
// Address: 180029dd0
// Size: 790 bytes


ulonglong FUN_180029dd0(uint *param_1,longlong param_2,ulonglong *param_3,char param_4,
                       ulonglong *param_5,ulonglong *param_6)

{
  int *piVar1;
  void *_Src;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong *_Dst;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong local_res10;
  char local_res20;
  undefined1 local_58 [4];
  uint local_54;
  uint local_50 [2];
  ulonglong *local_48;
  ulonglong *local_40;
  
  puVar6 = param_3;
  local_res10 = param_2;
  local_res20 = param_4;
  if (param_2 < (longlong)param_3) {
    do {
      param_1[0xf] = (uint)((longlong)
                            (local_res10 + (ulonglong)((uint)(local_res10 >> 0x3f) & 0xfff)) >> 0xc)
      ;
      puVar6 = *(ulonglong **)(param_1 + 4);
      piVar1 = (int *)(local_res10 + (longlong)puVar6);
      if (*(int *)(local_res10 + (longlong)puVar6) == 0x44524352) {
        FUN_1800468a0(local_58,piVar1);
        local_48 = *(ulonglong **)(piVar1 + 2);
        local_40 = *(ulonglong **)(piVar1 + 8);
        puVar6 = local_40;
        if (param_4 == '\0') {
LAB_180029e93:
          _Dst = (ulonglong *)0x0;
          uVar11 = 0x40;
          local_54 = 0x40;
          if ((local_48 == local_40) || (param_4 == '\0')) {
            bVar4 = true;
            do {
              uVar9 = 0;
              puVar6 = (ulonglong *)*param_5;
              uVar10 = (uint)uVar11;
              param_4 = local_res20;
              if ((puVar6 == (ulonglong *)0x0) || (!bVar4)) {
                if (0x1000 < uVar11 + 0x30) break;
                _Dst = (ulonglong *)(uVar11 + (longlong)piVar1);
                if (_Dst != (ulonglong *)0x0) {
                  uVar8 = *_Dst;
                  if ((ulonglong *)(uVar8 >> 0x10) ==
                      (ulonglong *)(*(ulonglong *)(piVar1 + 8) >> 0x10)) {
                    puVar6 = (ulonglong *)_Dst[1];
                    if ((puVar6 == (ulonglong *)0x0) ||
                       (puVar6 = (ulonglong *)((ulonglong)puVar6 >> 0x10),
                       puVar6 == (ulonglong *)(*(ulonglong *)(piVar1 + 8) >> 0x10)))
                    goto LAB_180029f3c;
                    local_54 = uVar10 + 8;
                    uVar11 = (ulonglong)local_54;
                  }
                  else {
                    local_54 = uVar10 + 8;
                    uVar11 = (ulonglong)local_54;
                  }
                }
              }
              else {
                uVar8 = *puVar6;
                bVar4 = false;
                _Dst = puVar6;
LAB_180029f3c:
                if (uVar8 == 0) {
                  param_1[0xc] = 0;
                  param_1[0xd] = 0;
                  param_1[0xe] = 0;
                  goto LAB_18002a0a1;
                }
                puVar6 = *(ulonglong **)(param_1 + 0xc);
                uVar12 = (int)_Dst[3] + 0x30;
                local_50[0] = uVar12;
                if (puVar6 == (ulonglong *)0x0) {
                  puVar6 = (ulonglong *)FUN_180029da0((longlong)param_1);
                  *(ulonglong **)(param_1 + 0xc) = puVar6;
                  if (puVar6 == (ulonglong *)0x0) goto LAB_18002a0a1;
                  param_1[0xe] = uVar9;
                }
                else {
                  uVar9 = param_1[0xe];
                }
                uVar5 = 0x1000 - uVar10;
                if (uVar12 - uVar9 <= 0x1000 - uVar10) {
                  uVar5 = uVar12 - uVar9;
                }
                memcpy((void *)((ulonglong)uVar9 + (longlong)puVar6),
                       (void *)(uVar11 + (longlong)piVar1),(ulonglong)uVar5);
                param_1[0xe] = param_1[0xe] + uVar5;
                if (uVar12 <= param_1[0xe]) {
                  FUN_18002a0f0(param_1,_Dst,local_50,&local_54);
                  uVar10 = local_54;
                }
                local_54 = uVar10 + uVar5;
                uVar11 = (ulonglong)local_54;
                if (*_Dst == *(ulonglong *)(piVar1 + 2)) break;
              }
            } while ((uint)uVar11 < 0x1000);
            if ((local_48 == local_40) || (*_Dst != *(ulonglong *)(piVar1 + 2))) {
              iVar7 = 0;
              *param_5 = 0;
            }
            else {
              iVar7 = 0x1000 - (uint)*(ushort *)(piVar1 + 6);
              *param_5 = (ulonglong)_Dst;
            }
            *(int *)param_6 = iVar7;
            puVar6 = param_6;
          }
          else if (param_5 != (ulonglong *)0x0) {
            uVar2 = *(ushort *)(piVar1 + 6);
            puVar6 = (ulonglong *)((ulonglong)uVar2 + 0x30);
            if (puVar6 < (ulonglong *)0x1001) {
              _Src = (void *)((ulonglong)uVar2 + (longlong)piVar1);
              lVar3 = *(longlong *)(param_1 + 8);
              uVar9 = 0x1000 - uVar2;
              *param_5 = (ulonglong)_Src;
              *(uint *)param_6 = uVar9;
              puVar6 = param_6;
              if (lVar3 != 0) {
                puVar6 = (ulonglong *)((ulonglong)param_1[10] - 0x58);
                if ((ulonglong *)(ulonglong)param_1[0xb] <= puVar6) {
                  _Dst = (ulonglong *)((longlong)(ulonglong)param_1[0xb] + lVar3);
                }
              }
              *(ulonglong **)(param_1 + 0xc) = _Dst;
              if (_Dst != (ulonglong *)0x0) {
                puVar6 = (ulonglong *)memcpy(_Dst,_Src,(ulonglong)uVar9);
                param_1[0xe] = uVar9;
              }
            }
          }
        }
        else if (local_48 == local_40) {
          param_4 = '\0';
          local_res20 = '\0';
        }
        else if (local_40 != (ulonglong *)0x0) goto LAB_180029e93;
      }
LAB_18002a0a1:
      local_res10 = local_res10 + 0x1000;
    } while (local_res10 < (longlong)param_3);
  }
  return (ulonglong)puVar6 & 0xffffffffffffff00;
}


// Function: FUN_1800336f0
// Address: 1800336f0
// Size: 752 bytes


void * FUN_1800336f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  void *_Dst;
  byte *_Memory;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte local_res20 [8];
  byte *local_40;
  byte *pbStack_38;
  byte *local_30;
  
  lVar10 = 0;
  local_40 = (byte *)0x0;
  pbStack_38 = (byte *)0x0;
  local_30 = (byte *)0x0;
  FUN_180033d10((longlong *)&local_40,param_2);
  *param_3 = 0;
  *param_2 = 0;
  plVar5 = FUN_1800340b0(param_1);
  if (plVar5 != (longlong *)0x0) {
    *param_2 = *plVar5;
    bVar1 = false;
    while (*(longlong *)(param_1 + 0x40) !=
           *(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20)) {
      lVar8 = *plVar5;
      uVar9 = lVar8 - lVar10;
      bVar2 = FUN_1800335d0(uVar9);
      uVar7 = plVar5[1];
      bVar3 = FUN_1800335d0(uVar7);
      if (lVar8 == -1) {
        bVar1 = true;
        lVar8 = lVar10;
        bVar2 = 0;
      }
      lVar10 = lVar8;
      *param_3 = *param_3 + uVar7;
      lVar8 = plVar5[1];
      local_res20[0] = bVar2 << 4 | bVar3 & 0xf;
      if (local_30 == pbStack_38) {
        FUN_180033d90((longlong *)&local_40,pbStack_38,local_res20);
      }
      else {
        *pbStack_38 = local_res20[0];
        pbStack_38 = pbStack_38 + 1;
      }
      uVar4 = 0;
      if (bVar3 != 0) {
        do {
          local_res20[0] = (byte)(lVar8 >> ((byte)(uVar4 << 3) & 0x3f));
          if (local_30 == pbStack_38) {
            FUN_180033d90((longlong *)&local_40,pbStack_38,local_res20);
          }
          else {
            *pbStack_38 = local_res20[0];
            pbStack_38 = pbStack_38 + 1;
          }
          bVar6 = (char)uVar4 + 1;
          uVar4 = (uint)bVar6;
        } while (bVar6 < bVar3);
      }
      uVar4 = 0;
      if (bVar2 != 0) {
        do {
          local_res20[0] = (byte)((longlong)uVar9 >> ((byte)(uVar4 << 3) & 0x3f));
          if (local_30 == pbStack_38) {
            FUN_180033d90((longlong *)&local_40,pbStack_38,local_res20);
          }
          else {
            *pbStack_38 = local_res20[0];
            pbStack_38 = pbStack_38 + 1;
          }
          bVar3 = (char)uVar4 + 1;
          uVar4 = (uint)bVar3;
        } while (bVar3 < bVar2);
      }
      plVar5 = (longlong *)0x0;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
      if (*(longlong *)(param_1 + 0x40) !=
          *(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20)) {
        if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
          plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x30);
        }
        plVar5 = *(longlong **)
                  (*(longlong *)
                    (plVar5[1] + (*(ulonglong *)(param_1 + 0x40) >> 1 & plVar5[2] - 1U) * 8) +
                  (ulonglong)((uint)*(ulonglong *)(param_1 + 0x40) & 1) * 8);
      }
    }
    if (bVar1) {
      *param_3 = 0;
    }
    if (local_40 != pbStack_38) {
      local_res20[0] = 0;
      if (local_30 == pbStack_38) {
        FUN_180033d90((longlong *)&local_40,pbStack_38,local_res20);
      }
      else {
        *pbStack_38 = 0;
        pbStack_38 = pbStack_38 + 1;
      }
      uVar4 = (int)pbStack_38 - (int)local_40;
      _Dst = (void *)FUN_18002be40((ulonglong)uVar4);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_40,(ulonglong)uVar4);
      }
      goto LAB_180033977;
    }
  }
  _Dst = (void *)0x0;
LAB_180033977:
  if (local_40 != (byte *)0x0) {
    _Memory = local_40;
    if ((0xfff < (ulonglong)((longlong)local_30 - (longlong)local_40)) &&
       (_Memory = *(byte **)(local_40 + -8), (byte *)0x1f < local_40 + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return _Dst;
}


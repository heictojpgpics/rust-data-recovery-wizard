// Function: FUN_18001cf20
// Address: 18001cf20
// Size: 676 bytes


bool FUN_18001cf20(undefined1 *param_1,longlong *param_2,undefined8 *param_3,uint param_4,
                  longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  void *_Memory;
  undefined1 *puVar7;
  size_t sVar8;
  longlong *plVar9;
  longlong *local_30;
  longlong local_28;
  
  if (((param_2 != (longlong *)0x0) && (param_3 != (undefined8 *)0x0)) && (param_4 != 0)) {
    FUN_18001b930(param_1);
    lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
    *(longlong *)(param_1 + 0x70) = lVar6 / (longlong)(ulonglong)param_4;
    if (param_5 != 0) {
      *(longlong *)(param_1 + 0x30) = param_5;
    }
    cVar2 = FUN_18001b6e0(param_4);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 8;
      uVar4 = *(uint *)(param_1 + 0x18);
      if (param_4 != 0) {
        uVar4 = param_4;
      }
      *(uint *)(param_1 + 0x18) = uVar4;
      iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
      sVar8 = (size_t)(iVar5 * 0x14);
      _Memory = (void *)FUN_18002be40(sVar8);
      local_30 = (longlong *)0x0;
      local_28 = 0;
      local_30 = (longlong *)FUN_180013230(sVar8,0,0);
      FUN_180040690(param_3,(longlong)&local_30);
      if (local_28 == 0) {
        plVar9 = (longlong *)*local_30;
        *local_30 = (longlong)local_30;
        local_30[1] = (longlong)local_30;
        local_28 = 0;
        if (plVar9 != local_30) {
          do {
            plVar1 = (longlong *)*plVar9;
            free(plVar9);
            plVar9 = plVar1;
          } while (plVar1 != local_30);
        }
      }
      else if (*(longlong **)(*local_30 + 0x10) == (longlong *)0x0) {
        plVar9 = (longlong *)*local_30;
        *local_30 = (longlong)local_30;
        local_30[1] = (longlong)local_30;
        local_28 = 0;
        if (plVar9 != local_30) {
          do {
            plVar1 = (longlong *)*plVar9;
            free(plVar9);
            plVar9 = plVar1;
          } while (plVar1 != local_30);
        }
      }
      else {
        lVar6 = **(longlong **)(*local_30 + 0x10) * (ulonglong)param_4;
        iVar5 = (**(code **)(*param_2 + 8))(param_2,_Memory,lVar6,0x14,0);
        if (iVar5 == 0) {
          plVar9 = (longlong *)*local_30;
          *local_30 = (longlong)local_30;
          local_30[1] = (longlong)local_30;
          local_28 = 0;
          if (plVar9 != local_30) {
            do {
              plVar1 = (longlong *)*plVar9;
              free(plVar9);
              plVar9 = plVar1;
            } while (plVar1 != local_30);
          }
        }
        else {
          iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
          if (iVar5 == 0x200) {
            iVar5 = 0x800;
          }
          else {
            iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
            iVar5 = iVar5 * 2;
          }
          puVar7 = FUN_18001cdd0(param_1,(int *)((longlong)iVar5 + (longlong)_Memory),lVar6,param_2)
          ;
          if (((char)puVar7 == '\0') &&
             (puVar7 = FUN_18001cdd0(param_1,(int *)((longlong)_Memory + 0x800),lVar6,param_2),
             (char)puVar7 != '\0')) {
            param_1[0x29] = 1;
          }
          plVar9 = (longlong *)*local_30;
          *local_30 = (longlong)local_30;
          local_30[1] = (longlong)local_30;
          local_28 = 0;
          if (plVar9 != local_30) {
            do {
              plVar1 = (longlong *)*plVar9;
              free(plVar9);
              plVar9 = plVar1;
            } while (plVar1 != local_30);
          }
        }
      }
      free(local_30);
      *(longlong **)(param_1 + 8) = param_2;
      bVar3 = FUN_18001d1d0((longlong)param_1);
      if (_Memory == (void *)0x0) {
        return bVar3;
      }
      free(_Memory);
      return bVar3;
    }
  }
  return false;
}


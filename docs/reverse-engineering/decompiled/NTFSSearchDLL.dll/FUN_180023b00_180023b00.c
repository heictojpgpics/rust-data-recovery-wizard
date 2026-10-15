// Function: FUN_180023b00
// Address: 180023b00
// Size: 429 bytes


void * FUN_180023b00(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined8 local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60 [2];
  undefined8 local_50 [3];
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    puVar9 = (undefined8 *)(param_2 + 0x158);
    puVar10 = puVar9;
    local_res8 = param_1;
    plVar5 = FUN_180003b90(puVar9,&local_78);
    puVar3 = (undefined8 *)*plVar5;
    puVar6 = (undefined8 *)FUN_180002680(puVar10);
    for (puVar6 = *(undefined8 **)*puVar6; puVar6 != puVar3; puVar6 = (undefined8 *)*puVar6) {
      local_70 = local_50;
      plVar5 = FUN_1800065b0(local_50,puVar6 + 2);
      local_68 = plVar5;
      if (*plVar5 == 0) {
        FUN_180005f30((longlong)plVar5);
      }
      else {
        if ((*(char *)(param_2 + 0xf6) == '\0') || (lVar7 = 8, (*(byte *)(param_2 + 0xf8) & 1) == 0)
           ) {
          lVar7 = 0x28;
        }
        uVar1 = *(uint *)(param_2 + 0xc);
        FUN_180040930(local_60,(undefined8 *)(*plVar5 + lVar7));
        FUN_180040ad0(local_60,&local_res8);
        while (plVar8 = FUN_180040a90(local_60,&local_res10), local_res8 != (undefined8 *)*plVar8) {
          plVar8 = (longlong *)local_res8[2];
          if (plVar8 != (longlong *)0x0) {
            lVar7 = *plVar8 * (ulonglong)uVar1 + lVar2;
            if ((lVar7 == param_3) ||
               ((lVar7 < param_4 && (param_4 < (longlong)(plVar8[2] * (ulonglong)uVar1 + lVar7)))))
            {
              ~_String_alloc<>(local_60);
              bVar4 = true;
              goto LAB_180023c60;
            }
          }
          local_res8 = (undefined8 *)*local_res8;
        }
        ~_String_alloc<>(local_60);
        bVar4 = false;
LAB_180023c60:
        FUN_180005f30((longlong)plVar5);
        puVar10 = puVar9;
        if (bVar4) break;
      }
      puVar10 = puVar9;
    }
    puVar9 = FUN_180003b90(puVar10,&local_res8);
    register0x00000020 =
         (BADSPACEBASE *)CONCAT71((int7)((ulonglong)puVar9 >> 8),puVar6 != (undefined8 *)*puVar9);
  }
  return register0x00000020;
}


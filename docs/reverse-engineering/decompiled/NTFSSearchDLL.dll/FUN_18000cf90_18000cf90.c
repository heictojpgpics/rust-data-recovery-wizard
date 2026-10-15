// Function: FUN_18000cf90
// Address: 18000cf90
// Size: 573 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000cf90(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  puVar10 = (undefined8 *)0x0;
  local_res10 = 0;
  (**(code **)(*param_2 + 0x70))(param_2,&local_res10,8,param_4,0xfffffffffffffffe);
  puVar9 = puVar10;
  if (0 < local_res10) {
    do {
      puVar5 = (undefined8 *)FUN_18002be40(0x40);
      puVar7 = puVar10;
      local_res20 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0xffffffffffffffff;
        FUN_180040cb0(puVar5 + 1);
        *(undefined1 *)(puVar5 + 3) = 2;
        *(undefined2 *)((longlong)puVar5 + 0x1a) = 0;
        puVar5[4] = 0;
        FUN_180040cb0(puVar5 + 5);
        *(undefined2 *)(puVar5 + 7) = 0;
        puVar7 = puVar5;
      }
      local_res18 = puVar7;
      (**(code **)(*param_2 + 0x70))(param_2,puVar7,8);
      (**(code **)(*param_2 + 0x70))(param_2,puVar7 + 3,1);
      (**(code **)(*param_2 + 0x70))(param_2,(longlong)puVar7 + 0x1a,2);
      puVar7 = puVar7 + 1;
      FUN_1800402a0((longlong)puVar7,param_2);
      plVar1 = *(longlong **)(param_1 + 0xd0);
      lVar2 = *plVar1;
      plVar3 = *(longlong **)(lVar2 + 8);
      lVar6 = FUN_1800143b0(puVar7,lVar2,(longlong)plVar3,&local_res18);
      if (plVar1[1] == 0xaaaaaaaaaaaaaa9) {
        std::_Xlength_error("list<T> too long");
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar1[1] = plVar1[1] + 1;
      *(longlong *)(lVar2 + 8) = lVar6;
      *plVar3 = lVar6;
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
    } while ((longlong)puVar9 < local_res10);
  }
  local_res10 = 0;
  (**(code **)(*param_2 + 0x70))(param_2,&local_res10,8);
  if (0 < local_res10) {
    do {
      local_50 = _DAT_1800731e0;
      uStack_48 = _UNK_1800731e8;
      local_40 = 0;
      (**(code **)(*param_2 + 0x70))(param_2,&local_50,8);
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x70))(param_2,&uStack_48,8);
      plVar1 = *(longlong **)(param_1 + 0xd8);
      lVar2 = *plVar1;
      plVar3 = *(longlong **)(lVar2 + 8);
      lVar6 = FUN_180014360(plVar8,lVar2,(longlong)plVar3,&local_50);
      if (plVar1[1] == 0x666666666666665) {
        std::_Xlength_error("list<T> too long");
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar1[1] = plVar1[1] + 1;
      *(longlong *)(lVar2 + 8) = lVar6;
      *plVar3 = lVar6;
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
    } while ((longlong)puVar10 < local_res10);
  }
  return;
}


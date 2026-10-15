// Function: FUN_180028780
// Address: 180028780
// Size: 635 bytes


void FUN_180028780(longlong param_1,longlong *param_2)

{
  short sVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *_Memory;
  longlong lVar7;
  longlong *plVar8;
  undefined7 extraout_var;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *local_res10;
  undefined8 *local_40;
  longlong local_38;
  longlong local_30 [3];
  
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  uVar11 = 0;
  _Memory = (undefined8 *)FUN_180012c00(param_1,0,0);
  sVar1 = *(short *)((longlong)param_2 + 0x1a);
  local_40 = _Memory;
  lVar7 = FUN_180040570(param_2 + 1,0);
  if (sVar1 == 0) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
    FUN_180021e00(*param_2,lVar7,uVar11,*(longlong *)(param_1 + 0x58),(longlong *)&local_40,uVar6);
    _Memory = local_40;
  }
  else {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
    local_res10 = FUN_180021d00(*param_2,lVar7,(int)sVar1,8,*(longlong *)(param_1 + 0x58),uVar6);
    if (local_res10 != (undefined8 *)0x0) {
      puVar10 = local_res10 + 0x2b;
      plVar8 = FUN_1800248e0(local_30,param_2);
      FUN_180026d40(puVar10,plVar8);
      plVar8 = local_30;
      FUN_180005f30((longlong)plVar8);
      plVar2 = (longlong *)_Memory[1];
      lVar7 = FUN_1800143b0(plVar8,(longlong)_Memory,(longlong)plVar2,&local_res10);
      if (local_38 == 0xaaaaaaaaaaaaaa9) {
        std::_Xlength_error("list<T> too long");
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_38 = local_38 + 1;
      _Memory[1] = lVar7;
      *plVar2 = lVar7;
      _Memory = local_40;
    }
  }
  puVar10 = (undefined8 *)*_Memory;
  do {
    if (puVar10 == _Memory) {
      puVar10 = (undefined8 *)*_Memory;
      *_Memory = _Memory;
      _Memory[1] = _Memory;
      local_38 = 0;
      while (puVar10 != _Memory) {
        puVar3 = (undefined8 *)*puVar10;
        free(puVar10);
        puVar10 = puVar3;
      }
LAB_1800289a5:
      puVar10 = (undefined8 *)*_Memory;
      *_Memory = _Memory;
      _Memory[1] = _Memory;
      local_38 = 0;
      while (puVar10 != _Memory) {
        puVar3 = (undefined8 *)*puVar10;
        free(puVar10);
        puVar10 = puVar3;
      }
      free(_Memory);
      return;
    }
    puVar3 = (undefined8 *)puVar10[2];
    if (puVar3 != (undefined8 *)0x0) {
      lVar7 = *(longlong *)(param_1 + 0x20);
      if (puVar3[0x19] == -1) {
        puVar3[0x19] = *(undefined8 *)(param_1 + 0x18);
      }
      if (((*(byte *)((longlong)puVar3 + 0x9c) & 1) == 0) && (0 < lVar7)) {
        lVar9 = puVar3[0x15];
        if (lVar7 <= (longlong)puVar3[0x15]) {
          lVar9 = lVar7;
        }
        puVar3[0x15] = lVar9;
        puVar3[0xc] = (ulonglong)*(uint *)((longlong)puVar3 + 0xc) * lVar9;
      }
      puVar3[0x1d] = (ulonglong)*(uint *)((longlong)puVar3 + 0xc) * lVar7;
      bVar5 = FUN_1800268c0(*(undefined8 **)(param_1 + 0x40),(longlong)puVar3,8,0);
      if ((int)CONCAT71(extraout_var,bVar5) != 0) {
        FUN_1800281e0(param_1,(longlong)puVar3,*(undefined8 *)(param_1 + 0x18),
                      *(longlong *)(param_1 + 0x20));
        FUN_180026ac0(*(undefined8 **)(param_1 + 0x40),(longlong)puVar3,param_2);
        (**(code **)*puVar3)(puVar3,1);
        goto LAB_1800289a5;
      }
      FUN_180028350(param_1,(longlong)puVar3);
    }
    puVar10 = (undefined8 *)*puVar10;
  } while( true );
}


// Function: FUN_180021e00
// Address: 180021e00
// Size: 227 bytes


void FUN_180021e00(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,uint param_6)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *local_38 [2];
  
  puVar6 = &DAT_18004ce50;
  uVar5 = 0;
  do {
    lVar4 = param_1;
    local_38[0] = FUN_180021d00(param_1,param_2,*puVar6,8,param_4,param_6);
    if (local_38[0] != (undefined8 *)0x0) {
      lVar1 = *param_5;
      plVar2 = *(longlong **)(lVar1 + 8);
      lVar4 = FUN_1800143b0(lVar4,lVar1,(longlong)plVar2,local_38);
      if (param_5[1] == 0xaaaaaaaaaaaaaa9) {
        std::_Xlength_error("list<T> too long");
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_5[1] = param_5[1] + 1;
      *(longlong *)(lVar1 + 8) = lVar4;
      *plVar2 = lVar4;
    }
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 < 8);
  return;
}


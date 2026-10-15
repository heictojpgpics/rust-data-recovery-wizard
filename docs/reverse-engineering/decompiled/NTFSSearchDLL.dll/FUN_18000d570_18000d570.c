// Function: FUN_18000d570
// Address: 18000d570
// Size: 276 bytes


void FUN_18000d570(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined7 extraout_var;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res8;
  
  plVar6 = *(longlong **)(param_1 + 0x180);
  plVar7 = (longlong *)*plVar6;
  *plVar6 = (longlong)plVar6;
  *(longlong *)(*(longlong *)(param_1 + 0x180) + 8) = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar6 = plVar7;
  if (plVar7 != *(longlong **)(param_1 + 0x180)) {
    do {
      plVar7 = (longlong *)*plVar6;
      free(plVar6);
      plVar6 = plVar7;
    } while (plVar7 != (longlong *)*(longlong *)(param_1 + 0x180));
  }
  plVar6 = *(longlong **)**(longlong **)(param_1 + 0xd0);
  if (plVar6 != (longlong *)**(longlong **)(param_1 + 0xd0)) {
    do {
      local_res8 = (longlong *)plVar6[2];
      bVar4 = FUN_18000d690(plVar7,local_res8,param_2);
      if ((int)CONCAT71(extraout_var,bVar4) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x180);
        plVar2 = *(longlong **)(lVar1 + 8);
        lVar5 = FUN_1800143b0(plVar7,lVar1,(longlong)plVar2,&local_res8);
        if (*(longlong *)(param_1 + 0x188) == 0xaaaaaaaaaaaaaa9) {
          std::_Xlength_error("list<T> too long");
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x188) + 1);
        *(longlong **)(param_1 + 0x188) = plVar7;
        *(longlong *)(lVar1 + 8) = lVar5;
        *plVar2 = lVar5;
      }
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != (longlong *)**(longlong **)(param_1 + 0xd0));
  }
  *(longlong *)(param_1 + 0x110) = param_2;
  return;
}


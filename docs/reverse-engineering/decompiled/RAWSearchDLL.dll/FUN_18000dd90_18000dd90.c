// Function: FUN_18000dd90
// Address: 18000dd90
// Size: 209 bytes


ulonglong * FUN_18000dd90(ulonglong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = param_1;
  uVar2 = FUN_18000df80(param_1,param_2[1] - *param_2 >> 5);
  if ((char)uVar2 != '\0') {
    plVar6 = (longlong *)*param_1;
    puVar1 = (undefined8 *)param_2[1];
    for (puVar4 = (undefined8 *)*param_2; plVar5 = plVar6, puVar4 != puVar1; puVar4 = puVar4 + 4) {
      puVar3 = (ulonglong *)FUN_1800012e0(puVar3,plVar6);
      FUN_180007060((longlong)puVar3,puVar4);
      plVar6 = plVar6 + 4;
    }
    for (; plVar5 != plVar6; plVar5 = plVar5 + 4) {
      FUN_180001630(plVar5);
    }
    param_1[1] = (ulonglong)plVar6;
  }
  return param_1;
}


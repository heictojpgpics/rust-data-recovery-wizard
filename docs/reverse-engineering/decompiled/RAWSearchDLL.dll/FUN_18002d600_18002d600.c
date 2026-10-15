// Function: FUN_18002d600
// Address: 18002d600
// Size: 188 bytes


void FUN_18002d600(longlong param_1,short *param_2,uint param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  undefined1 uVar1;
  short sVar2;
  undefined3 uVar3;
  
  sVar2 = *param_2;
  *(bool *)(param_1 + 300) = sVar2 == 0x4949;
  if (sVar2 == 0x4949) {
    uVar3 = *(undefined3 *)((longlong)param_2 + 5);
    uVar1 = (undefined1)param_2[2];
  }
  else {
    uVar3 = CONCAT21(CONCAT11((char)param_2[2],*(undefined1 *)((longlong)param_2 + 5)),
                     (char)param_2[3]);
    uVar1 = *(undefined1 *)((longlong)param_2 + 7);
  }
  *(short **)(param_1 + 0x130) = param_2;
  if ((longlong)((int)param_3 * param_4 + 100 + (ulonglong)CONCAT31(uVar3,uVar1)) <=
      (int)param_3 * param_6) {
    FUN_18002c700(param_1,(undefined1 *)((ulonglong)CONCAT31(uVar3,uVar1) + (longlong)param_2),
                  param_3,param_4,param_5,param_6);
  }
  return;
}


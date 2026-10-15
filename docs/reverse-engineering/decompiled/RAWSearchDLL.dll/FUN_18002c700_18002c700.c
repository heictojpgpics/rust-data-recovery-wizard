// Function: FUN_18002c700
// Address: 18002c700
// Size: 605 bytes


void FUN_18002c700(longlong param_1,undefined1 *param_2,uint param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ushort uVar7;
  short local_38;
  ushort local_36;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  if (param_2 != (undefined1 *)0x0) {
    if (*(char *)(param_1 + 300) == '\0') {
      uVar1 = *param_2;
      uVar2 = param_2[1];
    }
    else {
      uVar1 = param_2[1];
      uVar2 = *param_2;
    }
    uVar7 = CONCAT11(uVar1,uVar2);
    if (((((longlong)(ulonglong)uVar7 <= ((param_6 - param_5) * (longlong)(int)param_3) / 0xc) &&
         (0 < (int)param_3)) && (uVar7 < 0x201)) && (puVar6 = param_2 + 2, uVar7 != 0)) {
      puVar4 = param_2 + 9;
      uVar5 = (ulonglong)uVar7;
      do {
        local_36 = 0;
        if (*(char *)(param_1 + 300) == '\0') {
          uVar1 = puVar4[-5];
          local_38 = CONCAT11(*puVar6,puVar4[-6]);
          uVar2 = puVar4[-4];
        }
        else {
          uVar1 = puVar4[-4];
          local_38 = CONCAT11(puVar4[-6],*puVar6);
          uVar2 = puVar4[-5];
        }
        switch(CONCAT11(uVar1,uVar2)) {
        case 1:
        case 2:
        case 6:
        case 7:
          local_36 = 1;
          break;
        case 3:
        case 8:
          local_36 = 2;
          break;
        case 4:
        case 9:
        case 0xb:
          local_36 = 4;
          break;
        case 5:
        case 10:
        case 0xc:
          local_36 = 8;
        }
        if (*(char *)(param_1 + 300) == '\0') {
          local_34 = CONCAT31(CONCAT21(CONCAT11(puVar4[-3],puVar4[-2]),puVar4[-1]),*puVar4);
          uVar3 = CONCAT21(CONCAT11(puVar4[1],puVar4[2]),puVar4[3]);
          uVar1 = puVar4[4];
        }
        else {
          local_34 = CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[-1]),puVar4[-2]),puVar4[-3]);
          uVar3 = *(undefined3 *)(puVar4 + 2);
          uVar1 = puVar4[1];
        }
        local_30 = CONCAT31(uVar3,uVar1);
        local_2c = (uint)local_36 * local_34;
        FUN_18002c990(param_1,param_4,(ulonglong)param_3,param_5,param_6,&local_38);
        puVar6 = puVar6 + 0xc;
        puVar4 = puVar4 + 0xc;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


// Function: FUN_18005d530
// Address: 18005d530
// Size: 591 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_18005d530(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar7 = (undefined4 *)0x0;
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  uVar8 = 0x180000000;
  puVar5 = (undefined4 *)0x0;
  switch(*(uint *)(param_1 + 0x18) & 0xff) {
  case 0:
    pcVar4 = (char *)(*DAT_180117f28)(6);
    puVar5 = puVar7;
    if (pcVar4 != (char *)0x0) {
      *(undefined4 *)pcVar4 = s_false_18006e4b8._0_4_;
      *(undefined2 *)(pcVar4 + 4) = s_false_18006e4b8._4_2_;
      return (undefined4 *)pcVar4;
    }
    break;
  case 1:
    puVar3 = (undefined4 *)(*DAT_180117f28)(5);
    puVar5 = puVar7;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = DAT_18006e4c0;
      *(undefined1 *)(puVar3 + 1) = DAT_18006e4c4;
      return puVar3;
    }
    break;
  case 2:
    puVar3 = (undefined4 *)(*DAT_180117f28)(5);
    puVar5 = puVar7;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = DAT_18006ed58;
      *(undefined1 *)(puVar3 + 1) = DAT_18006ed5c;
      return puVar3;
    }
    break;
  case 3:
    puVar5 = (undefined4 *)(*DAT_180117f28)(0x16);
    if (puVar5 != (undefined4 *)0x0) {
      uVar2 = *(ulonglong *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x38) != -1) {
        if (0xffffffff < uVar2) {
          FUN_18000b460(puVar5,&DAT_18006e54c,uVar2,uVar8);
          return puVar5;
        }
        FUN_18000b460(puVar5,&DAT_18006e4f4,uVar2,uVar8);
        return puVar5;
      }
      if (0xffffffff < uVar2 + 0x80000000) {
        FUN_18000b460(puVar5,&DAT_18006e4ec,uVar2,uVar8);
        return puVar5;
      }
      FUN_18000b460(puVar5,&DAT_18006e4f8,uVar2,uVar8);
      return puVar5;
    }
    break;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar7 = (undefined4 *)(*DAT_180117f28)(0x40);
    if (puVar7 != (undefined4 *)0x0) {
      uVar9 = (uint)uVar1 & _DAT_18006ef20;
      uVar10 = (uint)((ulonglong)uVar1 >> 0x20) & _UNK_18006ef24;
      if (((double)CONCAT44(uVar10,uVar9) <= DAT_18006ee40 &&
           DAT_18006ee40 != (double)CONCAT44(uVar10,uVar9)) ||
         (puVar6 = &DAT_18006e4c8,
         _DAT_18006ee70 <= (double)CONCAT44(uVar10,uVar9) &&
         (double)CONCAT44(uVar10,uVar9) != _DAT_18006ee70)) {
        puVar6 = &DAT_18006e578;
      }
      FUN_18000b460(puVar7,puVar6,uVar1,uVar8);
    }
    return puVar7;
  case 5:
    puVar7 = (undefined4 *)FUN_18005d100(*(byte **)(param_1 + 0x20),param_2,param_3,0x180000000);
    return puVar7;
  case 6:
    puVar7 = (undefined4 *)FUN_18005d970(param_1,(int)param_2,(uint)param_3);
    return puVar7;
  case 7:
    puVar5 = (undefined4 *)FUN_18005ddd0(param_1,(int)param_2,(uint)param_3,0x180000000);
  }
  return puVar5;
}


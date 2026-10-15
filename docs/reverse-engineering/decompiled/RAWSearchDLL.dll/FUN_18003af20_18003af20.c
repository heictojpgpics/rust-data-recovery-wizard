// Function: FUN_18003af20
// Address: 18003af20
// Size: 89 bytes


longlong FUN_18003af20(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x28;
  lVar1 = FUN_1800020c0(0x28);
  puVar2 = (undefined8 *)FUN_1800012e0(uVar3,lVar1);
  *puVar2 = *param_1;
  puVar2 = (undefined8 *)FUN_1800012e0(uVar3,lVar1 + 8);
  uVar3 = *param_1;
  *puVar2 = uVar3;
  puVar2 = (undefined8 *)FUN_1800012e0(uVar3,lVar1 + 0x10);
  *puVar2 = *param_1;
  return lVar1;
}


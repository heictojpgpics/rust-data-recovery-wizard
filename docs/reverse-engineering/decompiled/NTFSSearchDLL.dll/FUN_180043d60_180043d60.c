// Function: FUN_180043d60
// Address: 180043d60
// Size: 506 bytes


void FUN_180043d60(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStackY_e8 [32];
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [32];
  longlong local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_180086010 ^ (ulonglong)auStackY_e8;
  if (((param_1 != (longlong *)0x0) &&
      (pvVar4 = (void *)(**(code **)(*param_1 + 0x10))(param_1), pvVar4 != (void *)0x0)) &&
     (iVar3 = (**(code **)*param_1)(param_1), 1 < iVar3)) {
    FUN_180003be0(local_30,"$recycle.bin");
    FUN_180003be0((longlong *)local_50,pvVar4);
    puVar5 = FID_conflict_begin(local_50,local_70);
    uVar1 = *puVar5;
    puVar5 = (undefined8 *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end
                       (local_50);
    uVar2 = *puVar5;
    puVar5 = FID_conflict_begin(local_50,&local_60);
    FUN_18002f210(&local_58,*puVar5,uVar2,uVar1,tolower_exref);
    uVar6 = FUN_1800249e0(local_50,local_30);
    if ((uVar6 & 0xff) == 0) {
      FUN_1800025f0((longlong *)local_50);
      FUN_1800025f0(local_30);
    }
    else {
      FUN_1800025f0((longlong *)local_50);
      FUN_1800025f0(local_30);
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_e8);
  return;
}


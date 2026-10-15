// Function: FUN_18003bfa0
// Address: 18003bfa0
// Size: 386 bytes


void FUN_18003bfa0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  TypeDescriptor *pTVar7;
  undefined8 local_res10;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18 [2];
  
  if (param_2 != 0) {
    local_28 = *(undefined8 *)(param_2 + 0x48);
    local_20 = param_2;
    plVar2 = (longlong *)FUN_1800151c0(param_1,(longlong)&local_28);
    FUN_180015210(param_1,local_18,param_3,plVar2 + 4,plVar2);
    cVar1 = FUN_180031960(param_2);
    if (cVar1 != '\0') {
      local_res10 = *(undefined8 *)(param_2 + 0x50);
      pvVar6 = (void *)param_1[3];
      uVar3 = FUN_180002680(&local_res10);
      if ((void *)param_1[4] == pvVar6) {
        FUN_18003d500(param_1 + 2,pvVar6,uVar3);
      }
      else {
        uVar3 = FUN_180002680(uVar3);
        puVar4 = (undefined8 *)FUN_180002680(uVar3);
        uVar3 = *puVar4;
        puVar4 = (undefined8 *)FUN_180001100(uVar3,pvVar6);
        *puVar4 = uVar3;
        param_1[3] = param_1[3] + 8;
        uVar3 = param_3;
      }
      local_res10 = *(undefined8 *)(param_2 + 0x50);
      uVar5 = FUN_180002680(&local_res10);
      puVar4 = (undefined8 *)FUN_180002680(uVar5);
      local_28 = *puVar4;
      local_20 = param_2;
      plVar2 = (longlong *)FUN_1800151c0(param_1 + 9,(longlong)&local_28);
      FUN_180015210(param_1 + 9,local_18,uVar3,plVar2 + 4,plVar2);
      pTVar7 = &IFileProperties::RTTI_Type_Descriptor;
      plVar2 = (longlong *)
               __RTDynamicCast(*(undefined8 *)(param_2 + 0x30),0,
                               &IFileProperties::RTTI_Type_Descriptor,
                               &CNTFSFileProperties::RTTI_Type_Descriptor,
                               (ulonglong)plVar2 & 0xffffffff00000000);
      if (plVar2 != (longlong *)0x0) {
        local_res10 = (**(code **)(*plVar2 + 0xf0))(plVar2);
        uVar3 = FUN_180002680(&local_res10);
        puVar4 = (undefined8 *)FUN_180002680(uVar3);
        local_28 = *puVar4;
        local_20 = param_2;
        plVar2 = (longlong *)FUN_1800151c0(param_1 + 0xd,(longlong)&local_28);
        FUN_180015210(param_1 + 0xd,local_18,pTVar7,plVar2 + 4,plVar2);
      }
    }
  }
  return;
}


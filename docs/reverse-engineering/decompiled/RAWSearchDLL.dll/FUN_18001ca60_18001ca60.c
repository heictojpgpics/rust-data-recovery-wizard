// Function: FUN_18001ca60
// Address: 18001ca60
// Size: 468 bytes


undefined8 FUN_18001ca60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  uint local_50 [2];
  undefined8 local_48;
  uint local_40 [2];
  undefined8 local_38;
  uint local_30 [2];
  undefined8 local_28;
  undefined8 local_20 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180118288) {
    _Init_thread_header(&DAT_180118288);
    if (DAT_180118288 == -1) {
      DAT_180118278 = (undefined8 *)0x0;
      DAT_180118280 = 0;
      DAT_180118278 = (undefined8 *)FUN_180007710();
      atexit((_func_5014 *)&LAB_1800644d0);
      _Init_thread_footer(&DAT_180118288);
    }
  }
  if (DAT_180118280 == 0) {
    local_res8[0] = 0x80;
    uVar1 = FUN_1800016b0(local_res8);
    puVar2 = (uint *)FUN_1800016b0(uVar1);
    local_50[0] = *puVar2;
    uVar6 = (ulonglong)local_50[0];
    local_48 = 0x6a703263;
    plVar3 = (longlong *)FUN_18001d070(uVar6,(longlong)local_50);
    FUN_18001d0d0(uVar6,(undefined8 *)local_30,param_3,(int *)(plVar3 + 4),plVar3);
    local_res10[0] = 0x81;
    uVar1 = FUN_1800016b0(local_res10);
    puVar2 = (uint *)FUN_1800016b0(uVar1);
    local_40[0] = *puVar2;
    uVar6 = (ulonglong)local_40[0];
    local_38 = 0x6a703263;
    plVar3 = (longlong *)FUN_18001d070(uVar6,(longlong)local_40);
    FUN_18001d0d0(uVar6,(undefined8 *)local_30,param_3,(int *)(plVar3 + 4),plVar3);
    local_res18[0] = 0x82;
    uVar1 = FUN_1800016b0(local_res18);
    puVar2 = (uint *)FUN_1800016b0(uVar1);
    local_30[0] = *puVar2;
    uVar6 = (ulonglong)local_30[0];
    local_28 = 0x6a703263;
    plVar3 = (longlong *)FUN_18001d070(uVar6,(longlong)local_30);
    FUN_18001d0d0(uVar6,local_20,param_3,(int *)(plVar3 + 4),plVar3);
  }
  puVar4 = (undefined8 *)DAT_180118278[1];
  puVar7 = DAT_180118278;
  if (*(char *)((longlong)DAT_180118278[1] + 0x19) == '\0') {
    do {
      if (*(int *)(puVar4 + 4) < *(int *)(param_1 + 0x18)) {
        puVar5 = (undefined8 *)puVar4[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar4;
        puVar7 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
    if ((puVar7 != DAT_180118278) && (*(int *)(puVar7 + 4) <= *(int *)(param_1 + 0x18))) {
      return puVar7[5];
    }
  }
  return 0x6a703263;
}


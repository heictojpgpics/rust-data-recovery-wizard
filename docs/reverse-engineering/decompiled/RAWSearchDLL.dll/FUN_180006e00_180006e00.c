// Function: FUN_180006e00
// Address: 180006e00
// Size: 159 bytes


longlong FUN_180006e00(undefined8 *param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18 [2];
  
  uVar5 = 0;
  lVar4 = param_2;
  local_res10 = param_2;
  FUN_180001780(param_2);
  puVar2 = (undefined1 *)FUN_1800016b0(lVar4);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = 0xf;
  local_res8 = CONCAT71(local_res8._1_7_,(char)uVar5);
  FUN_180001300(puVar2,(undefined1 *)&local_res8);
  if (param_3 <= (ulonglong)param_1[2]) {
    local_res8 = param_1[2] - param_3;
    local_res18[0] = param_4;
    puVar3 = FUN_180001e40(local_res18,&local_res8);
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_1800071e0(param_2,(void *)((longlong)param_1 + param_3),*puVar3);
    return param_2;
  }
  FUN_1800072f0();
  pcVar1 = (code *)swi(3);
  lVar4 = (*pcVar1)();
  return lVar4;
}


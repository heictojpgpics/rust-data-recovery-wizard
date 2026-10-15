// Function: FUN_1800262c0
// Address: 1800262c0
// Size: 145 bytes


void FUN_1800262c0(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 local_res20 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  
  uVar4 = SUB81(param_3,0);
  local_20 = 0xfffffffffffffffe;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar5 = *param_2;
    local_res20[0] = uVar5;
    puVar2 = (undefined8 *)FUN_1800016b0(param_1);
    uVar1 = puVar2[2];
    if (uVar1 < (ulonglong)puVar2[3]) {
      puVar2[2] = uVar1 + 1;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      puVar3 = (undefined1 *)((longlong)puVar2 + uVar1);
      FUN_180001300(puVar3,local_res20);
      local_28[0] = 0;
      FUN_180001300(puVar3 + 1,local_28);
    }
    else {
      FUN_1800084c0(param_1,uVar1,uVar4,uVar5);
    }
  }
  return;
}


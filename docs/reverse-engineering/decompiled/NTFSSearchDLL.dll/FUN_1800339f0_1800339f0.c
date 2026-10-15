// Function: FUN_1800339f0
// Address: 1800339f0
// Size: 172 bytes


undefined2 * FUN_1800339f0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  void *pvVar4;
  undefined2 *_Memory;
  
  puVar3 = (undefined2 *)FUN_18002be40(0x10);
  _Memory = (undefined2 *)0x0;
  if (puVar3 != (undefined2 *)0x0) {
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    _Memory = puVar3;
  }
  if (_Memory == (undefined2 *)0x0) {
    _Memory = (undefined2 *)0x0;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((iVar2 == 1) || (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), iVar2 == 0xe)) {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      *_Memory = uVar1;
    }
    pvVar4 = FUN_1800336f0((longlong)param_1,param_2,param_3);
    *(void **)(_Memory + 4) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      free(_Memory);
      _Memory = (undefined2 *)0x0;
    }
  }
  return _Memory;
}


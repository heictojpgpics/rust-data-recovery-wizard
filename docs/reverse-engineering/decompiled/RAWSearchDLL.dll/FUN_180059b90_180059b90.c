// Function: FUN_180059b90
// Address: 180059b90
// Size: 153 bytes


longlong * FUN_180059b90(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char *_Str1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  do {
    if (puVar1 == (undefined8 *)0x0) {
      return (longlong *)0x0;
    }
    plVar3 = (longlong *)(**(code **)*puVar1)(puVar1);
    if (plVar3 != (longlong *)0x0) {
      if (param_2 == (char *)0x0) {
        return plVar3;
      }
      lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
      if (lVar4 == 0) {
        _Str1 = (char *)FUN_1800591e0((uint *)(plVar3 + 3));
      }
      else {
        _Str1 = (char *)0x0;
      }
      if (_Str1 == param_2) {
        return plVar3;
      }
      iVar2 = strncmp(_Str1,param_2,0x7fffffff);
      if (iVar2 == 0) {
        return plVar3;
      }
    }
    puVar1 = (undefined8 *)puVar1[10];
  } while( true );
}


// Function: FUN_180006b30
// Address: 180006b30
// Size: 277 bytes


void FUN_180006b30(longlong *param_1,uint **param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *_Memory;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  uint **ppuVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  
  uVar7 = (undefined1)param_3;
  uVar8 = (undefined7)((ulonglong)param_3 >> 8);
  ppuVar5 = param_2;
  FUN_1800081f0(param_1 + 2);
  FUN_1800081f0(param_1 + 4);
  FUN_180008290(param_1);
  FUN_180002a50(param_1 + 2,ppuVar5);
  FUN_180004320(param_1 + 4,ppuVar5,CONCAT71(uVar8,uVar7));
  FUN_180004fb0(param_1,0,uVar7);
  if (param_2 != (uint **)0x0) {
    FUN_180008320(param_1 + 2,(longlong *)param_2);
    FUN_180008320(param_1 + 4,(longlong *)param_2);
    plVar6 = *(longlong **)*param_1;
    while( true ) {
      plVar1 = (longlong *)*param_1;
      _Memory = plVar6;
      while ((_Memory != plVar1 &&
             (((uVar4 = *(int *)(_Memory[2] + 8) - 0x30, uVar4 < 0x19 &&
               ((0x1000801U >> (uVar4 & 0x1f) & 1) != 0)) ||
              (cVar3 = (**(code **)(*param_2 + 8))(param_2), cVar3 != '\0'))))) {
        _Memory = (longlong *)*_Memory;
      }
      if (_Memory == (longlong *)*param_1) break;
      plVar6 = (longlong *)*_Memory;
      puVar2 = (undefined8 *)_Memory[2];
      *(longlong **)_Memory[1] = plVar6;
      *(longlong *)(*_Memory + 8) = _Memory[1];
      param_1[1] = param_1[1] + -1;
      free(_Memory);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  return;
}


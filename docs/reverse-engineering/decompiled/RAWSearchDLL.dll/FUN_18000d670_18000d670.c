// Function: FUN_18000d670
// Address: 18000d670
// Size: 643 bytes


void FUN_18000d670(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *_Memory;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (param_2 != 0) {
    local_40 = 0xfffffffffffffffe;
    _Memory = (longlong *)**(undefined8 **)(param_1 + 0xf8);
    while (_Memory != *(longlong **)(param_1 + 0xf8)) {
      plVar1 = (longlong *)_Memory[2];
      if (plVar1 == (longlong *)0x0) {
        plVar1 = (longlong *)*_Memory;
        *(longlong **)_Memory[1] = plVar1;
        *(longlong *)(*_Memory + 8) = _Memory[1];
        *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + -1;
        free(_Memory);
        _Memory = plVar1;
      }
      else {
        plVar1[0x1d] = param_6;
        if ((param_3 == (longlong *)0x0) || (plVar1 == param_3)) {
          *(undefined8 *)(param_5 + 0x18) = 0;
        }
        else {
          *(longlong **)(param_5 + 0x18) = param_3;
        }
        lVar2 = plVar1[0x1a];
        if (lVar2 == 0) {
          plVar1 = (longlong *)*_Memory;
          *(longlong **)_Memory[1] = plVar1;
          *(longlong *)(*_Memory + 8) = _Memory[1];
          *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + -1;
          free(_Memory);
          _Memory = plVar1;
        }
        else {
          iVar4 = (**(code **)(*plVar1 + 0x20))
                            (plVar1,param_2,*(undefined4 *)(param_1 + 0xf0),param_4,param_5);
          if (iVar4 == 1) {
            if ((*(longlong *)(param_1 + 0x108) == 0) || (plVar1[2] == 0)) {
              if (plVar1[0x1a] != 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_4);
              }
            }
            else {
              FUN_18000d920(param_1,plVar1[1],lVar2,(longlong)plVar1);
              (**(code **)**(undefined8 **)(param_1 + 0x108))
                        (*(undefined8 **)(param_1 + 0x108),plVar1);
              local_48 = 0;
              local_50 = 0;
              local_58 = 0;
              local_60 = 0;
              if ((*(longlong *)(param_1 + 0x158) != 0) &&
                 (cVar3 = (**(code **)(*plVar1 + 0x18))
                                    (plVar1,&local_48,&local_50,&local_58,&local_60), cVar3 != '\0')
                 ) {
                (**(code **)(**(longlong **)(param_1 + 0x158) + 0x48))
                          (*(longlong **)(param_1 + 0x158),local_48,local_50,local_58,local_60);
              }
            }
            plVar1 = (longlong *)*_Memory;
            *(longlong **)_Memory[1] = plVar1;
            *(longlong *)(*_Memory + 8) = _Memory[1];
            *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + -1;
            free(_Memory);
            _Memory = plVar1;
          }
          else {
            _Memory = (longlong *)*_Memory;
          }
        }
      }
    }
  }
  return;
}


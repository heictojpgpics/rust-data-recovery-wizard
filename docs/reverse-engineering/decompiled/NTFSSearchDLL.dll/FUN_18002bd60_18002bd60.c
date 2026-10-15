// Function: FUN_18002bd60
// Address: 18002bd60
// Size: 214 bytes


void FUN_18002bd60(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28 [4];
  
  local_28[2] = DAT_180086010 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      local_28[1] = 1;
      local_28[0] = param_2;
      if ((ulonglong)param_1[1] < 500000) {
        plVar3 = (longlong *)puVar1[1];
        lVar5 = FUN_18001b150(param_1,(longlong)puVar1,(longlong)plVar3,local_28);
        if (param_1[1] == 0x7fffffffffffffe) {
          std::_Xlength_error("list<T> too long");
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        param_1[1] = param_1[1] + 1;
        puVar1[1] = lVar5;
        *plVar3 = lVar5;
      }
LAB_18002be1e:
      __security_check_cookie(local_28[2] ^ (ulonglong)auStack_48);
      return;
    }
    if (puVar2[2] + puVar2[3] == param_2) {
      puVar2[3] = puVar2[3] + 1;
      goto LAB_18002be1e;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}


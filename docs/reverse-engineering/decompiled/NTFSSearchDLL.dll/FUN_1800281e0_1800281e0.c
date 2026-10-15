// Function: FUN_1800281e0
// Address: 1800281e0
// Size: 367 bytes


void FUN_1800281e0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar3 = (undefined8 *)**(longlong **)(param_1 + 0x38);
  puVar4 = (undefined8 *)puVar3[1];
  puVar7 = puVar3;
  if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
    puVar6 = puVar3;
    puVar8 = puVar4;
    do {
      puVar7 = puVar8;
      lVar2 = *(longlong *)(puVar7[4] + 0x10);
      if ((*(longlong *)(param_2 + 0x10) < lVar2) ||
         ((*(longlong *)(param_2 + 0x10) <= lVar2 &&
          (*(uint *)(param_2 + 0xc) < *(uint *)(puVar7[4] + 0xc))))) {
        puVar8 = (undefined8 *)*puVar7;
      }
      else {
        puVar8 = (undefined8 *)puVar7[2];
        puVar7 = puVar6;
      }
      puVar6 = puVar7;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
    do {
      lVar2 = *(longlong *)(puVar4[4] + 0x10);
      if ((lVar2 < *(longlong *)(param_2 + 0x10)) ||
         ((lVar2 <= *(longlong *)(param_2 + 0x10) &&
          (*(uint *)(puVar4[4] + 0xc) < *(uint *)(param_2 + 0xc))))) {
        puVar8 = (undefined8 *)puVar4[2];
      }
      else {
        puVar8 = (undefined8 *)*puVar4;
        puVar3 = puVar4;
      }
      puVar4 = puVar8;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
  }
  do {
    do {
      while( true ) {
        puVar4 = puVar3;
        if (puVar4 == puVar7) {
          return;
        }
        lVar2 = puVar4[4];
        if (*(longlong *)(lVar2 + 200) == -1) {
          *(undefined8 *)(lVar2 + 200) = param_3;
        }
        if (((*(byte *)(lVar2 + 0x9c) & 1) == 0) && (0 < param_4)) {
          lVar5 = param_4;
          if (*(longlong *)(lVar2 + 0xa8) < param_4) {
            lVar5 = *(longlong *)(lVar2 + 0xa8);
          }
          *(longlong *)(lVar2 + 0xa8) = lVar5;
          *(ulonglong *)(lVar2 + 0x60) = (ulonglong)*(uint *)(lVar2 + 0xc) * lVar5;
        }
        *(ulonglong *)(lVar2 + 0xe8) = (ulonglong)*(uint *)(lVar2 + 0xc) * param_4;
        puVar3 = (undefined8 *)puVar4[2];
        if (*(char *)((longlong)puVar3 + 0x19) != '\0') break;
        cVar1 = *(char *)((longlong)*puVar3 + 0x19);
        puVar4 = (undefined8 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0x19);
          puVar3 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
        }
      }
      puVar3 = (undefined8 *)puVar4[1];
    } while (*(char *)((longlong)puVar3 + 0x19) != '\0');
    do {
      if (puVar4 != (undefined8 *)puVar3[2]) break;
      puVar8 = (undefined8 *)puVar3[1];
      puVar4 = puVar3;
      puVar3 = puVar8;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
  } while( true );
}


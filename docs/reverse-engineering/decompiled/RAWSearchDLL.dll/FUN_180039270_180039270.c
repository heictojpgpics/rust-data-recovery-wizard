// Function: FUN_180039270
// Address: 180039270
// Size: 505 bytes


void FUN_180039270(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  char *_Str1;
  
  plVar7 = (longlong *)**(longlong **)(param_1 + 0x150);
  if (plVar7 != *(longlong **)(param_1 + 0x150)) {
    do {
      uVar9 = (ulonglong)*(uint *)((longlong)plVar7 + 0x1c);
      uVar2 = *(uint *)(plVar7 + 4);
      if (uVar9 / *(uint *)(param_1 + 0x234) + *(longlong *)(param_1 + 8) == param_3) {
        _Str1 = (char *)(uVar9 % (ulonglong)*(uint *)(param_1 + 0x234) + param_2);
        iVar6 = strncmp(_Str1,&DAT_1800937ac,4);
        if (((iVar6 == 0) || (iVar6 = strncmp(_Str1,&DAT_180093794,4), iVar6 == 0)) ||
           (iVar6 = strncmp(_Str1,&DAT_180093784,4), iVar6 == 0)) {
          *(ulonglong *)(param_1 + 0xd8) = uVar9;
          *(ulonglong *)(param_1 + 0xe0) = (ulonglong)uVar2;
        }
        plVar3 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar8 = plVar3;
          plVar4 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar8 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar5 = (longlong *)plVar7[1];
          plVar4 = plVar7;
          while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar4 = plVar8;
          }
        }
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          plVar3 = (longlong *)*plVar3;
          cVar1 = *(char *)((longlong)plVar3 + 0x19);
          while (cVar1 == '\0') {
            plVar3 = (longlong *)*plVar3;
            cVar1 = *(char *)((longlong)plVar3 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
          }
        }
        plVar7 = FUN_1800073a0((longlong *)(param_1 + 0x150),plVar7);
        free(plVar7);
      }
      else {
        plVar8 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar8 + 0x19);
          plVar7 = (longlong *)*plVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar7 + 0x19);
            plVar8 = plVar7;
            plVar7 = (longlong *)*plVar7;
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar3 = (longlong *)plVar7[1];
          while ((plVar8 = plVar3, cVar1 == '\0' && (plVar7 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar3 = (longlong *)plVar8[1];
            plVar7 = plVar8;
          }
        }
      }
      plVar7 = plVar8;
    } while (plVar8 != *(longlong **)(param_1 + 0x150));
  }
  return;
}


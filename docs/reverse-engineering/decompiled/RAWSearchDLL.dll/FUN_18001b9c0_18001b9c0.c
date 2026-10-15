// Function: FUN_18001b9c0
// Address: 18001b9c0
// Size: 294 bytes


void FUN_18001b9c0(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStackY_58 [32];
  
  uVar5 = DAT_18008f028 ^ (ulonglong)auStackY_58;
  if (((*(char *)(param_1 + 0x110) != '\0') || (param_2 == 0)) || (param_3 < 1)) {
    __security_check_cookie(uVar5 ^ (ulonglong)auStackY_58);
    return;
  }
  lVar8 = (longlong)param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *param_5;
  lVar6 = *(longlong *)(param_1 + 0x118) / lVar8 + lVar1;
  if ((lVar2 <= lVar6) && (lVar3 = param_5[1], lVar6 < lVar3)) {
    lVar6 = (param_4 - lVar1) * lVar8;
    if (*(longlong *)(param_1 + 0x118) == 0) {
      iVar4 = 0;
      do {
        if (*(int *)((longlong)iVar4 + 0x1e + (param_2 - lVar6)) == 0x66696568) {
          *(undefined4 *)(param_1 + 0x18) = 0x7d;
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x65);
    }
    uVar7 = FUN_18001baf0(param_1,param_2,(lVar2 - lVar1) * lVar8,(lVar3 - lVar1) * lVar8,lVar6);
    if ((int)uVar7 != 0) {
      *(undefined1 *)(param_1 + 0x110) = 1;
    }
  }
  __security_check_cookie(uVar5 ^ (ulonglong)auStackY_58);
  return;
}


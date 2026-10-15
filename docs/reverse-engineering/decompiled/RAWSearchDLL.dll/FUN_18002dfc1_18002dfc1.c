// Function: FUN_18002dfc1
// Address: 18002dfc1
// Size: 660 bytes


void FUN_18002dfc1(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int iVar6;
  LPSTR unaff_RSI;
  ulonglong uVar7;
  undefined1 uVar8;
  byte *unaff_R14;
  undefined8 *_Dst;
  undefined1 in_stack_00000040;
  ulonglong in_stack_00000048;
  ulonglong in_stack_00000050;
  undefined8 *in_stack_00000060;
  ulonglong in_stack_00000070;
  ulonglong in_stack_00000078;
  LPCWSTR lpWideCharStr;
  
  iVar6 = (int)unaff_RSI;
  uVar7 = 0xffffffffffffffff;
  iVar3 = WideCharToMultiByte(0,0,(LPCWSTR)(unaff_RBP + -0x80),-1,unaff_RSI,iVar6,unaff_RSI,
                              (LPBOOL)unaff_RSI);
  if (iVar3 < 0x65) {
    lpWideCharStr = (LPCWSTR)(unaff_RBP + -0x80);
    WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)(unaff_RBP + -0x10),iVar3,unaff_RSI,
                        (LPBOOL)unaff_RSI);
    uVar8 = SUB81(lpWideCharStr,0);
    do {
      uVar7 = uVar7 + 1;
    } while (*(char *)(unaff_RBP + -0x10 + uVar7) != '\0');
    puVar4 = (undefined8 *)FUN_1800016b0(&stack0x00000060);
    if ((ulonglong)puVar4[3] < uVar7) {
      FUN_1800086f0((longlong)&stack0x00000060,uVar7,uVar8,(void *)(unaff_RBP + -0x10));
    }
    else {
      _Dst = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        _Dst = (undefined8 *)*puVar4;
      }
      puVar4[2] = uVar7;
      memmove(_Dst,(void *)(unaff_RBP + -0x10),uVar7);
      in_stack_00000040 = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + uVar7),&stack0x00000040);
    }
    puVar4 = &stack0x00000060;
    if (0xf < in_stack_00000078) {
      puVar4 = in_stack_00000060;
    }
    in_stack_00000048 = 0x11;
    in_stack_00000050 = in_stack_00000070;
    puVar5 = FUN_180001e40(&stack0x00000050,&stack0x00000048);
    iVar3 = memcmp(puVar4,"tableactiveactive",*puVar5);
    if ((iVar3 != 0) || (in_stack_00000070 != 0x11)) goto LAB_18002e0eb;
    FUN_180001630((longlong *)&stack0x00000060);
    *(undefined4 *)(unaff_RBX + 0x18) = 0x75;
    *(undefined1 *)(unaff_RBX + 0x134) = 0;
  }
  else {
LAB_18002e0eb:
    FUN_180001630((longlong *)&stack0x00000060);
  }
  iVar3 = *(int *)(unaff_RBX + 0x110);
  if ((iVar3 != 0) && (*(ulonglong *)(unaff_RBX + 0x118) % (ulonglong)(longlong)iVar3 == 0)) {
    if (*(ulonglong *)(unaff_RBX + 0x10) < 0xbebc201) {
      bVar1 = *unaff_R14;
      if (((bVar1 < 0xe) && ((0x2526U >> ((int)(char)bVar1 & 0x1fU) & 1) != 0)) || (bVar1 == 0x41))
      {
        *(LPSTR *)(unaff_RBX + 0x124) = unaff_RSI;
        *(int *)(unaff_RBX + 0x120) = iVar6;
      }
      else {
        if (bVar1 == 0) {
          if ((*(int *)(unaff_RBX + 0x120) == 0) && (unaff_R14[3] != 0)) {
            *(int *)(unaff_RBX + 0x128) = (int)(char)unaff_R14[3];
            *(undefined4 *)(unaff_RBX + 0x120) = 1;
            *(int *)(unaff_RBX + 0x124) = *(int *)(unaff_RBX + 0x124) + 1;
            goto LAB_18002e22c;
          }
          if (*(int *)(unaff_RBX + 0x128) + 1 == (int)(char)unaff_R14[3]) {
            *(int *)(unaff_RBX + 0x124) = iVar6;
            *(int *)(unaff_RBX + 0x128) = (int)(char)unaff_R14[3];
            goto LAB_18002e22c;
          }
          *(int *)(unaff_RBX + 0x128) = (int)(char)unaff_R14[3];
          iVar6 = *(int *)(unaff_RBX + 0x124);
          if (iVar6 < 5) {
            *(int *)(unaff_RBX + 0x124) = iVar6 + 1;
            goto LAB_18002e22c;
          }
          iVar2 = *(int *)(unaff_RBX + 300);
        }
        else {
          iVar2 = *(int *)(unaff_RBX + 300);
          iVar6 = *(int *)(unaff_RBX + 0x124);
        }
        uVar7 = ((longlong)(iVar2 * iVar3) - (longlong)(iVar6 * iVar3)) +
                *(ulonglong *)(unaff_RBX + 0x118);
        if (200000000 < uVar7) {
          uVar7 = 200000000;
        }
        *(ulonglong *)(unaff_RBX + 0x10) = uVar7;
      }
    }
    else {
      *(undefined8 *)(unaff_RBX + 0x10) = 200000000;
    }
  }
LAB_18002e22c:
  __security_check_cookie(*(ulonglong *)(unaff_RBP + 0xc0) ^ (ulonglong)&stack0x00000000);
  return;
}


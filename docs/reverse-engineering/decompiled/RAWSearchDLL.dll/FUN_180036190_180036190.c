// Function: FUN_180036190
// Address: 180036190
// Size: 1124 bytes


void FUN_180036190(longlong param_1,undefined8 *****param_2,int param_3,longlong param_4,
                  longlong *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 *****pppppuVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong _Size;
  undefined8 *_Dst;
  undefined1 uVar12;
  int iVar13;
  undefined8 *****pppppuVar14;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58;
  ulonglong local_48;
  
  local_168 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_1a8;
  iVar13 = 0;
  iVar3 = 0;
  if (*(char *)(param_1 + 0x120) != '\0') {
    lVar9 = param_5[1];
    if (lVar9 <= param_4) {
      *(undefined1 *)(param_1 + 0x112) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x112) = 1;
    }
    local_170 = (undefined8 *)CONCAT44(local_170._4_4_,0x6a626f);
    if (param_2 != (undefined8 *****)0x0) {
      iVar10 = iVar13;
      do {
        iVar7 = iVar3;
        if (iVar10 != 0) {
          iVar7 = iVar10 * ((int)((param_3 >> 0x1f & 3U) + param_3) >> 2) + -1;
        }
        bVar1 = *(byte *)((longlong)iVar7 + (longlong)param_2);
        pppppppuVar8 = (undefined8 *******)(ulonglong)bVar1;
        if (((bVar1 < 0x3b) && ((0x7fee30100002001U >> ((ulonglong)pppppppuVar8 & 0x3f) & 1) != 0))
           || ((pppppppuVar8 = (undefined8 *******)(ulonglong)(byte)(bVar1 - 0x3c),
               (byte)(bVar1 - 0x3c) < 0x3f &&
               ((0x7fffffe07fffffe5U >> ((ulonglong)pppppppuVar8 & 0x3f) & 1) != 0)))) {
          if (0 < param_3) {
            lVar11 = (longlong)&local_170 - (longlong)param_2;
            pppppuVar14 = param_2;
            do {
              pppppuVar4 = pppppuVar14;
              if (*(char *)pppppuVar14 == 'o') {
                do {
                  if (*(byte *)(lVar11 + 1 + (longlong)pppppuVar4) == 0) {
                    if (pppppuVar14 != (undefined8 *****)0x0) {
                      iVar10 = param_3 * 2;
                      if (lVar9 <= param_4) {
                        iVar10 = param_3;
                      }
                      iVar10 = iVar10 - iVar13;
                      *(int *)(param_1 + 0x224) = iVar10;
                      if ((-1 < iVar10) &&
                         (cVar2 = FUN_18004d1b0(pppppppuVar8,pppppuVar14,iVar10,param_1 + 0x121),
                         cVar2 != '\0')) {
                        *(undefined1 *)(param_1 + 0x120) = 0;
                      }
                    }
                    goto LAB_1800362eb;
                  }
                  pppppuVar4 = (undefined8 *****)((longlong)pppppuVar4 + 1);
                  pppppppuVar8 = (undefined8 *******)
                                 (ulonglong)*(byte *)(lVar11 + (longlong)pppppuVar4);
                } while (*(byte *)pppppuVar4 == *(byte *)(lVar11 + (longlong)pppppuVar4));
              }
              pppppuVar14 = (undefined8 *****)((longlong)pppppuVar14 + 1);
              lVar11 = lVar11 + -1;
              iVar13 = iVar13 + 1;
            } while (iVar13 < param_3);
          }
          break;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 4);
    }
  }
LAB_1800362eb:
  if (*(char *)(param_1 + 0x110) != '\0') {
    iVar13 = param_3 * 2;
    if (param_5[1] <= param_4) {
      iVar13 = param_3;
    }
    FUN_180036600(param_1,param_2,iVar13);
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  lVar9 = (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3;
  if (lVar9 - *(longlong *)(param_1 + 0x118) != 0 && *(longlong *)(param_1 + 0x118) <= lVar9) {
    uVar12 = 4;
    memset(&local_158,0,0x104);
    uVar6 = 0xffffffffffffffff;
    do {
      _Size = uVar6 + 1;
      lVar9 = uVar6 + 1;
      uVar6 = _Size;
    } while (*(char *)((longlong)&local_158 + lVar9) != '\0');
    puVar5 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar5[3] < _Size) {
      FUN_1800086f0(param_1 + 0x20,_Size,uVar12,&local_158);
    }
    else {
      _Dst = puVar5;
      if (0xf < (ulonglong)puVar5[3]) {
        _Dst = (undefined8 *)*puVar5;
      }
      puVar5[2] = _Size;
      memmove(_Dst,&local_158,_Size);
      local_178[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_178);
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x118);
    goto LAB_1800365d2;
  }
  iVar13 = *(int *)((longlong)param_5 + 0x14);
  uVar12 = (undefined1)iVar13;
  if ((iVar13 < 4) || (lVar9 < *(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8)))
  goto LAB_1800365d2;
  if (iVar13 == 0x20) {
    if (*param_5 < param_4 + -1) {
      uVar12 = 0x1c;
      iVar3 = FUN_180042ab0((char *)(param_2 + -2),param_3,0x1c,"%%EOF",5);
      if (iVar3 == 0) goto LAB_1800365d2;
      iVar3 = iVar3 + -0x10;
    }
  }
  else {
    uVar12 = (undefined1)(iVar13 + -4);
    iVar3 = FUN_180042ab0((char *)param_2,param_3,iVar13 + -4,"%%EOF",5);
    if (iVar3 == 0) goto LAB_1800365d2;
    iVar3 = iVar3 + 2;
  }
  local_170 = &local_158;
  FUN_180007060((longlong)&local_158,(undefined8 *)(param_1 + 0x121));
  FUN_180007060((longlong)local_138,(undefined8 *)(param_1 + 0x141));
  FUN_180007060((longlong)local_118,(undefined8 *)(param_1 + 0x161));
  FUN_180007060((longlong)local_f8,(undefined8 *)(param_1 + 0x181));
  FUN_180007060((longlong)local_d8,(undefined8 *)(param_1 + 0x1a1));
  FUN_180007060((longlong)local_b8,(undefined8 *)(param_1 + 0x1c1));
  FUN_180007060((longlong)local_98,(undefined8 *)(param_1 + 0x1e1));
  FUN_180007060((longlong)local_78,(undefined8 *)(param_1 + 0x201));
  local_58 = *(undefined1 *)(param_1 + 0x221);
  FUN_180036700(param_1,&local_158,uVar12);
  puVar5 = (undefined8 *)(param_1 + 0x20);
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    puVar5 = (undefined8 *)*puVar5;
  }
  uVar6 = FUN_18000f820((longlong)puVar5,*(ulonglong *)(param_1 + 0x30),0,"Adobe Illustrator",0x11);
  if (uVar6 == 0xffffffffffffffff) {
    puVar5 = (undefined8 *)(param_1 + 0xb0);
    if (0xf < *(ulonglong *)(param_1 + 200)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    uVar6 = FUN_18000f820((longlong)puVar5,*(ulonglong *)(param_1 + 0xc0),0,"Adobe Illustrator",0x11
                         );
    if (uVar6 != 0xffffffffffffffff) goto LAB_1800365a9;
    puVar5 = (undefined8 *)(param_1 + 0x201);
    if (0xf < *(ulonglong *)(param_1 + 0x219)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    uVar6 = FUN_18000f820((longlong)puVar5,*(ulonglong *)(param_1 + 0x211),0,"Adobe Illustrator",
                          0x11);
    if (uVar6 != 0xffffffffffffffff) goto LAB_1800365a9;
  }
  else {
LAB_1800365a9:
    *(undefined4 *)(param_1 + 0x18) = 5;
  }
  *(longlong *)(param_1 + 0x10) =
       (longlong)iVar3 + (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3 + 2;
LAB_1800365d2:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1a8);
  return;
}


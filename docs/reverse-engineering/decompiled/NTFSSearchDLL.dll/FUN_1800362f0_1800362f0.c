// Function: FUN_1800362f0
// Address: 1800362f0
// Size: 760 bytes


void FUN_1800362f0(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 uVar15;
  longlong lVar16;
  undefined1 auStack_188 [32];
  longlong local_168 [2];
  char local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_180086010 ^ (ulonglong)auStack_188;
  local_168[0] = param_2;
  if ((param_2 == 0) || (param_1[1] == 0)) {
    if (param_3 != '\0') {
      lVar16 = *param_1;
      plVar2 = *(longlong **)(lVar16 + 8);
      lVar10 = FUN_1800143b0(param_1,lVar16,(longlong)plVar2,local_168);
      if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
        std::_Xlength_error("list<T> too long");
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_1[1] = param_1[1] + 1;
      *(longlong *)(lVar16 + 8) = lVar10;
      *plVar2 = lVar10;
    }
    goto LAB_18003656c;
  }
  plVar2 = *(longlong **)(param_2 + 0x30);
  if (plVar2 == (longlong *)0x0) goto LAB_18003656c;
  if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
    pcVar9 = *(char **)((longlong)plVar2 + 0x11);
  }
  else {
    pcVar9 = (char *)(*(code *)((undefined **)*plVar2)[2])(plVar2);
  }
  if (pcVar9 == (char *)0x0) goto LAB_18003656c;
  uVar13 = 0xffffffffffffffff;
  uVar11 = 0xffffffffffffffff;
  do {
    uVar11 = uVar11 + 1;
  } while (pcVar9[uVar11] != '\0');
  if (uVar11 < 2) goto LAB_18003656c;
  if ((local_168[0] == 0) ||
     (plVar14 = *(longlong **)(local_168[0] + 0x30), plVar14 == (longlong *)0x0)) {
LAB_1800363d5:
    bVar5 = false;
  }
  else {
    if ((undefined **)*plVar14 == CNTFSFileProperties::vftable) {
      pcVar8 = *(char **)((longlong)plVar14 + 0x11);
    }
    else {
      pcVar8 = (char *)(*(code *)((undefined **)*plVar14)[2])();
    }
    if (pcVar8 == (char *)0x0) goto LAB_1800363d5;
    do {
      uVar13 = uVar13 + 1;
    } while (pcVar8[uVar13] != '\0');
    if (((uVar13 < 2) || (*pcVar8 != '$')) || (pcVar8[1] != 'I')) goto LAB_1800363d5;
    bVar5 = true;
  }
  uVar15 = 0x49;
  if (!bVar5) {
    uVar15 = 0x52;
  }
  memset(local_158,0,0x104);
  lVar16 = 0;
  plVar14 = *(longlong **)*param_1;
  if (plVar14 != (longlong *)*param_1) {
    do {
      plVar3 = *(longlong **)(plVar14[2] + 0x30);
      if (plVar3 != (longlong *)0x0) {
        if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
          lVar10 = *(longlong *)((longlong)plVar3 + 0x11);
        }
        else {
          lVar10 = (*(code *)((undefined **)*plVar3)[2])(plVar3);
        }
        if (lVar10 != 0) {
          if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
            uVar7 = (uint)*(ushort *)((longlong)plVar3 + 0x19);
          }
          else {
            uVar7 = (**(code **)*plVar3)(plVar3);
          }
          if ((int)uVar7 < 0x105) {
            if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
              pcVar8 = *(char **)((longlong)plVar3 + 0x11);
            }
            else {
              pcVar8 = (char *)(*(code *)((undefined **)*plVar3)[2])(plVar3);
            }
            pcVar12 = local_158;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              *pcVar12 = cVar1;
              pcVar12 = pcVar12 + 1;
            } while (cVar1 != '\0');
            local_158[1] = uVar15;
            if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
              pcVar8 = *(char **)((longlong)plVar2 + 0x11);
            }
            else {
              pcVar8 = (char *)(*(code *)((undefined **)*plVar2)[2])(plVar2);
            }
            iVar6 = _stricmp(local_158,pcVar8);
            if (iVar6 == 0) {
              lVar16 = plVar14[2];
              *(longlong *)plVar14[1] = *plVar14;
              *(longlong *)(*plVar14 + 8) = plVar14[1];
              param_1[1] = param_1[1] + -1;
              free(plVar14);
              break;
            }
          }
        }
      }
      plVar14 = (longlong *)*plVar14;
    } while (plVar14 != (longlong *)*param_1);
  }
  if (((param_3 != '\0') && (lVar16 == 0)) && ((byte)(*pcVar9 - 0x23U) < 2)) {
    FUN_1800246b0(param_1,local_168);
  }
LAB_18003656c:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_188);
  return;
}


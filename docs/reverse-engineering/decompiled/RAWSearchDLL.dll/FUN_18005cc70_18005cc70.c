// Function: FUN_18005cc70
// Address: 18005cc70
// Size: 441 bytes


char * FUN_18005cc70(longlong param_1,char *param_2)

{
  char cVar1;
  double dVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  
  iVar5 = 1;
  iVar11 = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  iVar10 = 0;
  cVar8 = *param_2;
  dVar13 = 0.0;
  dVar14 = 0.0;
  if (cVar8 == '-') {
    param_2 = param_2 + 1;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    cVar8 = *param_2;
  }
  bVar12 = cVar8 == '0';
  if (bVar12) {
    cVar8 = param_2[1];
  }
  pcVar7 = param_2 + 1;
  if (!bVar12) {
    pcVar7 = param_2;
  }
  dVar2 = 0.0;
  cVar1 = cVar8;
  if ('0' < cVar8) {
    do {
      dVar13 = dVar2;
      cVar8 = cVar1;
      if ('9' < cVar1) break;
      cVar8 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      dVar13 = (double)(cVar1 + -0x30) + dVar13 * DAT_18006ee50;
      dVar2 = dVar13;
      cVar1 = cVar8;
    } while ('/' < cVar8);
  }
  if (cVar8 == '.') {
    cVar8 = pcVar7[1];
    if ((byte)(cVar8 - 0x30U) < 10) {
      pcVar7 = pcVar7 + 1;
      do {
        iVar4 = (int)cVar8;
        dVar14 = dVar14 + DAT_18006ee80;
        cVar8 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
        dVar13 = (double)(iVar4 + -0x30) + dVar13 * DAT_18006ee50;
        if (cVar8 < '0') break;
      } while (cVar8 < ':');
      goto LAB_18005cd5e;
    }
  }
  else {
LAB_18005cd5e:
    if ((cVar8 + 0xbbU & 0xdf) == 0) {
      cVar8 = pcVar7[1];
      iVar10 = 0;
      if (cVar8 == '+') {
LAB_18005cd7b:
        cVar8 = pcVar7[2];
        pcVar3 = pcVar7 + 2;
        iVar11 = iVar5;
      }
      else {
        pcVar3 = pcVar7 + 1;
        iVar11 = iVar5;
        if (cVar8 == '-') {
          iVar5 = -1;
          goto LAB_18005cd7b;
        }
      }
      while ((pcVar7 = pcVar3, '/' < cVar8 && (cVar8 < ':'))) {
        iVar5 = (int)cVar8;
        pcVar3 = pcVar7 + 1;
        iVar10 = iVar5 + (iVar10 * 5 + -0x18) * 2;
        cVar8 = pcVar7[1];
      }
    }
    if ((dVar14 != 0.0) || (iVar10 != 0)) {
      dVar14 = pow(DAT_18006ee50,(double)(iVar11 * iVar10) + dVar14);
      uVar9 = 4;
      dVar13 = dVar14 * (double)*(int *)(param_1 + 0x38) * dVar13;
      lVar6 = (longlong)dVar13;
      goto LAB_18005ce09;
    }
  }
  uVar9 = 3;
  lVar6 = (longlong)*(int *)(param_1 + 0x38) * (longlong)dVar13;
  dVar13 = (double)*(int *)(param_1 + 0x38) * dVar13;
LAB_18005ce09:
  *(double *)(param_1 + 0x30) = dVar13;
  *(longlong *)(param_1 + 0x28) = lVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar9;
  return pcVar7;
}


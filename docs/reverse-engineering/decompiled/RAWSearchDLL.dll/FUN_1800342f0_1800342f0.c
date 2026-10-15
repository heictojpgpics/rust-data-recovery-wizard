// Function: FUN_1800342f0
// Address: 1800342f0
// Size: 324 bytes


ulonglong FUN_1800342f0(longlong param_1,longlong param_2,char *param_3,int param_4,int param_5)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_4;
  uVar6 = (param_2 - *(longlong *)(param_1 + 8)) * lVar7 + (longlong)param_5;
  if (((*(ushort *)(param_1 + 0x60) < 0x191) || (*(ushort *)(param_1 + 0x62) < 0x191)) ||
     (uVar4 = *(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8), uVar4 <= uVar6)) {
    uVar2 = *(ushort *)(param_3 + param_5);
    uVar4 = (ulonglong)uVar2;
    if (((uVar2 != 0xe0ff) && (uVar2 != 0xe1ff)) &&
       ((uVar2 != 0xe2ff && ((uVar2 != 0xe7ff && (uVar2 != 0xdbff)))))) {
      pcVar1 = param_3 + lVar7;
      for (pcVar5 = pcVar1; pcVar5 < pcVar1 + lVar7; pcVar5 = pcVar5 + 1) {
        if ((*pcVar5 == -1) && (pcVar5[1] == DAT_180068021)) {
          uVar3 = ((int)pcVar5 - (int)pcVar1) + 2;
          uVar4 = (ulonglong)uVar3;
          if (2 < (int)uVar3) goto LAB_180034427;
          break;
        }
      }
      pcVar5 = param_3;
      if (param_3 < pcVar1) {
        do {
          if ((*pcVar5 == -1) && (pcVar5[1] == DAT_180068021)) {
            uVar4 = (ulonglong)(((int)pcVar5 - (int)param_3) + 2);
            goto LAB_1800343da;
          }
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < pcVar1);
      }
      uVar4 = 0;
LAB_1800343da:
      if ((int)uVar4 <= param_5) {
        if (*(short *)(param_1 + 0x60) != 0) {
          uVar2 = *(ushort *)(param_1 + 0x62);
          uVar4 = (ulonglong)uVar2;
          if ((uVar2 != 0) &&
             (uVar4 = (ulonglong)((int)((uint)uVar2 * (uint)*(ushort *)(param_1 + 0x60)) / 10),
             uVar6 < uVar4)) goto LAB_180034427;
        }
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
LAB_180034427:
  return uVar4 & 0xffffffffffffff00;
}


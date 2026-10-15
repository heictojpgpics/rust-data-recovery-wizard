// Function: FUN_1800591e0
// Address: 1800591e0
// Size: 657 bytes


void FUN_1800591e0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  char *_Dst;
  undefined **ppuVar8;
  size_t _Size;
  byte *pbVar9;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_18008f028 ^ (ulonglong)auStack_68;
  if ((*param_1 & 0x100) == 0) {
    __security_check_cookie(local_30 ^ (ulonglong)auStack_68);
    return;
  }
  **(undefined1 **)(param_1 + 4) = 0;
  uVar2 = *param_1;
  *param_1 = uVar2 ^ 0x100;
  if (uVar2 != 0x100) {
    pcVar5 = *(char **)(param_1 + 2);
    _Dst = pcVar5;
    if (pcVar5 < *(char **)(param_1 + 4)) {
      do {
        if ((*param_1 & 2) == 0) {
LAB_1800592aa:
          if (((*param_1 & 1) == 0) || (*pcVar5 != '&')) {
LAB_18005934e:
            *_Dst = *pcVar5;
LAB_180059353:
            pcVar6 = pcVar5 + 1;
            goto LAB_180059356;
          }
          if (pcVar5[1] != '#') {
            ppuVar8 = &PTR_DAT_18006acb0;
            do {
              iVar3 = strncmp(pcVar5 + 1,*ppuVar8,(longlong)*(int *)(ppuVar8 + 1));
              if ((iVar3 == 0) && (pcVar5[(longlong)*(int *)(ppuVar8 + 1) + 1] == ';')) {
                *_Dst = *(char *)((longlong)ppuVar8 + 0xc);
                pcVar6 = pcVar5 + (*(int *)(ppuVar8 + 1) + 2);
                goto LAB_180059356;
              }
              ppuVar8 = ppuVar8 + 2;
            } while ((longlong)ppuVar8 < 0x18006ad00);
            goto LAB_180059353;
          }
          local_48[0] = 0;
          local_40 = 0;
          local_38 = 0;
          pcVar6 = (char *)FUN_180059480((longlong)pcVar5,(longlong)&local_40,local_48);
          if (pcVar6 == (char *)0x0) goto LAB_18005934e;
          _Size = (size_t)local_48[0];
          memcpy(_Dst,&local_40,_Size);
        }
        else {
          if (*pcVar5 == '\r') {
            cVar1 = pcVar5[1];
            *_Dst = '\n';
            pcVar6 = pcVar5 + (ulonglong)(cVar1 == '\n') + 1;
          }
          else {
            if (*pcVar5 != '\n') goto LAB_1800592aa;
            cVar1 = pcVar5[1];
            *_Dst = '\n';
            pcVar6 = pcVar5 + (ulonglong)(cVar1 == '\r') + 1;
          }
LAB_180059356:
          _Size = 1;
        }
        _Dst = _Dst + _Size;
        pcVar5 = pcVar6;
      } while (pcVar6 < *(char **)(param_1 + 4));
    }
    *_Dst = '\0';
  }
  if ((*param_1 & 4) != 0) {
    pbVar7 = *(byte **)(param_1 + 2);
    while ((((uint)(int)(char)*pbVar7 >> 7 & 1) == 0 && (iVar3 = isspace((uint)*pbVar7), iVar3 != 0)
           )) {
      pbVar7 = pbVar7 + 1;
    }
    *(byte **)(param_1 + 2) = pbVar7;
    bVar4 = *pbVar7;
    pbVar9 = pbVar7;
    if (bVar4 != 0) {
      do {
        if ((((uint)(int)(char)bVar4 >> 7 & 1) == 0) && (iVar3 = isspace((uint)bVar4), iVar3 != 0))
        {
          while (bVar4 = *pbVar7, ((uint)(int)(char)bVar4 >> 7 & 1) == 0) {
            iVar3 = isspace((uint)bVar4);
            if (iVar3 == 0) {
              bVar4 = *pbVar7;
              break;
            }
            pbVar7 = pbVar7 + 1;
          }
          if (bVar4 == 0) break;
          *pbVar9 = 0x20;
          pbVar9 = pbVar9 + 1;
        }
        bVar4 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        *pbVar9 = bVar4;
        pbVar9 = pbVar9 + 1;
        bVar4 = *pbVar7;
      } while (bVar4 != 0);
      *pbVar9 = 0;
    }
  }
  *param_1 = *param_1 & 0x200;
  __security_check_cookie(local_30 ^ (ulonglong)auStack_68);
  return;
}


// Function: FUN_180059c30
// Address: 180059c30
// Size: 935 bytes


uint * FUN_180059c30(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *_Str2;
  uint *_Str1;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  char *pcVar14;
  uint *local_res8;
  uint local_58 [2];
  void *local_50;
  void *pvStack_48;
  
  lVar2 = param_1[1];
  *(int *)(lVar2 + 0xa4) = *(int *)(lVar2 + 0xa4) + 1;
  if (*(int *)(lVar2 + 0xa4) == 500) {
    FUN_18005b870(lVar2,0x12,*(undefined4 *)(lVar2 + 0xa0),0x18006e848);
  }
  puVar13 = (uint *)0x0;
  puVar7 = puVar13;
  if ((*(int *)(param_1[1] + 0x6c) == 0) && (cVar4 = '\x01', param_2 != (uint *)0x0)) {
    while (puVar7 = puVar13, (char)*param_2 != '\0') {
      local_res8 = (uint *)0x0;
      pbVar6 = FUN_1800596b0(param_1[1],(byte *)param_2,&local_res8,cVar4);
      puVar3 = local_res8;
      if (local_res8 == (uint *)0x0) break;
      local_res8 = (uint *)((ulonglong)local_res8 & 0xffffffffffffff00);
      uVar1 = puVar3[0xc];
      local_58[0] = 0;
      local_50 = (void *)0x0;
      pvStack_48 = (void *)0x0;
      puVar11 = puVar3;
      puVar7 = (uint *)(**(code **)(*(longlong *)puVar3 + 0x80))(puVar3,pbVar6,local_58);
      if (puVar7 == (uint *)0x0) {
        FUN_18005b700(puVar11,(longlong *)puVar3);
        if (*(int *)(param_1[1] + 0x6c) == 0) {
          FUN_18005b870(param_1[1],0xf,uVar1,0);
        }
LAB_180059f9c:
        puVar7 = puVar13;
        if ((local_58[0] & 0x200) != 0) {
          free(local_50);
          puVar7 = (uint *)0x0;
        }
        break;
      }
      plVar8 = (longlong *)(**(code **)(*(longlong *)puVar3 + 0x48))(puVar3);
      if ((plVar8 != (longlong *)0x0) &&
         ((lVar9 = (**(code **)(*param_1 + 0x38))(param_1), lVar9 == 0 ||
          (((longlong *)param_1[7] != (longlong *)0x0 &&
           (((lVar9 = (**(code **)(*(longlong *)param_1[7] + 0x48))(), lVar9 == 0 ||
             ((longlong *)param_1[8] == (longlong *)0x0)) ||
            (lVar9 = (**(code **)(*(longlong *)param_1[8] + 0x48))(), lVar9 == 0)))))))) {
        lVar9 = param_1[1];
        lVar10 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if (lVar10 == 0) {
          FUN_1800591e0((uint *)(plVar8 + 3));
        }
        pcVar14 = "XMLDeclaration value=%s";
        iVar12 = 0xb;
LAB_180059ec4:
        FUN_18005b870(lVar9,iVar12,uVar1,(longlong)pcVar14);
        FUN_18005b700(lVar9,(longlong *)puVar3);
        goto LAB_180059f9c;
      }
      puVar11 = puVar3;
      plVar8 = (longlong *)(**(code **)(*(longlong *)puVar3 + 8))();
      if (plVar8 != (longlong *)0x0) {
        uVar5 = *(uint *)(plVar8 + 0xd);
        puVar11 = (uint *)(ulonglong)uVar5;
        if (uVar5 != 2) {
          if (local_50 == pvStack_48) {
joined_r0x000180059e1f:
            if (uVar5 != 0) goto LAB_180059e21;
          }
          else if (uVar5 == 0) {
            lVar9 = (**(code **)(*plVar8 + 0x30))(plVar8);
            _Str2 = puVar13;
            if (lVar9 == 0) {
              _Str2 = (uint *)FUN_1800591e0((uint *)(plVar8 + 3));
            }
            puVar11 = local_58;
            _Str1 = (uint *)FUN_1800591e0(puVar11);
            if (_Str1 == _Str2) goto LAB_180059e21;
            uVar5 = strncmp((char *)_Str1,(char *)_Str2,0x7fffffff);
            puVar11 = _Str1;
            goto joined_r0x000180059e1f;
          }
          lVar9 = param_1[1];
          lVar10 = (**(code **)(*plVar8 + 0x30))(plVar8);
          if (lVar10 == 0) {
            FUN_1800591e0((uint *)(plVar8 + 3));
            pcVar14 = "XMLElement name=%s";
            iVar12 = 0xe;
          }
          else {
            pcVar14 = "XMLElement name=%s";
            iVar12 = 0xe;
          }
          goto LAB_180059ec4;
        }
        if ((param_3 != (uint *)0x0) && (puVar13 = (uint *)(plVar8 + 3), puVar13 != param_3)) {
          if ((*param_3 & 0x200) != 0) {
            free(*(void **)(param_3 + 2));
          }
          *param_3 = 0;
          param_3[2] = 0;
          param_3[3] = 0;
          param_3[4] = 0;
          param_3[5] = 0;
          *param_3 = *puVar13;
          *(longlong *)(param_3 + 2) = plVar8[4];
          *(longlong *)(param_3 + 4) = plVar8[5];
          *puVar13 = 0;
          plVar8[4] = 0;
          plVar8[5] = 0;
        }
        (**(code **)(**(longlong **)(puVar3 + 0x18) + 0x20))();
        FUN_180059fe0((longlong *)puVar3);
        if ((local_58[0] & 0x200) != 0) {
          free(local_50);
        }
        break;
      }
LAB_180059e21:
      if (*(longlong *)(puVar3 + 2) == param_1[1]) {
        FUN_18005a070(puVar11,(longlong)puVar3);
        if (param_1[8] == 0) {
          param_1[8] = (longlong)puVar3;
          param_1[7] = (longlong)puVar3;
          puVar3[0x12] = 0;
          puVar3[0x13] = 0;
        }
        else {
          *(uint **)(param_1[8] + 0x50) = puVar3;
          *(longlong *)(puVar3 + 0x12) = param_1[8];
          param_1[8] = (longlong)puVar3;
        }
        puVar3[0x14] = 0;
        puVar3[0x15] = 0;
        *(longlong **)(puVar3 + 4) = param_1;
      }
      param_2 = puVar7;
      cVar4 = (char)local_res8;
      if ((local_58[0] & 0x200) != 0) {
        free(local_50);
        cVar4 = (char)local_res8;
      }
    }
  }
  *(int *)(lVar2 + 0xa4) = *(int *)(lVar2 + 0xa4) + -1;
  return puVar7;
}


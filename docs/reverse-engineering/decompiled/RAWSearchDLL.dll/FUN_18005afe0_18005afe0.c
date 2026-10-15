// Function: FUN_18005afe0
// Address: 18005afe0
// Size: 555 bytes


undefined8 * FUN_18005afe0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Src;
  char *_Str2;
  char *_Str1;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_2 == 0) {
    param_2 = param_1[1];
  }
  lVar3 = (**(code **)(*param_1 + 0x30))();
  puVar4 = (undefined8 *)0x0;
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)FUN_1800591e0((uint *)(param_1 + 3));
  }
  puVar5 = FUN_18005ca70(param_2,param_2 + 0x108);
  FUN_180059060((uint *)(puVar5 + 3),puVar4);
  lVar3 = param_1[0xe];
  do {
    if (lVar3 == 0) {
      return puVar5;
    }
    _Src = (void *)FUN_1800591e0((uint *)(lVar3 + 0x20));
    _Str2 = (char *)FUN_1800591e0((uint *)(lVar3 + 8));
    puVar1 = (undefined8 *)puVar5[0xe];
    puVar4 = (undefined8 *)0x0;
    while (puVar6 = puVar1, puVar6 != (undefined8 *)0x0) {
      _Str1 = (char *)FUN_1800591e0((uint *)(puVar6 + 1));
      if ((_Str1 == _Str2) || (iVar2 = strncmp(_Str1,_Str2,0x7fffffff), iVar2 == 0)) {
        if (puVar6 != (undefined8 *)0x0) goto LAB_18005b17b;
        break;
      }
      puVar4 = puVar6;
      puVar1 = (undefined8 *)puVar6[8];
    }
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)(puVar5[1] + 0x188) + 0x10))();
    *puVar6 = tinyxml2::XMLAttribute::vftable;
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    puVar6[8] = 0;
    lVar8 = puVar5[1];
    puVar6[9] = (longlong *)(lVar8 + 0x188);
    (**(code **)(*(longlong *)(lVar8 + 0x188) + 0x20))();
    if (puVar4 == (undefined8 *)0x0) {
      puVar5[0xe] = puVar6;
    }
    else {
      puVar4[8] = puVar6;
    }
    if ((*(uint *)(puVar6 + 1) & 0x200) != 0) {
      free((void *)puVar6[2]);
    }
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    lVar8 = -1;
    do {
      lVar9 = lVar8;
      lVar8 = lVar9 + 1;
    } while (_Str2[lVar8] != '\0');
    pvVar7 = (void *)FUN_1800020c0(lVar9 + 2);
    puVar6[2] = pvVar7;
    memcpy(pvVar7,_Str2,lVar9 + 2);
    *(undefined4 *)(puVar6 + 1) = 0x200;
    puVar6[3] = puVar6[2] + lVar8;
LAB_18005b17b:
    if ((*(uint *)(puVar6 + 4) & 0x200) != 0) {
      free((void *)puVar6[5]);
    }
    *(undefined4 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    lVar8 = -1;
    do {
      lVar9 = lVar8;
      lVar8 = lVar9 + 1;
    } while (*(char *)((longlong)_Src + lVar8) != '\0');
    pvVar7 = (void *)FUN_1800020c0(lVar9 + 2);
    puVar6[5] = pvVar7;
    memcpy(pvVar7,_Src,lVar9 + 2);
    *(undefined4 *)(puVar6 + 4) = 0x200;
    puVar6[6] = puVar6[5] + lVar8;
    lVar3 = *(longlong *)(lVar3 + 0x40);
  } while( true );
}


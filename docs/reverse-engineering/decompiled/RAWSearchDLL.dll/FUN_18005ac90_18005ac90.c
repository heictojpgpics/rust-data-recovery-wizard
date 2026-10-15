// Function: FUN_18005ac90
// Address: 18005ac90
// Size: 655 bytes


byte * FUN_18005ac90(longlong *param_1,byte *param_2,int *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  char *_Str2;
  char *_Str1;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)0x0;
  if (param_2 != (byte *)0x0) {
LAB_18005acd0:
    uVar8 = (uint)(char)*param_2;
    if ((uVar8 >> 7 & 1) == 0) {
      iVar3 = isspace((uint)*param_2);
      if (iVar3 != 0) {
        if ((param_3 != (int *)0x0) && (*param_2 == 10)) {
          *param_3 = *param_3 + 1;
        }
        param_2 = param_2 + 1;
        goto LAB_18005acd0;
      }
      uVar8 = (uint)*param_2;
    }
    bVar7 = (byte)uVar8;
    if (bVar7 == 0) {
      lVar5 = param_1[1];
      lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      if (lVar6 == 0) {
        FUN_1800591e0((uint *)(param_1 + 3));
      }
      FUN_18005b870(lVar5,6,(int)param_1[6],0x18006e5b8);
      return (byte *)0x0;
    }
    if ((((bVar7 < 0x80) && (iVar3 = isalpha(uVar8 & 0xff), iVar3 == 0)) && (bVar7 != 0x3a)) &&
       (bVar7 != 0x5f)) {
      if (*param_2 == 0x3e) {
        return param_2 + 1;
      }
      if ((*param_2 == 0x2f) && (param_2[1] == 0x3e)) {
        *(undefined4 *)(param_1 + 0xd) = 1;
        return param_2 + 2;
      }
      FUN_18005b870(param_1[1],6,(int)param_1[6],0);
      return (byte *)0x0;
    }
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)(param_1[1] + 0x188) + 0x10))();
    *puVar4 = tinyxml2::XMLAttribute::vftable;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    puVar4[8] = 0;
    lVar5 = param_1[1];
    puVar4[9] = (longlong *)(lVar5 + 0x188);
    (**(code **)(*(longlong *)(lVar5 + 0x188) + 0x20))();
    uVar1 = *(undefined4 *)(param_1[1] + 0xa0);
    *(undefined4 *)(puVar4 + 7) = uVar1;
    param_2 = FUN_18005aa60((longlong)puVar4,param_2,*(byte *)(param_1[1] + 0x69),param_3);
    if (param_2 != (byte *)0x0) {
      _Str2 = (char *)FUN_1800591e0((uint *)(puVar4 + 1));
      for (lVar5 = param_1[0xe]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x40)) {
        _Str1 = (char *)FUN_1800591e0((uint *)(lVar5 + 8));
        if ((_Str1 == _Str2) || (iVar3 = strncmp(_Str1,_Str2,0x7fffffff), iVar3 == 0)) {
          if ((lVar5 != 0) && (lVar5 = FUN_1800591e0((uint *)(lVar5 + 0x20)), lVar5 != 0))
          goto LAB_18005ae82;
          break;
        }
      }
      if (puVar9 == (undefined8 *)0x0) {
        param_1[0xe] = (longlong)puVar4;
        puVar9 = puVar4;
      }
      else {
        puVar9[8] = puVar4;
        puVar9 = puVar4;
      }
      goto LAB_18005acd0;
    }
LAB_18005ae82:
    plVar2 = (longlong *)puVar4[9];
    (**(code **)*puVar4)(puVar4,0);
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar4);
    lVar5 = param_1[1];
    lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar6 == 0) {
      FUN_1800591e0((uint *)(param_1 + 3));
    }
    FUN_18005b870(lVar5,7,uVar1,0x18006e5b8);
    param_2 = (byte *)0x0;
  }
  return param_2;
}


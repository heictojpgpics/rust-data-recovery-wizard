// Function: FUN_1800596b0
// Address: 1800596b0
// Size: 548 bytes


byte * FUN_1800596b0(longlong param_1,byte *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte *_Str1;
  
  piVar1 = (int *)(param_1 + 0xa0);
  iVar3 = *piVar1;
  _Str1 = param_2;
  while (bVar5 = *_Str1, ((uint)(int)(char)bVar5 >> 7 & 1) == 0) {
    iVar2 = isspace((uint)bVar5);
    if (iVar2 == 0) {
      bVar5 = *_Str1;
      break;
    }
    if ((piVar1 != (int *)0x0) && (*_Str1 == 10)) {
      *piVar1 = *piVar1 + 1;
    }
    _Str1 = _Str1 + 1;
  }
  if (bVar5 == 0) {
    *param_3 = 0;
    return _Str1;
  }
  if ((_Str1 == &DAT_18006e574) || (iVar2 = strncmp((char *)_Str1,"<?",2), iVar2 == 0)) {
    puVar4 = FUN_18005c870(param_1,param_1 + 0x288);
LAB_1800598a3:
    param_2 = _Str1 + 2;
LAB_1800598a7:
    iVar3 = *piVar1;
  }
  else {
    if ((_Str1 == &DAT_18006e56c) || (iVar2 = strncmp((char *)_Str1,"<!--",4), iVar2 == 0)) {
      puVar4 = FUN_18005c8f0(param_1,param_1 + 0x288);
      param_2 = _Str1 + 4;
      goto LAB_1800598a7;
    }
    if ((_Str1 != (byte *)"<![CDATA[") && (iVar2 = strncmp((char *)_Str1,"<![CDATA[",9), iVar2 != 0)
       ) {
      if ((_Str1 == &DAT_18006e55c) || (iVar2 = strncmp((char *)_Str1,"<!",2), iVar2 == 0)) {
        puVar4 = FUN_18005c9f0(param_1,param_1 + 0x288);
        goto LAB_1800598a3;
      }
      if ((_Str1 != &DAT_18006e558) && (iVar2 = strncmp((char *)_Str1,"<",1), iVar2 != 0)) {
        puVar4 = FUN_18005c970(param_1,param_1 + 0x208);
        *(int *)(puVar4 + 6) = *piVar1;
        *piVar1 = iVar3;
        goto LAB_1800598af;
      }
      if ((*(int *)(param_1 + 0x70) == 2) &&
         (((param_4 != '\0' && (_Str1 != param_2)) && (_Str1[1] == 0x2f)))) {
        puVar4 = FUN_18005c970(param_1,param_1 + 0x208);
        *(int *)(puVar4 + 6) = iVar3;
        *piVar1 = iVar3;
        goto LAB_1800598af;
      }
      puVar4 = FUN_18005ca70(param_1,param_1 + 0x108);
      param_2 = _Str1 + 1;
      goto LAB_1800598a7;
    }
    puVar4 = FUN_18005c970(param_1,param_1 + 0x208);
    param_2 = _Str1 + 9;
    iVar3 = *piVar1;
    *(undefined1 *)(puVar4 + 0xd) = 1;
  }
  *(int *)(puVar4 + 6) = iVar3;
LAB_1800598af:
  *param_3 = puVar4;
  return param_2;
}


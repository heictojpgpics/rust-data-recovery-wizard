// Function: FUN_180041670
// Address: 180041670
// Size: 512 bytes


void FUN_180041670(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined8 local_220;
  char local_218 [512];
  ulonglong local_18;
  
  local_220 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_248;
  memset(local_218,0,0x200);
  if (param_2 == (int *)0x0) goto LAB_18004184b;
  iVar5 = memcmp(param_2,s_<_xml_version___180093930,0xf);
  if ((iVar5 == 0) ||
     (iVar5 = memcmp((void *)((longlong)param_2 + 3),s_<_xml_version___180093930,0xf), iVar5 == 0))
  {
    lVar7 = 4;
    pcVar6 = local_218;
    do {
      uVar1 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)(param_2 + 4);
      uVar3 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)pcVar6 = *(undefined8 *)param_2;
      *(undefined8 *)(pcVar6 + 8) = uVar1;
      *(undefined8 *)(pcVar6 + 0x10) = uVar2;
      *(undefined8 *)(pcVar6 + 0x18) = uVar3;
      uVar1 = *(undefined8 *)(param_2 + 10);
      uVar2 = *(undefined8 *)(param_2 + 0xc);
      uVar3 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(pcVar6 + 0x20) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(pcVar6 + 0x28) = uVar1;
      *(undefined8 *)(pcVar6 + 0x30) = uVar2;
      *(undefined8 *)(pcVar6 + 0x38) = uVar3;
      uVar1 = *(undefined8 *)(param_2 + 0x12);
      uVar2 = *(undefined8 *)(param_2 + 0x14);
      uVar3 = *(undefined8 *)(param_2 + 0x16);
      *(undefined8 *)(pcVar6 + 0x40) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(pcVar6 + 0x48) = uVar1;
      *(undefined8 *)(pcVar6 + 0x50) = uVar2;
      *(undefined8 *)(pcVar6 + 0x58) = uVar3;
      uVar1 = *(undefined8 *)(param_2 + 0x1a);
      *(undefined8 *)(pcVar6 + 0x60) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(pcVar6 + 0x68) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x1e);
      *(undefined8 *)(pcVar6 + 0x70) = *(undefined8 *)(param_2 + 0x1c);
      *(undefined8 *)(pcVar6 + 0x78) = uVar1;
      param_2 = param_2 + 0x20;
      lVar7 = lVar7 + -1;
      pcVar6 = pcVar6 + 0x80;
    } while (lVar7 != 0);
    pcVar6 = strstr(local_218,(char *)&DAT_180093920);
    if (((((pcVar6 != (char *)0x0) ||
          (pcVar6 = strstr(local_218,s_<svg_180093948), pcVar6 != (char *)0x0)) ||
         (pcVar6 = strstr(local_218,s_<svg_180093928), pcVar6 != (char *)0x0)) ||
        ((pcVar6 = strstr(local_218,s_<svg>_180093970), pcVar6 != (char *)0x0 ||
         (pcVar6 = strstr(local_218,s_<svg>_180093960), pcVar6 != (char *)0x0)))) ||
       (pcVar6 = strstr(local_218,s_<svg>_180093958), pcVar6 != (char *)0x0)) goto LAB_18004182e;
    pcVar6 = strstr(local_218,&DAT_180093968);
    bVar4 = false;
    if (pcVar6 != (char *)0x0) {
      *(undefined4 *)(param_3 + 0x18) = 0x13;
      goto LAB_18004184b;
    }
  }
  else if ((*param_2 == DAT_180093940) ||
          ((bVar4 = false, *param_2 == DAT_180093920 &&
           (bVar4 = false, (char)param_2[1] == DAT_180093924)))) {
LAB_18004182e:
    local_228 = 1;
    bVar4 = true;
  }
  if (bVar4) {
    *(undefined4 *)(param_3 + 0x18) = 0x5b;
  }
LAB_18004184b:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}


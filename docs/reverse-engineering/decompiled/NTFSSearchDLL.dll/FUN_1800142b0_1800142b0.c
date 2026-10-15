// Function: FUN_1800142b0
// Address: 1800142b0
// Size: 163 bytes


undefined8 *
FUN_1800142b0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  cVar4 = '\x01';
  puVar3 = (undefined8 *)((undefined8 *)*param_1)[1];
  puVar5 = (undefined8 *)*param_1;
  while (*(char *)((longlong)puVar3 + 0x19) == '\0') {
    lVar1 = *(longlong *)(*param_4 + 0x10);
    lVar2 = *(longlong *)(puVar3[4] + 0x10);
    puVar5 = puVar3;
    if ((lVar1 < lVar2) ||
       ((lVar1 <= lVar2 && (*(uint *)(*param_4 + 0xc) < *(uint *)(puVar3[4] + 0xc))))) {
      cVar4 = '\x01';
      puVar3 = (undefined8 *)*puVar3;
    }
    else {
      cVar4 = '\0';
      puVar3 = (undefined8 *)puVar3[2];
    }
  }
  puVar3 = FUN_180014620(param_1,&local_res8,cVar4,puVar5,param_4);
  *param_2 = *puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


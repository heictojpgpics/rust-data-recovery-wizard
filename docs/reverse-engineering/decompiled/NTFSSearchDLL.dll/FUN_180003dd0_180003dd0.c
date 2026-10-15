// Function: FUN_180003dd0
// Address: 180003dd0
// Size: 249 bytes


char FUN_180003dd0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  char extraout_AL;
  int iVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar3 = '\0';
  if (((((longlong *)*param_1 != (longlong *)0x0) && (cVar3 = cVar5, param_2 != (longlong *)0x0)) &&
      (iVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))(), (ulonglong)(longlong)iVar4 <= param_3)
      ) && (((*param_2 != 0 || (lVar1 = *(longlong *)(param_1[1] + 8), lVar1 == 0)) ||
            ((lVar1 == 0x3f || ((lVar1 == 0x800 || (lVar1 == 0x8000)))))))) {
    cVar3 = FUN_1800043e0(param_1,param_2,param_3);
    if ((cVar3 == '\0') &&
       (FUN_1800045a0(param_1,(int *)param_2,param_3,*(longlong *)(param_1[1] + 8),'\0'),
       extraout_AL == '\0')) {
      cVar3 = FUN_180005420(param_1,param_2,param_3);
      if (cVar3 == '\0') {
        cVar3 = FUN_180005260(param_1,param_2,param_3);
      }
    }
    else {
      cVar3 = '\x01';
    }
  }
  puVar2 = (undefined4 *)param_1[1];
  if (cVar3 == '\0') {
    *puVar2 = 0xe;
  }
  else if ((*(longlong *)(puVar2 + 4) != 0) && (puVar2[0xe] != 0)) {
    cVar3 = '\x01';
  }
  return cVar3;
}


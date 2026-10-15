// Function: FUN_180049950
// Address: 180049950
// Size: 223 bytes


void FUN_180049950(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 != 0) {
    puVar3 = (ulonglong *)FUN_18000b450();
    iVar2 = __stdio_common_vsprintf(*puVar3 | 2,0,0,param_2,0,&local_res18);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    if (iVar2 < 0) {
      FUN_180047ec0(0x80004005);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar4 = *param_1;
    if ((int)(1U - *(int *)(lVar4 + -8) | *(int *)(lVar4 + -0xc) - iVar2) < 0) {
      FUN_180049a30(param_1,iVar2);
      lVar4 = *param_1;
    }
    __stdio_common_vsprintf_s(*puVar3,lVar4,(longlong)(iVar2 + 1),param_2,0,&local_res18);
    if (iVar2 <= *(int *)(*param_1 + -0xc)) {
      *(int *)(*param_1 + -0x10) = iVar2;
      *(undefined1 *)((longlong)iVar2 + *param_1) = 0;
      return;
    }
  }
  FUN_180047ec0(0x80070057);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


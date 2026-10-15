// Function: FUN_1800045a0
// Address: 1800045a0
// Size: 681 bytes


ulonglong FUN_1800045a0(longlong *param_1,int *param_2,ulonglong param_3,longlong param_4,
                       char param_5)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Memory;
  ulonglong unaff_RBX;
  uint uVar7;
  longlong lVar8;
  void *local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50 [2];
  short local_3e;
  longlong local_30 [3];
  
  if (param_2 == (int *)0x0) {
    return unaff_RBX;
  }
  if (param_3 < 0x400) {
    return unaff_RBX;
  }
  iVar2 = FUN_1800411d0(param_2);
  if (iVar2 == 0) {
    return unaff_RBX;
  }
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_180007370(&local_58);
  uVar3 = FUN_180007600(&local_58,param_2,0x400,*(undefined8 *)(param_1[1] + 8));
  if ((int)uVar3 == 0) {
    ~_String_alloc<>(local_30);
    ~_String_alloc<>(local_50);
  }
  else {
    lVar4 = FUN_180040570(local_50,0);
    uVar7 = (uint)local_3e;
    if ((lVar4 < 1) || (local_3e == 0)) {
      ~_String_alloc<>(local_30);
      ~_String_alloc<>(local_50);
    }
    else {
      if (param_5 == '\0') {
        lVar8 = *(longlong *)(param_1[1] + 8) - (ulonglong)uVar7 * lVar4;
      }
      else {
        lVar8 = *(longlong *)(param_1[1] + 8);
      }
      lVar5 = (**(code **)(*(longlong *)*param_1 + 0x18))();
      if (lVar5 < lVar8) {
        ~_String_alloc<>(local_30);
        ~_String_alloc<>(local_50);
      }
      else {
        bVar1 = FUN_180005ae0(param_1,(longlong *)&local_70,param_4);
        if (bVar1) {
          bVar1 = FUN_180004c00(param_1,(longlong *)&local_70,uVar7,lVar8,3,(int **)0x0);
          if ((bVar1) ||
             (bVar1 = FUN_180004c00(param_1,(longlong *)&local_70,uVar7,lVar8,0,(int **)0x0), bVar1)
             ) {
            uVar6 = FUN_180004fc0(param_1,(longlong *)&local_70,uVar7);
            if ((char)uVar6 != '\0') {
              *(uint *)(param_1[1] + 0x38) = uVar7;
              *(undefined4 *)param_1[1] = 3;
              *(longlong *)(param_1[1] + 0x40) = lVar4;
              *(longlong *)(param_1[1] + 8) = lVar8;
              *(undefined4 *)(param_1[1] + 0x3c) = 0x400;
              *(undefined4 *)(param_1[1] + 0x5c) = 2;
              ~_String_alloc<>(local_30);
              ~_String_alloc<>(local_50);
              goto LAB_1800047d9;
            }
            ~_String_alloc<>(local_30);
            ~_String_alloc<>(local_50);
          }
          else {
            ~_String_alloc<>(local_30);
            ~_String_alloc<>(local_50);
          }
        }
        else {
          ~_String_alloc<>(local_30);
          ~_String_alloc<>(local_50);
        }
      }
    }
  }
  FUN_180005590(param_1,(longlong *)&local_70,param_4,param_5);
LAB_1800047d9:
  if (local_70 != (void *)0x0) {
    _Memory = local_70;
    if ((0xfff < (ulonglong)(local_60 - (longlong)local_70)) &&
       (_Memory = *(void **)((longlong)local_70 + -8),
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return unaff_RBX;
}


// Function: FUN_18001db20
// Address: 18001db20
// Size: 604 bytes


undefined8
FUN_18001db20(longlong param_1,void *param_2,longlong param_3,longlong param_4,longlong *param_5,
             uint *param_6,char *param_7,char param_8,int param_9,int param_10,uint param_11,
             char param_12,char param_13)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  void *in_RAX;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar5;
  undefined7 extraout_var_00;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint local_res20 [2];
  
  if ((((*(int *)(param_4 + 0xc) == 9) && (*param_7 == '\0')) && (param_3 != 0)) &&
     ((in_RAX = *(void **)(param_4 + 0x10), in_RAX != (void *)0x0 &&
      (*(short *)((longlong)in_RAX + 0x42) != 0)))) {
    if (((param_8 != '\0') || ((param_9 == -1 && (param_12 == '\0')))) ||
       ((param_10 == 0 && (param_11 != 0xffffffff)))) {
      uVar3 = *(ushort *)((longlong)in_RAX + 0x3a);
      uVar1 = *(ushort *)((longlong)in_RAX + 0x38);
      if (param_13 != '\0') {
        uVar3 = *(ushort *)((longlong)in_RAX + 0x36);
        uVar1 = *(ushort *)((longlong)in_RAX + 0x34);
      }
      local_res20[0] = (uint)uVar3;
      if (uVar3 != 0) {
        in_RAX = *(void **)(param_4 + 0x18);
        pbVar6 = (byte *)((longlong)in_RAX + (ulonglong)uVar1 + 0x30);
        if (pbVar6 != (byte *)0x0) {
          cVar2 = FUN_18001d5f0(param_1,pbVar6,(int *)local_res20);
          in_RAX = (void *)CONCAT71(extraout_var_00,cVar2);
          if ((cVar2 != '\0') &&
             (in_RAX = (void *)FUN_18001d960(param_1,param_5,pbVar6,local_res20[0] + 1),
             (char)in_RAX != '\0')) {
            *param_7 = '\x01';
          }
        }
      }
LAB_18001dd61:
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    uVar3 = (**(code **)(*param_5 + 0x38))();
    if ((((uVar3 & 0x800) == 0) ||
        (in_RAX = *(void **)(param_4 + 0x10), 0x17 < *(ushort *)((longlong)in_RAX + 0x3a))) &&
       (in_RAX = *(void **)(param_4 + 0x10), in_RAX != (void *)0x0)) {
      uVar3 = *(ushort *)((longlong)in_RAX + 0x3a);
      uVar1 = *(ushort *)((longlong)in_RAX + 0x38);
      if (param_13 != '\0') {
        uVar3 = *(ushort *)((longlong)in_RAX + 0x36);
        uVar1 = *(ushort *)((longlong)in_RAX + 0x34);
      }
      local_res20[0] = (uint)uVar3;
      if (uVar3 != 0) {
        in_RAX = *(void **)(param_4 + 0x18);
        pbVar6 = (byte *)((ulonglong)uVar1 + 0x30 + (longlong)in_RAX);
        if (pbVar6 != (byte *)0x0) {
          cVar2 = FUN_18001d5f0(param_1,pbVar6,(int *)local_res20);
          in_RAX = (void *)CONCAT71(extraout_var,cVar2);
          if (cVar2 != '\0') {
            uVar7 = (uint)*(ushort *)(*(longlong *)(param_4 + 0x10) + 0x42) +
                    (uint)*(ushort *)(*(longlong *)(param_4 + 0x10) + 0x40);
            in_RAX = (void *)(ulonglong)local_res20[0];
            uVar8 = local_res20[0] + uVar7;
            if (uVar8 < 0x401) {
              in_RAX = memcpy((void *)((ulonglong)uVar7 + param_3),pbVar6,(ulonglong)local_res20[0])
              ;
              if ((int)*param_6 < (int)uVar8) {
                *param_6 = uVar8;
              }
              if (uVar7 == param_11) {
                if (param_12 == '\0') {
                  uVar4 = FUN_18001d960(param_1,param_5,(byte *)(param_3 + (int)param_11),
                                        0x400 - param_11);
                  *param_7 = '\x01';
                  return CONCAT71((int7)(uVar4 >> 8),1);
                }
                in_RAX = param_2;
                if (param_2 != (void *)0x0) {
                  pvVar5 = memcpy(param_2,(void *)(param_3 + (int)param_11),
                                  (longlong)(int)(0x400 - param_11));
                  *param_6 = *param_6 - uVar7;
                  *param_7 = '\x01';
                  return CONCAT71((int7)((ulonglong)pvVar5 >> 8),1);
                }
              }
              goto LAB_18001dd61;
            }
          }
        }
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


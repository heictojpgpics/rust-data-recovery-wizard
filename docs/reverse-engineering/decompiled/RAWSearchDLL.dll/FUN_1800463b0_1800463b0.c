// Function: FUN_1800463b0
// Address: 1800463b0
// Size: 403 bytes


undefined8
FUN_1800463b0(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5,
             longlong param_6,size_t param_7,longlong param_8,undefined4 *param_9)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)param_3;
  if ((param_2 != 0) && (*(uint *)(param_7 + 0x16) < 0x2800)) {
    uVar1 = *(uint *)(param_7 + 0x12);
    if ((uVar1 < 0x2800) &&
       (((uVar1 != 0 && (*(uint *)(param_7 + 0x16) != 0)) && (*(ushort *)(param_7 + 8) < 0xb)))) {
      lVar4 = (ulonglong)*(ushort *)(param_7 + 0x1c) + param_5 +
              (ulonglong)*(ushort *)(param_7 + 0x1a) + 0x1e;
      if (*(longlong *)(param_6 + 8) * lVar3 <
          (longlong)((ulonglong)uVar1 + lVar3 * param_4 + lVar4)) {
        *param_9 = 1;
        if (*(longlong *)(param_1 + 0x120) == 0) {
          *(longlong *)(param_1 + 0x120) = param_4;
          *(longlong *)(param_1 + 0x128) = param_5;
          return 0;
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x120) != 0) {
          param_4 = param_4 - *(longlong *)(param_1 + 0x120);
          if (param_4 - 1U < 9) {
            param_2 = param_2 - lVar3 * param_4;
          }
        }
        *param_9 = 0;
        *(undefined8 *)(param_1 + 0x120) = 0;
        *(undefined8 *)(param_1 + 0x128) = 0;
        if (*(void **)(param_1 + 0x110) != (void *)0x0) {
          uVar1 = *(uint *)(param_7 + 0x16);
          if (uVar1 == *(uint *)(param_7 + 0x12)) {
            if (uVar1 < 0x2800) {
              param_7 = (size_t)uVar1;
            }
            else {
              param_7 = 0x2800;
            }
            memcpy(*(void **)(param_1 + 0x110),(void *)(lVar4 + param_2),param_7);
            lVar4 = param_4;
          }
          else {
            uVar2 = FUN_180046630(param_1,param_2,param_7,lVar4);
            if ((int)uVar2 == 0) {
              return uVar2;
            }
          }
          FUN_1800467b0(param_1,param_8,param_7,lVar4);
          return 1;
        }
      }
    }
  }
  return 0;
}


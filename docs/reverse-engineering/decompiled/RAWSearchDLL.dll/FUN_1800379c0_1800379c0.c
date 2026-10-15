// Function: FUN_1800379c0
// Address: 1800379c0
// Size: 291 bytes


undefined8
FUN_1800379c0(longlong param_1,char *param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = 2;
  if (*(int *)(param_1 + 0x130) == 0) {
    if (param_2[3] == '\n') {
      *(undefined4 *)(param_1 + 0x130) = 8;
      *(undefined8 *)(param_1 + 0x110) = 0xa464f450a302020;
    }
    else {
      *(undefined4 *)(param_1 + 0x130) = 10;
      *(undefined8 *)(param_1 + 0x110) = 0x464f450a0d302020;
      *(undefined2 *)(param_1 + 0x118) = 0xa0d;
    }
  }
  iVar2 = *(int *)(param_1 + 0x130);
  iVar1 = FUN_180042ab0(param_2,param_3,*(int *)(param_5 + 0x14),(char *)(param_1 + 0x110),iVar2);
  if ((iVar1 == 0) &&
     (iVar2 = memcmp(param_2,(void *)(param_1 + 0x110),(longlong)iVar2), iVar2 != 0)) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)param_3;
  }
  else {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)iVar1;
    uVar4 = 1;
  }
  puVar3 = FUN_180001350();
  if (*(ulonglong *)(puVar3 + 0x70) <= *(ulonglong *)(param_1 + 0x10)) {
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(puVar3 + 0x70);
    uVar4 = 1;
  }
  return uVar4;
}


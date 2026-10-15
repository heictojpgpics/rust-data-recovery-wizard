// Function: FUN_180031f20
// Address: 180031f20
// Size: 612 bytes


void FUN_180031f20(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34;
  ulonglong local_30;
  
  local_30 = DAT_180086010 ^ (ulonglong)auStack_a8;
  bVar2 = 0;
  bVar6 = *(byte *)(param_2 + 0xe) & 3;
  if (bVar6 != 2) {
    bVar2 = 2;
  }
  if (param_3 == 0) {
    local_38 = 1;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_34 = bVar2;
    FUN_180032cb0(param_2,(int *)&local_60);
    memmove(&local_88,&local_60,0x28);
    iVar3 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar3 != 0) {
      iVar3 = *(int *)((longlong)param_2 + 0x9c) - local_84;
      lVar4 = param_2[0x15] - local_78;
      iVar5 = *(int *)((longlong)param_2 + 0xb4) - local_6c;
      iVar7 = *(int *)((longlong)param_2 + 0xbc) - local_64;
      if (bVar6 != 2) {
        iVar3 = iVar3 + local_88;
        iVar5 = iVar5 + local_70;
        lVar4 = lVar4 + local_80;
        iVar7 = iVar7 + local_68;
      }
      *(int *)((longlong)param_2 + 0xbc) = iVar7;
      *(int *)((longlong)param_2 + 0xb4) = iVar5;
      param_2[0x15] = lVar4;
      *(int *)((longlong)param_2 + 0x9c) = iVar3;
    }
    for (plVar1 = (longlong *)param_2[1]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1])
    {
      lVar4 = plVar1[2];
      iVar3 = 0;
      iVar5 = 0;
      iVar7 = 0;
      if (lVar4 == 0) {
LAB_1800320c6:
        *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfc;
      }
      else {
        do {
          iVar7 = iVar7 + 1;
          bVar2 = *(byte *)(lVar4 + 0x70) & 3;
          if (bVar2 == 2) {
            iVar3 = iVar3 + 1;
          }
          else if (bVar2 == 1) {
            iVar5 = iVar5 + 1;
          }
          lVar4 = *(longlong *)(lVar4 + 0x18);
        } while (lVar4 != 0);
        if ((iVar3 == 0) && (iVar5 == 0)) goto LAB_1800320c6;
        if (iVar3 < iVar7) {
          *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfd | 1;
        }
        else {
          *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfe | 2;
        }
      }
      iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      if (iVar3 != 0) {
        iVar3 = *(int *)((longlong)plVar1 + 0x9c) - local_84;
        lVar4 = plVar1[0x15] - local_78;
        iVar5 = *(int *)((longlong)plVar1 + 0xb4) - local_6c;
        iVar7 = *(int *)((longlong)plVar1 + 0xbc) - local_64;
        if (bVar6 != 2) {
          iVar3 = iVar3 + local_88;
          iVar5 = iVar5 + local_70;
          lVar4 = lVar4 + local_80;
          iVar7 = iVar7 + local_68;
        }
        *(int *)((longlong)plVar1 + 0xbc) = iVar7;
        *(int *)((longlong)plVar1 + 0xb4) = iVar5;
        plVar1[0x15] = lVar4;
        *(int *)((longlong)plVar1 + 0x9c) = iVar3;
      }
    }
  }
  else {
    *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) & 0xfc | bVar2;
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_a8);
  return;
}


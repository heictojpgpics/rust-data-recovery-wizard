// Function: FUN_1800020f0
// Address: 1800020f0
// Size: 900 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800020f0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined1 auStackY_1288 [32];
  undefined1 local_1248 [512];
  undefined1 local_1048 [4096];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x180002105;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_1288;
  if (param_2 == (longlong *)0x0) goto LAB_180002452;
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xb0) = 3;
  *(undefined4 *)(param_1 + 0xb4) = 1;
  uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
  *(undefined4 *)(param_1 + 0x100) = uVar6;
  *(longlong **)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  DAT_180086050 = (**(code **)(*param_2 + 0x28))(param_2);
  lVar10 = (**(code **)(*param_2 + 0x18))(param_2);
  param_4[4] = (longlong)param_2;
  *param_4 = (ulonglong)*(uint *)(param_1 + 0x460) * *(longlong *)(param_1 + 0x468);
  param_4[1] = *(longlong *)(param_1 + 0x470) * (ulonglong)*(uint *)(param_1 + 0x460);
  iVar8 = *(int *)(param_1 + 0x464);
  if (iVar8 == 0) {
    iVar8 = 0x400;
  }
  *(int *)((longlong)param_4 + 0x1c) = iVar8;
  param_4[2] = 0;
  *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + 0x460);
  *(bool *)(param_1 + 0x408) = *(longlong *)(param_1 + 0x478) != -1;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (((*(int *)(param_1 + 0x428) == 0xe) || (*(longlong *)(param_1 + 0x468) == 0)) ||
     (*(int *)(param_1 + 0x460) == 0)) {
    FUN_18003f9f0(local_1248);
    lVar11 = (**(code **)(*param_2 + 0x18))(param_2);
    if (0 < lVar11) {
      memset(local_1048,0,0x1000);
      (**(code **)(*param_2 + 8))(param_2,local_1048,0,1);
      bVar4 = FUN_18003f8d0(local_1248,local_1048);
      if (bVar4) {
        if (lVar10 < 1) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar10 + -1;
        }
        *(longlong *)(param_1 + 0x108) = lVar10;
        uVar5 = FUN_18003f940((longlong)local_1248);
        *(uint *)(param_1 + 0xb4) = (uint)uVar5;
        if (*(longlong *)(param_1 + 0x108) == 0) {
          uVar12 = FUN_18003f920((longlong)local_1248);
          *(undefined8 *)(param_1 + 0x108) = uVar12;
        }
        uVar5 = FUN_18003f940((longlong)local_1248);
        lVar10 = FUN_18003f990((longlong)local_1248);
        *param_4 = lVar10 * (ulonglong)uVar5;
        uVar6 = FUN_18003f9b0((longlong)local_1248);
        *(undefined4 *)((longlong)param_4 + 0x1c) = uVar6;
        uVar5 = FUN_18003f940((longlong)local_1248);
        lVar10 = FUN_18003f970((longlong)local_1248);
        param_4[1] = lVar10 * (ulonglong)uVar5;
        *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + 0xb4);
        *(undefined1 *)(param_1 + 0x408) = 1;
        FUN_18003f9e0();
        goto LAB_180002340;
      }
    }
    FUN_18003f9e0();
  }
  else {
LAB_180002340:
    uVar7 = *(uint *)(param_1 + 0xb4);
    if (uVar7 == 0) {
      uVar7 = 8;
      *(undefined4 *)(param_1 + 0xb4) = 8;
    }
    *(ulonglong *)(param_1 + 0x150) = *(ulonglong *)(param_1 + 0x108) / (ulonglong)uVar7;
    plVar1 = (longlong *)param_4[4];
    if (plVar1 != (longlong *)0x0) {
      uVar7 = *(uint *)((longlong)param_4 + 0x1c);
      lVar3 = param_4[3];
      lVar10 = param_4[2];
      lVar11 = *param_4;
      iVar8 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar8 != 0) {
        uVar9 = (**(code **)(*plVar1 + 0x28))(plVar1);
        uVar2 = (ulonglong)uVar7 / (ulonglong)uVar9;
        bVar13 = (byte)uVar2;
        if (((uVar2 & 1) == 0) && (bVar13 < 0x11)) {
          if (bVar13 == 0) {
            bVar13 = 1;
          }
          iVar8 = FUN_18001a3c0(lVar11,bVar13,plVar1,param_4 + 5,lVar10,(short)(int)lVar3);
          if (iVar8 != 0) goto LAB_180002452;
        }
      }
      lVar10 = param_4[1];
      if (lVar10 != 0) {
        uVar7 = *(uint *)((longlong)param_4 + 0x1c);
        lVar3 = param_4[3];
        lVar11 = param_4[2];
        plVar1 = (longlong *)param_4[4];
        if ((plVar1 != (longlong *)0x0) &&
           (iVar8 = (**(code **)(*plVar1 + 0x28))(plVar1), iVar8 != 0)) {
          uVar9 = (**(code **)(*plVar1 + 0x28))(plVar1);
          uVar2 = (ulonglong)uVar7 / (ulonglong)uVar9;
          bVar13 = (byte)uVar2;
          if (((uVar2 & 1) == 0) && (bVar13 < 0x11)) {
            if (bVar13 == 0) {
              bVar13 = 1;
            }
            FUN_18001a3c0(lVar10,bVar13,plVar1,param_4 + 5,lVar11,(short)(int)lVar3);
          }
        }
      }
    }
  }
LAB_180002452:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1288);
  return;
}


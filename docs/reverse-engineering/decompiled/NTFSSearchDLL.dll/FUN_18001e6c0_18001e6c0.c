// Function: FUN_18001e6c0
// Address: 18001e6c0
// Size: 1069 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001e6c0(undefined8 *param_1,void *param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  char *_Source;
  longlong lVar9;
  undefined8 uVar10;
  size_t _Count;
  undefined1 auStackY_24f8 [32];
  char local_24a8 [4];
  uint local_24a4;
  uint local_24a0 [2];
  longlong local_2498 [4];
  longlong local_2478;
  longlong local_2470 [5];
  char local_2448 [1024];
  byte local_2048 [1024];
  byte local_1c48 [7168];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18001e6de;
  local_2498[1] = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_24f8;
  if ((param_2 != (void *)0x0) && (param_1[7] != 0)) {
    if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
      if ((ushort *)param_3[9] == (ushort *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = FUN_180033aa0((ushort *)param_3[9]);
      }
    }
    else {
      plVar6 = (longlong *)(*(code *)((undefined **)*param_3)[0xf])(param_3);
    }
    if (plVar6 != (longlong *)0x0) {
      iVar4 = (**(code **)(*plVar6 + 8))(plVar6);
      (**(code **)*plVar6)(plVar6,1);
      if (iVar4 != 0) goto LAB_18001ea78;
    }
    if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
      sVar3 = *(short *)((longlong)param_3 + 0x23);
    }
    else {
      sVar3 = (*(code *)((undefined **)*param_3)[7])(param_3);
    }
    if (sVar3 != 0x10) {
      if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
        bVar2 = *(byte *)((longlong)param_3 + 0x3d);
      }
      else {
        bVar2 = (*(code *)((undefined **)*param_3)[0xd])(param_3);
      }
      if ((bVar2 & 1) != 0) {
        uVar10 = 0x2000;
        memset(local_2048,0,0x2000);
        local_2498[0] = CONCAT44(local_2498[0]._4_4_,0x400);
        local_24a8[0] = '\0';
        local_24a0[0] = 0;
        local_24a4 = 0;
        if (((param_5 == (undefined8 *)0x0) ||
            (plVar6 = (longlong *)FUN_180002670((longlong)param_5), *plVar6 == 0)) ||
           (FUN_18001e120(param_1,param_3,uVar10,param_5,local_24a8,local_2048,local_24a0,
                          &local_24a4,(int *)local_2498), cVar1 = local_24a8[0],
           local_24a8[0] == '\0')) {
          uVar7 = FUN_18001d690((longlong)param_1,param_3,param_4,'\0');
          if ((char)uVar7 == '\0') {
            FUN_18001dd80(param_1,param_2,0x400,param_3,'\0','\0',(void *)0x0,local_24a0,&local_24a4
                          ,'\0');
            if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
              lVar9 = *(longlong *)((longlong)param_3 + 0x1b);
            }
            else {
              lVar9 = (*(code *)((undefined **)*param_3)[3])(param_3);
            }
            if (lVar9 == 0) {
              FUN_18001d690((longlong)param_1,param_3,param_4,'\x01');
            }
          }
          if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
            lVar9 = *(longlong *)((longlong)param_3 + 0x1b);
          }
          else {
            lVar9 = (*(code *)((undefined **)*param_3)[3])(param_3);
          }
          if (lVar9 != 0) {
            memset(local_2448,0,0x104);
            if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
              uVar5 = (uint)*(ushort *)((longlong)param_3 + 0x19);
              ppuVar8 = CNTFSFileProperties::vftable;
            }
            else {
              uVar5 = (**(code **)*param_3)(param_3);
              ppuVar8 = (undefined **)*param_3;
            }
            if (0x103 < (int)uVar5) {
              uVar5 = 0x103;
            }
            if (ppuVar8 == CNTFSFileProperties::vftable) {
              _Source = *(char **)((longlong)param_3 + 0x11);
            }
            else {
              _Source = (char *)(*(code *)ppuVar8[2])(param_3);
            }
            _Count = (size_t)(int)uVar5;
            strncpy(local_2448,_Source,_Count);
            local_2498[0] = param_3[0xb];
            plVar6 = (longlong *)FUN_180002680(local_2498);
            local_2478 = *plVar6;
            FUN_180003be0(local_2470,local_2448);
            FUN_180020bd0(param_1 + 8,local_2498 + 2,_Count,&local_2478);
            FUN_1800025f0(local_2470);
          }
        }
        else {
          memset(local_2448,0,0x400);
          local_24a0[0] = 0;
          local_24a4 = 0;
          FUN_18001dd80(param_1,param_2,0x400,param_3,'\0','\0',local_2448,local_24a0,&local_24a4,
                        cVar1);
          if ((local_24a0[0] == 0) || (local_24a4 == 0)) {
            FUN_18001d960((longlong)param_1,param_3,local_1c48,(int)local_2498[0] + -0x3ff);
          }
          else {
            iVar4 = 0x400 - local_24a4;
            memcpy(local_2048 + iVar4,local_2448,(longlong)(int)local_24a4);
            FUN_18001d960((longlong)param_1,param_3,local_2048 + iVar4,(int)local_2498[0] - iVar4);
          }
        }
        FUN_18001e340((longlong)param_1,param_3);
        *(byte *)((longlong)param_3 + 0x72) = *(byte *)((longlong)param_3 + 0x72) | 2;
      }
    }
  }
LAB_18001ea78:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_24f8);
  return;
}


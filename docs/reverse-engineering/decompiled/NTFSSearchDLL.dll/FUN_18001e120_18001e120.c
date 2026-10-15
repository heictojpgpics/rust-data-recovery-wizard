// Function: FUN_18001e120
// Address: 18001e120
// Size: 544 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001e120(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  char *param_5,void *param_6,uint *param_7,uint *param_8,int *param_9)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStackY_20c8 [32];
  longlong *local_2078;
  char *local_2070;
  longlong *local_2068;
  undefined8 local_2060;
  undefined8 *local_2058;
  int local_2048 [256];
  undefined1 local_1c48 [7168];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18001e136;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_20c8;
  *param_5 = '\x01';
  local_2070 = param_5;
  local_2068 = param_2;
  local_2058 = param_4;
  FUN_180003ba0(param_4,&local_2078);
  iVar8 = 1;
  memset(local_1c48,0,0x1c00);
  plVar5 = FUN_180003b90(param_4,&local_2060);
  plVar7 = local_2078;
  if (local_2078 != (longlong *)*plVar5) {
    do {
      memset(local_2048,0,0x400);
      memset(param_6,0,0x400);
      *param_7 = 0;
      *param_8 = 0;
      plVar5 = (longlong *)param_1[1];
      if ((((plVar5 != (longlong *)0x0) &&
           (puVar1 = (undefined8 *)plVar7[2], puVar1 != (undefined8 *)0x0)) &&
          (iVar3 = (**(code **)(*plVar5 + 8))(plVar5,local_2048,*puVar1,2), iVar3 != 0)) &&
         (uVar6 = FUN_180041bb0(local_2048,0x400), (int)uVar6 != 0)) {
        FUN_180041a20((longlong)local_2048,0x400);
        uVar4 = FUN_180041820((longlong)local_2048);
        if ((ulonglong)uVar4 == puVar1[1]) {
          FUN_18001dd80(param_1,local_2048,0x400,local_2068,'\0','\0',param_6,param_7,param_8,
                        *local_2070);
          if (*param_8 != 0) {
            memcpy((void *)((longlong)*param_9 + (longlong)param_6),param_6,(longlong)(int)*param_8)
            ;
            *param_9 = *param_9 + *param_8;
            bVar2 = 8 < iVar8;
            iVar8 = iVar8 + 1;
            if (bVar2) break;
          }
        }
      }
      plVar7 = (longlong *)*plVar7;
      plVar5 = FUN_180003b90(local_2058,&local_2060);
    } while (plVar7 != (longlong *)*plVar5);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_20c8);
  return;
}


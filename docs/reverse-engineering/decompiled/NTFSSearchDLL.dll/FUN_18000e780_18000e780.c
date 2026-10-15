// Function: FUN_18000e780
// Address: 18000e780
// Size: 481 bytes


void FUN_18000e780(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  ulonglong local_68 [6];
  ulonglong local_38;
  
  if (0x2b < param_3) {
    local_68[1] = 0xfffffffffffffffe;
    local_38 = DAT_180086010 ^ (ulonglong)auStack_98;
    if ((param_2 != 0) && (uVar10 = *(int *)(param_2 + 0x18) + 0x18, uVar10 <= param_3 - 0x32)) {
      uVar4 = *(uint *)(param_2 + 0x1c);
      if (param_3 - uVar10 <= *(uint *)(param_2 + 0x1c)) {
        uVar4 = param_3 - uVar10;
      }
      puVar8 = (ulonglong *)((ulonglong)uVar4 + param_2);
      puVar9 = (ulonglong *)((ulonglong)uVar10 + param_2);
      if (((puVar9 != (ulonglong *)0x0) && (puVar8 != (ulonglong *)0x0)) && (puVar9 < puVar8)) {
        while ((ulonglong *)((longlong)puVar9 + 0x2aU) < puVar8) {
          uVar1 = (ushort)puVar9[1];
          if ((uVar1 == 0) || (puVar8 <= (ulonglong *)((ulonglong)uVar1 + (longlong)puVar9))) break;
          local_68[0] = 5;
          plVar5 = FUN_18000e970((ulonglong)uVar1,puVar9,(uint)uVar1,local_68);
          if (plVar5 != (longlong *)0x0) {
            if ((undefined **)*plVar5 == CNTFSFileProperties::vftable) {
              bVar3 = (byte)*(undefined2 *)((longlong)plVar5 + 0x23);
            }
            else {
              bVar3 = (*(code *)((undefined **)*plVar5)[7])(plVar5);
            }
            if ((bVar3 >> 4 & 1) == 0) {
              FUN_180022760(param_1 + 0x888,plVar5,local_68[0]);
            }
            else {
              if ((undefined **)*plVar5 == CNTFSFileProperties::vftable) {
                pvVar7 = *(void **)((longlong)plVar5 + 0x11);
              }
              else {
                pvVar7 = (void *)(*(code *)((undefined **)*plVar5)[2])(plVar5);
              }
              FUN_180003be0((longlong *)(local_68 + 2),pvVar7);
              cVar2 = FUN_1800445e0(local_68 + 2);
              FUN_1800025f0((longlong *)(local_68 + 2));
              if (cVar2 == '\0') {
                plVar6 = FUN_180031070();
                plVar6[6] = (longlong)plVar5;
                plVar6[9] = local_68[0];
                plVar6[10] = plVar5[0xb];
                plVar6[0xb] = param_4;
                FUN_18000f2b0(param_1,plVar6,'\x01','\x01','\0');
                goto LAB_18000e917;
              }
            }
            (**(code **)(*plVar5 + 0x138))(plVar5,1);
          }
LAB_18000e917:
          puVar9 = (ulonglong *)((longlong)puVar9 + (ulonglong)(ushort)puVar9[1]);
          if (puVar8 <= puVar9) break;
        }
      }
    }
    __security_check_cookie(local_38 ^ (ulonglong)auStack_98);
  }
  return;
}


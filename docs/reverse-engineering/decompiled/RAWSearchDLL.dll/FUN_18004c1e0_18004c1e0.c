// Function: FUN_18004c1e0
// Address: 18004c1e0
// Size: 585 bytes


undefined8 FUN_18004c1e0(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort local_48;
  ulonglong local_40;
  
  bVar3 = false;
  uVar10 = 0;
  local_48 = 0;
  bVar2 = false;
  puVar4 = FUN_180001350();
  uVar8 = *(ulonglong *)(puVar4 + 0x70) / 10;
  puVar4 = FUN_180042930(param_3,0);
  if (puVar4 != (undefined *)0x0) {
    local_40 = 2;
    pcVar5 = FUN_180042930(param_3,2);
    if ((pcVar5 != (char *)0x0) && (*pcVar5 == -1)) {
      uVar6 = 2;
      do {
        if ((longlong)uVar8 <= (longlong)uVar6) {
          if (!bVar2) {
            if ((longlong)uVar8 < (longlong)uVar6) {
              return 0;
            }
            goto LAB_18004c413;
          }
          break;
        }
        switch(pcVar5[1]) {
        case -0x40:
        case -0x3f:
        case -0x3e:
        case -0x3d:
        case -0x3b:
        case -0x3a:
        case -0x39:
        case -0x37:
        case -0x36:
        case -0x35:
        case -0x33:
        case -0x32:
        case -0x31:
          uVar9 = *(ushort *)(pcVar5 + 2) << 8 | *(ushort *)(pcVar5 + 2) >> 8;
          pcVar5 = FUN_180042930(param_3,uVar6 + 4);
          if (pcVar5 == (char *)0x0) {
            return 0;
          }
          if (*pcVar5 != '\b') {
            *(undefined8 *)(param_2 + 0x10) = 0;
            return 0;
          }
          local_48 = *(ushort *)(pcVar5 + 1) << 8 | *(ushort *)(pcVar5 + 1) >> 8;
          uVar10 = *(ushort *)(pcVar5 + 3) << 8 | *(ushort *)(pcVar5 + 3) >> 8;
          if (pcVar5[5] != '\x03') {
            return 0;
          }
          bVar3 = true;
          break;
        default:
          uVar9 = *(ushort *)(pcVar5 + 2) << 8 | *(ushort *)(pcVar5 + 2) >> 8;
          break;
        case -0x26:
          if (!bVar3) {
            FUN_18004c480(param_1,param_2,param_3,&local_40,(uint)uVar8);
            *(ulonglong *)(param_2 + 0x10) = local_40;
            return 1;
          }
          uVar9 = *(ushort *)(pcVar5 + 2) << 8 | *(ushort *)(pcVar5 + 2) >> 8;
          pcVar5 = FUN_180042930(param_3,uVar6 + 4);
          if (pcVar5 == (char *)0x0) {
            return 0;
          }
          if (*pcVar5 != '\x03') {
            return 0;
          }
          bVar2 = true;
          break;
        case -1:
          uVar9 = 0;
        }
        uVar6 = (ulonglong)uVar9 + 2 + uVar6;
        local_40 = uVar6;
        pcVar5 = FUN_180042930(param_3,uVar6);
        if (pcVar5 == (char *)0x0) {
          return 0;
        }
      } while (!bVar2);
      uVar1 = (uint)local_48 * (uint)uVar10 * 3;
      puVar4 = FUN_180042930(param_3,uVar6);
      if (puVar4 != (undefined *)0x0) {
        uVar7 = (uint)uVar8;
        if (uVar1 != 0) {
          uVar7 = uVar1;
        }
        FUN_18004c480(param_1,param_2,param_3,&local_40,uVar7);
        uVar6 = local_40;
LAB_18004c413:
        *(undefined4 *)(param_2 + 0x18) = 0x23;
        *(ulonglong *)(param_2 + 0x10) = uVar6;
        return 1;
      }
    }
  }
  return 0;
}


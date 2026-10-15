// Function: FUN_18002bc40
// Address: 18002bc40
// Size: 286 bytes


longlong FUN_18002bc40(longlong *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 local_28 [2];
  
  lVar6 = 0;
  plVar4 = FUN_180040a90(param_2,local_28);
  puVar1 = (undefined8 *)*plVar4;
  puVar5 = FUN_180040ad0(param_2,local_28);
  puVar5 = (undefined8 *)*puVar5;
  do {
    if (puVar5 == puVar1) {
      return lVar6;
    }
    plVar4 = (longlong *)puVar5[2];
    if (plVar4 != (longlong *)0x0) {
      lVar9 = 0;
      uVar7 = (param_4 & 0xffffffff) * *plVar4 + param_3;
      uVar10 = plVar4[2] * (param_4 & 0xffffffff) + uVar7;
      for (puVar2 = *(undefined8 **)*param_1; puVar2 != (undefined8 *)*param_1;
          puVar2 = (undefined8 *)*puVar2) {
        uVar3 = puVar2[2];
        uVar8 = (uVar3 - 1) + puVar2[3];
        if (uVar7 < uVar3) {
          if (uVar8 < uVar10) {
LAB_18002bd17:
            lVar9 = lVar9 + puVar2[3];
          }
          else if (uVar10 < uVar3) {
            if (uVar8 < uVar10) goto LAB_18002bd17;
          }
          else {
            lVar9 = lVar9 + 1 + (uVar10 - uVar3);
          }
        }
        else {
          if (uVar10 <= uVar8) {
            lVar9 = lVar9 + 1 + (uVar10 - uVar7);
            break;
          }
          if (uVar7 <= uVar8) {
            lVar9 = lVar9 + 1 + (uVar8 - uVar7);
          }
        }
      }
      lVar6 = lVar6 + lVar9;
    }
    puVar5 = (undefined8 *)*puVar5;
  } while( true );
}


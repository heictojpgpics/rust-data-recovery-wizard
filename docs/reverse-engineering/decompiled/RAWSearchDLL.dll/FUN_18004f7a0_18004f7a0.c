// Function: FUN_18004f7a0
// Address: 18004f7a0
// Size: 438 bytes


void FUN_18004f7a0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined **ppuVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (*(int *)(param_2 + 0x18) != 0x56) {
    return;
  }
  uVar7 = *(longlong *)(param_1 + 0x18) + 0x1ffU & 0xfffffffffffffe00;
  if (uVar7 < 10) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1801183c8) && (_Init_thread_header(&DAT_1801183c8), DAT_1801183c8 == -1)) {
    atexit((_func_5014 *)&DAT_180064d70);
    _Init_thread_footer(&DAT_1801183c8);
  }
  if ((DAT_1801183c0 == (longlong *)0x0) ||
     (iVar4 = (**(code **)(*DAT_1801183c0 + 0x10))(), iVar4 != 0)) {
    uVar5 = (uVar7 - 8) / (ulonglong)(longlong)(int)param_3[3];
    if (param_3[2] == uVar5) {
      piVar6 = (int *)(&DAT_180096f00 + (uVar7 - 8) % (ulonglong)(longlong)(int)param_3[3]);
    }
    else {
      lVar8 = uVar5 * 0x80 + param_3[1];
      memset(&DAT_180096f00,0,0x81000);
      iVar4 = (**(code **)(*(longlong *)*param_3 + 8))
                        ((longlong *)*param_3,&DAT_180096f00,lVar8,0x81,0);
      if (iVar4 == 0) {
        plVar1 = (longlong *)*param_3;
        ppuVar2 = (undefined **)*plVar1;
        pcVar3 = (code *)ppuVar2[1];
        if (ppuVar2 == CRawFileCellTestStorageDevice::vftable) {
          iVar4 = (int)plVar1[7];
        }
        else {
          iVar4 = (*(code *)ppuVar2[3])(plVar1);
        }
        iVar4 = (*pcVar3)(plVar1,&DAT_180096f00,lVar8,iVar4 - (int)lVar8 & 0x7f,0);
        if (iVar4 == 0) {
          piVar6 = (int *)0x0;
          goto LAB_18004f8e8;
        }
      }
      param_3[2] = (uVar7 - 8) / (ulonglong)(longlong)(int)param_3[3];
      piVar6 = (int *)(&DAT_180096f00 + (uVar7 - 8) % (ulonglong)(longlong)(int)param_3[3]);
    }
  }
  else {
    piVar6 = (int *)0x0;
  }
LAB_18004f8e8:
  if ((piVar6[1] != 0) || (*piVar6 != 0)) {
    *(ulonglong *)(param_1 + 0x18) = uVar7;
  }
  return;
}


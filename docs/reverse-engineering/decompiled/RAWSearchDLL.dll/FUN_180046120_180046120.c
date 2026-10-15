// Function: FUN_180046120
// Address: 180046120
// Size: 315 bytes


undefined8 FUN_180046120(longlong param_1,int *param_2,char param_3,undefined4 *param_4)

{
  int iVar1;
  int *_Str1;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  *param_2 = (uint)*(ushort *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0x1e) +
             *(ushort *)(param_1 + 0x1c) + 0x2e;
  FUN_18000b460(&DAT_180117fa0,"Exception:ZipInfo(%d)",0x1d9,param_4);
  if (0x103 < (ushort)(*(ushort *)(param_1 + 0x1c) - 1)) {
    return 0;
  }
  _Str1 = (int *)FUN_1800020c0((ulonglong)*(ushort *)(param_1 + 0x1c) + 1);
  if (_Str1 == (int *)0x0) {
    return 0;
  }
  memset(_Str1,0,(ulonglong)*(ushort *)(param_1 + 0x1c) + 1);
  memcpy(_Str1,(void *)(param_1 + 0x2e),(ulonglong)*(ushort *)(param_1 + 0x1c));
  iVar1 = strcmp((char *)_Str1,"word/_rels/document.xml.rels");
  if ((iVar1 != 0) || (param_3 == '\0')) {
    iVar1 = strcmp((char *)_Str1,"xl/_rels/workbook.xml.rels");
    if ((iVar1 == 0) && (param_3 != '\0')) {
      *param_4 = 0x4a;
      goto LAB_18004623c;
    }
    iVar1 = strcmp((char *)_Str1,"ppt/_rels/presentation.xml.rels");
    if ((iVar1 == 0) && (param_3 != '\0')) {
      *param_4 = 0x4b;
      goto LAB_18004623c;
    }
    if ((*(ushort *)(param_1 + 0x1c) < 5) || ((*_Str1 != DAT_18006d72c || (param_3 == '\0'))))
    goto LAB_18004623c;
  }
  *param_4 = 0x49;
LAB_18004623c:
  free(_Str1);
  return 0;
}


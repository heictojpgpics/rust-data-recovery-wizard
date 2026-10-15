// Function: FUN_180045750
// Address: 180045750
// Size: 2507 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180045750(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *****param_6,uint *param_7,undefined4 *param_8,
                  undefined8 *param_9)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *_Str1;
  ulonglong uVar5;
  undefined *puVar6;
  ushort *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 *****_Buf1;
  longlong lVar12;
  undefined8 ********ppppppppuVar14;
  ulonglong _Size;
  undefined8 *_Dst;
  undefined1 uVar15;
  LPSTR pCVar16;
  char cVar17;
  int *piVar18;
  undefined1 auStackY_1108 [32];
  undefined1 local_10d8 [8];
  undefined8 ****local_10d0;
  int local_10c8;
  int *local_10c0;
  undefined8 *******local_10b8;
  undefined8 local_10b0;
  undefined8 *******local_10a8 [2];
  ulonglong local_1098;
  ulonglong local_1090;
  undefined8 ****local_1088;
  undefined8 uStack_1080;
  size_t sStack_1078;
  ulonglong uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  CHAR local_1048;
  char acStack_1047 [4095];
  ulonglong local_48;
  undefined8 uStack_40;
  longlong lVar13;
  
  uStack_40 = 0x18004576e;
  local_10b0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_1108;
  cVar17 = (char)param_4;
  local_10b8 = (undefined8 *******)param_6;
  local_10c0 = param_2;
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (int *)0x0)) goto LAB_1800460ef;
  iVar3 = 0;
  if (*(int *)((longlong)param_1 + 0x12) != -1) {
    iVar3 = *(int *)((longlong)param_1 + 0x12);
  }
  *param_2 = iVar3 + (uint)*(ushort *)((longlong)param_1 + 0x1c) +
             *(ushort *)((longlong)param_1 + 0x1a) + 0x1e;
  *param_7 = (uint)*(ushort *)((longlong)param_1 + 6);
  if (0x103 < (ushort)(*(short *)((longlong)param_1 + 0x1a) - 1U)) goto LAB_1800460ef;
  FUN_18000b460(&DAT_180117fa0,"Exception:ZipInfo(%d)",0xbe,param_4);
  _Str1 = (int *)FUN_1800020c0((ulonglong)*(ushort *)((longlong)param_1 + 0x1a) + 1);
  if (_Str1 == (int *)0x0) goto LAB_1800460ef;
  memset(_Str1,0,(ulonglong)*(ushort *)((longlong)param_1 + 0x1a) + 1);
  memcpy(_Str1,(void *)((longlong)param_1 + 0x1e),(ulonglong)*(ushort *)((longlong)param_1 + 0x1a));
  local_10c8 = 1;
  bVar2 = true;
  iVar3 = strcmp((char *)_Str1,"mimetype");
  if (iVar3 == 0) {
    uVar5 = (ulonglong)*(ushort *)((longlong)param_1 + 0x1a);
    puVar11 = (undefined8 *)(uVar5 + 0x1e + (longlong)param_1);
    local_1088 = (undefined8 ****)*puVar11;
    uStack_1080 = puVar11[1];
    sStack_1078 = puVar11[2];
    uStack_1070 = puVar11[3];
    puVar11 = (undefined8 *)(uVar5 + 0x3e + (longlong)param_1);
    local_1068 = *puVar11;
    uStack_1060 = puVar11[1];
    uStack_1058 = CONCAT62((int6)((ulonglong)uStack_1058 >> 0x10),
                           *(undefined2 *)(uVar5 + 0x4e + (longlong)param_1));
    iVar3 = strncmp((char *)&local_1088,"application/vnd.oasis.opendocument.presentation",0x2f);
    if (iVar3 == 0) {
      *(undefined4 *)param_5 = 0x93;
    }
    else {
      iVar3 = strncmp((char *)&local_1088,"application/vnd.oasis.opendocument.spreadsheet",0x2e);
      if (iVar3 == 0) {
        *(undefined4 *)param_5 = 0x94;
      }
      else {
        iVar3 = strncmp((char *)&local_1088,"application/vnd.oasis.opendocument.text",0x27);
        if (iVar3 == 0) {
          *(undefined4 *)param_5 = 0x95;
        }
      }
    }
  }
  iVar3 = strcmp((char *)_Str1,"meta.xml");
  if (iVar3 == 0) {
    *param_8 = 1;
    uVar1 = param_1[1];
    *param_9 = *param_1;
    param_9[1] = uVar1;
    param_9[2] = param_1[2];
    *(undefined4 *)(param_9 + 3) = *(undefined4 *)(param_1 + 3);
    *(undefined2 *)((longlong)param_9 + 0x1c) = *(undefined2 *)((longlong)param_1 + 0x1c);
    if (*(int *)((longlong)param_9 + 0x16) == 0) {
      *(undefined4 *)((longlong)param_9 + 0x16) = 0x400;
    }
    if (*(int *)((longlong)param_9 + 0x12) == 0) {
      *(undefined4 *)((longlong)param_9 + 0x12) = 0x200;
    }
  }
  iVar3 = strcmp((char *)_Str1,"docProps/core.xml");
  if (iVar3 == 0) {
    *param_8 = 1;
    uVar1 = param_1[1];
    *param_9 = *param_1;
    param_9[1] = uVar1;
    param_9[2] = param_1[2];
    *(undefined4 *)(param_9 + 3) = *(undefined4 *)(param_1 + 3);
    *(undefined2 *)((longlong)param_9 + 0x1c) = *(undefined2 *)((longlong)param_1 + 0x1c);
  }
  iVar3 = strcmp((char *)_Str1,"word/_rels/document.xml.rels");
  if (iVar3 == 0) {
LAB_1800459f2:
    if (cVar17 == '\0') goto LAB_1800459fb;
LAB_180045b4e:
    *(undefined4 *)param_5 = 0x49;
LAB_180045b54:
    bVar2 = false;
  }
  else {
    iVar3 = strcmp((char *)_Str1,"word/theme/theme1.xml");
    if (iVar3 == 0) goto LAB_1800459f2;
LAB_1800459fb:
    iVar3 = strcmp((char *)_Str1,"xl/drawings/drawing1.xml");
    if (iVar3 == 0) {
LAB_180045a34:
      if (cVar17 == '\0') goto LAB_180045a44;
      *(undefined4 *)param_5 = 0x4a;
      goto LAB_180045b54;
    }
    iVar3 = strcmp((char *)_Str1,"xl/_rels/workbook.xml.rels");
    if (iVar3 == 0) goto LAB_180045a34;
    iVar3 = strcmp((char *)_Str1,"xl/worksheets/sheet.xml");
    if (iVar3 == 0) goto LAB_180045a34;
LAB_180045a44:
    iVar3 = strcmp((char *)_Str1,"ppt/_rels/presentation.xml.rels");
    if (iVar3 != 0) {
      if (cVar17 == '\0') goto LAB_180045a70;
      goto LAB_180045b37;
    }
    if (cVar17 != '\0') {
      *(undefined4 *)param_5 = 0x4b;
      goto LAB_180045b54;
    }
LAB_180045a70:
    iVar3 = (int)*param_5;
    if (iVar3 == 0x6f) goto LAB_180045b37;
    if ((iVar3 - 0x6eU & 0xfffffffd) != 0) {
      iVar4 = strcmp((char *)_Str1,"mimetype");
      if (iVar4 != 0) goto LAB_180045bac;
      FUN_18000b460(&DAT_180117fa0,"Exception:ZipInfo(%d)",0x292,param_4);
      puVar11 = (undefined8 *)
                ((ulonglong)*(ushort *)((longlong)param_1 + 0x1a) + 0x1e + (longlong)param_1);
      local_1088 = (undefined8 ****)*puVar11;
      uStack_1080 = puVar11[1];
      sStack_1078 = puVar11[2];
      uStack_1070 = puVar11[3];
      puVar11 = (undefined8 *)
                ((ulonglong)*(ushort *)((longlong)param_1 + 0x1a) + 0x3e + (longlong)param_1);
      local_1068 = *puVar11;
      uStack_1060 = puVar11[1];
      uStack_1058 = puVar11[2];
      uStack_1050 = puVar11[3];
      FUN_18000b460(&DAT_180117fa0,"Exception:ZipInfo(%d)",0x296,param_4);
      pcVar8 = FUN_180016fc0((char *)&local_1088,0x40,"application/epub+",0x11);
      if (pcVar8 == (char *)0x0) goto LAB_180045b37;
LAB_180045bee:
      *(undefined4 *)param_5 = 0x72;
      goto LAB_180045b54;
    }
LAB_180045bac:
    if ((iVar3 - 0x6eU & 0xfffffffd) != 0) {
      iVar3 = strncmp((char *)_Str1,"OEBPS/Text/chapter",0x12);
      if (iVar3 != 0) {
        iVar3 = strncmp((char *)_Str1,"OPS/chapter1.html",0x11);
        if (iVar3 != 0) goto LAB_180045b37;
      }
      goto LAB_180045bee;
    }
LAB_180045b37:
    if (((4 < *(ushort *)((longlong)param_1 + 0x1a)) && (*_Str1 == DAT_18006d72c)) &&
       (cVar17 != '\0')) goto LAB_180045b4e;
  }
  puVar6 = FUN_180001350();
  if (cVar17 == '\0') {
    iVar3 = strcmp((char *)_Str1,"Index/ObjectContainer.iwa");
    if (iVar3 == 0) {
      *(undefined4 *)param_5 = 0x6e;
      local_10d0 = &local_1088;
      puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,L"PAGES");
      FUN_18000ed00((longlong)(puVar6 + 0x60),puVar7);
    }
    else {
      if ((int)*param_5 - 0x6eU < 2) {
LAB_180045c47:
        iVar3 = strcmp((char *)_Str1,"Index/Slide.iwa");
        if (iVar3 != 0) {
          iVar3 = strncmp((char *)_Str1,"Index/Slide-",0xc);
          if (iVar3 != 0) {
            iVar3 = strcmp((char *)_Str1,"Index/Slide1.iwa");
            if (iVar3 != 0) {
              iVar3 = strcmp((char *)_Str1,"Index/Slide2.iwa");
              if (iVar3 != 0) {
                iVar3 = strcmp((char *)_Str1,"Index/Slide3.iwa");
                if (iVar3 != 0) {
                  iVar3 = strcmp((char *)_Str1,"index.apxl");
                  if (iVar3 != 0) {
                    iVar3 = strncmp((char *)_Str1,"Index/MasterSlide-",0x12);
                    if (iVar3 != 0) {
                      if (1 < (int)*param_5 - 0x6eU) {
                        iVar3 = strcmp((char *)_Str1,"Index/Tables/Tile.iwa");
                        if (iVar3 == 0) {
                          *(undefined4 *)param_5 = 0x70;
                          local_10d0 = &local_1088;
                          puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,L"NUMBERS");
                          FUN_18000ed00((longlong)(puVar6 + 0x60),puVar7);
                        }
                        iVar3 = strcmp((char *)_Str1,"Index/Tables/DataList.iwa");
                        if ((iVar3 == 0) && ((int)*param_5 != 0x70)) {
                          *(undefined4 *)param_5 = 0x6e;
                          local_10d0 = &local_1088;
                          puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,L"PAGES");
                          FUN_18000ed00((longlong)(puVar6 + 0x60),puVar7);
                        }
                      }
                      goto LAB_180045dba;
                    }
                  }
                }
              }
            }
          }
        }
        *(undefined4 *)param_5 = 0x6f;
        local_10d0 = &local_1088;
        puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,&DAT_18006d8b0);
      }
      else {
        pcVar8 = FUN_180016fc0((char *)_Str1,(uint)*(ushort *)((longlong)param_1 + 0x1a),"numbers/",
                               8);
        if (pcVar8 == (char *)0x0) goto LAB_180045c47;
        *(undefined4 *)param_5 = 0x70;
        local_10d0 = &local_1088;
        puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,L"NUMBERS");
      }
      FUN_18000ed00((longlong)(puVar6 + 0x60),puVar7);
      bVar2 = false;
    }
  }
LAB_180045dba:
  piVar18 = _Str1;
  iVar3 = FUN_180045110((longlong)param_1,(longlong)local_10c0,param_5,_Str1,(longlong)param_1);
  puVar6 = puVar6 + 0x60;
  if (iVar3 != 0) {
    bVar2 = false;
    *(undefined4 *)param_5 = 0x86;
    local_10d0 = &local_1088;
    puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,L"XMIND");
    FUN_18000ed00((longlong)puVar6,puVar7);
  }
  FUN_180001780((longlong)&local_1088);
  puVar9 = (undefined1 *)FUN_1800016b0(&local_1088);
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined8 *)(puVar9 + 0x18) = 0xf;
  local_10d8[0] = 0;
  FUN_180001300(puVar9,local_10d8);
  FUN_1800071e0((longlong)&local_1088,"xsd/MindManagerApplication.xsd",0x1e);
  sVar10 = 0xffffffffffffffff;
  do {
    sVar10 = sVar10 + 1;
  } while (*(char *)((longlong)_Str1 + sVar10) != '\0');
  _Buf1 = &local_1088;
  if (0xf < uStack_1070) {
    _Buf1 = (undefined8 *****)local_1088;
  }
  if (sStack_1078 == sVar10) {
    iVar3 = memcmp(_Buf1,_Str1,sStack_1078);
    if (iVar3 != 0) goto LAB_180045e8c;
  }
  else {
LAB_180045e8c:
    local_10c8 = 0;
  }
  FUN_180001630((longlong *)&local_1088);
  if (local_10c8 != 0) {
    bVar2 = false;
    *(undefined4 *)param_5 = 0x87;
    local_10d0 = &local_1088;
    puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,L"MMAP");
    FUN_18000ed00((longlong)puVar6,puVar7);
  }
  iVar3 = strcmp((char *)_Str1,"rels/_rels.xml");
  if (iVar3 == 0) {
LAB_180045ef8:
    bVar2 = false;
    *(undefined4 *)param_5 = 0x8c;
    local_10d0 = &local_1088;
    puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,L"EDDX");
    FUN_18000ed00((longlong)puVar6,puVar7);
  }
  else {
    iVar3 = strcmp((char *)_Str1,"rels/page1_rels.xml");
    if (iVar3 == 0) goto LAB_180045ef8;
  }
  iVar3 = strcmp((char *)_Str1,"ProjectFolder/Anon/");
  if (iVar3 == 0) {
LAB_180045f4c:
    bVar2 = false;
    *(undefined4 *)param_5 = 0x8d;
    local_10d0 = &local_1088;
    puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,&DAT_18006d940);
    FUN_18000ed00((longlong)puVar6,puVar7);
  }
  else {
    iVar3 = strcmp((char *)_Str1,"ProjectFolder/project_info.json");
    if (iVar3 == 0) goto LAB_180045f4c;
  }
  iVar3 = strcmp((char *)_Str1,"MediaPool/Master/MpFolder.xml");
  if (iVar3 == 0) {
    *(undefined4 *)param_5 = 0x91;
    local_10d0 = &local_1088;
    puVar7 = (ushort *)FUN_18000f4b0((longlong)&local_1088,&DAT_180067c88);
    FUN_18000ed00((longlong)puVar6,puVar7);
  }
  else if (bVar2) {
    FUN_18000b460(&DAT_180117fa0,"Exception:ZipInfo(%d)",0x1b5,piVar18);
    memset(&local_1048,0,0x1000);
    local_10c0 = (int *)0x1000;
    lVar12 = -1;
    do {
      lVar13 = lVar12;
      lVar12 = lVar13 + 1;
    } while (*(char *)((longlong)_Str1 + lVar12) != '\0');
    pCVar16 = &local_1048;
    FUN_180030400((LPCSTR)_Str1,lVar13 + 2,pCVar16,(size_t *)&local_10c0);
    uVar15 = SUB81(pCVar16,0);
    FUN_180001780((longlong)local_10a8);
    puVar11 = (undefined8 *)FUN_1800016b0(local_10a8);
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    local_10d8[0] = 0;
    FUN_180001300((undefined1 *)puVar11,local_10d8);
    uVar5 = 0xffffffffffffffff;
    do {
      _Size = uVar5 + 1;
      pcVar8 = acStack_1047 + uVar5;
      uVar5 = _Size;
    } while (*pcVar8 != '\0');
    if ((ulonglong)puVar11[3] < _Size) {
      FUN_1800086f0((longlong)local_10a8,_Size,uVar15,&local_1048);
    }
    else {
      _Dst = puVar11;
      if (0xf < (ulonglong)puVar11[3]) {
        _Dst = (undefined8 *)*puVar11;
      }
      puVar11[2] = _Size;
      memmove(_Dst,&local_1048,_Size);
      local_10d8[0] = 0;
      FUN_180001300((undefined1 *)(_Size + (longlong)_Dst),local_10d8);
    }
    if ((undefined8 ********)local_10b8 != local_10a8) {
      ppppppppuVar14 = local_10a8;
      if (0xf < local_1090) {
        ppppppppuVar14 = (undefined8 ********)local_10a8[0];
      }
      FUN_1800071e0((longlong)local_10b8,ppppppppuVar14,local_1098);
    }
    FUN_180001630((longlong *)local_10a8);
  }
  free(_Str1);
LAB_1800460ef:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1108);
  return;
}


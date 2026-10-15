// Function: FUN_1800467b0
// Address: 1800467b0
// Size: 1392 bytes


void FUN_1800467b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint *_Str1;
  uint *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint *puVar10;
  longlong local_328 [7];
  undefined8 *local_2f0;
  
  FUN_18000b460(&DAT_180118010,"Exception:OFFICE AnalyzeTag(%d)",0x107,param_4);
  *(undefined1 *)(param_2 + 0x100) = 0;
  pcVar1 = *(char **)(param_1 + 0x110);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 != '<')) || (pcVar9 = pcVar1, pcVar1[1] != '?')) {
    pcVar9 = pcVar1 + 3;
    if (pcVar9 == (char *)0x0) {
      return;
    }
    if (*pcVar9 != '<') {
      return;
    }
    if (pcVar1[4] != '?') {
      return;
    }
  }
  FUN_18005b380(local_328);
  iVar2 = FUN_18005b790(local_328,pcVar9);
  puVar7 = local_2f0;
  if (iVar2 != 0) {
    FUN_18005b540(local_328);
    return;
  }
  while( true ) {
    if (puVar7 == (undefined8 *)0x0) {
      FUN_18005b540(local_328);
      return;
    }
    lVar3 = (**(code **)*puVar7)(puVar7);
    if (lVar3 != 0) break;
    puVar7 = (undefined8 *)puVar7[10];
  }
  puVar10 = (uint *)0x0;
  for (puVar7 = local_2f0; puVar8 = local_2f0, puVar7 != (undefined8 *)0x0;
      puVar7 = (undefined8 *)puVar7[10]) {
    puVar4 = (uint *)(**(code **)*puVar7)(puVar7);
    if (puVar4 != (uint *)0x0) {
      puVar6 = puVar4;
      lVar3 = (**(code **)(*(longlong *)puVar4 + 0x30))();
      puVar5 = puVar10;
      if (lVar3 == 0) {
        puVar6 = puVar4 + 6;
        puVar5 = (uint *)FUN_1800591e0(puVar6);
      }
      if ((puVar5 == (uint *)"cp:coreProperties") ||
         (iVar2 = strncmp((char *)puVar5,"cp:coreProperties",0x7fffffff), puVar6 = puVar5,
         iVar2 == 0)) {
        puVar8 = local_2f0;
        if (puVar4 != (uint *)0x0) {
          FUN_180046d30(puVar6,(longlong)puVar4,"dc:title",(undefined8 ****)(param_2 + 0x20),1,0);
          puVar7 = local_2f0;
          goto LAB_180046910;
        }
        break;
      }
    }
  }
  do {
    puVar7 = local_2f0;
    if (puVar8 == (undefined8 *)0x0) goto LAB_180046910;
    puVar4 = (uint *)(**(code **)*puVar8)(puVar8);
    if (puVar4 != (uint *)0x0) {
      puVar6 = puVar4;
      lVar3 = (**(code **)(*(longlong *)puVar4 + 0x30))();
      puVar5 = puVar10;
      if (lVar3 == 0) {
        puVar6 = puVar4 + 6;
        puVar5 = (uint *)FUN_1800591e0(puVar6);
      }
      if ((puVar5 == (uint *)"office:document-meta") ||
         (iVar2 = strncmp((char *)puVar5,"office:document-meta",0x7fffffff), puVar6 = puVar5,
         iVar2 == 0)) {
        puVar7 = local_2f0;
        if (puVar4 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar4 + 0xe);
          break;
        }
        goto LAB_180046910;
      }
    }
    puVar8 = (undefined8 *)puVar8[10];
  } while( true );
LAB_1800469c8:
  if (puVar4 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
LAB_180046a1d:
    *(undefined1 *)(param_2 + 0x100) = 1;
    FUN_180046d30(puVar6,(longlong)puVar5,"dc:title",(undefined8 ****)(param_2 + 0x20),1,0);
    FUN_180046d30(puVar6,(longlong)puVar5,"dc:creator",(undefined8 ****)(param_2 + 0x60),1,0);
    if (*(longlong *)(param_2 + 0x70) == 0) {
      FUN_180046d30(puVar6,(longlong)puVar5,"meta:initial-creator",(undefined8 ****)(param_2 + 0x60)
                    ,0,0);
    }
    FUN_180046d30(puVar6,(longlong)puVar5,"meta:creation-date",(undefined8 ****)(param_2 + 0xa0),0,1
                 );
    FUN_180046d30(puVar6,(longlong)puVar5,"dc:date",(undefined8 ****)(param_2 + 0xc0),0,1);
    FUN_18005b540(local_328);
    return;
  }
  _Str1 = puVar4;
  puVar5 = (uint *)(*(code *)**(undefined8 **)puVar4)();
  if (puVar5 != (uint *)0x0) {
    puVar6 = puVar5;
    lVar3 = (**(code **)(*(longlong *)puVar5 + 0x30))();
    _Str1 = puVar10;
    if (lVar3 == 0) {
      puVar6 = puVar5 + 6;
      _Str1 = (uint *)FUN_1800591e0(puVar6);
    }
    if ((_Str1 == (uint *)"office:meta") ||
       (iVar2 = strncmp((char *)_Str1,"office:meta",0x7fffffff), puVar6 = _Str1, iVar2 == 0))
    goto LAB_180046a1d;
  }
  puVar4 = *(uint **)(puVar4 + 0x14);
  puVar6 = _Str1;
  goto LAB_1800469c8;
LAB_180046910:
  puVar8 = local_2f0;
  if (puVar7 == (undefined8 *)0x0) goto LAB_180046b50;
  puVar4 = (uint *)(**(code **)*puVar7)(puVar7);
  if (puVar4 != (uint *)0x0) {
    puVar6 = puVar4;
    lVar3 = (**(code **)(*(longlong *)puVar4 + 0x30))();
    puVar5 = puVar10;
    if (lVar3 == 0) {
      puVar6 = puVar4 + 6;
      puVar5 = (uint *)FUN_1800591e0(puVar6);
    }
    if ((puVar5 == (uint *)"cp:coreProperties") ||
       (iVar2 = strncmp((char *)puVar5,"cp:coreProperties",0x7fffffff), puVar6 = puVar5, iVar2 == 0)
       ) {
      puVar8 = local_2f0;
      if (puVar4 != (uint *)0x0) {
        FUN_180046d30(puVar6,(longlong)puVar4,"dc:creator",(undefined8 ****)(param_2 + 0x60),1,0);
        puVar8 = local_2f0;
      }
      goto LAB_180046b50;
    }
  }
  puVar7 = (undefined8 *)puVar7[10];
  goto LAB_180046910;
LAB_180046b50:
  puVar7 = local_2f0;
  if (puVar8 == (undefined8 *)0x0) goto LAB_180046bd6;
  puVar4 = (uint *)(**(code **)*puVar8)(puVar8);
  if (puVar4 != (uint *)0x0) {
    puVar6 = puVar4;
    lVar3 = (**(code **)(*(longlong *)puVar4 + 0x30))();
    puVar5 = puVar10;
    if (lVar3 == 0) {
      puVar6 = puVar4 + 6;
      puVar5 = (uint *)FUN_1800591e0(puVar6);
    }
    if ((puVar5 == (uint *)"cp:coreProperties") ||
       (iVar2 = strncmp((char *)puVar5,"cp:coreProperties",0x7fffffff), puVar6 = puVar5, iVar2 == 0)
       ) {
      puVar7 = local_2f0;
      if (puVar4 != (uint *)0x0) {
        FUN_180046d30(puVar6,(longlong)puVar4,"cp:lastModifiedBy",(undefined8 ****)(param_2 + 0x80),
                      1,0);
        puVar7 = local_2f0;
      }
      goto LAB_180046bd6;
    }
  }
  puVar8 = (undefined8 *)puVar8[10];
  goto LAB_180046b50;
LAB_180046bd6:
  puVar8 = local_2f0;
  if (puVar7 == (undefined8 *)0x0) goto LAB_180046c60;
  puVar4 = (uint *)(**(code **)*puVar7)(puVar7);
  if (puVar4 != (uint *)0x0) {
    puVar6 = puVar4;
    lVar3 = (**(code **)(*(longlong *)puVar4 + 0x30))();
    puVar5 = puVar10;
    if (lVar3 == 0) {
      puVar6 = puVar4 + 6;
      puVar5 = (uint *)FUN_1800591e0(puVar6);
    }
    if ((puVar5 == (uint *)"cp:coreProperties") ||
       (iVar2 = strncmp((char *)puVar5,"cp:coreProperties",0x7fffffff), puVar6 = puVar5, iVar2 == 0)
       ) {
      puVar8 = local_2f0;
      if (puVar4 != (uint *)0x0) {
        FUN_180046d30(puVar6,(longlong)puVar4,"dcterms:created",(undefined8 ****)(param_2 + 0xa0),0,
                      1);
        puVar8 = local_2f0;
      }
      goto LAB_180046c60;
    }
  }
  puVar7 = (undefined8 *)puVar7[10];
  goto LAB_180046bd6;
LAB_180046c60:
  if (puVar8 == (undefined8 *)0x0) {
LAB_180046ce2:
    FUN_18005b540(local_328);
    return;
  }
  puVar4 = (uint *)(**(code **)*puVar8)(puVar8);
  if (puVar4 != (uint *)0x0) {
    puVar6 = puVar4;
    lVar3 = (**(code **)(*(longlong *)puVar4 + 0x30))();
    puVar5 = puVar10;
    if (lVar3 == 0) {
      puVar6 = puVar4 + 6;
      puVar5 = (uint *)FUN_1800591e0(puVar6);
    }
    if ((puVar5 == (uint *)"cp:coreProperties") ||
       (iVar2 = strncmp((char *)puVar5,"cp:coreProperties",0x7fffffff), puVar6 = puVar5, iVar2 == 0)
       ) {
      if (puVar4 != (uint *)0x0) {
        FUN_180046d30(puVar6,(longlong)puVar4,"dcterms:modified",(undefined8 ****)(param_2 + 0xc0),0
                      ,1);
      }
      goto LAB_180046ce2;
    }
  }
  puVar8 = (undefined8 *)puVar8[10];
  goto LAB_180046c60;
}


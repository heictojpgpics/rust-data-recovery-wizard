// Function: FUN_18000f3f0
// Address: 18000f3f0
// Size: 870 bytes


void FUN_18000f3f0(longlong param_1,undefined8 *param_2,size_t param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  size_t sVar2;
  longlong *plVar3;
  void *_Memory;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined8 *_Memory_00;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  size_t *psVar12;
  ulonglong uVar13;
  size_t _Size;
  undefined1 auStackY_c8 [32];
  int local_68 [14];
  ulonglong local_30;
  
  local_30 = DAT_180086010 ^ (ulonglong)auStackY_c8;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_180010850(param_1);
    psVar12 = *(size_t **)(param_1 + 0x7f8);
    if (psVar12 != *(size_t **)(param_1 + 0x800)) {
      do {
        puVar9 = (undefined8 *)0x0;
        if (8 < (longlong)psVar12[2]) {
          if ((*(longlong **)(param_1 + 0x100) != (longlong *)0x0) &&
             (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x88))(), cVar4 != '\0'))
          break;
          puVar8 = (undefined1 *)FUN_18002be40(0x78);
          _Memory_00 = puVar9;
          if (puVar8 != (undefined1 *)0x0) {
            _Memory_00 = (undefined8 *)FUN_18001b7b0(puVar8);
          }
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
          uVar13 = (psVar12[2] + 8) * (longlong)iVar5;
          sVar2 = *psVar12;
          plVar3 = *(longlong **)(param_1 + 0xb8);
          if (plVar3 != (longlong *)0x0) {
            *(undefined1 *)_Memory_00 = 0;
            _Memory_00[1] = 0;
            _Memory_00[2] = 0;
            _Memory_00[6] = 0;
            *(undefined4 *)(_Memory_00 + 3) = 0;
            *(undefined1 *)(_Memory_00 + 5) = 0;
            _Memory_00[0xb] = 0;
            FUN_180011140(_Memory_00 + 0xc);
            if ((longlong *)_Memory_00[4] != (longlong *)0x0) {
              param_2 = (undefined8 *)0x1;
              (**(code **)(*(longlong *)_Memory_00[4] + 0x138))();
              _Memory_00[4] = 0;
            }
            _Memory = (void *)_Memory_00[7];
            if (_Memory != (void *)0x0) {
              FUN_180029390((longlong)_Memory);
              param_2 = (undefined8 *)0xe8;
              free(_Memory);
              _Memory_00[7] = 0;
            }
            _Memory_00[1] = plVar3;
            local_68[0] = 1;
            local_68[1] = 2;
            local_68[2] = 4;
            local_68[3] = 8;
            local_68[4] = 0x10;
            local_68[5] = 0x20;
            local_68[6] = 0x40;
            local_68[7] = 0x80;
            local_68[8] = 0x100;
            local_68[9] = 0x200;
            local_68[10] = 0x400;
            local_68[0xb] = 0x800;
            local_68[0xc] = 0x1000;
            do {
              if (local_68[(longlong)puVar9] == 8) {
                *(undefined4 *)(_Memory_00 + 3) = 8;
                lVar10 = (**(code **)(*plVar3 + 0x18))(plVar3);
                param_2 = (undefined8 *)(lVar10 % (longlong)(ulonglong)*(uint *)(_Memory_00 + 3));
                _Memory_00[0xe] = lVar10 / (longlong)(ulonglong)*(uint *)(_Memory_00 + 3);
                if ((longlong)uVar13 < 0x6400001) {
                  _Size = uVar13 & 0xffffffff;
                  if ((longlong)uVar13 < 0x200000) {
                    _Size = 0x200000;
                  }
                  uVar6 = (**(code **)(*(longlong *)_Memory_00[1] + 0x28))();
                  if (uVar6 != 0) {
                    puVar9 = (undefined8 *)FUN_18002be40(_Size);
                    memset(puVar9,0xff,_Size);
                    param_4 = (undefined8 *)(_Size / uVar6);
                    param_2 = puVar9;
                    param_3 = sVar2;
                    iVar5 = (**(code **)(*(longlong *)_Memory_00[1] + 8))();
                    if (iVar5 == 0) {
                      free(puVar9);
                    }
                    else {
                      _Memory_00[0xb] = sVar2;
                      puVar11 = (undefined4 *)FUN_18002be40(0xe8);
                      if (puVar11 == (undefined4 *)0x0) {
                        puVar11 = (undefined4 *)0x0;
                      }
                      else {
                        plVar3 = (longlong *)_Memory_00[1];
                        uVar1 = *(undefined1 *)((longlong)_Memory_00 + 0x29);
                        uVar7 = (**(code **)(*plVar3 + 0x28))(plVar3);
                        param_4 = (undefined8 *)(ulonglong)*(uint *)(_Memory_00 + 3);
                        param_2 = puVar9;
                        puVar11 = FUN_1800290c0(puVar11,puVar9,(uint)_Size,*(uint *)(_Memory_00 + 3)
                                                ,uVar7,uVar1,plVar3);
                        param_3 = _Size;
                      }
                      _Memory_00[7] = puVar11;
                      free(puVar9);
                      cVar4 = FUN_18001d460((longlong)_Memory_00);
                      if (cVar4 != '\0') {
                        param_4 = (undefined8 *)psVar12[4];
                        param_3 = *psVar12;
                        param_2 = _Memory_00;
                        FUN_18000ecb0(param_1,_Memory_00,param_3,param_4);
                      }
                    }
                  }
                }
                break;
              }
              puVar9 = (undefined8 *)((longlong)puVar9 + 1);
            } while ((longlong)puVar9 < 0xd);
          }
          if (_Memory_00 != (undefined8 *)0x0) {
            FUN_18001b8a0((undefined1 *)_Memory_00,param_2,param_3,param_4);
            param_2 = (undefined8 *)0x78;
            free(_Memory_00);
          }
        }
        psVar12 = psVar12 + 5;
      } while (psVar12 != *(size_t **)(param_1 + 0x800));
    }
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_c8);
  return;
}


// Function: FUN_180003440
// Address: 180003440
// Size: 580 bytes


undefined4 FUN_180003440(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined4 local_res10;
  
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x19,2);
  if (*(short *)(param_1 + 0x19) != 0) {
    (**(code **)(*param_2 + 0x78))
              (param_2,*(undefined8 *)(param_1 + 0x11),*(short *)(param_1 + 0x19));
  }
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1b,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x23,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x25,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x2d,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x35,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x3d,1);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x40,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 100,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x60,4);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x78))(param_2,&local_res8,4);
  }
  else {
    local_res10 = 1;
    (**(code **)(*param_2 + 0x78))();
    lVar1 = *(longlong *)(param_1 + 0x48);
    iVar5 = 0;
    pcVar2 = *(char **)(lVar1 + 8);
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 != '\0') {
        lVar4 = 0;
        do {
          iVar5 = ((byte)pcVar2[lVar4] >> 4) + 1 + ((byte)pcVar2[lVar4] & 0xf) + iVar5;
          lVar4 = (longlong)iVar5;
        } while (pcVar2[lVar4] != '\0');
      }
      iVar5 = iVar5 + 1;
    }
    local_res8 = CONCAT44(local_res8._4_4_,iVar5);
    (**(code **)(*param_2 + 0x78))(param_2,&local_res8,4);
    (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar1 + 8),local_res8 & 0xffffffff);
    (**(code **)(*param_2 + 0x78))(param_2,lVar1,2);
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  local_res8 = 0;
  if (plVar3 != (longlong *)0x0) {
    local_res8 = plVar3[1];
    (**(code **)(*param_2 + 0x78))(param_2,&local_res8,8);
    plVar6 = *(longlong **)*plVar3;
    if (plVar6 != (longlong *)*plVar3) {
      do {
        lVar1 = plVar6[2];
        (**(code **)(*param_2 + 0x78))(param_2,lVar1,8);
        (**(code **)(*param_2 + 0x78))(param_2,lVar1 + 8,8);
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)*plVar3);
    }
    return 1;
  }
  (**(code **)(*param_2 + 0x78))();
  return 1;
}


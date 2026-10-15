// Function: FUN_180012100
// Address: 180012100
// Size: 124 bytes


undefined8 FUN_180012100(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 local_res20;
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  local_res20._2_1_ = (undefined1)((uint)uVar4 >> 0x10);
  local_res20._1_1_ = (undefined1)((uint)uVar4 >> 8);
  uVar5 = CONCAT11((char)uVar4,local_res20._1_1_);
  uVar2 = *(undefined2 *)(param_2 + 0x18);
  uVar3 = *(undefined2 *)(param_2 + 0x1a);
  bVar1 = *(byte *)(param_2 + 0x20);
  local_res20 = CONCAT22(uVar5,CONCAT11(local_res20._2_1_,(char)((uint)uVar4 >> 0x18)));
  *(undefined4 *)(param_3 + 0x18) = 0x66;
  iVar6 = (uint)bVar1 * (uint)CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8)) *
          (uint)CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  *(ulonglong *)(param_3 + 0x10) =
       (ulonglong)(uint)(local_res20 + 8 + ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3));
  return 1;
}


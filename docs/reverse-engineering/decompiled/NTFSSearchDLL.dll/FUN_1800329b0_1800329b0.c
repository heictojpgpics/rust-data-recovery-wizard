// Function: FUN_1800329b0
// Address: 1800329b0
// Size: 582 bytes


longlong * FUN_1800329b0(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
     (plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0xf8))(),
     plVar1 != (longlong *)0x0)) {
    switch(*(undefined4 *)(param_1 + 0x1d4)) {
    case 0:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT12");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 1:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT16");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 2:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT32");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 3:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18004c758);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 4:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180072c70);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 5:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180072c88);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 6:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180072c90);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 7:
      (**(code **)(*plVar1 + 8))(plVar1,"EXFAT");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 8:
      (**(code **)(*plVar1 + 8))(plVar1,"HFSPLUS");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 9:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180072c80);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 10:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180072c94);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    }
  }
  return (longlong *)0x0;
}


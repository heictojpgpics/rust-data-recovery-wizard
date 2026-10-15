// Function: FUN_18002a7b0
// Address: 18002a7b0
// Size: 161 bytes


void FUN_18002a7b0(longlong param_1,char *param_2,uint param_3,longlong param_4,longlong *param_5)

{
  short sVar1;
  char *pcVar2;
  
  if ((param_2 != (char *)0x0) &&
     (pcVar2 = FUN_18002a060(param_2,0x400,&DAT_180093738,4), pcVar2 != (char *)0x0)) {
    sVar1 = *(short *)(pcVar2 + 6);
    if ((sVar1 == 0x4949) || (sVar1 == 0x4d4d)) {
      *(bool *)(param_1 + 300) = sVar1 == 0x4949;
      FUN_18002d600(param_1,(short *)(pcVar2 + 6),param_3,param_4,*param_5,param_5[1]);
    }
  }
  return;
}


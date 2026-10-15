// Function: FUN_18003f8d0
// Address: 18003f8d0
// Size: 67 bytes


bool FUN_18003f8d0(void *param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = FUN_18003f6d0(param_2);
  if (cVar1 != '\0') {
    memcpy(param_1,param_2,0x200);
  }
  return cVar1 != '\0';
}


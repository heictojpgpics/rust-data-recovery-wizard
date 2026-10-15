// Function: FUN_180044da0
// Address: 180044da0
// Size: 178 bytes


bool FUN_180044da0(longlong *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  FUN_180040cb0(local_20);
  local_38 = 0;
  uVar2 = FUN_180044bd0(param_1,(longlong)local_20,1,&local_38);
  bVar3 = (int)uVar2 != 0;
  if (bVar3) {
    local_30 = FUN_18003fd70(local_20);
    uVar1 = FUN_18002e2b0(local_38,(int)local_30);
    *param_2 = uVar1;
    ~_String_alloc<>(local_20);
  }
  else {
    *param_2 = 0;
    ~_String_alloc<>(local_20);
  }
  return bVar3;
}


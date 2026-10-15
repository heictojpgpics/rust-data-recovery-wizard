// Function: FUN_180031c50
// Address: 180031c50
// Size: 166 bytes


undefined8 FUN_180031c50(longlong param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  void *_Dst;
  byte *pbVar2;
  size_t sVar3;
  byte *pbVar4;
  
  _Dst = *(void **)(param_1 + 0x140);
  sVar3 = (size_t)param_3;
  if (_Dst == (void *)0x0) {
    *(size_t *)(param_1 + 0x148) = sVar3;
    _Dst = (void *)FUN_1800020c0(sVar3);
    *(void **)(param_1 + 0x140) = _Dst;
  }
  memset(_Dst,0,*(size_t *)(param_1 + 0x148));
  pbVar4 = param_2 + (sVar3 - (longlong)param_4);
  do {
    if (pbVar4 <= param_2) {
      return 0;
    }
    if (*pbVar4 != 0) {
      pbVar2 = (byte *)((ulonglong)*pbVar4 + *(longlong *)(param_1 + 0x140));
      bVar1 = *pbVar2;
      if (0x3f < bVar1) {
        return 1;
      }
      *pbVar2 = bVar1 + 1;
    }
    pbVar4 = pbVar4 + -1;
  } while( true );
}


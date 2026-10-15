// Function: FUN_18003fe40
// Address: 18003fe40
// Size: 209 bytes


longlong FUN_18003fe40(char *param_1)

{
  char cVar1;
  byte bVar2;
  int local_24;
  int local_20 [2];
  char *local_18;
  
  local_24 = 0;
  local_20[1] = 8;
  for (local_18 = param_1; *local_18 != '\0';
      local_18 = local_18 +
                 (int)(bVar2 + 1 + ((int)((int)cVar1 + ((int)cVar1 >> 0x1f & 0xfU)) >> 4 & 0xffU)))
  {
    cVar1 = *local_18;
    bVar2 = *local_18 >> 0x1f & 0xf;
    bVar2 = (*local_18 + bVar2 & 0xf) - bVar2;
    if (4 < bVar2) break;
    local_20[0] = 0;
    memcpy(local_20,local_18 + 1,(ulonglong)bVar2);
    local_24 = local_24 + local_20[0];
  }
  return (longlong)local_24;
}


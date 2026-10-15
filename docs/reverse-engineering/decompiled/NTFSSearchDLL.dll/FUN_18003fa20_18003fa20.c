// Function: FUN_18003fa20
// Address: 18003fa20
// Size: 807 bytes


/* WARNING: Removing unreachable block (ram,0x00018003fb36) */
/* WARNING: Removing unreachable block (ram,0x00018003fc40) */
/* WARNING: Removing unreachable block (ram,0x00018003fc5a) */
/* WARNING: Removing unreachable block (ram,0x00018003fbf7) */
/* WARNING: Removing unreachable block (ram,0x00018003fc11) */
/* WARNING: Removing unreachable block (ram,0x00018003fc3e) */
/* WARNING: Removing unreachable block (ram,0x00018003fbab) */
/* WARNING: Removing unreachable block (ram,0x00018003fbc5) */
/* WARNING: Removing unreachable block (ram,0x00018003fbf2) */
/* WARNING: Removing unreachable block (ram,0x00018003fb9c) */
/* WARNING: Removing unreachable block (ram,0x00018003fb6e) */
/* WARNING: Removing unreachable block (ram,0x00018003fb79) */
/* WARNING: Removing unreachable block (ram,0x00018003fb97) */
/* WARNING: Removing unreachable block (ram,0x00018003fb5e) */
/* WARNING: Removing unreachable block (ram,0x00018003fb4e) */
/* WARNING: Removing unreachable block (ram,0x00018003fcb7) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_18003fa20(longlong param_1,int param_2,longlong param_3)

{
  byte bVar1;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined8 *local_10;
  
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  local_18 = 0;
  for (local_38 = 0; (local_38 < param_2 && (*(char *)(param_1 + local_38) != '\0'));
      local_38 = (uint)bVar1 + local_38 + 1) {
    bVar1 = *(byte *)(param_1 + local_38) & 0xf;
    local_20 = 0;
    local_40 = 0;
    memcpy(&local_20,(void *)(param_1 + 1 + (longlong)local_38),(ulonglong)bVar1);
    memcpy(&local_40,(void *)(param_1 + local_38 + 1 + (ulonglong)bVar1),0);
    local_34 = 0xffffffff;
    local_30 = (undefined8 *)thunk_FUN_18002be40(0x18);
    *local_30 = 0xffffffffffffffff;
    local_30[1] = local_18;
    local_30[2] = local_20;
    local_10 = local_30;
    FUN_18002cd90(param_3,&local_30);
    local_28 = local_28 + local_40;
    local_18 = local_18 + local_20;
  }
  return;
}


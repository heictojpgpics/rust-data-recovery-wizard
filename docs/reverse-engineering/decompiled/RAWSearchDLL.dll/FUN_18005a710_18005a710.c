// Function: FUN_18005a710
// Address: 18005a710
// Size: 117 bytes


undefined8 * FUN_18005a710(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    param_2 = param_1[1];
  }
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 == 0) {
    pcVar2 = (char *)FUN_1800591e0((uint *)(param_1 + 3));
  }
  else {
    pcVar2 = (char *)0x0;
  }
  puVar3 = FUN_18005c870(param_2,param_2 + 0x288);
  pcVar4 = "xml version=\"1.0\" encoding=\"UTF-8\"";
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
  }
  FUN_180059060((uint *)(puVar3 + 3),pcVar4);
  return puVar3;
}


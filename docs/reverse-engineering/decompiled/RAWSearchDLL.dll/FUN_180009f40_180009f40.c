// Function: FUN_180009f40
// Address: 180009f40
// Size: 247 bytes


_Facet_base * FUN_180009f40(locale *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  _Locimp *p_Var3;
  _Facet_base *p_Var4;
  _Lockit local_res8 [8];
  _Facet_base *local_res10;
  _Facet_base *local_res18;
  undefined8 local_30 [3];
  
  std::_Lockit::_Lockit(local_res8,0);
  local_res10 = DAT_180096a90;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    p_Var4 = *(_Facet_base **)(*(longlong *)(lVar1 + 0x10) + _Var2 * 8);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_18000a006;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_180009fb3:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_18000a006;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      p_Var4 = *(_Facet_base **)(*(longlong *)(p_Var3 + 0x10) + _Var2 * 8);
      goto LAB_180009fb3;
    }
  }
  p_Var4 = local_res10;
  if (local_res10 == (_Facet_base *)0x0) {
    _Var2 = std::codecvt<char,char,struct__Mbstatet>::_Getcat((facet **)&local_res10,param_1);
    p_Var4 = local_res10;
    if (_Var2 == 0xffffffffffffffff) {
      FUN_1800022b0(local_30);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_30,(ThrowInfo *)&DAT_18008c4b0);
    }
    local_res18 = local_res10;
    std::_Facet_Register(local_res10);
    (**(code **)(*(longlong *)p_Var4 + 8))(p_Var4);
    DAT_180096a90 = local_res10;
    local_res18 = (_Facet_base *)0x0;
    p_Var4 = local_res10;
  }
LAB_18000a006:
  std::_Lockit::~_Lockit(local_res8);
  return p_Var4;
}


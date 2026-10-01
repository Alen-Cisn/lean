// Lean compiler output
// Module: Minicalc.Evaluator
// Imports: public import Init public meta import Init public import Minicalc.Expr
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
static lean_once_cell_t lp_minicalc_Minicalc_hasNoDivByZero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_minicalc_Minicalc_hasNoDivByZero___closed__0;
LEAN_EXPORT uint8_t lp_minicalc_Minicalc_hasNoDivByZero(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_hasNoDivByZero___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_eval(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_eval___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_safeEval(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_safeEval___boxed(lean_object*);
static lean_object* _init_lp_minicalc_Minicalc_hasNoDivByZero___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT uint8_t lp_minicalc_Minicalc_hasNoDivByZero(lean_object* v_x_3_){
_start:
{
lean_object* v_e1_5_; lean_object* v_e2_6_; 
switch(lean_obj_tag(v_x_3_))
{
case 0:
{
uint8_t v___x_9_; 
v___x_9_ = 1;
return v___x_9_;
}
case 1:
{
lean_object* v_a_10_; 
v_a_10_ = lean_ctor_get(v_x_3_, 0);
v_x_3_ = v_a_10_;
goto _start;
}
case 5:
{
lean_object* v_a_12_; lean_object* v_a_13_; uint8_t v___y_15_; uint8_t v___x_20_; 
v_a_12_ = lean_ctor_get(v_x_3_, 0);
v_a_13_ = lean_ctor_get(v_x_3_, 1);
v___x_20_ = lp_minicalc_Minicalc_hasNoDivByZero(v_a_12_);
if (v___x_20_ == 0)
{
v___y_15_ = v___x_20_;
goto v___jp_14_;
}
else
{
uint8_t v___x_21_; 
v___x_21_ = lp_minicalc_Minicalc_hasNoDivByZero(v_a_13_);
v___y_15_ = v___x_21_;
goto v___jp_14_;
}
v___jp_14_:
{
if (v___y_15_ == 0)
{
return v___y_15_;
}
else
{
if (lean_obj_tag(v_a_13_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_17_; uint8_t v___x_18_; 
v_a_16_ = lean_ctor_get(v_a_13_, 0);
v___x_17_ = lean_obj_once(&lp_minicalc_Minicalc_hasNoDivByZero___closed__0, &lp_minicalc_Minicalc_hasNoDivByZero___closed__0_once, _init_lp_minicalc_Minicalc_hasNoDivByZero___closed__0);
v___x_18_ = lean_int_dec_eq(v_a_16_, v___x_17_);
if (v___x_18_ == 0)
{
return v___y_15_;
}
else
{
uint8_t v___x_19_; 
v___x_19_ = 0;
return v___x_19_;
}
}
else
{
return v___y_15_;
}
}
}
}
default: 
{
lean_object* v_a_22_; lean_object* v_a_23_; 
v_a_22_ = lean_ctor_get(v_x_3_, 0);
v_a_23_ = lean_ctor_get(v_x_3_, 1);
v_e1_5_ = v_a_22_;
v_e2_6_ = v_a_23_;
goto v___jp_4_;
}
}
v___jp_4_:
{
uint8_t v___x_7_; 
v___x_7_ = lp_minicalc_Minicalc_hasNoDivByZero(v_e1_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
v_x_3_ = v_e2_6_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_hasNoDivByZero___boxed(lean_object* v_x_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = lp_minicalc_Minicalc_hasNoDivByZero(v_x_24_);
lean_dec_ref(v_x_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_eval(lean_object* v_x_27_){
_start:
{
switch(lean_obj_tag(v_x_27_))
{
case 0:
{
lean_object* v_a_28_; 
v_a_28_ = lean_ctor_get(v_x_27_, 0);
lean_inc(v_a_28_);
return v_a_28_;
}
case 1:
{
lean_object* v_a_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v_a_29_ = lean_ctor_get(v_x_27_, 0);
v___x_30_ = lp_minicalc_Minicalc_eval(v_a_29_);
v___x_31_ = lean_int_neg(v___x_30_);
lean_dec(v___x_30_);
return v___x_31_;
}
case 2:
{
lean_object* v_a_32_; lean_object* v_a_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_a_32_ = lean_ctor_get(v_x_27_, 0);
v_a_33_ = lean_ctor_get(v_x_27_, 1);
v___x_34_ = lp_minicalc_Minicalc_eval(v_a_32_);
v___x_35_ = lp_minicalc_Minicalc_eval(v_a_33_);
v___x_36_ = lean_int_add(v___x_34_, v___x_35_);
lean_dec(v___x_35_);
lean_dec(v___x_34_);
return v___x_36_;
}
case 3:
{
lean_object* v_a_37_; lean_object* v_a_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v_a_37_ = lean_ctor_get(v_x_27_, 0);
v_a_38_ = lean_ctor_get(v_x_27_, 1);
v___x_39_ = lp_minicalc_Minicalc_eval(v_a_37_);
v___x_40_ = lp_minicalc_Minicalc_eval(v_a_38_);
v___x_41_ = lean_int_sub(v___x_39_, v___x_40_);
lean_dec(v___x_40_);
lean_dec(v___x_39_);
return v___x_41_;
}
case 4:
{
lean_object* v_a_42_; lean_object* v_a_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v_a_42_ = lean_ctor_get(v_x_27_, 0);
v_a_43_ = lean_ctor_get(v_x_27_, 1);
v___x_44_ = lp_minicalc_Minicalc_eval(v_a_42_);
v___x_45_ = lp_minicalc_Minicalc_eval(v_a_43_);
v___x_46_ = lean_int_mul(v___x_44_, v___x_45_);
lean_dec(v___x_45_);
lean_dec(v___x_44_);
return v___x_46_;
}
default: 
{
lean_object* v_a_47_; lean_object* v_a_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_a_47_ = lean_ctor_get(v_x_27_, 0);
v_a_48_ = lean_ctor_get(v_x_27_, 1);
v___x_49_ = lp_minicalc_Minicalc_eval(v_a_47_);
v___x_50_ = lp_minicalc_Minicalc_eval(v_a_48_);
v___x_51_ = lean_int_ediv(v___x_49_, v___x_50_);
lean_dec(v___x_50_);
lean_dec(v___x_49_);
return v___x_51_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_eval___boxed(lean_object* v_x_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = lp_minicalc_Minicalc_eval(v_x_52_);
lean_dec_ref(v_x_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_safeEval(lean_object* v_e_54_){
_start:
{
uint8_t v___x_55_; 
v___x_55_ = lp_minicalc_Minicalc_hasNoDivByZero(v_e_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; 
v___x_56_ = lean_box(0);
return v___x_56_;
}
else
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lp_minicalc_Minicalc_eval(v_e_54_);
v___x_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_safeEval___boxed(lean_object* v_e_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = lp_minicalc_Minicalc_safeEval(v_e_59_);
lean_dec_ref(v_e_59_);
return v_res_60_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_minicalc_Minicalc_Expr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_minicalc_Minicalc_Evaluator(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_minicalc_Minicalc_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

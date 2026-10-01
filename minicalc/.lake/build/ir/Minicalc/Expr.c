// Lean compiler output
// Module: Minicalc.Expr
// Imports: public import Init public meta import Init
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
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_neg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_neg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_add_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_add_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_sub_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_sub_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_mul_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_mul_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_div_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_div_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_minicalc_Minicalc_Expr_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "(-"};
static const lean_object* lp_minicalc_Minicalc_Expr_toString___closed__0 = (const lean_object*)&lp_minicalc_Minicalc_Expr_toString___closed__0_value;
static const lean_string_object lp_minicalc_Minicalc_Expr_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_minicalc_Minicalc_Expr_toString___closed__1 = (const lean_object*)&lp_minicalc_Minicalc_Expr_toString___closed__1_value;
static const lean_string_object lp_minicalc_Minicalc_Expr_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_minicalc_Minicalc_Expr_toString___closed__2 = (const lean_object*)&lp_minicalc_Minicalc_Expr_toString___closed__2_value;
static const lean_string_object lp_minicalc_Minicalc_Expr_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* lp_minicalc_Minicalc_Expr_toString___closed__3 = (const lean_object*)&lp_minicalc_Minicalc_Expr_toString___closed__3_value;
static const lean_string_object lp_minicalc_Minicalc_Expr_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " - "};
static const lean_object* lp_minicalc_Minicalc_Expr_toString___closed__4 = (const lean_object*)&lp_minicalc_Minicalc_Expr_toString___closed__4_value;
static const lean_string_object lp_minicalc_Minicalc_Expr_toString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " * "};
static const lean_object* lp_minicalc_Minicalc_Expr_toString___closed__5 = (const lean_object*)&lp_minicalc_Minicalc_Expr_toString___closed__5_value;
static const lean_string_object lp_minicalc_Minicalc_Expr_toString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " / "};
static const lean_object* lp_minicalc_Minicalc_Expr_toString___closed__6 = (const lean_object*)&lp_minicalc_Minicalc_Expr_toString___closed__6_value;
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_toString(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_toString___boxed(lean_object*);
static const lean_closure_object lp_minicalc_Minicalc_Expr_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_minicalc_Minicalc_Expr_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_minicalc_Minicalc_Expr_instToString___closed__0 = (const lean_object*)&lp_minicalc_Minicalc_Expr_instToString___closed__0_value;
LEAN_EXPORT const lean_object* lp_minicalc_Minicalc_Expr_instToString = (const lean_object*)&lp_minicalc_Minicalc_Expr_instToString___closed__0_value;
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
default: 
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorIdx___boxed(lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_minicalc_Minicalc_Expr_ctorIdx(v_x_8_);
lean_dec_ref(v_x_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorElim___redArg(lean_object* v_t_10_, lean_object* v_k_11_){
_start:
{
switch(lean_obj_tag(v_t_10_))
{
case 0:
{
lean_object* v_a_12_; lean_object* v___x_13_; 
v_a_12_ = lean_ctor_get(v_t_10_, 0);
lean_inc(v_a_12_);
lean_dec_ref_known(v_t_10_, 1);
v___x_13_ = lean_apply_1(v_k_11_, v_a_12_);
return v___x_13_;
}
case 1:
{
lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_14_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_a_14_);
lean_dec_ref_known(v_t_10_, 1);
v___x_15_ = lean_apply_1(v_k_11_, v_a_14_);
return v___x_15_;
}
default: 
{
lean_object* v_a_16_; lean_object* v_a_17_; lean_object* v___x_18_; 
v_a_16_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_a_16_);
v_a_17_ = lean_ctor_get(v_t_10_, 1);
lean_inc_ref(v_a_17_);
lean_dec_ref(v_t_10_);
v___x_18_ = lean_apply_2(v_k_11_, v_a_16_, v_a_17_);
return v___x_18_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorElim(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_21_, v_k_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_ctorElim___boxed(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lp_minicalc_Minicalc_Expr_ctorElim(v_motive_25_, v_ctorIdx_26_, v_t_27_, v_h_28_, v_k_29_);
lean_dec(v_ctorIdx_26_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_num_elim___redArg(lean_object* v_t_31_, lean_object* v_num_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_31_, v_num_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_num_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_num_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_35_, v_num_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_neg_elim___redArg(lean_object* v_t_39_, lean_object* v_neg_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_39_, v_neg_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_neg_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_neg_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_43_, v_neg_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_add_elim___redArg(lean_object* v_t_47_, lean_object* v_add_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_47_, v_add_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_add_elim(lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_add_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_51_, v_add_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_sub_elim___redArg(lean_object* v_t_55_, lean_object* v_sub_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_55_, v_sub_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_sub_elim(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_sub_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_59_, v_sub_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_mul_elim___redArg(lean_object* v_t_63_, lean_object* v_mul_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_63_, v_mul_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_mul_elim(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_mul_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_67_, v_mul_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_div_elim___redArg(lean_object* v_t_71_, lean_object* v_div_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_71_, v_div_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_div_elim(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_div_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lp_minicalc_Minicalc_Expr_ctorElim___redArg(v_t_75_, v_div_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_toString(lean_object* v_x_86_){
_start:
{
switch(lean_obj_tag(v_x_86_))
{
case 0:
{
lean_object* v_a_87_; lean_object* v___x_88_; 
v_a_87_ = lean_ctor_get(v_x_86_, 0);
v___x_88_ = l_Int_repr(v_a_87_);
return v___x_88_;
}
case 1:
{
lean_object* v_a_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_a_89_ = lean_ctor_get(v_x_86_, 0);
v___x_90_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__0));
v___x_91_ = lp_minicalc_Minicalc_Expr_toString(v_a_89_);
v___x_92_ = lean_string_append(v___x_90_, v___x_91_);
lean_dec_ref(v___x_91_);
v___x_93_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__1));
v___x_94_ = lean_string_append(v___x_92_, v___x_93_);
return v___x_94_;
}
case 2:
{
lean_object* v_a_95_; lean_object* v_a_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v_a_95_ = lean_ctor_get(v_x_86_, 0);
v_a_96_ = lean_ctor_get(v_x_86_, 1);
v___x_97_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__2));
v___x_98_ = lp_minicalc_Minicalc_Expr_toString(v_a_95_);
v___x_99_ = lean_string_append(v___x_97_, v___x_98_);
lean_dec_ref(v___x_98_);
v___x_100_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__3));
v___x_101_ = lean_string_append(v___x_99_, v___x_100_);
v___x_102_ = lp_minicalc_Minicalc_Expr_toString(v_a_96_);
v___x_103_ = lean_string_append(v___x_101_, v___x_102_);
lean_dec_ref(v___x_102_);
v___x_104_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__1));
v___x_105_ = lean_string_append(v___x_103_, v___x_104_);
return v___x_105_;
}
case 3:
{
lean_object* v_a_106_; lean_object* v_a_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_a_106_ = lean_ctor_get(v_x_86_, 0);
v_a_107_ = lean_ctor_get(v_x_86_, 1);
v___x_108_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__2));
v___x_109_ = lp_minicalc_Minicalc_Expr_toString(v_a_106_);
v___x_110_ = lean_string_append(v___x_108_, v___x_109_);
lean_dec_ref(v___x_109_);
v___x_111_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__4));
v___x_112_ = lean_string_append(v___x_110_, v___x_111_);
v___x_113_ = lp_minicalc_Minicalc_Expr_toString(v_a_107_);
v___x_114_ = lean_string_append(v___x_112_, v___x_113_);
lean_dec_ref(v___x_113_);
v___x_115_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__1));
v___x_116_ = lean_string_append(v___x_114_, v___x_115_);
return v___x_116_;
}
case 4:
{
lean_object* v_a_117_; lean_object* v_a_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_a_117_ = lean_ctor_get(v_x_86_, 0);
v_a_118_ = lean_ctor_get(v_x_86_, 1);
v___x_119_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__2));
v___x_120_ = lp_minicalc_Minicalc_Expr_toString(v_a_117_);
v___x_121_ = lean_string_append(v___x_119_, v___x_120_);
lean_dec_ref(v___x_120_);
v___x_122_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__5));
v___x_123_ = lean_string_append(v___x_121_, v___x_122_);
v___x_124_ = lp_minicalc_Minicalc_Expr_toString(v_a_118_);
v___x_125_ = lean_string_append(v___x_123_, v___x_124_);
lean_dec_ref(v___x_124_);
v___x_126_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__1));
v___x_127_ = lean_string_append(v___x_125_, v___x_126_);
return v___x_127_;
}
default: 
{
lean_object* v_a_128_; lean_object* v_a_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v_a_128_ = lean_ctor_get(v_x_86_, 0);
v_a_129_ = lean_ctor_get(v_x_86_, 1);
v___x_130_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__2));
v___x_131_ = lp_minicalc_Minicalc_Expr_toString(v_a_128_);
v___x_132_ = lean_string_append(v___x_130_, v___x_131_);
lean_dec_ref(v___x_131_);
v___x_133_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__6));
v___x_134_ = lean_string_append(v___x_132_, v___x_133_);
v___x_135_ = lp_minicalc_Minicalc_Expr_toString(v_a_129_);
v___x_136_ = lean_string_append(v___x_134_, v___x_135_);
lean_dec_ref(v___x_135_);
v___x_137_ = ((lean_object*)(lp_minicalc_Minicalc_Expr_toString___closed__1));
v___x_138_ = lean_string_append(v___x_136_, v___x_137_);
return v___x_138_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_Expr_toString___boxed(lean_object* v_x_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = lp_minicalc_Minicalc_Expr_toString(v_x_139_);
lean_dec_ref(v_x_139_);
return v_res_140_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_minicalc_Minicalc_Expr(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Minicalc.CLI
// Imports: public import Init public meta import Init public import Minicalc.Expr public import Minicalc.Parser public import Minicalc.Evaluator public import Minicalc.Optimizer
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
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lp_minicalc_Minicalc_parseExpr(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_minicalc_Minicalc_safeEval(lean_object*);
lean_object* lp_minicalc_Minicalc_optimize(lean_object*);
lean_object* lp_minicalc_Minicalc_Expr_toString(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_get_stdin();
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseLine(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseLine___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_IO_print___at___00IO_println___at___00Minicalc_runLine_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_IO_print___at___00IO_println___at___00Minicalc_runLine_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_minicalc_Minicalc_runLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "error: could not parse input"};
static const lean_object* lp_minicalc_Minicalc_runLine___closed__0 = (const lean_object*)&lp_minicalc_Minicalc_runLine___closed__0_value;
static const lean_string_object lp_minicalc_Minicalc_runLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "error: division by zero"};
static const lean_object* lp_minicalc_Minicalc_runLine___closed__1 = (const lean_object*)&lp_minicalc_Minicalc_runLine___closed__1_value;
static const lean_string_object lp_minicalc_Minicalc_runLine___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " = "};
static const lean_object* lp_minicalc_Minicalc_runLine___closed__2 = (const lean_object*)&lp_minicalc_Minicalc_runLine___closed__2_value;
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_runLine(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_runLine___boxed(lean_object*, lean_object*);
static const lean_string_object lp_minicalc_Minicalc_repl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quit"};
static const lean_object* lp_minicalc_Minicalc_repl___closed__0 = (const lean_object*)&lp_minicalc_Minicalc_repl___closed__0_value;
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_repl();
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_repl___boxed(lean_object*);
static const lean_string_object lp_minicalc_Minicalc_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 41, .m_data = "MiniCalc — a formally verified calculator"};
static const lean_object* lp_minicalc_Minicalc_main___closed__0 = (const lean_object*)&lp_minicalc_Minicalc_main___closed__0_value;
static const lean_string_object lp_minicalc_Minicalc_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "usage: minicalc \"<expression>\"   (e.g. minicalc \"1 + 2 * 3\")"};
static const lean_object* lp_minicalc_Minicalc_main___closed__1 = (const lean_object*)&lp_minicalc_Minicalc_main___closed__1_value;
static const lean_string_object lp_minicalc_Minicalc_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "type an expression per line, or 'quit' to exit:"};
static const lean_object* lp_minicalc_Minicalc_main___closed__2 = (const lean_object*)&lp_minicalc_Minicalc_main___closed__2_value;
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_main___boxed__const__1;
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_main(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseLine(lean_object* v_s_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_unsigned_to_nat(0u);
v___x_3_ = lp_minicalc_Minicalc_parseExpr(v_s_1_, v___x_2_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v___x_4_; 
v___x_4_ = lean_box(0);
return v___x_4_;
}
else
{
lean_object* v_val_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_17_; 
v_val_5_ = lean_ctor_get(v___x_3_, 0);
v_isSharedCheck_17_ = !lean_is_exclusive(v___x_3_);
if (v_isSharedCheck_17_ == 0)
{
v___x_7_ = v___x_3_;
v_isShared_8_ = v_isSharedCheck_17_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_val_5_);
lean_dec(v___x_3_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_17_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; uint8_t v___x_12_; 
v_fst_9_ = lean_ctor_get(v_val_5_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v_val_5_, 1);
lean_inc(v_snd_10_);
lean_dec(v_val_5_);
v___x_11_ = lean_string_length(v_s_1_);
v___x_12_ = lean_nat_dec_eq(v_snd_10_, v___x_11_);
lean_dec(v_snd_10_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; 
lean_dec(v_fst_9_);
lean_del_object(v___x_7_);
v___x_13_ = lean_box(0);
return v___x_13_;
}
else
{
lean_object* v___x_15_; 
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 0, v_fst_9_);
v___x_15_ = v___x_7_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_fst_9_);
v___x_15_ = v_reuseFailAlloc_16_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
return v___x_15_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseLine___boxed(lean_object* v_s_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = lp_minicalc_Minicalc_parseLine(v_s_18_);
lean_dec_ref(v_s_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_IO_print___at___00IO_println___at___00Minicalc_runLine_spec__0_spec__0(lean_object* v_s_20_){
_start:
{
lean_object* v___x_22_; lean_object* v_putStr_23_; lean_object* v___x_24_; 
v___x_22_ = lean_get_stdout();
v_putStr_23_ = lean_ctor_get(v___x_22_, 4);
lean_inc_ref(v_putStr_23_);
lean_dec_ref(v___x_22_);
v___x_24_ = lean_apply_2(v_putStr_23_, v_s_20_, lean_box(0));
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_IO_print___at___00IO_println___at___00Minicalc_runLine_spec__0_spec__0___boxed(lean_object* v_s_25_, lean_object* v_a_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = lp_minicalc_IO_print___at___00IO_println___at___00Minicalc_runLine_spec__0_spec__0(v_s_25_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(lean_object* v_s_28_){
_start:
{
uint32_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = 10;
v___x_31_ = lean_string_push(v_s_28_, v___x_30_);
v___x_32_ = lp_minicalc_IO_print___at___00IO_println___at___00Minicalc_runLine_spec__0_spec__0(v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0___boxed(lean_object* v_s_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(v_s_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_runLine(lean_object* v_s_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lp_minicalc_Minicalc_parseLine(v_s_39_);
if (lean_obj_tag(v___x_41_) == 0)
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(lp_minicalc_Minicalc_runLine___closed__0));
v___x_43_ = lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(v___x_42_);
return v___x_43_;
}
else
{
lean_object* v_val_44_; lean_object* v___x_45_; 
v_val_44_ = lean_ctor_get(v___x_41_, 0);
lean_inc(v_val_44_);
lean_dec_ref_known(v___x_41_, 1);
v___x_45_ = lp_minicalc_Minicalc_safeEval(v_val_44_);
if (lean_obj_tag(v___x_45_) == 0)
{
lean_object* v___x_46_; lean_object* v___x_47_; 
lean_dec(v_val_44_);
v___x_46_ = ((lean_object*)(lp_minicalc_Minicalc_runLine___closed__1));
v___x_47_ = lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(v___x_46_);
return v___x_47_;
}
else
{
lean_object* v_val_48_; lean_object* v_opt_49_; lean_object* v___x_50_; lean_object* v___x_51_; uint8_t v___x_52_; 
v_val_48_ = lean_ctor_get(v___x_45_, 0);
lean_inc(v_val_48_);
lean_dec_ref_known(v___x_45_, 1);
lean_inc(v_val_44_);
v_opt_49_ = lp_minicalc_Minicalc_optimize(v_val_44_);
v___x_50_ = lp_minicalc_Minicalc_Expr_toString(v_opt_49_);
lean_dec_ref(v_opt_49_);
v___x_51_ = lp_minicalc_Minicalc_Expr_toString(v_val_44_);
lean_dec(v_val_44_);
v___x_52_ = lean_string_dec_eq(v___x_50_, v___x_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_53_ = ((lean_object*)(lp_minicalc_Minicalc_runLine___closed__2));
v___x_54_ = lean_string_append(v___x_51_, v___x_53_);
v___x_55_ = lean_string_append(v___x_54_, v___x_50_);
lean_dec_ref(v___x_50_);
v___x_56_ = lean_string_append(v___x_55_, v___x_53_);
v___x_57_ = l_Int_repr(v_val_48_);
lean_dec(v_val_48_);
v___x_58_ = lean_string_append(v___x_56_, v___x_57_);
lean_dec_ref(v___x_57_);
v___x_59_ = lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(v___x_58_);
return v___x_59_;
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec_ref(v___x_50_);
v___x_60_ = ((lean_object*)(lp_minicalc_Minicalc_runLine___closed__2));
v___x_61_ = lean_string_append(v___x_51_, v___x_60_);
v___x_62_ = l_Int_repr(v_val_48_);
lean_dec(v_val_48_);
v___x_63_ = lean_string_append(v___x_61_, v___x_62_);
lean_dec_ref(v___x_62_);
v___x_64_ = lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(v___x_63_);
return v___x_64_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_runLine___boxed(lean_object* v_s_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_minicalc_Minicalc_runLine(v_s_65_);
lean_dec_ref(v_s_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_repl(){
_start:
{
lean_object* v___x_70_; lean_object* v_getLine_71_; lean_object* v___x_72_; 
v___x_70_ = lean_get_stdin();
v_getLine_71_ = lean_ctor_get(v___x_70_, 3);
lean_inc_ref(v_getLine_71_);
lean_dec_ref(v___x_70_);
v___x_72_ = lean_apply_1(v_getLine_71_, lean_box(0));
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_96_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_96_ == 0)
{
v___x_75_ = v___x_72_;
v_isShared_76_ = v_isSharedCheck_96_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_72_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_96_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = lean_string_utf8_byte_size(v_a_73_);
lean_inc(v_a_73_);
v___x_79_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_79_, 0, v_a_73_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_78_);
v___x_80_ = l_String_Slice_trimAscii(v___x_79_);
v___x_81_ = l_String_Slice_toString(v___x_80_);
lean_dec_ref(v___x_80_);
v___x_82_ = ((lean_object*)(lp_minicalc_Minicalc_repl___closed__0));
v___x_83_ = lean_string_dec_eq(v___x_81_, v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_84_ = lean_string_utf8_byte_size(v___x_81_);
lean_dec_ref(v___x_81_);
v___x_85_ = lean_nat_dec_eq(v___x_84_, v___x_77_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
lean_del_object(v___x_75_);
v___x_86_ = lp_minicalc_Minicalc_runLine(v_a_73_);
lean_dec(v_a_73_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_dec_ref_known(v___x_86_, 1);
goto _start;
}
else
{
return v___x_86_;
}
}
else
{
lean_object* v___x_88_; lean_object* v___x_90_; 
lean_dec(v_a_73_);
v___x_88_ = lean_box(0);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_88_);
v___x_90_ = v___x_75_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
else
{
lean_object* v___x_92_; lean_object* v___x_94_; 
lean_dec_ref(v___x_81_);
lean_dec(v_a_73_);
v___x_92_ = lean_box(0);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_92_);
v___x_94_ = v___x_75_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
v_a_97_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_72_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_72_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_repl___boxed(lean_object* v_a_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = lp_minicalc_Minicalc_repl();
return v_res_106_;
}
}
static lean_object* _init_lp_minicalc_Minicalc_main___boxed__const__1(void){
_start:
{
uint32_t v___x_110_; lean_object* v___x_111_; 
v___x_110_ = 0;
v___x_111_ = lean_box_uint32(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_main(lean_object* v_args_112_){
_start:
{
if (lean_obj_tag(v_args_112_) == 1)
{
lean_object* v_tail_163_; 
v_tail_163_ = lean_ctor_get(v_args_112_, 1);
if (lean_obj_tag(v_tail_163_) == 0)
{
lean_object* v_head_164_; lean_object* v___x_165_; 
v_head_164_ = lean_ctor_get(v_args_112_, 0);
v___x_165_ = lp_minicalc_Minicalc_runLine(v_head_164_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_173_; 
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; 
v_unused_174_ = lean_ctor_get(v___x_165_, 0);
lean_dec(v_unused_174_);
v___x_167_ = v___x_165_;
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
else
{
lean_dec(v___x_165_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = lp_minicalc_Minicalc_main___boxed__const__1;
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_169_);
v___x_171_ = v___x_167_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
else
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_182_; 
v_a_175_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_182_ == 0)
{
v___x_177_ = v___x_165_;
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_165_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_178_ == 0)
{
v___x_180_ = v___x_177_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_a_175_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
}
else
{
goto v___jp_114_;
}
}
else
{
goto v___jp_114_;
}
v___jp_114_:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = ((lean_object*)(lp_minicalc_Minicalc_main___closed__0));
v___x_116_ = lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(v___x_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec_ref_known(v___x_116_, 1);
v___x_117_ = ((lean_object*)(lp_minicalc_Minicalc_main___closed__1));
v___x_118_ = lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(v___x_117_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; 
lean_dec_ref_known(v___x_118_, 1);
v___x_119_ = ((lean_object*)(lp_minicalc_Minicalc_main___closed__2));
v___x_120_ = lp_minicalc_IO_println___at___00Minicalc_runLine_spec__0(v___x_119_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v___x_121_; 
lean_dec_ref_known(v___x_120_, 1);
v___x_121_ = lp_minicalc_Minicalc_repl();
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_129_; 
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v___x_121_, 0);
lean_dec(v_unused_130_);
v___x_123_ = v___x_121_;
v_isShared_124_ = v_isSharedCheck_129_;
goto v_resetjp_122_;
}
else
{
lean_dec(v___x_121_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_129_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_127_; 
v___x_125_ = lp_minicalc_Minicalc_main___boxed__const__1;
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 0, v___x_125_);
v___x_127_ = v___x_123_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
v_a_131_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_121_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_121_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
v_a_139_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_120_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_120_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
v_a_147_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_118_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_118_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
else
{
lean_object* v_a_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_162_; 
v_a_155_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_162_ == 0)
{
v___x_157_ = v___x_116_;
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_a_155_);
lean_dec(v___x_116_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_158_ == 0)
{
v___x_160_ = v___x_157_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_a_155_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_main___boxed(lean_object* v_args_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = lp_minicalc_Minicalc_main(v_args_183_);
lean_dec(v_args_183_);
return v_res_185_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_minicalc_Minicalc_Expr(uint8_t builtin);
lean_object* initialize_minicalc_Minicalc_Parser(uint8_t builtin);
lean_object* initialize_minicalc_Minicalc_Evaluator(uint8_t builtin);
lean_object* initialize_minicalc_Minicalc_Optimizer(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_minicalc_Minicalc_CLI(uint8_t builtin) {
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
res = initialize_minicalc_Minicalc_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_minicalc_Minicalc_Evaluator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_minicalc_Minicalc_Optimizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_minicalc_Minicalc_main___boxed__const__1 = _init_lp_minicalc_Minicalc_main___boxed__const__1();
lean_mark_persistent(lp_minicalc_Minicalc_main___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

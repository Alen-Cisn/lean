// Lean compiler output
// Module: Minicalc.Parser
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_skipWs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_skipWs___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_minicalc_Minicalc_parseDigits___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_minicalc_Minicalc_parseDigits___closed__0;
static lean_once_cell_t lp_minicalc_Minicalc_parseDigits___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_minicalc_Minicalc_parseDigits___closed__1;
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseDigits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseDigits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseFactor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseTermTail(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseTerm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseExprTail(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseExpr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseTerm___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseExprTail___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseTermTail___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseFactor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parse(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parse___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_skipWs(lean_object* v_s_1_, lean_object* v_i_2_){
_start:
{
uint8_t v___y_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_9_ = lean_string_length(v_s_1_);
v___x_10_ = lean_nat_dec_lt(v_i_2_, v___x_9_);
if (v___x_10_ == 0)
{
return v_i_2_;
}
else
{
uint32_t v___x_11_; uint8_t v___y_13_; uint32_t v___x_18_; uint8_t v___x_19_; 
v___x_11_ = lean_string_utf8_get(v_s_1_, v_i_2_);
v___x_18_ = 32;
v___x_19_ = lean_uint32_dec_eq(v___x_11_, v___x_18_);
if (v___x_19_ == 0)
{
uint32_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 9;
v___x_21_ = lean_uint32_dec_eq(v___x_11_, v___x_20_);
v___y_13_ = v___x_21_;
goto v___jp_12_;
}
else
{
v___y_13_ = v___x_19_;
goto v___jp_12_;
}
v___jp_12_:
{
if (v___y_13_ == 0)
{
uint32_t v___x_14_; uint8_t v___x_15_; 
v___x_14_ = 13;
v___x_15_ = lean_uint32_dec_eq(v___x_11_, v___x_14_);
if (v___x_15_ == 0)
{
uint32_t v___x_16_; uint8_t v___x_17_; 
v___x_16_ = 10;
v___x_17_ = lean_uint32_dec_eq(v___x_11_, v___x_16_);
v___y_8_ = v___x_17_;
goto v___jp_7_;
}
else
{
v___y_8_ = v___x_15_;
goto v___jp_7_;
}
}
else
{
goto v___jp_3_;
}
}
}
v___jp_3_:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_unsigned_to_nat(1u);
v___x_5_ = lean_nat_add(v_i_2_, v___x_4_);
lean_dec(v_i_2_);
v_i_2_ = v___x_5_;
goto _start;
}
v___jp_7_:
{
if (v___y_8_ == 0)
{
return v_i_2_;
}
else
{
goto v___jp_3_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_skipWs___boxed(lean_object* v_s_22_, lean_object* v_i_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_minicalc_Minicalc_skipWs(v_s_22_, v_i_23_);
lean_dec_ref(v_s_22_);
return v_res_24_;
}
}
static lean_object* _init_lp_minicalc_Minicalc_parseDigits___closed__0(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_unsigned_to_nat(0u);
v___x_26_ = lean_nat_to_int(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_lp_minicalc_Minicalc_parseDigits___closed__1(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_unsigned_to_nat(10u);
v___x_28_ = lean_nat_to_int(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseDigits(lean_object* v_s_29_, lean_object* v_i_30_){
_start:
{
lean_object* v___x_31_; uint8_t v___x_32_; 
v___x_31_ = lean_string_length(v_s_29_);
v___x_32_ = lean_nat_dec_lt(v_i_30_, v___x_31_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&lp_minicalc_Minicalc_parseDigits___closed__0, &lp_minicalc_Minicalc_parseDigits___closed__0_once, _init_lp_minicalc_Minicalc_parseDigits___closed__0);
v___x_34_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v_i_30_);
v___x_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
return v___x_35_;
}
else
{
uint32_t v_c_36_; uint8_t v___y_38_; uint32_t v___x_69_; uint8_t v___x_70_; 
v_c_36_ = lean_string_utf8_get(v_s_29_, v_i_30_);
v___x_69_ = 48;
v___x_70_ = lean_uint32_dec_le(v___x_69_, v_c_36_);
if (v___x_70_ == 0)
{
v___y_38_ = v___x_70_;
goto v___jp_37_;
}
else
{
uint32_t v___x_71_; uint8_t v___x_72_; 
v___x_71_ = 57;
v___x_72_ = lean_uint32_dec_le(v_c_36_, v___x_71_);
v___y_38_ = v___x_72_;
goto v___jp_37_;
}
v___jp_37_:
{
if (v___y_38_ == 0)
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_obj_once(&lp_minicalc_Minicalc_parseDigits___closed__0, &lp_minicalc_Minicalc_parseDigits___closed__0_once, _init_lp_minicalc_Minicalc_parseDigits___closed__0);
v___x_40_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v_i_30_);
v___x_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
else
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_unsigned_to_nat(1u);
v___x_43_ = lean_nat_add(v_i_30_, v___x_42_);
lean_dec(v_i_30_);
v___x_44_ = lp_minicalc_Minicalc_parseDigits(v_s_29_, v___x_43_);
if (lean_obj_tag(v___x_44_) == 0)
{
return v___x_44_;
}
else
{
lean_object* v_val_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_68_; 
v_val_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_68_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_68_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_val_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_68_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v_fst_49_; lean_object* v_snd_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_67_; 
v_fst_49_ = lean_ctor_get(v_val_45_, 0);
v_snd_50_ = lean_ctor_get(v_val_45_, 1);
v_isSharedCheck_67_ = !lean_is_exclusive(v_val_45_);
if (v_isSharedCheck_67_ == 0)
{
v___x_52_ = v_val_45_;
v_isShared_53_ = v_isSharedCheck_67_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_snd_50_);
lean_inc(v_fst_49_);
lean_dec(v_val_45_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_67_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v_d_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_62_; 
v___x_54_ = lean_uint32_to_nat(v_c_36_);
v___x_55_ = lean_unsigned_to_nat(48u);
v___x_56_ = lean_nat_sub(v___x_54_, v___x_55_);
lean_dec(v___x_54_);
v_d_57_ = lean_nat_to_int(v___x_56_);
v___x_58_ = lean_obj_once(&lp_minicalc_Minicalc_parseDigits___closed__1, &lp_minicalc_Minicalc_parseDigits___closed__1_once, _init_lp_minicalc_Minicalc_parseDigits___closed__1);
v___x_59_ = lean_int_mul(v___x_58_, v_fst_49_);
lean_dec(v_fst_49_);
v___x_60_ = lean_int_add(v_d_57_, v___x_59_);
lean_dec(v___x_59_);
lean_dec(v_d_57_);
if (v_isShared_53_ == 0)
{
lean_ctor_set(v___x_52_, 0, v___x_60_);
v___x_62_ = v___x_52_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v___x_60_);
lean_ctor_set(v_reuseFailAlloc_66_, 1, v_snd_50_);
v___x_62_ = v_reuseFailAlloc_66_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
lean_object* v___x_64_; 
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 0, v___x_62_);
v___x_64_ = v___x_47_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseDigits___boxed(lean_object* v_s_73_, lean_object* v_i_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = lp_minicalc_Minicalc_parseDigits(v_s_73_, v_i_74_);
lean_dec_ref(v_s_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseFactor(lean_object* v_s_76_, lean_object* v_i_77_){
_start:
{
lean_object* v_i_78_; uint8_t v___y_80_; lean_object* v___x_102_; uint8_t v___x_103_; 
v_i_78_ = lp_minicalc_Minicalc_skipWs(v_s_76_, v_i_77_);
v___x_102_ = lean_string_length(v_s_76_);
v___x_103_ = lean_nat_dec_lt(v_i_78_, v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
lean_dec(v_i_78_);
v___x_104_ = lean_box(0);
return v___x_104_;
}
else
{
uint32_t v_c_105_; uint32_t v___x_106_; uint8_t v___x_107_; 
v_c_105_ = lean_string_utf8_get(v_s_76_, v_i_78_);
v___x_106_ = 45;
v___x_107_ = lean_uint32_dec_eq(v_c_105_, v___x_106_);
if (v___x_107_ == 0)
{
uint32_t v___x_108_; uint8_t v___x_109_; 
v___x_108_ = 40;
v___x_109_ = lean_uint32_dec_eq(v_c_105_, v___x_108_);
if (v___x_109_ == 0)
{
uint32_t v___x_110_; uint8_t v___x_111_; 
v___x_110_ = 48;
v___x_111_ = lean_uint32_dec_le(v___x_110_, v_c_105_);
if (v___x_111_ == 0)
{
v___y_80_ = v___x_111_;
goto v___jp_79_;
}
else
{
uint32_t v___x_112_; uint8_t v___x_113_; 
v___x_112_ = 57;
v___x_113_ = lean_uint32_dec_le(v_c_105_, v___x_112_);
v___y_80_ = v___x_113_;
goto v___jp_79_;
}
}
else
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_nat_add(v_i_78_, v___x_114_);
lean_dec(v_i_78_);
v___x_116_ = lp_minicalc_Minicalc_parseExpr(v_s_76_, v___x_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
return v___x_116_;
}
else
{
lean_object* v_val_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_141_; 
v_val_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_141_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_141_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_val_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_141_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v_fst_121_; lean_object* v_snd_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_140_; 
v_fst_121_ = lean_ctor_get(v_val_117_, 0);
v_snd_122_ = lean_ctor_get(v_val_117_, 1);
v_isSharedCheck_140_ = !lean_is_exclusive(v_val_117_);
if (v_isSharedCheck_140_ == 0)
{
v___x_124_ = v_val_117_;
v_isShared_125_ = v_isSharedCheck_140_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_snd_122_);
lean_inc(v_fst_121_);
lean_dec(v_val_117_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_140_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v_j_126_; uint8_t v___x_127_; 
v_j_126_ = lp_minicalc_Minicalc_skipWs(v_s_76_, v_snd_122_);
v___x_127_ = lean_nat_dec_lt(v_j_126_, v___x_102_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; 
lean_dec(v_j_126_);
lean_del_object(v___x_124_);
lean_dec(v_fst_121_);
lean_del_object(v___x_119_);
v___x_128_ = lean_box(0);
return v___x_128_;
}
else
{
uint32_t v___x_129_; uint32_t v___x_130_; uint8_t v___x_131_; 
v___x_129_ = lean_string_utf8_get(v_s_76_, v_j_126_);
v___x_130_ = 41;
v___x_131_ = lean_uint32_dec_eq(v___x_129_, v___x_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; 
lean_dec(v_j_126_);
lean_del_object(v___x_124_);
lean_dec(v_fst_121_);
lean_del_object(v___x_119_);
v___x_132_ = lean_box(0);
return v___x_132_;
}
else
{
lean_object* v___x_133_; lean_object* v___x_135_; 
v___x_133_ = lean_nat_add(v_j_126_, v___x_114_);
lean_dec(v_j_126_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v___x_133_);
v___x_135_ = v___x_124_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_fst_121_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v___x_133_);
v___x_135_ = v_reuseFailAlloc_139_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_137_; 
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_135_);
v___x_137_ = v___x_119_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = lean_unsigned_to_nat(1u);
v___x_143_ = lean_nat_add(v_i_78_, v___x_142_);
lean_dec(v_i_78_);
v___x_144_ = lp_minicalc_Minicalc_parseFactor(v_s_76_, v___x_143_);
if (lean_obj_tag(v___x_144_) == 0)
{
return v___x_144_;
}
else
{
lean_object* v_val_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_162_; 
v_val_145_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_162_ == 0)
{
v___x_147_ = v___x_144_;
v_isShared_148_ = v_isSharedCheck_162_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_val_145_);
lean_dec(v___x_144_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_162_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v_fst_149_; lean_object* v_snd_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_161_; 
v_fst_149_ = lean_ctor_get(v_val_145_, 0);
v_snd_150_ = lean_ctor_get(v_val_145_, 1);
v_isSharedCheck_161_ = !lean_is_exclusive(v_val_145_);
if (v_isSharedCheck_161_ == 0)
{
v___x_152_ = v_val_145_;
v_isShared_153_ = v_isSharedCheck_161_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_snd_150_);
lean_inc(v_fst_149_);
lean_dec(v_val_145_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_161_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_154_, 0, v_fst_149_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_154_);
v___x_156_ = v___x_152_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_snd_150_);
v___x_156_ = v_reuseFailAlloc_160_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_158_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_156_);
v___x_158_ = v___x_147_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
}
}
}
v___jp_79_:
{
if (v___y_80_ == 0)
{
lean_object* v___x_81_; 
lean_dec(v_i_78_);
v___x_81_ = lean_box(0);
return v___x_81_;
}
else
{
lean_object* v___x_82_; 
v___x_82_ = lp_minicalc_Minicalc_parseDigits(v_s_76_, v_i_78_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v___x_83_; 
v___x_83_ = lean_box(0);
return v___x_83_;
}
else
{
lean_object* v_val_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_101_; 
v_val_84_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_101_ == 0)
{
v___x_86_ = v___x_82_;
v_isShared_87_ = v_isSharedCheck_101_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_val_84_);
lean_dec(v___x_82_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_101_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v_fst_88_; lean_object* v_snd_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_100_; 
v_fst_88_ = lean_ctor_get(v_val_84_, 0);
v_snd_89_ = lean_ctor_get(v_val_84_, 1);
v_isSharedCheck_100_ = !lean_is_exclusive(v_val_84_);
if (v_isSharedCheck_100_ == 0)
{
v___x_91_ = v_val_84_;
v_isShared_92_ = v_isSharedCheck_100_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_snd_89_);
lean_inc(v_fst_88_);
lean_dec(v_val_84_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_100_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v_fst_88_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_93_);
v___x_95_ = v___x_91_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_snd_89_);
v___x_95_ = v_reuseFailAlloc_99_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_97_; 
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_95_);
v___x_97_ = v___x_86_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_95_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseTermTail(lean_object* v_s_163_, lean_object* v_i_164_, lean_object* v_acc_165_){
_start:
{
lean_object* v_j_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v_j_166_ = lp_minicalc_Minicalc_skipWs(v_s_163_, v_i_164_);
v___x_167_ = lean_string_length(v_s_163_);
v___x_168_ = lean_nat_dec_lt(v_j_166_, v___x_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v_acc_165_);
lean_ctor_set(v___x_169_, 1, v_j_166_);
v___x_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
return v___x_170_;
}
else
{
uint32_t v_c_171_; uint32_t v___x_172_; uint8_t v___x_173_; uint8_t v___y_175_; 
v_c_171_ = lean_string_utf8_get(v_s_163_, v_j_166_);
v___x_172_ = 42;
v___x_173_ = lean_uint32_dec_eq(v_c_171_, v___x_172_);
if (v___x_173_ == 0)
{
uint32_t v___x_202_; uint8_t v___x_203_; 
v___x_202_ = 47;
v___x_203_ = lean_uint32_dec_eq(v_c_171_, v___x_202_);
v___y_175_ = v___x_203_;
goto v___jp_174_;
}
else
{
v___y_175_ = v___x_173_;
goto v___jp_174_;
}
v___jp_174_:
{
if (v___y_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v_acc_165_);
lean_ctor_set(v___x_176_, 1, v_j_166_);
v___x_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
return v___x_177_;
}
else
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_add(v_j_166_, v___x_178_);
lean_dec(v_j_166_);
v___x_180_ = lp_minicalc_Minicalc_parseFactor(v_s_163_, v___x_179_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_dec_ref(v_acc_165_);
return v___x_180_;
}
else
{
lean_object* v_val_181_; 
v_val_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_val_181_);
lean_dec_ref_known(v___x_180_, 1);
if (v___x_173_ == 0)
{
lean_object* v_fst_182_; lean_object* v_snd_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_191_; 
v_fst_182_ = lean_ctor_get(v_val_181_, 0);
v_snd_183_ = lean_ctor_get(v_val_181_, 1);
v_isSharedCheck_191_ = !lean_is_exclusive(v_val_181_);
if (v_isSharedCheck_191_ == 0)
{
v___x_185_ = v_val_181_;
v_isShared_186_ = v_isSharedCheck_191_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_snd_183_);
lean_inc(v_fst_182_);
lean_dec(v_val_181_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_191_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
lean_ctor_set_tag(v___x_185_, 5);
lean_ctor_set(v___x_185_, 1, v_fst_182_);
lean_ctor_set(v___x_185_, 0, v_acc_165_);
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_acc_165_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_fst_182_);
v___x_188_ = v_reuseFailAlloc_190_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
v_i_164_ = v_snd_183_;
v_acc_165_ = v___x_188_;
goto _start;
}
}
}
else
{
lean_object* v_fst_192_; lean_object* v_snd_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_201_; 
v_fst_192_ = lean_ctor_get(v_val_181_, 0);
v_snd_193_ = lean_ctor_get(v_val_181_, 1);
v_isSharedCheck_201_ = !lean_is_exclusive(v_val_181_);
if (v_isSharedCheck_201_ == 0)
{
v___x_195_ = v_val_181_;
v_isShared_196_ = v_isSharedCheck_201_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_snd_193_);
lean_inc(v_fst_192_);
lean_dec(v_val_181_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_201_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
lean_ctor_set_tag(v___x_195_, 4);
lean_ctor_set(v___x_195_, 1, v_fst_192_);
lean_ctor_set(v___x_195_, 0, v_acc_165_);
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_acc_165_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_fst_192_);
v___x_198_ = v_reuseFailAlloc_200_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
v_i_164_ = v_snd_193_;
v_acc_165_ = v___x_198_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseTerm(lean_object* v_s_204_, lean_object* v_i_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lp_minicalc_Minicalc_parseFactor(v_s_204_, v_i_205_);
if (lean_obj_tag(v___x_206_) == 0)
{
return v___x_206_;
}
else
{
lean_object* v_val_207_; lean_object* v_fst_208_; lean_object* v_snd_209_; lean_object* v___x_210_; 
v_val_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_val_207_);
lean_dec_ref_known(v___x_206_, 1);
v_fst_208_ = lean_ctor_get(v_val_207_, 0);
lean_inc(v_fst_208_);
v_snd_209_ = lean_ctor_get(v_val_207_, 1);
lean_inc(v_snd_209_);
lean_dec(v_val_207_);
v___x_210_ = lp_minicalc_Minicalc_parseTermTail(v_s_204_, v_snd_209_, v_fst_208_);
return v___x_210_;
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseExprTail(lean_object* v_s_211_, lean_object* v_i_212_, lean_object* v_acc_213_){
_start:
{
lean_object* v_j_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v_j_214_ = lp_minicalc_Minicalc_skipWs(v_s_211_, v_i_212_);
v___x_215_ = lean_string_length(v_s_211_);
v___x_216_ = lean_nat_dec_lt(v_j_214_, v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v_acc_213_);
lean_ctor_set(v___x_217_, 1, v_j_214_);
v___x_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
return v___x_218_;
}
else
{
uint32_t v_c_219_; uint32_t v___x_220_; uint8_t v___x_221_; uint8_t v___y_223_; 
v_c_219_ = lean_string_utf8_get(v_s_211_, v_j_214_);
v___x_220_ = 43;
v___x_221_ = lean_uint32_dec_eq(v_c_219_, v___x_220_);
if (v___x_221_ == 0)
{
uint32_t v___x_250_; uint8_t v___x_251_; 
v___x_250_ = 45;
v___x_251_ = lean_uint32_dec_eq(v_c_219_, v___x_250_);
v___y_223_ = v___x_251_;
goto v___jp_222_;
}
else
{
v___y_223_ = v___x_221_;
goto v___jp_222_;
}
v___jp_222_:
{
if (v___y_223_ == 0)
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_224_, 0, v_acc_213_);
lean_ctor_set(v___x_224_, 1, v_j_214_);
v___x_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
else
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_226_ = lean_unsigned_to_nat(1u);
v___x_227_ = lean_nat_add(v_j_214_, v___x_226_);
lean_dec(v_j_214_);
v___x_228_ = lp_minicalc_Minicalc_parseTerm(v_s_211_, v___x_227_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_dec_ref(v_acc_213_);
return v___x_228_;
}
else
{
lean_object* v_val_229_; 
v_val_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_val_229_);
lean_dec_ref_known(v___x_228_, 1);
if (v___x_221_ == 0)
{
lean_object* v_fst_230_; lean_object* v_snd_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_239_; 
v_fst_230_ = lean_ctor_get(v_val_229_, 0);
v_snd_231_ = lean_ctor_get(v_val_229_, 1);
v_isSharedCheck_239_ = !lean_is_exclusive(v_val_229_);
if (v_isSharedCheck_239_ == 0)
{
v___x_233_ = v_val_229_;
v_isShared_234_ = v_isSharedCheck_239_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_snd_231_);
lean_inc(v_fst_230_);
lean_dec(v_val_229_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_239_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
lean_ctor_set_tag(v___x_233_, 3);
lean_ctor_set(v___x_233_, 1, v_fst_230_);
lean_ctor_set(v___x_233_, 0, v_acc_213_);
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_acc_213_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_fst_230_);
v___x_236_ = v_reuseFailAlloc_238_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
v_i_212_ = v_snd_231_;
v_acc_213_ = v___x_236_;
goto _start;
}
}
}
else
{
lean_object* v_fst_240_; lean_object* v_snd_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_249_; 
v_fst_240_ = lean_ctor_get(v_val_229_, 0);
v_snd_241_ = lean_ctor_get(v_val_229_, 1);
v_isSharedCheck_249_ = !lean_is_exclusive(v_val_229_);
if (v_isSharedCheck_249_ == 0)
{
v___x_243_ = v_val_229_;
v_isShared_244_ = v_isSharedCheck_249_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_snd_241_);
lean_inc(v_fst_240_);
lean_dec(v_val_229_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_249_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
lean_ctor_set_tag(v___x_243_, 2);
lean_ctor_set(v___x_243_, 1, v_fst_240_);
lean_ctor_set(v___x_243_, 0, v_acc_213_);
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_acc_213_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_fst_240_);
v___x_246_ = v_reuseFailAlloc_248_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
v_i_212_ = v_snd_241_;
v_acc_213_ = v___x_246_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseExpr(lean_object* v_s_252_, lean_object* v_i_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lp_minicalc_Minicalc_parseTerm(v_s_252_, v_i_253_);
if (lean_obj_tag(v___x_254_) == 0)
{
return v___x_254_;
}
else
{
lean_object* v_val_255_; lean_object* v_fst_256_; lean_object* v_snd_257_; lean_object* v___x_258_; 
v_val_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_val_255_);
lean_dec_ref_known(v___x_254_, 1);
v_fst_256_ = lean_ctor_get(v_val_255_, 0);
lean_inc(v_fst_256_);
v_snd_257_ = lean_ctor_get(v_val_255_, 1);
lean_inc(v_snd_257_);
lean_dec(v_val_255_);
v___x_258_ = lp_minicalc_Minicalc_parseExprTail(v_s_252_, v_snd_257_, v_fst_256_);
return v___x_258_;
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseExpr___boxed(lean_object* v_s_259_, lean_object* v_i_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = lp_minicalc_Minicalc_parseExpr(v_s_259_, v_i_260_);
lean_dec_ref(v_s_259_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseTerm___boxed(lean_object* v_s_262_, lean_object* v_i_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = lp_minicalc_Minicalc_parseTerm(v_s_262_, v_i_263_);
lean_dec_ref(v_s_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseExprTail___boxed(lean_object* v_s_265_, lean_object* v_i_266_, lean_object* v_acc_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = lp_minicalc_Minicalc_parseExprTail(v_s_265_, v_i_266_, v_acc_267_);
lean_dec_ref(v_s_265_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseTermTail___boxed(lean_object* v_s_269_, lean_object* v_i_270_, lean_object* v_acc_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = lp_minicalc_Minicalc_parseTermTail(v_s_269_, v_i_270_, v_acc_271_);
lean_dec_ref(v_s_269_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parseFactor___boxed(lean_object* v_s_273_, lean_object* v_i_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = lp_minicalc_Minicalc_parseFactor(v_s_273_, v_i_274_);
lean_dec_ref(v_s_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parse(lean_object* v_s_276_){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = lp_minicalc_Minicalc_parseExpr(v_s_276_, v___x_277_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v___x_279_; 
v___x_279_ = lean_box(0);
return v___x_279_;
}
else
{
lean_object* v_val_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_293_; 
v_val_280_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_293_ == 0)
{
v___x_282_ = v___x_278_;
v_isShared_283_ = v_isSharedCheck_293_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_val_280_);
lean_dec(v___x_278_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_293_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v_fst_284_; lean_object* v_snd_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_fst_284_ = lean_ctor_get(v_val_280_, 0);
lean_inc(v_fst_284_);
v_snd_285_ = lean_ctor_get(v_val_280_, 1);
lean_inc(v_snd_285_);
lean_dec(v_val_280_);
v___x_286_ = lp_minicalc_Minicalc_skipWs(v_s_276_, v_snd_285_);
v___x_287_ = lean_string_length(v_s_276_);
v___x_288_ = lean_nat_dec_eq(v___x_286_, v___x_287_);
lean_dec(v___x_286_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; 
lean_dec(v_fst_284_);
lean_del_object(v___x_282_);
v___x_289_ = lean_box(0);
return v___x_289_;
}
else
{
lean_object* v___x_291_; 
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v_fst_284_);
v___x_291_ = v___x_282_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_fst_284_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_parse___boxed(lean_object* v_s_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = lp_minicalc_Minicalc_parse(v_s_294_);
lean_dec_ref(v_s_294_);
return v_res_295_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_minicalc_Minicalc_Expr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_minicalc_Minicalc_Parser(uint8_t builtin) {
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

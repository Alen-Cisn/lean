// Lean compiler output
// Module: Minicalc.Optimizer
// Imports: public import Init public meta import Init public import Minicalc.Expr public import Minicalc.Evaluator
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
static lean_once_cell_t lp_minicalc_Minicalc_fold___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_minicalc_Minicalc_fold___closed__0;
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_fold(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_optimize(lean_object*);
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0;
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_hasNoDivByZero_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_hasNoDivByZero_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_minicalc_Minicalc_fold___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_fold(lean_object* v_x_3_){
_start:
{
switch(lean_obj_tag(v_x_3_))
{
case 0:
{
lean_object* v_a_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_11_; 
v_a_4_ = lean_ctor_get(v_x_3_, 0);
v_isSharedCheck_11_ = !lean_is_exclusive(v_x_3_);
if (v_isSharedCheck_11_ == 0)
{
v___x_6_ = v_x_3_;
v_isShared_7_ = v_isSharedCheck_11_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_a_4_);
lean_dec(v_x_3_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_11_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_9_; 
if (v_isShared_7_ == 0)
{
lean_ctor_set_tag(v___x_6_, 1);
v___x_9_ = v___x_6_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_10_; 
v_reuseFailAlloc_10_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_10_, 0, v_a_4_);
v___x_9_ = v_reuseFailAlloc_10_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
return v___x_9_;
}
}
}
case 1:
{
lean_object* v_a_12_; lean_object* v___x_13_; 
v_a_12_ = lean_ctor_get(v_x_3_, 0);
lean_inc_ref(v_a_12_);
lean_dec_ref_known(v_x_3_, 1);
v___x_13_ = lp_minicalc_Minicalc_fold(v_a_12_);
if (lean_obj_tag(v___x_13_) == 0)
{
return v___x_13_;
}
else
{
lean_object* v_val_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_22_; 
v_val_14_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_22_ == 0)
{
v___x_16_ = v___x_13_;
v_isShared_17_ = v_isSharedCheck_22_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_val_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_22_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_18_; lean_object* v___x_20_; 
v___x_18_ = lean_int_neg(v_val_14_);
lean_dec(v_val_14_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v___x_18_);
v___x_20_ = v___x_16_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v___x_18_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
case 2:
{
lean_object* v_a_23_; lean_object* v_a_24_; lean_object* v___x_25_; 
v_a_23_ = lean_ctor_get(v_x_3_, 0);
lean_inc_ref(v_a_23_);
v_a_24_ = lean_ctor_get(v_x_3_, 1);
lean_inc_ref(v_a_24_);
lean_dec_ref_known(v_x_3_, 2);
v___x_25_ = lp_minicalc_Minicalc_fold(v_a_23_);
if (lean_obj_tag(v___x_25_) == 0)
{
lean_dec_ref(v_a_24_);
return v___x_25_;
}
else
{
lean_object* v_val_26_; lean_object* v___x_27_; 
v_val_26_ = lean_ctor_get(v___x_25_, 0);
lean_inc(v_val_26_);
lean_dec_ref_known(v___x_25_, 1);
v___x_27_ = lp_minicalc_Minicalc_fold(v_a_24_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_dec(v_val_26_);
return v___x_27_;
}
else
{
lean_object* v_val_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_36_; 
v_val_28_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_36_ == 0)
{
v___x_30_ = v___x_27_;
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_val_28_);
lean_dec(v___x_27_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_32_ = lean_int_add(v_val_26_, v_val_28_);
lean_dec(v_val_28_);
lean_dec(v_val_26_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_32_);
v___x_34_ = v___x_30_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v___x_32_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
}
}
case 3:
{
lean_object* v_a_37_; lean_object* v_a_38_; lean_object* v___x_39_; 
v_a_37_ = lean_ctor_get(v_x_3_, 0);
lean_inc_ref(v_a_37_);
v_a_38_ = lean_ctor_get(v_x_3_, 1);
lean_inc_ref(v_a_38_);
lean_dec_ref_known(v_x_3_, 2);
v___x_39_ = lp_minicalc_Minicalc_fold(v_a_37_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_dec_ref(v_a_38_);
return v___x_39_;
}
else
{
lean_object* v_val_40_; lean_object* v___x_41_; 
v_val_40_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_val_40_);
lean_dec_ref_known(v___x_39_, 1);
v___x_41_ = lp_minicalc_Minicalc_fold(v_a_38_);
if (lean_obj_tag(v___x_41_) == 0)
{
lean_dec(v_val_40_);
return v___x_41_;
}
else
{
lean_object* v_val_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_50_; 
v_val_42_ = lean_ctor_get(v___x_41_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_50_ == 0)
{
v___x_44_ = v___x_41_;
v_isShared_45_ = v_isSharedCheck_50_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_val_42_);
lean_dec(v___x_41_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_50_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_46_ = lean_int_sub(v_val_40_, v_val_42_);
lean_dec(v_val_42_);
lean_dec(v_val_40_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_46_);
v___x_48_ = v___x_44_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
case 4:
{
lean_object* v_a_51_; lean_object* v_a_52_; lean_object* v___x_53_; 
v_a_51_ = lean_ctor_get(v_x_3_, 0);
lean_inc_ref(v_a_51_);
v_a_52_ = lean_ctor_get(v_x_3_, 1);
lean_inc_ref(v_a_52_);
lean_dec_ref_known(v_x_3_, 2);
v___x_53_ = lp_minicalc_Minicalc_fold(v_a_51_);
if (lean_obj_tag(v___x_53_) == 0)
{
lean_dec_ref(v_a_52_);
return v___x_53_;
}
else
{
lean_object* v_val_54_; lean_object* v___x_55_; 
v_val_54_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_val_54_);
lean_dec_ref_known(v___x_53_, 1);
v___x_55_ = lp_minicalc_Minicalc_fold(v_a_52_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_dec(v_val_54_);
return v___x_55_;
}
else
{
lean_object* v_val_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_64_; 
v_val_56_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_64_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_64_ == 0)
{
v___x_58_ = v___x_55_;
v_isShared_59_ = v_isSharedCheck_64_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_val_56_);
lean_dec(v___x_55_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_64_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_62_; 
v___x_60_ = lean_int_mul(v_val_54_, v_val_56_);
lean_dec(v_val_56_);
lean_dec(v_val_54_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v___x_60_);
v___x_62_ = v___x_58_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
}
default: 
{
lean_object* v_a_65_; lean_object* v_a_66_; lean_object* v___x_67_; 
v_a_65_ = lean_ctor_get(v_x_3_, 0);
lean_inc_ref(v_a_65_);
v_a_66_ = lean_ctor_get(v_x_3_, 1);
lean_inc_ref(v_a_66_);
lean_dec_ref_known(v_x_3_, 2);
v___x_67_ = lp_minicalc_Minicalc_fold(v_a_66_);
if (lean_obj_tag(v___x_67_) == 0)
{
lean_dec_ref(v_a_65_);
return v___x_67_;
}
else
{
lean_object* v_val_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v_val_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc(v_val_68_);
lean_dec_ref_known(v___x_67_, 1);
v___x_69_ = lean_obj_once(&lp_minicalc_Minicalc_fold___closed__0, &lp_minicalc_Minicalc_fold___closed__0_once, _init_lp_minicalc_Minicalc_fold___closed__0);
v___x_70_ = lean_int_dec_eq(v_val_68_, v___x_69_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
v___x_71_ = lp_minicalc_Minicalc_fold(v_a_65_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_dec(v_val_68_);
return v___x_71_;
}
else
{
lean_object* v_val_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_80_; 
v_val_72_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_80_ == 0)
{
v___x_74_ = v___x_71_;
v_isShared_75_ = v_isSharedCheck_80_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_val_72_);
lean_dec(v___x_71_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_80_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = lean_int_ediv(v_val_72_, v_val_68_);
lean_dec(v_val_68_);
lean_dec(v_val_72_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v___x_76_);
v___x_78_ = v___x_74_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
else
{
lean_object* v___x_81_; 
lean_dec(v_val_68_);
lean_dec_ref(v_a_65_);
v___x_81_ = lean_box(0);
return v___x_81_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc_Minicalc_optimize(lean_object* v_e_82_){
_start:
{
lean_object* v___x_83_; 
lean_inc_ref(v_e_82_);
v___x_83_ = lp_minicalc_Minicalc_fold(v_e_82_);
if (lean_obj_tag(v___x_83_) == 0)
{
return v_e_82_;
}
else
{
lean_object* v_val_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_91_; 
lean_dec_ref(v_e_82_);
v_val_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_91_ == 0)
{
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_val_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_87_ == 0)
{
lean_ctor_set_tag(v___x_86_, 0);
v___x_89_ = v___x_86_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_val_84_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__5_splitter___redArg(lean_object* v_x_92_, lean_object* v_h__1_93_, lean_object* v_h__2_94_, lean_object* v_h__3_95_, lean_object* v_h__4_96_, lean_object* v_h__5_97_, lean_object* v_h__6_98_){
_start:
{
switch(lean_obj_tag(v_x_92_))
{
case 0:
{
lean_object* v_a_99_; lean_object* v___x_100_; 
lean_dec(v_h__6_98_);
lean_dec(v_h__5_97_);
lean_dec(v_h__4_96_);
lean_dec(v_h__3_95_);
lean_dec(v_h__2_94_);
v_a_99_ = lean_ctor_get(v_x_92_, 0);
lean_inc(v_a_99_);
lean_dec_ref_known(v_x_92_, 1);
v___x_100_ = lean_apply_1(v_h__1_93_, v_a_99_);
return v___x_100_;
}
case 1:
{
lean_object* v_a_101_; lean_object* v___x_102_; 
lean_dec(v_h__6_98_);
lean_dec(v_h__5_97_);
lean_dec(v_h__4_96_);
lean_dec(v_h__3_95_);
lean_dec(v_h__1_93_);
v_a_101_ = lean_ctor_get(v_x_92_, 0);
lean_inc_ref(v_a_101_);
lean_dec_ref_known(v_x_92_, 1);
v___x_102_ = lean_apply_1(v_h__2_94_, v_a_101_);
return v___x_102_;
}
case 2:
{
lean_object* v_a_103_; lean_object* v_a_104_; lean_object* v___x_105_; 
lean_dec(v_h__6_98_);
lean_dec(v_h__5_97_);
lean_dec(v_h__4_96_);
lean_dec(v_h__2_94_);
lean_dec(v_h__1_93_);
v_a_103_ = lean_ctor_get(v_x_92_, 0);
lean_inc_ref(v_a_103_);
v_a_104_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_a_104_);
lean_dec_ref_known(v_x_92_, 2);
v___x_105_ = lean_apply_2(v_h__3_95_, v_a_103_, v_a_104_);
return v___x_105_;
}
case 3:
{
lean_object* v_a_106_; lean_object* v_a_107_; lean_object* v___x_108_; 
lean_dec(v_h__6_98_);
lean_dec(v_h__5_97_);
lean_dec(v_h__3_95_);
lean_dec(v_h__2_94_);
lean_dec(v_h__1_93_);
v_a_106_ = lean_ctor_get(v_x_92_, 0);
lean_inc_ref(v_a_106_);
v_a_107_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_a_107_);
lean_dec_ref_known(v_x_92_, 2);
v___x_108_ = lean_apply_2(v_h__4_96_, v_a_106_, v_a_107_);
return v___x_108_;
}
case 4:
{
lean_object* v_a_109_; lean_object* v_a_110_; lean_object* v___x_111_; 
lean_dec(v_h__6_98_);
lean_dec(v_h__4_96_);
lean_dec(v_h__3_95_);
lean_dec(v_h__2_94_);
lean_dec(v_h__1_93_);
v_a_109_ = lean_ctor_get(v_x_92_, 0);
lean_inc_ref(v_a_109_);
v_a_110_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_a_110_);
lean_dec_ref_known(v_x_92_, 2);
v___x_111_ = lean_apply_2(v_h__5_97_, v_a_109_, v_a_110_);
return v___x_111_;
}
default: 
{
lean_object* v_a_112_; lean_object* v_a_113_; lean_object* v___x_114_; 
lean_dec(v_h__5_97_);
lean_dec(v_h__4_96_);
lean_dec(v_h__3_95_);
lean_dec(v_h__2_94_);
lean_dec(v_h__1_93_);
v_a_112_ = lean_ctor_get(v_x_92_, 0);
lean_inc_ref(v_a_112_);
v_a_113_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_a_113_);
lean_dec_ref_known(v_x_92_, 2);
v___x_114_ = lean_apply_2(v_h__6_98_, v_a_112_, v_a_113_);
return v___x_114_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__5_splitter(lean_object* v_motive_115_, lean_object* v_x_116_, lean_object* v_h__1_117_, lean_object* v_h__2_118_, lean_object* v_h__3_119_, lean_object* v_h__4_120_, lean_object* v_h__5_121_, lean_object* v_h__6_122_){
_start:
{
switch(lean_obj_tag(v_x_116_))
{
case 0:
{
lean_object* v_a_123_; lean_object* v___x_124_; 
lean_dec(v_h__6_122_);
lean_dec(v_h__5_121_);
lean_dec(v_h__4_120_);
lean_dec(v_h__3_119_);
lean_dec(v_h__2_118_);
v_a_123_ = lean_ctor_get(v_x_116_, 0);
lean_inc(v_a_123_);
lean_dec_ref_known(v_x_116_, 1);
v___x_124_ = lean_apply_1(v_h__1_117_, v_a_123_);
return v___x_124_;
}
case 1:
{
lean_object* v_a_125_; lean_object* v___x_126_; 
lean_dec(v_h__6_122_);
lean_dec(v_h__5_121_);
lean_dec(v_h__4_120_);
lean_dec(v_h__3_119_);
lean_dec(v_h__1_117_);
v_a_125_ = lean_ctor_get(v_x_116_, 0);
lean_inc_ref(v_a_125_);
lean_dec_ref_known(v_x_116_, 1);
v___x_126_ = lean_apply_1(v_h__2_118_, v_a_125_);
return v___x_126_;
}
case 2:
{
lean_object* v_a_127_; lean_object* v_a_128_; lean_object* v___x_129_; 
lean_dec(v_h__6_122_);
lean_dec(v_h__5_121_);
lean_dec(v_h__4_120_);
lean_dec(v_h__2_118_);
lean_dec(v_h__1_117_);
v_a_127_ = lean_ctor_get(v_x_116_, 0);
lean_inc_ref(v_a_127_);
v_a_128_ = lean_ctor_get(v_x_116_, 1);
lean_inc_ref(v_a_128_);
lean_dec_ref_known(v_x_116_, 2);
v___x_129_ = lean_apply_2(v_h__3_119_, v_a_127_, v_a_128_);
return v___x_129_;
}
case 3:
{
lean_object* v_a_130_; lean_object* v_a_131_; lean_object* v___x_132_; 
lean_dec(v_h__6_122_);
lean_dec(v_h__5_121_);
lean_dec(v_h__3_119_);
lean_dec(v_h__2_118_);
lean_dec(v_h__1_117_);
v_a_130_ = lean_ctor_get(v_x_116_, 0);
lean_inc_ref(v_a_130_);
v_a_131_ = lean_ctor_get(v_x_116_, 1);
lean_inc_ref(v_a_131_);
lean_dec_ref_known(v_x_116_, 2);
v___x_132_ = lean_apply_2(v_h__4_120_, v_a_130_, v_a_131_);
return v___x_132_;
}
case 4:
{
lean_object* v_a_133_; lean_object* v_a_134_; lean_object* v___x_135_; 
lean_dec(v_h__6_122_);
lean_dec(v_h__4_120_);
lean_dec(v_h__3_119_);
lean_dec(v_h__2_118_);
lean_dec(v_h__1_117_);
v_a_133_ = lean_ctor_get(v_x_116_, 0);
lean_inc_ref(v_a_133_);
v_a_134_ = lean_ctor_get(v_x_116_, 1);
lean_inc_ref(v_a_134_);
lean_dec_ref_known(v_x_116_, 2);
v___x_135_ = lean_apply_2(v_h__5_121_, v_a_133_, v_a_134_);
return v___x_135_;
}
default: 
{
lean_object* v_a_136_; lean_object* v_a_137_; lean_object* v___x_138_; 
lean_dec(v_h__5_121_);
lean_dec(v_h__4_120_);
lean_dec(v_h__3_119_);
lean_dec(v_h__2_118_);
lean_dec(v_h__1_117_);
v_a_136_ = lean_ctor_get(v_x_116_, 0);
lean_inc_ref(v_a_136_);
v_a_137_ = lean_ctor_get(v_x_116_, 1);
lean_inc_ref(v_a_137_);
lean_dec_ref_known(v_x_116_, 2);
v___x_138_ = lean_apply_2(v_h__6_122_, v_a_136_, v_a_137_);
return v___x_138_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__1_splitter___redArg(lean_object* v_x_139_, lean_object* v_h__1_140_, lean_object* v_h__2_141_){
_start:
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_object* v___x_142_; lean_object* v___x_143_; 
lean_dec(v_h__2_141_);
v___x_142_ = lean_box(0);
v___x_143_ = lean_apply_1(v_h__1_140_, v___x_142_);
return v___x_143_;
}
else
{
lean_object* v_val_144_; lean_object* v___x_145_; 
lean_dec(v_h__1_140_);
v_val_144_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_val_144_);
lean_dec_ref_known(v_x_139_, 1);
v___x_145_ = lean_apply_1(v_h__2_141_, v_val_144_);
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__1_splitter(lean_object* v_motive_146_, lean_object* v_x_147_, lean_object* v_h__1_148_, lean_object* v_h__2_149_){
_start:
{
if (lean_obj_tag(v_x_147_) == 0)
{
lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec(v_h__2_149_);
v___x_150_ = lean_box(0);
v___x_151_ = lean_apply_1(v_h__1_148_, v___x_150_);
return v___x_151_;
}
else
{
lean_object* v_val_152_; lean_object* v___x_153_; 
lean_dec(v_h__1_148_);
v_val_152_ = lean_ctor_get(v_x_147_, 0);
lean_inc(v_val_152_);
lean_dec_ref_known(v_x_147_, 1);
v___x_153_ = lean_apply_1(v_h__2_149_, v_val_152_);
return v___x_153_;
}
}
}
static lean_object* _init_lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = lean_nat_to_int(v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg(lean_object* v_x_156_, lean_object* v_h__1_157_, lean_object* v_h__2_158_, lean_object* v_h__3_159_){
_start:
{
if (lean_obj_tag(v_x_156_) == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_dec(v_h__3_159_);
lean_dec(v_h__2_158_);
v___x_160_ = lean_box(0);
v___x_161_ = lean_apply_1(v_h__1_157_, v___x_160_);
return v___x_161_;
}
else
{
lean_object* v_val_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
lean_dec(v_h__1_157_);
v_val_162_ = lean_ctor_get(v_x_156_, 0);
lean_inc(v_val_162_);
lean_dec_ref_known(v_x_156_, 1);
v___x_163_ = lean_obj_once(&lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0, &lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0_once, _init_lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0);
v___x_164_ = lean_int_dec_eq(v_val_162_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
lean_dec(v_h__2_158_);
v___x_165_ = lean_apply_2(v_h__3_159_, v_val_162_, lean_box(0));
return v___x_165_;
}
else
{
lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec(v_val_162_);
lean_dec(v_h__3_159_);
v___x_166_ = lean_box(0);
v___x_167_ = lean_apply_1(v_h__2_158_, v___x_166_);
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter(lean_object* v_motive_168_, lean_object* v_x_169_, lean_object* v_h__1_170_, lean_object* v_h__2_171_, lean_object* v_h__3_172_){
_start:
{
if (lean_obj_tag(v_x_169_) == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; 
lean_dec(v_h__3_172_);
lean_dec(v_h__2_171_);
v___x_173_ = lean_box(0);
v___x_174_ = lean_apply_1(v_h__1_170_, v___x_173_);
return v___x_174_;
}
else
{
lean_object* v_val_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
lean_dec(v_h__1_170_);
v_val_175_ = lean_ctor_get(v_x_169_, 0);
lean_inc(v_val_175_);
lean_dec_ref_known(v_x_169_, 1);
v___x_176_ = lean_obj_once(&lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0, &lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0_once, _init_lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_fold_match__3_splitter___redArg___closed__0);
v___x_177_ = lean_int_dec_eq(v_val_175_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
lean_dec(v_h__2_171_);
v___x_178_ = lean_apply_2(v_h__3_172_, v_val_175_, lean_box(0));
return v___x_178_;
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; 
lean_dec(v_val_175_);
lean_dec(v_h__3_172_);
v___x_179_ = lean_box(0);
v___x_180_ = lean_apply_1(v_h__2_171_, v___x_179_);
return v___x_180_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_hasNoDivByZero_match__4_splitter___redArg(lean_object* v_x_181_, lean_object* v_h__1_182_, lean_object* v_h__2_183_, lean_object* v_h__3_184_, lean_object* v_h__4_185_, lean_object* v_h__5_186_, lean_object* v_h__6_187_){
_start:
{
switch(lean_obj_tag(v_x_181_))
{
case 0:
{
lean_object* v_a_188_; lean_object* v___x_189_; 
lean_dec(v_h__6_187_);
lean_dec(v_h__5_186_);
lean_dec(v_h__4_185_);
lean_dec(v_h__3_184_);
lean_dec(v_h__2_183_);
v_a_188_ = lean_ctor_get(v_x_181_, 0);
lean_inc(v_a_188_);
lean_dec_ref_known(v_x_181_, 1);
v___x_189_ = lean_apply_1(v_h__1_182_, v_a_188_);
return v___x_189_;
}
case 1:
{
lean_object* v_a_190_; lean_object* v___x_191_; 
lean_dec(v_h__6_187_);
lean_dec(v_h__5_186_);
lean_dec(v_h__4_185_);
lean_dec(v_h__3_184_);
lean_dec(v_h__1_182_);
v_a_190_ = lean_ctor_get(v_x_181_, 0);
lean_inc_ref(v_a_190_);
lean_dec_ref_known(v_x_181_, 1);
v___x_191_ = lean_apply_1(v_h__2_183_, v_a_190_);
return v___x_191_;
}
case 2:
{
lean_object* v_a_192_; lean_object* v_a_193_; lean_object* v___x_194_; 
lean_dec(v_h__6_187_);
lean_dec(v_h__5_186_);
lean_dec(v_h__4_185_);
lean_dec(v_h__2_183_);
lean_dec(v_h__1_182_);
v_a_192_ = lean_ctor_get(v_x_181_, 0);
lean_inc_ref(v_a_192_);
v_a_193_ = lean_ctor_get(v_x_181_, 1);
lean_inc_ref(v_a_193_);
lean_dec_ref_known(v_x_181_, 2);
v___x_194_ = lean_apply_2(v_h__3_184_, v_a_192_, v_a_193_);
return v___x_194_;
}
case 3:
{
lean_object* v_a_195_; lean_object* v_a_196_; lean_object* v___x_197_; 
lean_dec(v_h__6_187_);
lean_dec(v_h__5_186_);
lean_dec(v_h__3_184_);
lean_dec(v_h__2_183_);
lean_dec(v_h__1_182_);
v_a_195_ = lean_ctor_get(v_x_181_, 0);
lean_inc_ref(v_a_195_);
v_a_196_ = lean_ctor_get(v_x_181_, 1);
lean_inc_ref(v_a_196_);
lean_dec_ref_known(v_x_181_, 2);
v___x_197_ = lean_apply_2(v_h__4_185_, v_a_195_, v_a_196_);
return v___x_197_;
}
case 4:
{
lean_object* v_a_198_; lean_object* v_a_199_; lean_object* v___x_200_; 
lean_dec(v_h__6_187_);
lean_dec(v_h__4_185_);
lean_dec(v_h__3_184_);
lean_dec(v_h__2_183_);
lean_dec(v_h__1_182_);
v_a_198_ = lean_ctor_get(v_x_181_, 0);
lean_inc_ref(v_a_198_);
v_a_199_ = lean_ctor_get(v_x_181_, 1);
lean_inc_ref(v_a_199_);
lean_dec_ref_known(v_x_181_, 2);
v___x_200_ = lean_apply_2(v_h__5_186_, v_a_198_, v_a_199_);
return v___x_200_;
}
default: 
{
lean_object* v_a_201_; lean_object* v_a_202_; lean_object* v___x_203_; 
lean_dec(v_h__5_186_);
lean_dec(v_h__4_185_);
lean_dec(v_h__3_184_);
lean_dec(v_h__2_183_);
lean_dec(v_h__1_182_);
v_a_201_ = lean_ctor_get(v_x_181_, 0);
lean_inc_ref(v_a_201_);
v_a_202_ = lean_ctor_get(v_x_181_, 1);
lean_inc_ref(v_a_202_);
lean_dec_ref_known(v_x_181_, 2);
v___x_203_ = lean_apply_2(v_h__6_187_, v_a_201_, v_a_202_);
return v___x_203_;
}
}
}
}
LEAN_EXPORT lean_object* lp_minicalc___private_Minicalc_Optimizer_0__Minicalc_hasNoDivByZero_match__4_splitter(lean_object* v_motive_204_, lean_object* v_x_205_, lean_object* v_h__1_206_, lean_object* v_h__2_207_, lean_object* v_h__3_208_, lean_object* v_h__4_209_, lean_object* v_h__5_210_, lean_object* v_h__6_211_){
_start:
{
switch(lean_obj_tag(v_x_205_))
{
case 0:
{
lean_object* v_a_212_; lean_object* v___x_213_; 
lean_dec(v_h__6_211_);
lean_dec(v_h__5_210_);
lean_dec(v_h__4_209_);
lean_dec(v_h__3_208_);
lean_dec(v_h__2_207_);
v_a_212_ = lean_ctor_get(v_x_205_, 0);
lean_inc(v_a_212_);
lean_dec_ref_known(v_x_205_, 1);
v___x_213_ = lean_apply_1(v_h__1_206_, v_a_212_);
return v___x_213_;
}
case 1:
{
lean_object* v_a_214_; lean_object* v___x_215_; 
lean_dec(v_h__6_211_);
lean_dec(v_h__5_210_);
lean_dec(v_h__4_209_);
lean_dec(v_h__3_208_);
lean_dec(v_h__1_206_);
v_a_214_ = lean_ctor_get(v_x_205_, 0);
lean_inc_ref(v_a_214_);
lean_dec_ref_known(v_x_205_, 1);
v___x_215_ = lean_apply_1(v_h__2_207_, v_a_214_);
return v___x_215_;
}
case 2:
{
lean_object* v_a_216_; lean_object* v_a_217_; lean_object* v___x_218_; 
lean_dec(v_h__6_211_);
lean_dec(v_h__5_210_);
lean_dec(v_h__4_209_);
lean_dec(v_h__2_207_);
lean_dec(v_h__1_206_);
v_a_216_ = lean_ctor_get(v_x_205_, 0);
lean_inc_ref(v_a_216_);
v_a_217_ = lean_ctor_get(v_x_205_, 1);
lean_inc_ref(v_a_217_);
lean_dec_ref_known(v_x_205_, 2);
v___x_218_ = lean_apply_2(v_h__3_208_, v_a_216_, v_a_217_);
return v___x_218_;
}
case 3:
{
lean_object* v_a_219_; lean_object* v_a_220_; lean_object* v___x_221_; 
lean_dec(v_h__6_211_);
lean_dec(v_h__5_210_);
lean_dec(v_h__3_208_);
lean_dec(v_h__2_207_);
lean_dec(v_h__1_206_);
v_a_219_ = lean_ctor_get(v_x_205_, 0);
lean_inc_ref(v_a_219_);
v_a_220_ = lean_ctor_get(v_x_205_, 1);
lean_inc_ref(v_a_220_);
lean_dec_ref_known(v_x_205_, 2);
v___x_221_ = lean_apply_2(v_h__4_209_, v_a_219_, v_a_220_);
return v___x_221_;
}
case 4:
{
lean_object* v_a_222_; lean_object* v_a_223_; lean_object* v___x_224_; 
lean_dec(v_h__6_211_);
lean_dec(v_h__4_209_);
lean_dec(v_h__3_208_);
lean_dec(v_h__2_207_);
lean_dec(v_h__1_206_);
v_a_222_ = lean_ctor_get(v_x_205_, 0);
lean_inc_ref(v_a_222_);
v_a_223_ = lean_ctor_get(v_x_205_, 1);
lean_inc_ref(v_a_223_);
lean_dec_ref_known(v_x_205_, 2);
v___x_224_ = lean_apply_2(v_h__5_210_, v_a_222_, v_a_223_);
return v___x_224_;
}
default: 
{
lean_object* v_a_225_; lean_object* v_a_226_; lean_object* v___x_227_; 
lean_dec(v_h__5_210_);
lean_dec(v_h__4_209_);
lean_dec(v_h__3_208_);
lean_dec(v_h__2_207_);
lean_dec(v_h__1_206_);
v_a_225_ = lean_ctor_get(v_x_205_, 0);
lean_inc_ref(v_a_225_);
v_a_226_ = lean_ctor_get(v_x_205_, 1);
lean_inc_ref(v_a_226_);
lean_dec_ref_known(v_x_205_, 2);
v___x_227_ = lean_apply_2(v_h__6_211_, v_a_225_, v_a_226_);
return v___x_227_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_minicalc_Minicalc_Expr(uint8_t builtin);
lean_object* initialize_minicalc_Minicalc_Evaluator(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_minicalc_Minicalc_Optimizer(uint8_t builtin) {
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
res = initialize_minicalc_Minicalc_Evaluator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

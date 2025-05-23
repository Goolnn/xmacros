#ifndef GOOLNN_XMACROS_PRIV_SUFFIX_H
#define GOOLNN_XMACROS_PRIV_SUFFIX_H

#include "xmacros/priv/overload.h"
#include "xmacros/priv/combine.h"
#include "xmacros/priv/concat.h"
#include "xmacros/priv/space.h"
#include "xmacros/priv/join.h"

#define priv_suffix_combine_0(suf, ...)
#define priv_suffix_combine_1(suf, v, ...) priv_combine_2(v, suf)
#define priv_suffix_combine_2(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_1(suf, __VA_ARGS__)
#define priv_suffix_combine_3(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_2(suf, __VA_ARGS__)
#define priv_suffix_combine_4(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_3(suf, __VA_ARGS__)
#define priv_suffix_combine_5(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_4(suf, __VA_ARGS__)
#define priv_suffix_combine_6(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_5(suf, __VA_ARGS__)
#define priv_suffix_combine_7(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_6(suf, __VA_ARGS__)
#define priv_suffix_combine_8(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_7(suf, __VA_ARGS__)
#define priv_suffix_combine_9(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_8(suf, __VA_ARGS__)
#define priv_suffix_combine_10(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_9(suf, __VA_ARGS__)
#define priv_suffix_combine_11(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_10(suf, __VA_ARGS__)
#define priv_suffix_combine_12(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_11(suf, __VA_ARGS__)
#define priv_suffix_combine_13(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_12(suf, __VA_ARGS__)
#define priv_suffix_combine_14(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_13(suf, __VA_ARGS__)
#define priv_suffix_combine_15(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_14(suf, __VA_ARGS__)
#define priv_suffix_combine_16(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_15(suf, __VA_ARGS__)
#define priv_suffix_combine_17(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_16(suf, __VA_ARGS__)
#define priv_suffix_combine_18(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_17(suf, __VA_ARGS__)
#define priv_suffix_combine_19(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_18(suf, __VA_ARGS__)
#define priv_suffix_combine_20(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_19(suf, __VA_ARGS__)
#define priv_suffix_combine_21(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_20(suf, __VA_ARGS__)
#define priv_suffix_combine_22(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_21(suf, __VA_ARGS__)
#define priv_suffix_combine_23(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_22(suf, __VA_ARGS__)
#define priv_suffix_combine_24(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_23(suf, __VA_ARGS__)
#define priv_suffix_combine_25(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_24(suf, __VA_ARGS__)
#define priv_suffix_combine_26(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_25(suf, __VA_ARGS__)
#define priv_suffix_combine_27(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_26(suf, __VA_ARGS__)
#define priv_suffix_combine_28(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_27(suf, __VA_ARGS__)
#define priv_suffix_combine_29(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_28(suf, __VA_ARGS__)
#define priv_suffix_combine_30(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_29(suf, __VA_ARGS__)
#define priv_suffix_combine_31(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_30(suf, __VA_ARGS__)
#define priv_suffix_combine_32(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_31(suf, __VA_ARGS__)
#define priv_suffix_combine_33(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_32(suf, __VA_ARGS__)
#define priv_suffix_combine_34(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_33(suf, __VA_ARGS__)
#define priv_suffix_combine_35(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_34(suf, __VA_ARGS__)
#define priv_suffix_combine_36(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_35(suf, __VA_ARGS__)
#define priv_suffix_combine_37(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_36(suf, __VA_ARGS__)
#define priv_suffix_combine_38(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_37(suf, __VA_ARGS__)
#define priv_suffix_combine_39(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_38(suf, __VA_ARGS__)
#define priv_suffix_combine_40(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_39(suf, __VA_ARGS__)
#define priv_suffix_combine_41(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_40(suf, __VA_ARGS__)
#define priv_suffix_combine_42(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_41(suf, __VA_ARGS__)
#define priv_suffix_combine_43(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_42(suf, __VA_ARGS__)
#define priv_suffix_combine_44(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_43(suf, __VA_ARGS__)
#define priv_suffix_combine_45(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_44(suf, __VA_ARGS__)
#define priv_suffix_combine_46(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_45(suf, __VA_ARGS__)
#define priv_suffix_combine_47(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_46(suf, __VA_ARGS__)
#define priv_suffix_combine_48(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_47(suf, __VA_ARGS__)
#define priv_suffix_combine_49(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_48(suf, __VA_ARGS__)
#define priv_suffix_combine_50(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_49(suf, __VA_ARGS__)
#define priv_suffix_combine_51(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_50(suf, __VA_ARGS__)
#define priv_suffix_combine_52(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_51(suf, __VA_ARGS__)
#define priv_suffix_combine_53(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_52(suf, __VA_ARGS__)
#define priv_suffix_combine_54(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_53(suf, __VA_ARGS__)
#define priv_suffix_combine_55(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_54(suf, __VA_ARGS__)
#define priv_suffix_combine_56(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_55(suf, __VA_ARGS__)
#define priv_suffix_combine_57(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_56(suf, __VA_ARGS__)
#define priv_suffix_combine_58(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_57(suf, __VA_ARGS__)
#define priv_suffix_combine_59(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_58(suf, __VA_ARGS__)
#define priv_suffix_combine_60(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_59(suf, __VA_ARGS__)
#define priv_suffix_combine_61(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_60(suf, __VA_ARGS__)
#define priv_suffix_combine_62(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_61(suf, __VA_ARGS__)
#define priv_suffix_combine_63(suf, v, ...) priv_combine_2(v, suf), priv_suffix_combine_62(suf, __VA_ARGS__)

#define priv_suffix_concat_0(suf, ...)
#define priv_suffix_concat_1(suf, v, ...) priv_concat_2(v, suf)
#define priv_suffix_concat_2(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_1(suf, __VA_ARGS__)
#define priv_suffix_concat_3(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_2(suf, __VA_ARGS__)
#define priv_suffix_concat_4(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_3(suf, __VA_ARGS__)
#define priv_suffix_concat_5(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_4(suf, __VA_ARGS__)
#define priv_suffix_concat_6(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_5(suf, __VA_ARGS__)
#define priv_suffix_concat_7(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_6(suf, __VA_ARGS__)
#define priv_suffix_concat_8(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_7(suf, __VA_ARGS__)
#define priv_suffix_concat_9(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_8(suf, __VA_ARGS__)
#define priv_suffix_concat_10(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_9(suf, __VA_ARGS__)
#define priv_suffix_concat_11(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_10(suf, __VA_ARGS__)
#define priv_suffix_concat_12(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_11(suf, __VA_ARGS__)
#define priv_suffix_concat_13(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_12(suf, __VA_ARGS__)
#define priv_suffix_concat_14(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_13(suf, __VA_ARGS__)
#define priv_suffix_concat_15(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_14(suf, __VA_ARGS__)
#define priv_suffix_concat_16(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_15(suf, __VA_ARGS__)
#define priv_suffix_concat_17(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_16(suf, __VA_ARGS__)
#define priv_suffix_concat_18(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_17(suf, __VA_ARGS__)
#define priv_suffix_concat_19(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_18(suf, __VA_ARGS__)
#define priv_suffix_concat_20(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_19(suf, __VA_ARGS__)
#define priv_suffix_concat_21(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_20(suf, __VA_ARGS__)
#define priv_suffix_concat_22(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_21(suf, __VA_ARGS__)
#define priv_suffix_concat_23(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_22(suf, __VA_ARGS__)
#define priv_suffix_concat_24(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_23(suf, __VA_ARGS__)
#define priv_suffix_concat_25(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_24(suf, __VA_ARGS__)
#define priv_suffix_concat_26(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_25(suf, __VA_ARGS__)
#define priv_suffix_concat_27(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_26(suf, __VA_ARGS__)
#define priv_suffix_concat_28(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_27(suf, __VA_ARGS__)
#define priv_suffix_concat_29(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_28(suf, __VA_ARGS__)
#define priv_suffix_concat_30(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_29(suf, __VA_ARGS__)
#define priv_suffix_concat_31(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_30(suf, __VA_ARGS__)
#define priv_suffix_concat_32(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_31(suf, __VA_ARGS__)
#define priv_suffix_concat_33(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_32(suf, __VA_ARGS__)
#define priv_suffix_concat_34(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_33(suf, __VA_ARGS__)
#define priv_suffix_concat_35(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_34(suf, __VA_ARGS__)
#define priv_suffix_concat_36(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_35(suf, __VA_ARGS__)
#define priv_suffix_concat_37(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_36(suf, __VA_ARGS__)
#define priv_suffix_concat_38(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_37(suf, __VA_ARGS__)
#define priv_suffix_concat_39(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_38(suf, __VA_ARGS__)
#define priv_suffix_concat_40(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_39(suf, __VA_ARGS__)
#define priv_suffix_concat_41(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_40(suf, __VA_ARGS__)
#define priv_suffix_concat_42(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_41(suf, __VA_ARGS__)
#define priv_suffix_concat_43(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_42(suf, __VA_ARGS__)
#define priv_suffix_concat_44(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_43(suf, __VA_ARGS__)
#define priv_suffix_concat_45(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_44(suf, __VA_ARGS__)
#define priv_suffix_concat_46(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_45(suf, __VA_ARGS__)
#define priv_suffix_concat_47(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_46(suf, __VA_ARGS__)
#define priv_suffix_concat_48(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_47(suf, __VA_ARGS__)
#define priv_suffix_concat_49(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_48(suf, __VA_ARGS__)
#define priv_suffix_concat_50(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_49(suf, __VA_ARGS__)
#define priv_suffix_concat_51(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_50(suf, __VA_ARGS__)
#define priv_suffix_concat_52(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_51(suf, __VA_ARGS__)
#define priv_suffix_concat_53(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_52(suf, __VA_ARGS__)
#define priv_suffix_concat_54(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_53(suf, __VA_ARGS__)
#define priv_suffix_concat_55(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_54(suf, __VA_ARGS__)
#define priv_suffix_concat_56(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_55(suf, __VA_ARGS__)
#define priv_suffix_concat_57(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_56(suf, __VA_ARGS__)
#define priv_suffix_concat_58(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_57(suf, __VA_ARGS__)
#define priv_suffix_concat_59(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_58(suf, __VA_ARGS__)
#define priv_suffix_concat_60(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_59(suf, __VA_ARGS__)
#define priv_suffix_concat_61(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_60(suf, __VA_ARGS__)
#define priv_suffix_concat_62(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_61(suf, __VA_ARGS__)
#define priv_suffix_concat_63(suf, v, ...) priv_concat_2(v, suf), priv_suffix_concat_62(suf, __VA_ARGS__)

#define priv_suffix_space_0(suf, ...)
#define priv_suffix_space_1(suf, v, ...) priv_space_2(v, suf)
#define priv_suffix_space_2(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_1(suf, __VA_ARGS__)
#define priv_suffix_space_3(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_2(suf, __VA_ARGS__)
#define priv_suffix_space_4(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_3(suf, __VA_ARGS__)
#define priv_suffix_space_5(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_4(suf, __VA_ARGS__)
#define priv_suffix_space_6(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_5(suf, __VA_ARGS__)
#define priv_suffix_space_7(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_6(suf, __VA_ARGS__)
#define priv_suffix_space_8(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_7(suf, __VA_ARGS__)
#define priv_suffix_space_9(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_8(suf, __VA_ARGS__)
#define priv_suffix_space_10(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_9(suf, __VA_ARGS__)
#define priv_suffix_space_11(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_10(suf, __VA_ARGS__)
#define priv_suffix_space_12(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_11(suf, __VA_ARGS__)
#define priv_suffix_space_13(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_12(suf, __VA_ARGS__)
#define priv_suffix_space_14(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_13(suf, __VA_ARGS__)
#define priv_suffix_space_15(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_14(suf, __VA_ARGS__)
#define priv_suffix_space_16(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_15(suf, __VA_ARGS__)
#define priv_suffix_space_17(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_16(suf, __VA_ARGS__)
#define priv_suffix_space_18(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_17(suf, __VA_ARGS__)
#define priv_suffix_space_19(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_18(suf, __VA_ARGS__)
#define priv_suffix_space_20(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_19(suf, __VA_ARGS__)
#define priv_suffix_space_21(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_20(suf, __VA_ARGS__)
#define priv_suffix_space_22(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_21(suf, __VA_ARGS__)
#define priv_suffix_space_23(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_22(suf, __VA_ARGS__)
#define priv_suffix_space_24(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_23(suf, __VA_ARGS__)
#define priv_suffix_space_25(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_24(suf, __VA_ARGS__)
#define priv_suffix_space_26(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_25(suf, __VA_ARGS__)
#define priv_suffix_space_27(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_26(suf, __VA_ARGS__)
#define priv_suffix_space_28(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_27(suf, __VA_ARGS__)
#define priv_suffix_space_29(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_28(suf, __VA_ARGS__)
#define priv_suffix_space_30(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_29(suf, __VA_ARGS__)
#define priv_suffix_space_31(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_30(suf, __VA_ARGS__)
#define priv_suffix_space_32(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_31(suf, __VA_ARGS__)
#define priv_suffix_space_33(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_32(suf, __VA_ARGS__)
#define priv_suffix_space_34(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_33(suf, __VA_ARGS__)
#define priv_suffix_space_35(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_34(suf, __VA_ARGS__)
#define priv_suffix_space_36(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_35(suf, __VA_ARGS__)
#define priv_suffix_space_37(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_36(suf, __VA_ARGS__)
#define priv_suffix_space_38(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_37(suf, __VA_ARGS__)
#define priv_suffix_space_39(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_38(suf, __VA_ARGS__)
#define priv_suffix_space_40(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_39(suf, __VA_ARGS__)
#define priv_suffix_space_41(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_40(suf, __VA_ARGS__)
#define priv_suffix_space_42(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_41(suf, __VA_ARGS__)
#define priv_suffix_space_43(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_42(suf, __VA_ARGS__)
#define priv_suffix_space_44(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_43(suf, __VA_ARGS__)
#define priv_suffix_space_45(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_44(suf, __VA_ARGS__)
#define priv_suffix_space_46(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_45(suf, __VA_ARGS__)
#define priv_suffix_space_47(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_46(suf, __VA_ARGS__)
#define priv_suffix_space_48(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_47(suf, __VA_ARGS__)
#define priv_suffix_space_49(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_48(suf, __VA_ARGS__)
#define priv_suffix_space_50(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_49(suf, __VA_ARGS__)
#define priv_suffix_space_51(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_50(suf, __VA_ARGS__)
#define priv_suffix_space_52(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_51(suf, __VA_ARGS__)
#define priv_suffix_space_53(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_52(suf, __VA_ARGS__)
#define priv_suffix_space_54(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_53(suf, __VA_ARGS__)
#define priv_suffix_space_55(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_54(suf, __VA_ARGS__)
#define priv_suffix_space_56(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_55(suf, __VA_ARGS__)
#define priv_suffix_space_57(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_56(suf, __VA_ARGS__)
#define priv_suffix_space_58(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_57(suf, __VA_ARGS__)
#define priv_suffix_space_59(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_58(suf, __VA_ARGS__)
#define priv_suffix_space_60(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_59(suf, __VA_ARGS__)
#define priv_suffix_space_61(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_60(suf, __VA_ARGS__)
#define priv_suffix_space_62(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_61(suf, __VA_ARGS__)
#define priv_suffix_space_63(suf, v, ...) priv_space_2(v, suf), priv_suffix_space_62(suf, __VA_ARGS__)

#define priv_suffix_join_0(suf, sep, ...)
#define priv_suffix_join_1(suf, sep, v, ...) priv_join_2(sep, v, suf)
#define priv_suffix_join_2(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_1(suf, sep, __VA_ARGS__)
#define priv_suffix_join_3(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_2(suf, sep, __VA_ARGS__)
#define priv_suffix_join_4(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_3(suf, sep, __VA_ARGS__)
#define priv_suffix_join_5(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_4(suf, sep, __VA_ARGS__)
#define priv_suffix_join_6(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_5(suf, sep, __VA_ARGS__)
#define priv_suffix_join_7(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_6(suf, sep, __VA_ARGS__)
#define priv_suffix_join_8(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_7(suf, sep, __VA_ARGS__)
#define priv_suffix_join_9(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_8(suf, sep, __VA_ARGS__)
#define priv_suffix_join_10(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_9(suf, sep, __VA_ARGS__)
#define priv_suffix_join_11(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_10(suf, sep, __VA_ARGS__)
#define priv_suffix_join_12(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_11(suf, sep, __VA_ARGS__)
#define priv_suffix_join_13(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_12(suf, sep, __VA_ARGS__)
#define priv_suffix_join_14(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_13(suf, sep, __VA_ARGS__)
#define priv_suffix_join_15(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_14(suf, sep, __VA_ARGS__)
#define priv_suffix_join_16(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_15(suf, sep, __VA_ARGS__)
#define priv_suffix_join_17(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_16(suf, sep, __VA_ARGS__)
#define priv_suffix_join_18(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_17(suf, sep, __VA_ARGS__)
#define priv_suffix_join_19(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_18(suf, sep, __VA_ARGS__)
#define priv_suffix_join_20(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_19(suf, sep, __VA_ARGS__)
#define priv_suffix_join_21(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_20(suf, sep, __VA_ARGS__)
#define priv_suffix_join_22(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_21(suf, sep, __VA_ARGS__)
#define priv_suffix_join_23(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_22(suf, sep, __VA_ARGS__)
#define priv_suffix_join_24(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_23(suf, sep, __VA_ARGS__)
#define priv_suffix_join_25(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_24(suf, sep, __VA_ARGS__)
#define priv_suffix_join_26(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_25(suf, sep, __VA_ARGS__)
#define priv_suffix_join_27(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_26(suf, sep, __VA_ARGS__)
#define priv_suffix_join_28(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_27(suf, sep, __VA_ARGS__)
#define priv_suffix_join_29(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_28(suf, sep, __VA_ARGS__)
#define priv_suffix_join_30(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_29(suf, sep, __VA_ARGS__)
#define priv_suffix_join_31(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_30(suf, sep, __VA_ARGS__)
#define priv_suffix_join_32(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_31(suf, sep, __VA_ARGS__)
#define priv_suffix_join_33(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_32(suf, sep, __VA_ARGS__)
#define priv_suffix_join_34(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_33(suf, sep, __VA_ARGS__)
#define priv_suffix_join_35(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_34(suf, sep, __VA_ARGS__)
#define priv_suffix_join_36(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_35(suf, sep, __VA_ARGS__)
#define priv_suffix_join_37(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_36(suf, sep, __VA_ARGS__)
#define priv_suffix_join_38(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_37(suf, sep, __VA_ARGS__)
#define priv_suffix_join_39(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_38(suf, sep, __VA_ARGS__)
#define priv_suffix_join_40(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_39(suf, sep, __VA_ARGS__)
#define priv_suffix_join_41(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_40(suf, sep, __VA_ARGS__)
#define priv_suffix_join_42(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_41(suf, sep, __VA_ARGS__)
#define priv_suffix_join_43(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_42(suf, sep, __VA_ARGS__)
#define priv_suffix_join_44(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_43(suf, sep, __VA_ARGS__)
#define priv_suffix_join_45(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_44(suf, sep, __VA_ARGS__)
#define priv_suffix_join_46(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_45(suf, sep, __VA_ARGS__)
#define priv_suffix_join_47(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_46(suf, sep, __VA_ARGS__)
#define priv_suffix_join_48(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_47(suf, sep, __VA_ARGS__)
#define priv_suffix_join_49(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_48(suf, sep, __VA_ARGS__)
#define priv_suffix_join_50(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_49(suf, sep, __VA_ARGS__)
#define priv_suffix_join_51(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_50(suf, sep, __VA_ARGS__)
#define priv_suffix_join_52(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_51(suf, sep, __VA_ARGS__)
#define priv_suffix_join_53(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_52(suf, sep, __VA_ARGS__)
#define priv_suffix_join_54(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_53(suf, sep, __VA_ARGS__)
#define priv_suffix_join_55(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_54(suf, sep, __VA_ARGS__)
#define priv_suffix_join_56(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_55(suf, sep, __VA_ARGS__)
#define priv_suffix_join_57(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_56(suf, sep, __VA_ARGS__)
#define priv_suffix_join_58(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_57(suf, sep, __VA_ARGS__)
#define priv_suffix_join_59(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_58(suf, sep, __VA_ARGS__)
#define priv_suffix_join_60(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_59(suf, sep, __VA_ARGS__)
#define priv_suffix_join_61(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_60(suf, sep, __VA_ARGS__)
#define priv_suffix_join_62(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_61(suf, sep, __VA_ARGS__)
#define priv_suffix_join_63(suf, sep, v, ...) priv_join_2(sep, v, suf), priv_suffix_join_62(suf, sep, __VA_ARGS__)

#define priv_suffix_comma_0(suf, ...)
#define priv_suffix_comma_1(suf, v, ...) (v, suf)
#define priv_suffix_comma_2(suf, v, ...) (v, suf), priv_suffix_comma_1(suf, __VA_ARGS__)
#define priv_suffix_comma_3(suf, v, ...) (v, suf), priv_suffix_comma_2(suf, __VA_ARGS__)
#define priv_suffix_comma_4(suf, v, ...) (v, suf), priv_suffix_comma_3(suf, __VA_ARGS__)
#define priv_suffix_comma_5(suf, v, ...) (v, suf), priv_suffix_comma_4(suf, __VA_ARGS__)
#define priv_suffix_comma_6(suf, v, ...) (v, suf), priv_suffix_comma_5(suf, __VA_ARGS__)
#define priv_suffix_comma_7(suf, v, ...) (v, suf), priv_suffix_comma_6(suf, __VA_ARGS__)
#define priv_suffix_comma_8(suf, v, ...) (v, suf), priv_suffix_comma_7(suf, __VA_ARGS__)
#define priv_suffix_comma_9(suf, v, ...) (v, suf), priv_suffix_comma_8(suf, __VA_ARGS__)
#define priv_suffix_comma_10(suf, v, ...) (v, suf), priv_suffix_comma_9(suf, __VA_ARGS__)
#define priv_suffix_comma_11(suf, v, ...) (v, suf), priv_suffix_comma_10(suf, __VA_ARGS__)
#define priv_suffix_comma_12(suf, v, ...) (v, suf), priv_suffix_comma_11(suf, __VA_ARGS__)
#define priv_suffix_comma_13(suf, v, ...) (v, suf), priv_suffix_comma_12(suf, __VA_ARGS__)
#define priv_suffix_comma_14(suf, v, ...) (v, suf), priv_suffix_comma_13(suf, __VA_ARGS__)
#define priv_suffix_comma_15(suf, v, ...) (v, suf), priv_suffix_comma_14(suf, __VA_ARGS__)
#define priv_suffix_comma_16(suf, v, ...) (v, suf), priv_suffix_comma_15(suf, __VA_ARGS__)
#define priv_suffix_comma_17(suf, v, ...) (v, suf), priv_suffix_comma_16(suf, __VA_ARGS__)
#define priv_suffix_comma_18(suf, v, ...) (v, suf), priv_suffix_comma_17(suf, __VA_ARGS__)
#define priv_suffix_comma_19(suf, v, ...) (v, suf), priv_suffix_comma_18(suf, __VA_ARGS__)
#define priv_suffix_comma_20(suf, v, ...) (v, suf), priv_suffix_comma_19(suf, __VA_ARGS__)
#define priv_suffix_comma_21(suf, v, ...) (v, suf), priv_suffix_comma_20(suf, __VA_ARGS__)
#define priv_suffix_comma_22(suf, v, ...) (v, suf), priv_suffix_comma_21(suf, __VA_ARGS__)
#define priv_suffix_comma_23(suf, v, ...) (v, suf), priv_suffix_comma_22(suf, __VA_ARGS__)
#define priv_suffix_comma_24(suf, v, ...) (v, suf), priv_suffix_comma_23(suf, __VA_ARGS__)
#define priv_suffix_comma_25(suf, v, ...) (v, suf), priv_suffix_comma_24(suf, __VA_ARGS__)
#define priv_suffix_comma_26(suf, v, ...) (v, suf), priv_suffix_comma_25(suf, __VA_ARGS__)
#define priv_suffix_comma_27(suf, v, ...) (v, suf), priv_suffix_comma_26(suf, __VA_ARGS__)
#define priv_suffix_comma_28(suf, v, ...) (v, suf), priv_suffix_comma_27(suf, __VA_ARGS__)
#define priv_suffix_comma_29(suf, v, ...) (v, suf), priv_suffix_comma_28(suf, __VA_ARGS__)
#define priv_suffix_comma_30(suf, v, ...) (v, suf), priv_suffix_comma_29(suf, __VA_ARGS__)
#define priv_suffix_comma_31(suf, v, ...) (v, suf), priv_suffix_comma_30(suf, __VA_ARGS__)
#define priv_suffix_comma_32(suf, v, ...) (v, suf), priv_suffix_comma_31(suf, __VA_ARGS__)
#define priv_suffix_comma_33(suf, v, ...) (v, suf), priv_suffix_comma_32(suf, __VA_ARGS__)
#define priv_suffix_comma_34(suf, v, ...) (v, suf), priv_suffix_comma_33(suf, __VA_ARGS__)
#define priv_suffix_comma_35(suf, v, ...) (v, suf), priv_suffix_comma_34(suf, __VA_ARGS__)
#define priv_suffix_comma_36(suf, v, ...) (v, suf), priv_suffix_comma_35(suf, __VA_ARGS__)
#define priv_suffix_comma_37(suf, v, ...) (v, suf), priv_suffix_comma_36(suf, __VA_ARGS__)
#define priv_suffix_comma_38(suf, v, ...) (v, suf), priv_suffix_comma_37(suf, __VA_ARGS__)
#define priv_suffix_comma_39(suf, v, ...) (v, suf), priv_suffix_comma_38(suf, __VA_ARGS__)
#define priv_suffix_comma_40(suf, v, ...) (v, suf), priv_suffix_comma_39(suf, __VA_ARGS__)
#define priv_suffix_comma_41(suf, v, ...) (v, suf), priv_suffix_comma_40(suf, __VA_ARGS__)
#define priv_suffix_comma_42(suf, v, ...) (v, suf), priv_suffix_comma_41(suf, __VA_ARGS__)
#define priv_suffix_comma_43(suf, v, ...) (v, suf), priv_suffix_comma_42(suf, __VA_ARGS__)
#define priv_suffix_comma_44(suf, v, ...) (v, suf), priv_suffix_comma_43(suf, __VA_ARGS__)
#define priv_suffix_comma_45(suf, v, ...) (v, suf), priv_suffix_comma_44(suf, __VA_ARGS__)
#define priv_suffix_comma_46(suf, v, ...) (v, suf), priv_suffix_comma_45(suf, __VA_ARGS__)
#define priv_suffix_comma_47(suf, v, ...) (v, suf), priv_suffix_comma_46(suf, __VA_ARGS__)
#define priv_suffix_comma_48(suf, v, ...) (v, suf), priv_suffix_comma_47(suf, __VA_ARGS__)
#define priv_suffix_comma_49(suf, v, ...) (v, suf), priv_suffix_comma_48(suf, __VA_ARGS__)
#define priv_suffix_comma_50(suf, v, ...) (v, suf), priv_suffix_comma_49(suf, __VA_ARGS__)
#define priv_suffix_comma_51(suf, v, ...) (v, suf), priv_suffix_comma_50(suf, __VA_ARGS__)
#define priv_suffix_comma_52(suf, v, ...) (v, suf), priv_suffix_comma_51(suf, __VA_ARGS__)
#define priv_suffix_comma_53(suf, v, ...) (v, suf), priv_suffix_comma_52(suf, __VA_ARGS__)
#define priv_suffix_comma_54(suf, v, ...) (v, suf), priv_suffix_comma_53(suf, __VA_ARGS__)
#define priv_suffix_comma_55(suf, v, ...) (v, suf), priv_suffix_comma_54(suf, __VA_ARGS__)
#define priv_suffix_comma_56(suf, v, ...) (v, suf), priv_suffix_comma_55(suf, __VA_ARGS__)
#define priv_suffix_comma_57(suf, v, ...) (v, suf), priv_suffix_comma_56(suf, __VA_ARGS__)
#define priv_suffix_comma_58(suf, v, ...) (v, suf), priv_suffix_comma_57(suf, __VA_ARGS__)
#define priv_suffix_comma_59(suf, v, ...) (v, suf), priv_suffix_comma_58(suf, __VA_ARGS__)
#define priv_suffix_comma_60(suf, v, ...) (v, suf), priv_suffix_comma_59(suf, __VA_ARGS__)
#define priv_suffix_comma_61(suf, v, ...) (v, suf), priv_suffix_comma_60(suf, __VA_ARGS__)
#define priv_suffix_comma_62(suf, v, ...) (v, suf), priv_suffix_comma_61(suf, __VA_ARGS__)
#define priv_suffix_comma_63(suf, v, ...) (v, suf), priv_suffix_comma_62(suf, __VA_ARGS__)

#define priv_suffix_combine(suf, ...) priv_overload(priv_suffix_combine, priv_argc(__VA_ARGS__))(suf, __VA_ARGS__)
#define priv_suffix_concat(suf, ...) priv_overload(priv_suffix_concat, priv_argc(__VA_ARGS__))(suf, __VA_ARGS__)
#define priv_suffix_space(suf, ...) priv_overload(priv_suffix_space, priv_argc(__VA_ARGS__))(suf, __VA_ARGS__)
#define priv_suffix_join(suf, sep, ...) priv_overload(priv_suffix_join, priv_argc(__VA_ARGS__))(suf, sep, __VA_ARGS__)
#define priv_suffix_comma(suf, ...) priv_overload(priv_suffix_comma, priv_argc(__VA_ARGS__))(suf, __VA_ARGS__)

#endif

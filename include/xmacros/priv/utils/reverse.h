#ifndef GOOLNN_XMACROS_PRIV_UTILS_REVERSE_H
#define GOOLNN_XMACROS_PRIV_UTILS_REVERSE_H

#include "xmacros/priv/overload.h"

#define priv_reverse_0()
#define priv_reverse_1(v) v
#define priv_reverse_2(v, ...) priv_reverse_1(__VA_ARGS__), v
#define priv_reverse_3(v, ...) priv_reverse_2(__VA_ARGS__), v
#define priv_reverse_4(v, ...) priv_reverse_3(__VA_ARGS__), v
#define priv_reverse_5(v, ...) priv_reverse_4(__VA_ARGS__), v
#define priv_reverse_6(v, ...) priv_reverse_5(__VA_ARGS__), v
#define priv_reverse_7(v, ...) priv_reverse_6(__VA_ARGS__), v
#define priv_reverse_8(v, ...) priv_reverse_7(__VA_ARGS__), v
#define priv_reverse_9(v, ...) priv_reverse_8(__VA_ARGS__), v
#define priv_reverse_10(v, ...) priv_reverse_9(__VA_ARGS__), v
#define priv_reverse_11(v, ...) priv_reverse_10(__VA_ARGS__), v
#define priv_reverse_12(v, ...) priv_reverse_11(__VA_ARGS__), v
#define priv_reverse_13(v, ...) priv_reverse_12(__VA_ARGS__), v
#define priv_reverse_14(v, ...) priv_reverse_13(__VA_ARGS__), v
#define priv_reverse_15(v, ...) priv_reverse_14(__VA_ARGS__), v
#define priv_reverse_16(v, ...) priv_reverse_15(__VA_ARGS__), v
#define priv_reverse_17(v, ...) priv_reverse_16(__VA_ARGS__), v
#define priv_reverse_18(v, ...) priv_reverse_17(__VA_ARGS__), v
#define priv_reverse_19(v, ...) priv_reverse_18(__VA_ARGS__), v
#define priv_reverse_20(v, ...) priv_reverse_19(__VA_ARGS__), v
#define priv_reverse_21(v, ...) priv_reverse_20(__VA_ARGS__), v
#define priv_reverse_22(v, ...) priv_reverse_21(__VA_ARGS__), v
#define priv_reverse_23(v, ...) priv_reverse_22(__VA_ARGS__), v
#define priv_reverse_24(v, ...) priv_reverse_23(__VA_ARGS__), v
#define priv_reverse_25(v, ...) priv_reverse_24(__VA_ARGS__), v
#define priv_reverse_26(v, ...) priv_reverse_25(__VA_ARGS__), v
#define priv_reverse_27(v, ...) priv_reverse_26(__VA_ARGS__), v
#define priv_reverse_28(v, ...) priv_reverse_27(__VA_ARGS__), v
#define priv_reverse_29(v, ...) priv_reverse_28(__VA_ARGS__), v
#define priv_reverse_30(v, ...) priv_reverse_29(__VA_ARGS__), v
#define priv_reverse_31(v, ...) priv_reverse_30(__VA_ARGS__), v
#define priv_reverse_32(v, ...) priv_reverse_31(__VA_ARGS__), v
#define priv_reverse_33(v, ...) priv_reverse_32(__VA_ARGS__), v
#define priv_reverse_34(v, ...) priv_reverse_33(__VA_ARGS__), v
#define priv_reverse_35(v, ...) priv_reverse_34(__VA_ARGS__), v
#define priv_reverse_36(v, ...) priv_reverse_35(__VA_ARGS__), v
#define priv_reverse_37(v, ...) priv_reverse_36(__VA_ARGS__), v
#define priv_reverse_38(v, ...) priv_reverse_37(__VA_ARGS__), v
#define priv_reverse_39(v, ...) priv_reverse_38(__VA_ARGS__), v
#define priv_reverse_40(v, ...) priv_reverse_39(__VA_ARGS__), v
#define priv_reverse_41(v, ...) priv_reverse_40(__VA_ARGS__), v
#define priv_reverse_42(v, ...) priv_reverse_41(__VA_ARGS__), v
#define priv_reverse_43(v, ...) priv_reverse_42(__VA_ARGS__), v
#define priv_reverse_44(v, ...) priv_reverse_43(__VA_ARGS__), v
#define priv_reverse_45(v, ...) priv_reverse_44(__VA_ARGS__), v
#define priv_reverse_46(v, ...) priv_reverse_45(__VA_ARGS__), v
#define priv_reverse_47(v, ...) priv_reverse_46(__VA_ARGS__), v
#define priv_reverse_48(v, ...) priv_reverse_47(__VA_ARGS__), v
#define priv_reverse_49(v, ...) priv_reverse_48(__VA_ARGS__), v
#define priv_reverse_50(v, ...) priv_reverse_49(__VA_ARGS__), v
#define priv_reverse_51(v, ...) priv_reverse_50(__VA_ARGS__), v
#define priv_reverse_52(v, ...) priv_reverse_51(__VA_ARGS__), v
#define priv_reverse_53(v, ...) priv_reverse_52(__VA_ARGS__), v
#define priv_reverse_54(v, ...) priv_reverse_53(__VA_ARGS__), v
#define priv_reverse_55(v, ...) priv_reverse_54(__VA_ARGS__), v
#define priv_reverse_56(v, ...) priv_reverse_55(__VA_ARGS__), v
#define priv_reverse_57(v, ...) priv_reverse_56(__VA_ARGS__), v
#define priv_reverse_58(v, ...) priv_reverse_57(__VA_ARGS__), v
#define priv_reverse_59(v, ...) priv_reverse_58(__VA_ARGS__), v
#define priv_reverse_60(v, ...) priv_reverse_59(__VA_ARGS__), v
#define priv_reverse_61(v, ...) priv_reverse_60(__VA_ARGS__), v
#define priv_reverse_62(v, ...) priv_reverse_61(__VA_ARGS__), v
#define priv_reverse_63(v, ...) priv_reverse_62(__VA_ARGS__), v

#define priv_reverse(...) priv_overload(priv_reverse, priv_argc(__VA_ARGS__))(__VA_ARGS__)

#endif

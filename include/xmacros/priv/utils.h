#ifndef GOOLNN_XMACROS_PRIV_UTILS_H
#define GOOLNN_XMACROS_PRIV_UTILS_H

#include "xmacros/priv/reverse.h"

#define priv_apply_unpack(...) __VA_ARGS__

#define priv_pack(...) (__VA_ARGS__)
#define priv_unpack(...) priv_apply_unpack __VA_ARGS__

#define priv_expand(...) __VA_ARGS__

#define priv_first(v, ...) v
#define priv_last(...) priv_expand(priv_first priv_pack(priv_reverse(__VA_ARGS__)))

#endif

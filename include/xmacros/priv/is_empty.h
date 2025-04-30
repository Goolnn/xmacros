#ifndef GOOLNN_XMACROS_PRIV_IS_EMPTY_H
#define GOOLNN_XMACROS_PRIV_IS_EMPTY_H

#include "xmacros/priv/argn.h"

#define priv_is_empty(...) priv_argn(2, __VA_OPT__(,) (__VA_ARGS__), 0, 1)

#endif

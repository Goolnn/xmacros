#ifndef GOOLNN_XMACROS_PRIV_UNWRAP_H
#define GOOLNN_XMACROS_PRIV_UNWRAP_H

#include "xmacros/priv/prefix.h"
#include "xmacros/priv/argc.h"

#define priv_apply_unwrap(v) v

#define priv_unwrap(...) priv_prefix_concat(priv_apply_unwrap, __VA_ARGS__)

#endif

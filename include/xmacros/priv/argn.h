#ifndef GOOLNN_XMACROS_PRIV_ARGN_H
#define GOOLNN_XMACROS_PRIV_ARGN_H

#include "xmacros/priv/utils.h"

#define priv_argn(n, ...) unwrap(first wrap(priv_pop_front(n, __VA_ARGS__)))

#endif

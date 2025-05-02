#ifndef GOOLNN_XMACROS_PRIV_ARGN_H
#define GOOLNN_XMACROS_PRIV_ARGN_H

#include "xmacros/priv/utils.h"
#include "xmacros/priv/pop.h"

#define priv_argn(n, ...) priv_unwrap(priv_first priv_wrap(priv_pop_front(n, __VA_ARGS__)))

#endif

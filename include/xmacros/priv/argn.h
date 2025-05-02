#ifndef GOOLNN_XMACROS_PRIV_ARGN_H
#define GOOLNN_XMACROS_PRIV_ARGN_H

#include "xmacros/priv/utils.h"
#include "xmacros/priv/pop.h"

#define priv_argn(n, ...) priv_unpack(priv_first priv_pack(priv_pop_front(n, __VA_ARGS__)))

#endif

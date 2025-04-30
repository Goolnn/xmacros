#ifndef GOOLNN_XMACROS_PRIV_OVERLOAD_H
#define GOOLNN_XMACROS_PRIV_OVERLOAD_H

#include "xmacros/priv/combine.h"

#define priv_select(p, q) priv_combine_2(p, q)

#define priv_overload(p, q) priv_select(p, q)

#endif

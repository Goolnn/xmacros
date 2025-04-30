#ifndef GOOLNN_XMACROS_PRIV_PAREN_H
#define GOOLNN_XMACROS_PRIV_PAREN_H

#include "xmacros/priv/argn.h"

#define priv_probe() ~, 1

#define priv_is_probe(...) priv_argn(1, __VA_ARGS__, 0)
#define priv_is_paren_probe(...) priv_probe()

#define priv_is_paren(x) priv_is_probe(priv_is_paren_probe x)

#endif

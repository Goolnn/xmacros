#ifndef GOOLNN_XMACROS_PRIV_PAREN_H
#define GOOLNN_XMACROS_PRIV_PAREN_H

#include "xmacros/priv/argn.h"

#define priv_probe(...) ~, 1

#define priv_is_paren(x) priv_argn(1, priv_probe x, 0)

#endif

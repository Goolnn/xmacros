#ifndef GOOLNN_XMACROS_XMACROS_H
#define GOOLNN_XMACROS_XMACROS_H

#include "xmacros/priv/overload.h"
#include "xmacros/priv/combine.h"
#include "xmacros/priv/concat.h"
#include "xmacros/priv/argc.h"
#include "xmacros/priv/argn.h"

#define xmacros_argc(...) priv_argc(__VA_ARGS__)
#define xmacros_argn(n, ...) priv_argn(n, __VA_ARGS__)

#define xmacros_combine(...) priv_combine(__VA_ARGS__)
#define xmacros_concat(...) priv_concat(__VA_ARGS__)

#define xmacros_overload(p, q) priv_overload(p, q)

#endif

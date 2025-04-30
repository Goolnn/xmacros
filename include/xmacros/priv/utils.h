#ifndef GOOLNN_XMACROS_PRIV_UTILS_H
#define GOOLNN_XMACROS_PRIV_UTILS_H

#include "xmacros/priv/utils/reverse.h"
#include "xmacros/priv/utils/pop.h"

#define wrap(...) (__VA_ARGS__)
#define unwrap(...) __VA_ARGS__

#define first(v, ...) v
#define last(...) unwrap(first wrap(priv_reverse(__VA_ARGS__)))

#endif

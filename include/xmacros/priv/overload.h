#ifndef GOOLNN_XMACROS_PRIV_OVERLOAD_H
#define GOOLNN_XMACROS_PRIV_OVERLOAD_H

#define priv_connect(a, b) a ## _ ## b

#define priv_select(p, q) priv_connect(p, q)

#define priv_overload(p, q) priv_select(p, q)

#endif

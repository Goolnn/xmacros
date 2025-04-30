#ifndef GOOLNN_XMACROS_PRIV_UTILS_H
#define GOOLNN_XMACROS_PRIV_UTILS_H

#define priv_wrap(...) (__VA_ARGS__)
#define priv_unwrap(...) __VA_ARGS__

#define first(v, ...) v
#define last(...) priv_unwrap(first priv_wrap(priv_reverse(__VA_ARGS__)))

#endif

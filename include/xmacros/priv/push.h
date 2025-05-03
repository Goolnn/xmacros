#ifndef GOOLNN_XMACROS_PRIV_PUSH_H
#define GOOLNN_XMACROS_PRIV_PUSH_H

#include "xmacros/priv/overload.h"
#include "xmacros/priv/is_empty.h"
#include "xmacros/priv/utils.h"

#define priv_push_front_0(...) __VA_ARGS__,
#define priv_push_front_1(...)

#define priv_push_back_0(...) , __VA_ARGS__
#define priv_push_back_1(...)

#define priv_push_front(args, ...) priv_overload(priv_push_front, priv_is_empty(priv_unpack(args)))(priv_unpack(args)) __VA_ARGS__
#define priv_push_back(args, ...) __VA_ARGS__ priv_overload(priv_push_back, priv_is_empty(priv_unpack(args)))(priv_unpack(args))

#endif

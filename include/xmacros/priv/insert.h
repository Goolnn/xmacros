#ifndef GOOLNN_XMACROS_PRIV_INSERT_H
#define GOOLNN_XMACROS_PRIV_INSERT_H

#include "xmacros/priv/overload.h"
#include "xmacros/priv/is_empty.h"
#include "xmacros/priv/utils.h"
#include "xmacros/priv/sub.h"

#define priv_insert_front_0(i, ...) priv_sub_front(i, __VA_ARGS__),
#define priv_insert_front_1(i, ...)

#define priv_insert_front(i, ...) priv_overload(priv_insert_front, priv_is_empty(priv_sub_front(i, __VA_ARGS__)))(i, __VA_ARGS__)

#define priv_insert_back_0(i, ...) , priv_pop_front(i, __VA_ARGS__)
#define priv_insert_back_1(i, ...)

#define priv_insert_back(i, ...) priv_overload(priv_insert_back, priv_is_empty(priv_pop_front(i, __VA_ARGS__)))(i, __VA_ARGS__)

#define priv_insert_0(i, v, ...) priv_insert_front(i, __VA_ARGS__) priv_unpack(v) priv_insert_back(i, __VA_ARGS__)
#define priv_insert_1(i, v, ...) __VA_ARGS__

#define priv_insert(i, v, ...) priv_overload(priv_insert, priv_is_empty(priv_unpack(v)))(i, v, __VA_ARGS__)

#endif

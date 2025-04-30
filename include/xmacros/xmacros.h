#ifndef GOOLNN_XMACROS_XMACROS_H
#define GOOLNN_XMACROS_XMACROS_H

#include "xmacros/priv/overload.h"
#include "xmacros/priv/is_empty.h"
#include "xmacros/priv/is_paren.h"
#include "xmacros/priv/reverse.h"
#include "xmacros/priv/combine.h"
#include "xmacros/priv/suffix.h"
#include "xmacros/priv/prefix.h"
#include "xmacros/priv/concat.h"
#include "xmacros/priv/utils.h"
#include "xmacros/priv/join.h"
#include "xmacros/priv/argc.h"
#include "xmacros/priv/argn.h"
#include "xmacros/priv/pop.h"

#define xmacros_argc(...) priv_argc(__VA_ARGS__)
#define xmacros_argn(n, ...) priv_argn(n, __VA_ARGS__)

#define xmacros_combine(...) priv_combine(__VA_ARGS__)
#define xmacros_concat(...) priv_concat(__VA_ARGS__)
#define xmacros_join(...) priv_join(__VA_ARGS__)

#define xmacros_overload(p, q) priv_overload(p, q)

#define xmacros_prefix_combine(pre, ...) priv_prefix_combine(pre, __VA_ARGS__)
#define xmacros_prefix_concat(pre, ...) priv_prefix_concat(pre, __VA_ARGS__)
#define xmacros_prefix_join(pre, sep, ...) priv_prefix_join(pre, sep, __VA_ARGS__)

#define xmacros_suffix_combine(pre, ...) priv_suffix_combine(pre, __VA_ARGS__)
#define xmacros_suffix_concat(pre, ...) priv_suffix_concat(pre, __VA_ARGS__)
#define xmacros_suffix_join(pre, sep, ...) priv_suffix_join(pre, sep, __VA_ARGS__)

#define xmacros_is_paren(x) priv_is_paren(x)
#define xmacros_is_empty(...) priv_is_empty(__VA_ARGS__)

#define xmacros_reverse(...) priv_reverse(__VA_ARGS__)

#define xmacros_pop_front(...) priv_pop_front(__VA_ARGS__)
#define xmacros_pop_back(...) priv_pop_back(__VA_ARGS__)

#define xmacros_wrap(...) priv_wrap(__VA_ARGS__)
#define xmacros_unwrap(...) priv_unwrap(__VA_ARGS__)

#endif

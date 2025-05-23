#ifndef GOOLNN_XMACROS_XMACROS_H
#define GOOLNN_XMACROS_XMACROS_H

#include "xmacros/priv/to_string.h"
#include "xmacros/priv/overload.h"
#include "xmacros/priv/is_empty.h"
#include "xmacros/priv/is_paren.h"
#include "xmacros/priv/reverse.h"
#include "xmacros/priv/combine.h"
#include "xmacros/priv/suffix.h"
#include "xmacros/priv/prefix.h"
#include "xmacros/priv/concat.h"
#include "xmacros/priv/unwrap.h"
#include "xmacros/priv/insert.h"
#include "xmacros/priv/space.h"
#include "xmacros/priv/utils.h"
#include "xmacros/priv/join.h"
#include "xmacros/priv/argc.h"
#include "xmacros/priv/argn.h"
#include "xmacros/priv/wrap.h"
#include "xmacros/priv/push.h"
#include "xmacros/priv/pop.h"
#include "xmacros/priv/sub.h"
#include "xmacros/priv/zip.h"

#define xmacros_argc(...) priv_argc(__VA_ARGS__)
#define xmacros_argn(n, ...) priv_argn(n, __VA_ARGS__)

#define xmacros_combine(...) priv_combine(__VA_ARGS__)
#define xmacros_concat(...) priv_concat(__VA_ARGS__)
#define xmacros_space(...) priv_space(__VA_ARGS__)
#define xmacros_join(...) priv_join(__VA_ARGS__)

#define xmacros_overload(p, q) priv_overload(p, q)

#define xmacros_prefix_combine(pre, ...) priv_prefix_combine(pre, __VA_ARGS__)
#define xmacros_prefix_concat(pre, ...) priv_prefix_concat(pre, __VA_ARGS__)
#define xmacros_prefix_space(pre, ...) priv_prefix_space(pre, __VA_ARGS__)
#define xmacros_prefix_join(pre, sep, ...) priv_prefix_join(pre, sep, __VA_ARGS__)
#define xmacros_prefix_comma(pre, ...) priv_prefix_comma(pre, __VA_ARGS__)

#define xmacros_suffix_combine(pre, ...) priv_suffix_combine(pre, __VA_ARGS__)
#define xmacros_suffix_concat(pre, ...) priv_suffix_concat(pre, __VA_ARGS__)
#define xmacros_suffix_space(pre, ...) priv_suffix_space(pre, __VA_ARGS__)
#define xmacros_suffix_join(pre, sep, ...) priv_suffix_join(pre, sep, __VA_ARGS__)
#define xmacros_suffix_comma(pre, ...) priv_suffix_comma(pre, __VA_ARGS__)

#define xmacros_is_paren(x) priv_is_paren(x)
#define xmacros_is_empty(...) priv_is_empty(__VA_ARGS__)

#define xmacros_reverse(...) priv_reverse(__VA_ARGS__)

#define xmacros_pop_front(n, ...) priv_pop_front(n, __VA_ARGS__)
#define xmacros_pop_back(n, ...) priv_pop_back(n, __VA_ARGS__)

#define xmacros_push_front(args, ...) priv_push_front(args, __VA_ARGS__)
#define xmacros_push_back(args, ...) priv_push_back(args, __VA_ARGS__)

#define xmacros_sub_front(n, ...) priv_sub_front(n, __VA_ARGS__)
#define xmacros_sub_back(n, ...) priv_sub_back(n, __VA_ARGS__)
#define xmacros_sub(i, j, ...) priv_sub(i, j, __VA_ARGS__)

#define xmacros_zip(a, b) priv_zip(a, b)

#define xmacros_insert(i, v, ...) priv_insert(i, v, __VA_ARGS__)

#define xmacros_wrap(...) priv_wrap(__VA_ARGS__)
#define xmacros_unwrap(...) priv_unwrap(__VA_ARGS__)

#define xmacros_to_string(v) priv_to_string(v)

#define xmacros_pack(...) priv_pack(__VA_ARGS__)
#define xmacros_unpack(...) priv_unpack(__VA_ARGS__)

#define xmacros_expand(...) priv_expand(__VA_ARGS__)

#define xmacros_first(...) priv_first(__VA_ARGS__)
#define xmacros_last(...) priv_last(__VA_ARGS__)

#endif

#ifndef GOOLNN_XMACROS_PRIV_TO_STRING_H
#define GOOLNN_XMACROS_PRIV_TO_STRING_H

#define priv_apply_to_string(v) #v

#define priv_to_string(v) priv_apply_to_string(v)

#endif

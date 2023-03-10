#pragma once

#include "palm/hash_table.h"

typedef htable_st *htable_ptr;

typedef enum {
    CT_NULL,
    CT_int,
    CT_float,
    CT_bool,
    CT_void,
} valType;

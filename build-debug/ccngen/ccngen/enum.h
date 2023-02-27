#pragma once
enum nodesettype {
    NS_NULL,
    NS_LINK,
    NS_STMT,
    NS_EXPR,
    NS_VARS,
    NS_DECL,
    NS_OPERATIONS,
    NS_CONSTANTS,
    _NS_SIZE,
};

enum ccn_nodetype {
    NT_NULL,
    NT_BOOL,
    NT_FLOAT,
    NT_NUM,
    NT_VAR,
    NT_VARLET,
    NT_MONOP,
    NT_BINOP,
    NT_ASSIGN,
    NT_STMTS,
    NT_VARDECL,
    NT_PARAM,
    NT_GLOBDEF,
    NT_GLOBDECL,
    NT_FOR,
    NT_DOWHILE,
    NT_WHILE,
    NT_IFELSE,
    NT_FUNBODY,
    NT_FUNDEF,
    NT_FUNDEFS,
    NT_CAST,
    NT_FUNCALL,
    NT_RETURN,
    NT_EXPRSTMT,
    NT_IDS,
    NT_ARREXPR,
    NT_EXPRS,
    NT_DECLS,
    NT_PROGRAM,
    _NT_SIZE,
};

enum ccn_traversal_type {
    TRAV_NULL,
    TRAV_PRT,
    TRAV_free,
    TRAV_check,
    TRAV_cpy,
    _TRAV_SIZE,
};

enum ccn_pass_type {
    PASS_NULL,
    PASS_SPDOSCANPARSE,
    _PASS_SIZE,
};

enum binop_type {
    BO_NULL,
    BO_add,
    BO_sub,
    BO_mul,
    BO_div,
    BO_mod,
    BO_lt,
    BO_le,
    BO_gt,
    BO_ge,
    BO_eq,
    BO_ne,
    BO_and,
    BO_or,
};

enum MonOpEnum {
    MO_NULL,
    MO_not,
    MO_neg,
};

enum Type {
    CT_NULL,
    CT_int,
    CT_float,
    CT_bool,
    CT_void,
};


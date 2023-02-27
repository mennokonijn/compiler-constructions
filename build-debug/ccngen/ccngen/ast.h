#pragma once
#pragma once
#include "ccn/ccn_types.h"
#include "ccngen/enum.h"
typedef struct ccn_node node_st;
struct NODE_DATA_BOOL {
    bool val;
};

struct NODE_DATA_FLOAT {
    float val;
};

struct NODE_DATA_NUM {
    int val;
};

struct NODE_DATA_VAR {
    union NODE_CHILDREN_VAR {
        struct NODE_CHILDREN_VAR_STRUCT {
            node_st *indices;
        } var_children_st;

        node_st *var_children_at[1];
    } var_children;

    char * name;
    node_st *decl;
};

struct NODE_DATA_VARLET {
    union NODE_CHILDREN_VARLET {
        struct NODE_CHILDREN_VARLET_STRUCT {
            node_st *indices;
        } varlet_children_st;

        node_st *varlet_children_at[1];
    } varlet_children;

    char * name;
    node_st *decl;
};

struct NODE_DATA_MONOP {
    union NODE_CHILDREN_MONOP {
        struct NODE_CHILDREN_MONOP_STRUCT {
            node_st *operand;
        } monop_children_st;

        node_st *monop_children_at[1];
    } monop_children;

    enum MonOpEnum op;
};

struct NODE_DATA_BINOP {
    union NODE_CHILDREN_BINOP {
        struct NODE_CHILDREN_BINOP_STRUCT {
            node_st *left;
            node_st *right;
        } binop_children_st;

        node_st *binop_children_at[2];
    } binop_children;

    enum binop_type type;
};

struct NODE_DATA_ASSIGN {
    union NODE_CHILDREN_ASSIGN {
        struct NODE_CHILDREN_ASSIGN_STRUCT {
            node_st *let;
            node_st *expr;
        } assign_children_st;

        node_st *assign_children_at[2];
    } assign_children;

};

struct NODE_DATA_STMTS {
    union NODE_CHILDREN_STMTS {
        struct NODE_CHILDREN_STMTS_STRUCT {
            node_st *stmt;
            node_st *next;
        } stmts_children_st;

        node_st *stmts_children_at[2];
    } stmts_children;

};

struct NODE_DATA_VARDECL {
    union NODE_CHILDREN_VARDECL {
        struct NODE_CHILDREN_VARDECL_STRUCT {
            node_st *dims;
            node_st *init;
            node_st *next;
        } vardecl_children_st;

        node_st *vardecl_children_at[3];
    } vardecl_children;

    char * name;
    enum Type type;
};

struct NODE_DATA_PARAM {
    union NODE_CHILDREN_PARAM {
        struct NODE_CHILDREN_PARAM_STRUCT {
            node_st *dims;
            node_st *next;
        } param_children_st;

        node_st *param_children_at[2];
    } param_children;

    char * name;
    enum Type type;
};

struct NODE_DATA_GLOBDEF {
    union NODE_CHILDREN_GLOBDEF {
        struct NODE_CHILDREN_GLOBDEF_STRUCT {
            node_st *dims;
            node_st *init;
        } globdef_children_st;

        node_st *globdef_children_at[2];
    } globdef_children;

    enum Type type;
    char * name;
    bool export;
};

struct NODE_DATA_GLOBDECL {
    union NODE_CHILDREN_GLOBDECL {
        struct NODE_CHILDREN_GLOBDECL_STRUCT {
            node_st *dims;
        } globdecl_children_st;

        node_st *globdecl_children_at[1];
    } globdecl_children;

    enum Type type;
    char * name;
};

struct NODE_DATA_FOR {
    union NODE_CHILDREN_FOR {
        struct NODE_CHILDREN_FOR_STRUCT {
            node_st *start_expr;
            node_st *stop;
            node_st *step;
            node_st *block;
        } for_children_st;

        node_st *for_children_at[4];
    } for_children;

    char * var;
};

struct NODE_DATA_DOWHILE {
    union NODE_CHILDREN_DOWHILE {
        struct NODE_CHILDREN_DOWHILE_STRUCT {
            node_st *cond;
            node_st *block;
        } dowhile_children_st;

        node_st *dowhile_children_at[2];
    } dowhile_children;

};

struct NODE_DATA_WHILE {
    union NODE_CHILDREN_WHILE {
        struct NODE_CHILDREN_WHILE_STRUCT {
            node_st *cond;
            node_st *block;
        } while_children_st;

        node_st *while_children_at[2];
    } while_children;

};

struct NODE_DATA_IFELSE {
    union NODE_CHILDREN_IFELSE {
        struct NODE_CHILDREN_IFELSE_STRUCT {
            node_st *cond;
            node_st *then;
            node_st *else_block;
        } ifelse_children_st;

        node_st *ifelse_children_at[3];
    } ifelse_children;

};

struct NODE_DATA_FUNBODY {
    union NODE_CHILDREN_FUNBODY {
        struct NODE_CHILDREN_FUNBODY_STRUCT {
            node_st *decls;
            node_st *local_fundefs;
            node_st *stmts;
        } funbody_children_st;

        node_st *funbody_children_at[3];
    } funbody_children;

};

struct NODE_DATA_FUNDEF {
    union NODE_CHILDREN_FUNDEF {
        struct NODE_CHILDREN_FUNDEF_STRUCT {
            node_st *body;
            node_st *params;
        } fundef_children_st;

        node_st *fundef_children_at[2];
    } fundef_children;

    enum Type type;
    char * name;
    bool export;
};

struct NODE_DATA_FUNDEFS {
    union NODE_CHILDREN_FUNDEFS {
        struct NODE_CHILDREN_FUNDEFS_STRUCT {
            node_st *fundef;
            node_st *next;
        } fundefs_children_st;

        node_st *fundefs_children_at[2];
    } fundefs_children;

};

struct NODE_DATA_CAST {
    union NODE_CHILDREN_CAST {
        struct NODE_CHILDREN_CAST_STRUCT {
            node_st *expr;
        } cast_children_st;

        node_st *cast_children_at[1];
    } cast_children;

    enum Type type;
};

struct NODE_DATA_FUNCALL {
    union NODE_CHILDREN_FUNCALL {
        struct NODE_CHILDREN_FUNCALL_STRUCT {
            node_st *args;
        } funcall_children_st;

        node_st *funcall_children_at[1];
    } funcall_children;

    char * name;
    node_st *decl;
};

struct NODE_DATA_RETURN {
    union NODE_CHILDREN_RETURN {
        struct NODE_CHILDREN_RETURN_STRUCT {
            node_st *expr;
        } return_children_st;

        node_st *return_children_at[1];
    } return_children;

};

struct NODE_DATA_EXPRSTMT {
    union NODE_CHILDREN_EXPRSTMT {
        struct NODE_CHILDREN_EXPRSTMT_STRUCT {
            node_st *expr;
        } exprstmt_children_st;

        node_st *exprstmt_children_at[1];
    } exprstmt_children;

};

struct NODE_DATA_IDS {
    union NODE_CHILDREN_IDS {
        struct NODE_CHILDREN_IDS_STRUCT {
            node_st *next;
        } ids_children_st;

        node_st *ids_children_at[1];
    } ids_children;

    char * name;
};

struct NODE_DATA_ARREXPR {
    union NODE_CHILDREN_ARREXPR {
        struct NODE_CHILDREN_ARREXPR_STRUCT {
            node_st *exprs;
        } arrexpr_children_st;

        node_st *arrexpr_children_at[1];
    } arrexpr_children;

};

struct NODE_DATA_EXPRS {
    union NODE_CHILDREN_EXPRS {
        struct NODE_CHILDREN_EXPRS_STRUCT {
            node_st *expr;
            node_st *next;
        } exprs_children_st;

        node_st *exprs_children_at[2];
    } exprs_children;

};

struct NODE_DATA_DECLS {
    union NODE_CHILDREN_DECLS {
        struct NODE_CHILDREN_DECLS_STRUCT {
            node_st *decl;
            node_st *next;
        } decls_children_st;

        node_st *decls_children_at[2];
    } decls_children;

};

struct NODE_DATA_PROGRAM {
    union NODE_CHILDREN_PROGRAM {
        struct NODE_CHILDREN_PROGRAM_STRUCT {
            node_st *decls;
        } program_children_st;

        node_st *program_children_at[1];
    } program_children;

};

#define BOOL_VAL(n) ((n)->data.N_bool->val)
#define FLOAT_VAL(n) ((n)->data.N_float->val)
#define NUM_VAL(n) ((n)->data.N_num->val)
#define VAR_INDICES(n) ((n)->data.N_var->var_children.var_children_st.indices)
#define VAR_NAME(n) ((n)->data.N_var->name)
#define VAR_DECL(n) ((n)->data.N_var->decl)
#define VARLET_INDICES(n) ((n)->data.N_varlet->varlet_children.varlet_children_st.indices)
#define VARLET_NAME(n) ((n)->data.N_varlet->name)
#define VARLET_DECL(n) ((n)->data.N_varlet->decl)
#define MONOP_OPERAND(n) ((n)->data.N_monop->monop_children.monop_children_st.operand)
#define MONOP_OP(n) ((n)->data.N_monop->op)
#define BINOP_LEFT(n) ((n)->data.N_binop->binop_children.binop_children_st.left)
#define BINOP_RIGHT(n) ((n)->data.N_binop->binop_children.binop_children_st.right)
#define BINOP_TYPE(n) ((n)->data.N_binop->type)
#define ASSIGN_LET(n) ((n)->data.N_assign->assign_children.assign_children_st.let)
#define ASSIGN_EXPR(n) ((n)->data.N_assign->assign_children.assign_children_st.expr)
#define STMTS_STMT(n) ((n)->data.N_stmts->stmts_children.stmts_children_st.stmt)
#define STMTS_NEXT(n) ((n)->data.N_stmts->stmts_children.stmts_children_st.next)
#define VARDECL_DIMS(n) ((n)->data.N_vardecl->vardecl_children.vardecl_children_st.dims)
#define VARDECL_INIT(n) ((n)->data.N_vardecl->vardecl_children.vardecl_children_st.init)
#define VARDECL_NEXT(n) ((n)->data.N_vardecl->vardecl_children.vardecl_children_st.next)
#define VARDECL_NAME(n) ((n)->data.N_vardecl->name)
#define VARDECL_TYPE(n) ((n)->data.N_vardecl->type)
#define PARAM_DIMS(n) ((n)->data.N_param->param_children.param_children_st.dims)
#define PARAM_NEXT(n) ((n)->data.N_param->param_children.param_children_st.next)
#define PARAM_NAME(n) ((n)->data.N_param->name)
#define PARAM_TYPE(n) ((n)->data.N_param->type)
#define GLOBDEF_DIMS(n) ((n)->data.N_globdef->globdef_children.globdef_children_st.dims)
#define GLOBDEF_INIT(n) ((n)->data.N_globdef->globdef_children.globdef_children_st.init)
#define GLOBDEF_TYPE(n) ((n)->data.N_globdef->type)
#define GLOBDEF_NAME(n) ((n)->data.N_globdef->name)
#define GLOBDEF_EXPORT(n) ((n)->data.N_globdef->export)
#define GLOBDECL_DIMS(n) ((n)->data.N_globdecl->globdecl_children.globdecl_children_st.dims)
#define GLOBDECL_TYPE(n) ((n)->data.N_globdecl->type)
#define GLOBDECL_NAME(n) ((n)->data.N_globdecl->name)
#define FOR_START_EXPR(n) ((n)->data.N_for->for_children.for_children_st.start_expr)
#define FOR_STOP(n) ((n)->data.N_for->for_children.for_children_st.stop)
#define FOR_STEP(n) ((n)->data.N_for->for_children.for_children_st.step)
#define FOR_BLOCK(n) ((n)->data.N_for->for_children.for_children_st.block)
#define FOR_VAR(n) ((n)->data.N_for->var)
#define DOWHILE_COND(n) ((n)->data.N_dowhile->dowhile_children.dowhile_children_st.cond)
#define DOWHILE_BLOCK(n) ((n)->data.N_dowhile->dowhile_children.dowhile_children_st.block)
#define WHILE_COND(n) ((n)->data.N_while->while_children.while_children_st.cond)
#define WHILE_BLOCK(n) ((n)->data.N_while->while_children.while_children_st.block)
#define IFELSE_COND(n) ((n)->data.N_ifelse->ifelse_children.ifelse_children_st.cond)
#define IFELSE_THEN(n) ((n)->data.N_ifelse->ifelse_children.ifelse_children_st.then)
#define IFELSE_ELSE_BLOCK(n) ((n)->data.N_ifelse->ifelse_children.ifelse_children_st.else_block)
#define FUNBODY_DECLS(n) ((n)->data.N_funbody->funbody_children.funbody_children_st.decls)
#define FUNBODY_LOCAL_FUNDEFS(n) ((n)->data.N_funbody->funbody_children.funbody_children_st.local_fundefs)
#define FUNBODY_STMTS(n) ((n)->data.N_funbody->funbody_children.funbody_children_st.stmts)
#define FUNDEF_BODY(n) ((n)->data.N_fundef->fundef_children.fundef_children_st.body)
#define FUNDEF_PARAMS(n) ((n)->data.N_fundef->fundef_children.fundef_children_st.params)
#define FUNDEF_TYPE(n) ((n)->data.N_fundef->type)
#define FUNDEF_NAME(n) ((n)->data.N_fundef->name)
#define FUNDEF_EXPORT(n) ((n)->data.N_fundef->export)
#define FUNDEFS_FUNDEF(n) ((n)->data.N_fundefs->fundefs_children.fundefs_children_st.fundef)
#define FUNDEFS_NEXT(n) ((n)->data.N_fundefs->fundefs_children.fundefs_children_st.next)
#define CAST_EXPR(n) ((n)->data.N_cast->cast_children.cast_children_st.expr)
#define CAST_TYPE(n) ((n)->data.N_cast->type)
#define FUNCALL_ARGS(n) ((n)->data.N_funcall->funcall_children.funcall_children_st.args)
#define FUNCALL_NAME(n) ((n)->data.N_funcall->name)
#define FUNCALL_DECL(n) ((n)->data.N_funcall->decl)
#define RETURN_EXPR(n) ((n)->data.N_return->return_children.return_children_st.expr)
#define EXPRSTMT_EXPR(n) ((n)->data.N_exprstmt->exprstmt_children.exprstmt_children_st.expr)
#define IDS_NEXT(n) ((n)->data.N_ids->ids_children.ids_children_st.next)
#define IDS_NAME(n) ((n)->data.N_ids->name)
#define ARREXPR_EXPRS(n) ((n)->data.N_arrexpr->arrexpr_children.arrexpr_children_st.exprs)
#define EXPRS_EXPR(n) ((n)->data.N_exprs->exprs_children.exprs_children_st.expr)
#define EXPRS_NEXT(n) ((n)->data.N_exprs->exprs_children.exprs_children_st.next)
#define DECLS_DECL(n) ((n)->data.N_decls->decls_children.decls_children_st.decl)
#define DECLS_NEXT(n) ((n)->data.N_decls->decls_children.decls_children_st.next)
#define PROGRAM_DECLS(n) ((n)->data.N_program->program_children.program_children_st.decls)
node_st *ASTbool(bool val);
node_st *ASTfloat(float val);
node_st *ASTnum(int val);
node_st *ASTvar(char * name);
node_st *ASTvarlet(char * name);
node_st *ASTmonop(node_st *operand, enum MonOpEnum op);
node_st *ASTbinop(node_st *left, node_st *right, enum binop_type type);
node_st *ASTassign(node_st *let, node_st *expr);
node_st *ASTstmts(node_st *stmt, node_st *next);
node_st *ASTvardecl(void);
node_st *ASTparam(void);
node_st *ASTglobdef(void);
node_st *ASTglobdecl(void);
node_st *ASTfor(node_st *start_expr, node_st *stop);
node_st *ASTdowhile(node_st *cond);
node_st *ASTwhile(node_st *cond);
node_st *ASTifelse(node_st *cond);
node_st *ASTfunbody(void);
node_st *ASTfundef(void);
node_st *ASTfundefs(node_st *fundef);
node_st *ASTcast(node_st *expr);
node_st *ASTfuncall(void);
node_st *ASTreturn(void);
node_st *ASTexprstmt(node_st *expr);
node_st *ASTids(void);
node_st *ASTarrexpr(node_st *exprs);
node_st *ASTexprs(node_st *expr, node_st *next);
node_st *ASTdecls(node_st *decl, node_st *next);
node_st *ASTprogram(node_st *decls);
union NODE_DATA {
    struct NODE_DATA_PROGRAM *N_program;
    struct NODE_DATA_DECLS *N_decls;
    struct NODE_DATA_EXPRS *N_exprs;
    struct NODE_DATA_ARREXPR *N_arrexpr;
    struct NODE_DATA_IDS *N_ids;
    struct NODE_DATA_EXPRSTMT *N_exprstmt;
    struct NODE_DATA_RETURN *N_return;
    struct NODE_DATA_FUNCALL *N_funcall;
    struct NODE_DATA_CAST *N_cast;
    struct NODE_DATA_FUNDEFS *N_fundefs;
    struct NODE_DATA_FUNDEF *N_fundef;
    struct NODE_DATA_FUNBODY *N_funbody;
    struct NODE_DATA_IFELSE *N_ifelse;
    struct NODE_DATA_WHILE *N_while;
    struct NODE_DATA_DOWHILE *N_dowhile;
    struct NODE_DATA_FOR *N_for;
    struct NODE_DATA_GLOBDECL *N_globdecl;
    struct NODE_DATA_GLOBDEF *N_globdef;
    struct NODE_DATA_PARAM *N_param;
    struct NODE_DATA_VARDECL *N_vardecl;
    struct NODE_DATA_STMTS *N_stmts;
    struct NODE_DATA_ASSIGN *N_assign;
    struct NODE_DATA_BINOP *N_binop;
    struct NODE_DATA_MONOP *N_monop;
    struct NODE_DATA_VARLET *N_varlet;
    struct NODE_DATA_VAR *N_var;
    struct NODE_DATA_NUM *N_num;
    struct NODE_DATA_FLOAT *N_float;
    struct NODE_DATA_BOOL *N_bool;
};

#define NODE_TYPE(n) ((n)->nodetype)
#define NODE_CHILDREN(n) ((n)->children)
#define NODE_NUMCHILDREN(n) ((n)->num_children)
#define NODE_FILENAME(n) ((n)->filename)
#define NODE_BLINE(n) ((n)->begin_line)
#define NODE_ELINE(n) ((n)->end_line)
#define NODE_BCOL(n) ((n)->begin_col)
#define NODE_ECOL(n) ((n)->end_col)
typedef struct ccn_node {
    enum ccn_nodetype nodetype;
    union NODE_DATA data;
    struct ccn_node **children;
    char *filename;
    long int num_children;
    uint32_t begin_line;
    uint32_t end_line;
    uint32_t begin_col;
    uint32_t end_col;
} ccn_node;


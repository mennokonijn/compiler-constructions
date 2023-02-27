#include "ccngen/ast.h"
#include "palm/memory.h"
node_st *NewNode() {
    node_st *node = MEMmalloc(sizeof(node_st));
    NODE_TYPE(node) = NT_NULL;
    NODE_CHILDREN(node) = NULL;
    NODE_FILENAME(node) = NULL;
    NODE_NUMCHILDREN(node) = 0;
    NODE_BLINE(node) = 0;
    NODE_ELINE(node) = 0;
    NODE_BCOL(node) = 0;
    NODE_ECOL(node) = 0;
    return node;
}

node_st *ASTbool(bool val) {
    node_st *node = NewNode();
    node->data.N_bool = MEMmalloc(sizeof(struct NODE_DATA_BOOL));
    NODE_TYPE(node) = NT_BOOL;
    BOOL_VAL(node) = val;
    NODE_NUMCHILDREN(node) = 0;
    return node;}

node_st *ASTfloat(float val) {
    node_st *node = NewNode();
    node->data.N_float = MEMmalloc(sizeof(struct NODE_DATA_FLOAT));
    NODE_TYPE(node) = NT_FLOAT;
    FLOAT_VAL(node) = val;
    NODE_NUMCHILDREN(node) = 0;
    return node;}

node_st *ASTnum(int val) {
    node_st *node = NewNode();
    node->data.N_num = MEMmalloc(sizeof(struct NODE_DATA_NUM));
    NODE_TYPE(node) = NT_NUM;
    NUM_VAL(node) = val;
    NODE_NUMCHILDREN(node) = 0;
    return node;}

node_st *ASTvar(char * name) {
    node_st *node = NewNode();
    node->data.N_var = MEMmalloc(sizeof(struct NODE_DATA_VAR));
    NODE_TYPE(node) = NT_VAR;
    VAR_INDICES(node) = NULL;
    VAR_NAME(node) = name;
    VAR_DECL(node) = NULL;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_var->var_children.var_children_at;
    return node;}

node_st *ASTvarlet(char * name) {
    node_st *node = NewNode();
    node->data.N_varlet = MEMmalloc(sizeof(struct NODE_DATA_VARLET));
    NODE_TYPE(node) = NT_VARLET;
    VARLET_INDICES(node) = NULL;
    VARLET_NAME(node) = name;
    VARLET_DECL(node) = NULL;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_varlet->varlet_children.varlet_children_at;
    return node;}

node_st *ASTmonop(node_st *operand, enum MonOpEnum op) {
    node_st *node = NewNode();
    node->data.N_monop = MEMmalloc(sizeof(struct NODE_DATA_MONOP));
    NODE_TYPE(node) = NT_MONOP;
    MONOP_OPERAND(node) = operand;
    MONOP_OP(node) = op;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_monop->monop_children.monop_children_at;
    return node;}

node_st *ASTbinop(node_st *left, node_st *right, enum binop_type type) {
    node_st *node = NewNode();
    node->data.N_binop = MEMmalloc(sizeof(struct NODE_DATA_BINOP));
    NODE_TYPE(node) = NT_BINOP;
    BINOP_LEFT(node) = left;
    BINOP_RIGHT(node) = right;
    BINOP_TYPE(node) = type;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_binop->binop_children.binop_children_at;
    return node;}

node_st *ASTassign(node_st *let, node_st *expr) {
    node_st *node = NewNode();
    node->data.N_assign = MEMmalloc(sizeof(struct NODE_DATA_ASSIGN));
    NODE_TYPE(node) = NT_ASSIGN;
    ASSIGN_LET(node) = let;
    ASSIGN_EXPR(node) = expr;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_assign->assign_children.assign_children_at;
    return node;}

node_st *ASTstmts(node_st *stmt, node_st *next) {
    node_st *node = NewNode();
    node->data.N_stmts = MEMmalloc(sizeof(struct NODE_DATA_STMTS));
    NODE_TYPE(node) = NT_STMTS;
    STMTS_STMT(node) = stmt;
    STMTS_NEXT(node) = next;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_stmts->stmts_children.stmts_children_at;
    return node;}

node_st *ASTvardecl(void) {
    node_st *node = NewNode();
    node->data.N_vardecl = MEMmalloc(sizeof(struct NODE_DATA_VARDECL));
    NODE_TYPE(node) = NT_VARDECL;
    VARDECL_DIMS(node) = NULL;
    VARDECL_INIT(node) = NULL;
    VARDECL_NEXT(node) = NULL;
    VARDECL_NAME(node) = NULL;
    VARDECL_TYPE(node) = 0;
    NODE_NUMCHILDREN(node) = 3;
    NODE_CHILDREN(node) = node->data.N_vardecl->vardecl_children.vardecl_children_at;
    return node;}

node_st *ASTparam(void) {
    node_st *node = NewNode();
    node->data.N_param = MEMmalloc(sizeof(struct NODE_DATA_PARAM));
    NODE_TYPE(node) = NT_PARAM;
    PARAM_DIMS(node) = NULL;
    PARAM_NEXT(node) = NULL;
    PARAM_NAME(node) = NULL;
    PARAM_TYPE(node) = 0;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_param->param_children.param_children_at;
    return node;}

node_st *ASTglobdef(void) {
    node_st *node = NewNode();
    node->data.N_globdef = MEMmalloc(sizeof(struct NODE_DATA_GLOBDEF));
    NODE_TYPE(node) = NT_GLOBDEF;
    GLOBDEF_DIMS(node) = NULL;
    GLOBDEF_INIT(node) = NULL;
    GLOBDEF_TYPE(node) = 0;
    GLOBDEF_NAME(node) = NULL;
    GLOBDEF_EXPORT(node) = false;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_globdef->globdef_children.globdef_children_at;
    return node;}

node_st *ASTglobdecl(void) {
    node_st *node = NewNode();
    node->data.N_globdecl = MEMmalloc(sizeof(struct NODE_DATA_GLOBDECL));
    NODE_TYPE(node) = NT_GLOBDECL;
    GLOBDECL_DIMS(node) = NULL;
    GLOBDECL_TYPE(node) = 0;
    GLOBDECL_NAME(node) = NULL;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_globdecl->globdecl_children.globdecl_children_at;
    return node;}

node_st *ASTfor(node_st *start_expr, node_st *stop) {
    node_st *node = NewNode();
    node->data.N_for = MEMmalloc(sizeof(struct NODE_DATA_FOR));
    NODE_TYPE(node) = NT_FOR;
    FOR_START_EXPR(node) = start_expr;
    FOR_STOP(node) = stop;
    FOR_STEP(node) = NULL;
    FOR_BLOCK(node) = NULL;
    FOR_VAR(node) = NULL;
    NODE_NUMCHILDREN(node) = 4;
    NODE_CHILDREN(node) = node->data.N_for->for_children.for_children_at;
    return node;}

node_st *ASTdowhile(node_st *cond) {
    node_st *node = NewNode();
    node->data.N_dowhile = MEMmalloc(sizeof(struct NODE_DATA_DOWHILE));
    NODE_TYPE(node) = NT_DOWHILE;
    DOWHILE_COND(node) = cond;
    DOWHILE_BLOCK(node) = NULL;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_dowhile->dowhile_children.dowhile_children_at;
    return node;}

node_st *ASTwhile(node_st *cond) {
    node_st *node = NewNode();
    node->data.N_while = MEMmalloc(sizeof(struct NODE_DATA_WHILE));
    NODE_TYPE(node) = NT_WHILE;
    WHILE_COND(node) = cond;
    WHILE_BLOCK(node) = NULL;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_while->while_children.while_children_at;
    return node;}

node_st *ASTifelse(node_st *cond) {
    node_st *node = NewNode();
    node->data.N_ifelse = MEMmalloc(sizeof(struct NODE_DATA_IFELSE));
    NODE_TYPE(node) = NT_IFELSE;
    IFELSE_COND(node) = cond;
    IFELSE_THEN(node) = NULL;
    IFELSE_ELSE_BLOCK(node) = NULL;
    NODE_NUMCHILDREN(node) = 3;
    NODE_CHILDREN(node) = node->data.N_ifelse->ifelse_children.ifelse_children_at;
    return node;}

node_st *ASTfunbody(void) {
    node_st *node = NewNode();
    node->data.N_funbody = MEMmalloc(sizeof(struct NODE_DATA_FUNBODY));
    NODE_TYPE(node) = NT_FUNBODY;
    FUNBODY_DECLS(node) = NULL;
    FUNBODY_LOCAL_FUNDEFS(node) = NULL;
    FUNBODY_STMTS(node) = NULL;
    NODE_NUMCHILDREN(node) = 3;
    NODE_CHILDREN(node) = node->data.N_funbody->funbody_children.funbody_children_at;
    return node;}

node_st *ASTfundef(void) {
    node_st *node = NewNode();
    node->data.N_fundef = MEMmalloc(sizeof(struct NODE_DATA_FUNDEF));
    NODE_TYPE(node) = NT_FUNDEF;
    FUNDEF_BODY(node) = NULL;
    FUNDEF_PARAMS(node) = NULL;
    FUNDEF_TYPE(node) = 0;
    FUNDEF_NAME(node) = NULL;
    FUNDEF_EXPORT(node) = false;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_fundef->fundef_children.fundef_children_at;
    return node;}

node_st *ASTfundefs(node_st *fundef) {
    node_st *node = NewNode();
    node->data.N_fundefs = MEMmalloc(sizeof(struct NODE_DATA_FUNDEFS));
    NODE_TYPE(node) = NT_FUNDEFS;
    FUNDEFS_FUNDEF(node) = fundef;
    FUNDEFS_NEXT(node) = NULL;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_fundefs->fundefs_children.fundefs_children_at;
    return node;}

node_st *ASTcast(node_st *expr) {
    node_st *node = NewNode();
    node->data.N_cast = MEMmalloc(sizeof(struct NODE_DATA_CAST));
    NODE_TYPE(node) = NT_CAST;
    CAST_EXPR(node) = expr;
    CAST_TYPE(node) = 0;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_cast->cast_children.cast_children_at;
    return node;}

node_st *ASTfuncall(void) {
    node_st *node = NewNode();
    node->data.N_funcall = MEMmalloc(sizeof(struct NODE_DATA_FUNCALL));
    NODE_TYPE(node) = NT_FUNCALL;
    FUNCALL_ARGS(node) = NULL;
    FUNCALL_NAME(node) = NULL;
    FUNCALL_DECL(node) = NULL;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_funcall->funcall_children.funcall_children_at;
    return node;}

node_st *ASTreturn(void) {
    node_st *node = NewNode();
    node->data.N_return = MEMmalloc(sizeof(struct NODE_DATA_RETURN));
    NODE_TYPE(node) = NT_RETURN;
    RETURN_EXPR(node) = NULL;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_return->return_children.return_children_at;
    return node;}

node_st *ASTexprstmt(node_st *expr) {
    node_st *node = NewNode();
    node->data.N_exprstmt = MEMmalloc(sizeof(struct NODE_DATA_EXPRSTMT));
    NODE_TYPE(node) = NT_EXPRSTMT;
    EXPRSTMT_EXPR(node) = expr;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_exprstmt->exprstmt_children.exprstmt_children_at;
    return node;}

node_st *ASTids(void) {
    node_st *node = NewNode();
    node->data.N_ids = MEMmalloc(sizeof(struct NODE_DATA_IDS));
    NODE_TYPE(node) = NT_IDS;
    IDS_NEXT(node) = NULL;
    IDS_NAME(node) = NULL;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_ids->ids_children.ids_children_at;
    return node;}

node_st *ASTarrexpr(node_st *exprs) {
    node_st *node = NewNode();
    node->data.N_arrexpr = MEMmalloc(sizeof(struct NODE_DATA_ARREXPR));
    NODE_TYPE(node) = NT_ARREXPR;
    ARREXPR_EXPRS(node) = exprs;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_arrexpr->arrexpr_children.arrexpr_children_at;
    return node;}

node_st *ASTexprs(node_st *expr, node_st *next) {
    node_st *node = NewNode();
    node->data.N_exprs = MEMmalloc(sizeof(struct NODE_DATA_EXPRS));
    NODE_TYPE(node) = NT_EXPRS;
    EXPRS_EXPR(node) = expr;
    EXPRS_NEXT(node) = next;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_exprs->exprs_children.exprs_children_at;
    return node;}

node_st *ASTdecls(node_st *decl, node_st *next) {
    node_st *node = NewNode();
    node->data.N_decls = MEMmalloc(sizeof(struct NODE_DATA_DECLS));
    NODE_TYPE(node) = NT_DECLS;
    DECLS_DECL(node) = decl;
    DECLS_NEXT(node) = next;
    NODE_NUMCHILDREN(node) = 2;
    NODE_CHILDREN(node) = node->data.N_decls->decls_children.decls_children_at;
    return node;}

node_st *ASTprogram(node_st *decls) {
    node_st *node = NewNode();
    node->data.N_program = MEMmalloc(sizeof(struct NODE_DATA_PROGRAM));
    NODE_TYPE(node) = NT_PROGRAM;
    PROGRAM_DECLS(node) = decls;
    NODE_NUMCHILDREN(node) = 1;
    NODE_CHILDREN(node) = node->data.N_program->program_children.program_children_at;
    return node;}


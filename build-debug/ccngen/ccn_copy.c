#include "ccngen/ast.h"
#include <stddef.h>
#include "palm/str.h"
#include "ccn/dynamic_core.h"
void CopyBaseNode(node_st *target, node_st *source) {
    NODE_BCOL(target) = NODE_BCOL(source);
    NODE_ECOL(target) = NODE_ECOL(source);
    NODE_BLINE(target) = NODE_BLINE(source);
    NODE_ELINE(target) = NODE_ELINE(source);
    NODE_FILENAME(target) = STRcpy(NODE_FILENAME(source));
}

ccn_node *CPYbool(ccn_node *arg_node) {
    ccn_node *new_node =ASTbool(    false);
    CopyBaseNode(new_node, arg_node);
    BOOL_VAL(new_node) = BOOL_VAL(arg_node);
    return new_node;
}

ccn_node *CPYfloat(ccn_node *arg_node) {
    ccn_node *new_node =ASTfloat(    0.0);
    CopyBaseNode(new_node, arg_node);
    FLOAT_VAL(new_node) = FLOAT_VAL(arg_node);
    return new_node;
}

ccn_node *CPYnum(ccn_node *arg_node) {
    ccn_node *new_node =ASTnum(    0);
    CopyBaseNode(new_node, arg_node);
    NUM_VAL(new_node) = NUM_VAL(arg_node);
    return new_node;
}

ccn_node *CPYvar(ccn_node *arg_node) {
    ccn_node *new_node =ASTvar(    NULL);
    CopyBaseNode(new_node, arg_node);
    VAR_INDICES(new_node) = TRAVopt(VAR_INDICES(arg_node));
    VAR_NAME(new_node) = STRcpy(VAR_NAME(arg_node));
    VAR_DECL(new_node) = VAR_DECL(arg_node);
    return new_node;
}

ccn_node *CPYvarlet(ccn_node *arg_node) {
    ccn_node *new_node =ASTvarlet(    NULL);
    CopyBaseNode(new_node, arg_node);
    VARLET_INDICES(new_node) = TRAVopt(VARLET_INDICES(arg_node));
    VARLET_NAME(new_node) = STRcpy(VARLET_NAME(arg_node));
    VARLET_DECL(new_node) = VARLET_DECL(arg_node);
    return new_node;
}

ccn_node *CPYmonop(ccn_node *arg_node) {
    ccn_node *new_node =ASTmonop(    NULL    ,     0);
    CopyBaseNode(new_node, arg_node);
    MONOP_OPERAND(new_node) = TRAVopt(MONOP_OPERAND(arg_node));
    MONOP_OP(new_node) = MONOP_OP(arg_node);
    return new_node;
}

ccn_node *CPYbinop(ccn_node *arg_node) {
    ccn_node *new_node =ASTbinop(    NULL    ,     NULL    ,     0);
    CopyBaseNode(new_node, arg_node);
    BINOP_LEFT(new_node) = TRAVopt(BINOP_LEFT(arg_node));
    BINOP_RIGHT(new_node) = TRAVopt(BINOP_RIGHT(arg_node));
    BINOP_TYPE(new_node) = BINOP_TYPE(arg_node);
    return new_node;
}

ccn_node *CPYassign(ccn_node *arg_node) {
    ccn_node *new_node =ASTassign(    NULL    ,     NULL);
    CopyBaseNode(new_node, arg_node);
    ASSIGN_LET(new_node) = TRAVopt(ASSIGN_LET(arg_node));
    ASSIGN_EXPR(new_node) = TRAVopt(ASSIGN_EXPR(arg_node));
    return new_node;
}

ccn_node *CPYstmts(ccn_node *arg_node) {
    ccn_node *new_node =ASTstmts(    NULL    ,     NULL);
    CopyBaseNode(new_node, arg_node);
    STMTS_STMT(new_node) = TRAVopt(STMTS_STMT(arg_node));
    STMTS_NEXT(new_node) = TRAVopt(STMTS_NEXT(arg_node));
    return new_node;
}

ccn_node *CPYvardecl(ccn_node *arg_node) {
    ccn_node *new_node =ASTvardecl();
    CopyBaseNode(new_node, arg_node);
    VARDECL_DIMS(new_node) = TRAVopt(VARDECL_DIMS(arg_node));
    VARDECL_INIT(new_node) = TRAVopt(VARDECL_INIT(arg_node));
    VARDECL_NEXT(new_node) = TRAVopt(VARDECL_NEXT(arg_node));
    VARDECL_NAME(new_node) = STRcpy(VARDECL_NAME(arg_node));
    VARDECL_TYPE(new_node) = VARDECL_TYPE(arg_node);
    return new_node;
}

ccn_node *CPYparam(ccn_node *arg_node) {
    ccn_node *new_node =ASTparam();
    CopyBaseNode(new_node, arg_node);
    PARAM_DIMS(new_node) = TRAVopt(PARAM_DIMS(arg_node));
    PARAM_NEXT(new_node) = TRAVopt(PARAM_NEXT(arg_node));
    PARAM_NAME(new_node) = STRcpy(PARAM_NAME(arg_node));
    PARAM_TYPE(new_node) = PARAM_TYPE(arg_node);
    return new_node;
}

ccn_node *CPYglobdef(ccn_node *arg_node) {
    ccn_node *new_node =ASTglobdef();
    CopyBaseNode(new_node, arg_node);
    GLOBDEF_DIMS(new_node) = TRAVopt(GLOBDEF_DIMS(arg_node));
    GLOBDEF_INIT(new_node) = TRAVopt(GLOBDEF_INIT(arg_node));
    GLOBDEF_TYPE(new_node) = GLOBDEF_TYPE(arg_node);
    GLOBDEF_NAME(new_node) = STRcpy(GLOBDEF_NAME(arg_node));
    GLOBDEF_EXPORT(new_node) = GLOBDEF_EXPORT(arg_node);
    return new_node;
}

ccn_node *CPYglobdecl(ccn_node *arg_node) {
    ccn_node *new_node =ASTglobdecl();
    CopyBaseNode(new_node, arg_node);
    GLOBDECL_DIMS(new_node) = TRAVopt(GLOBDECL_DIMS(arg_node));
    GLOBDECL_TYPE(new_node) = GLOBDECL_TYPE(arg_node);
    GLOBDECL_NAME(new_node) = STRcpy(GLOBDECL_NAME(arg_node));
    return new_node;
}

ccn_node *CPYfor(ccn_node *arg_node) {
    ccn_node *new_node =ASTfor(    NULL    ,     NULL);
    CopyBaseNode(new_node, arg_node);
    FOR_START_EXPR(new_node) = TRAVopt(FOR_START_EXPR(arg_node));
    FOR_STOP(new_node) = TRAVopt(FOR_STOP(arg_node));
    FOR_STEP(new_node) = TRAVopt(FOR_STEP(arg_node));
    FOR_BLOCK(new_node) = TRAVopt(FOR_BLOCK(arg_node));
    FOR_VAR(new_node) = STRcpy(FOR_VAR(arg_node));
    return new_node;
}

ccn_node *CPYdowhile(ccn_node *arg_node) {
    ccn_node *new_node =ASTdowhile(    NULL);
    CopyBaseNode(new_node, arg_node);
    DOWHILE_COND(new_node) = TRAVopt(DOWHILE_COND(arg_node));
    DOWHILE_BLOCK(new_node) = TRAVopt(DOWHILE_BLOCK(arg_node));
    return new_node;
}

ccn_node *CPYwhile(ccn_node *arg_node) {
    ccn_node *new_node =ASTwhile(    NULL);
    CopyBaseNode(new_node, arg_node);
    WHILE_COND(new_node) = TRAVopt(WHILE_COND(arg_node));
    WHILE_BLOCK(new_node) = TRAVopt(WHILE_BLOCK(arg_node));
    return new_node;
}

ccn_node *CPYifelse(ccn_node *arg_node) {
    ccn_node *new_node =ASTifelse(    NULL);
    CopyBaseNode(new_node, arg_node);
    IFELSE_COND(new_node) = TRAVopt(IFELSE_COND(arg_node));
    IFELSE_THEN(new_node) = TRAVopt(IFELSE_THEN(arg_node));
    IFELSE_ELSE_BLOCK(new_node) = TRAVopt(IFELSE_ELSE_BLOCK(arg_node));
    return new_node;
}

ccn_node *CPYfunbody(ccn_node *arg_node) {
    ccn_node *new_node =ASTfunbody();
    CopyBaseNode(new_node, arg_node);
    FUNBODY_DECLS(new_node) = TRAVopt(FUNBODY_DECLS(arg_node));
    FUNBODY_LOCAL_FUNDEFS(new_node) = TRAVopt(FUNBODY_LOCAL_FUNDEFS(arg_node));
    FUNBODY_STMTS(new_node) = TRAVopt(FUNBODY_STMTS(arg_node));
    return new_node;
}

ccn_node *CPYfundef(ccn_node *arg_node) {
    ccn_node *new_node =ASTfundef();
    CopyBaseNode(new_node, arg_node);
    FUNDEF_BODY(new_node) = TRAVopt(FUNDEF_BODY(arg_node));
    FUNDEF_PARAMS(new_node) = TRAVopt(FUNDEF_PARAMS(arg_node));
    FUNDEF_TYPE(new_node) = FUNDEF_TYPE(arg_node);
    FUNDEF_NAME(new_node) = STRcpy(FUNDEF_NAME(arg_node));
    FUNDEF_EXPORT(new_node) = FUNDEF_EXPORT(arg_node);
    return new_node;
}

ccn_node *CPYfundefs(ccn_node *arg_node) {
    ccn_node *new_node =ASTfundefs(    NULL);
    CopyBaseNode(new_node, arg_node);
    FUNDEFS_FUNDEF(new_node) = TRAVopt(FUNDEFS_FUNDEF(arg_node));
    FUNDEFS_NEXT(new_node) = TRAVopt(FUNDEFS_NEXT(arg_node));
    return new_node;
}

ccn_node *CPYcast(ccn_node *arg_node) {
    ccn_node *new_node =ASTcast(    NULL);
    CopyBaseNode(new_node, arg_node);
    CAST_EXPR(new_node) = TRAVopt(CAST_EXPR(arg_node));
    CAST_TYPE(new_node) = CAST_TYPE(arg_node);
    return new_node;
}

ccn_node *CPYfuncall(ccn_node *arg_node) {
    ccn_node *new_node =ASTfuncall();
    CopyBaseNode(new_node, arg_node);
    FUNCALL_ARGS(new_node) = TRAVopt(FUNCALL_ARGS(arg_node));
    FUNCALL_NAME(new_node) = STRcpy(FUNCALL_NAME(arg_node));
    FUNCALL_DECL(new_node) = FUNCALL_DECL(arg_node);
    return new_node;
}

ccn_node *CPYreturn(ccn_node *arg_node) {
    ccn_node *new_node =ASTreturn();
    CopyBaseNode(new_node, arg_node);
    RETURN_EXPR(new_node) = TRAVopt(RETURN_EXPR(arg_node));
    return new_node;
}

ccn_node *CPYexprstmt(ccn_node *arg_node) {
    ccn_node *new_node =ASTexprstmt(    NULL);
    CopyBaseNode(new_node, arg_node);
    EXPRSTMT_EXPR(new_node) = TRAVopt(EXPRSTMT_EXPR(arg_node));
    return new_node;
}

ccn_node *CPYids(ccn_node *arg_node) {
    ccn_node *new_node =ASTids();
    CopyBaseNode(new_node, arg_node);
    IDS_NEXT(new_node) = TRAVopt(IDS_NEXT(arg_node));
    IDS_NAME(new_node) = STRcpy(IDS_NAME(arg_node));
    return new_node;
}

ccn_node *CPYarrexpr(ccn_node *arg_node) {
    ccn_node *new_node =ASTarrexpr(    NULL);
    CopyBaseNode(new_node, arg_node);
    ARREXPR_EXPRS(new_node) = TRAVopt(ARREXPR_EXPRS(arg_node));
    return new_node;
}

ccn_node *CPYexprs(ccn_node *arg_node) {
    ccn_node *new_node =ASTexprs(    NULL    ,     NULL);
    CopyBaseNode(new_node, arg_node);
    EXPRS_EXPR(new_node) = TRAVopt(EXPRS_EXPR(arg_node));
    EXPRS_NEXT(new_node) = TRAVopt(EXPRS_NEXT(arg_node));
    return new_node;
}

ccn_node *CPYdecls(ccn_node *arg_node) {
    ccn_node *new_node =ASTdecls(    NULL    ,     NULL);
    CopyBaseNode(new_node, arg_node);
    DECLS_DECL(new_node) = TRAVopt(DECLS_DECL(arg_node));
    DECLS_NEXT(new_node) = TRAVopt(DECLS_NEXT(arg_node));
    return new_node;
}

ccn_node *CPYprogram(ccn_node *arg_node) {
    ccn_node *new_node =ASTprogram(    NULL);
    CopyBaseNode(new_node, arg_node);
    PROGRAM_DECLS(new_node) = TRAVopt(PROGRAM_DECLS(arg_node));
    return new_node;
}


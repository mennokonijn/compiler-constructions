/**
 * @file
 *
 * This file contains the code for the Print traversal.
 * The traversal has the uid: PRT
 *
 *
 */

#include "ccn/ccn.h"
#include "ccngen/ast.h"
#include "ccngen/trav.h"
#include "palm/dbug.h"
#include "user_types.h"


/**
 * @fn PRTstmts
 */
node_st *PRTstmts(node_st *node)
{
    TRAVstmt(node);
    TRAVnext(node);
    return node;
}

/**
 * @fn PRTassign
 */
node_st *PRTassign(node_st *node)
{

    if (ASSIGN_LET(node) != NULL) {
        TRAVlet(node);
        printf( " = ");
    }
    
    TRAVexpr(node);
    printf( ";\n");
  

    return node;
}

/**
 * @fn PRTbinop
 */
node_st *PRTbinop(node_st *node)
{
    char *tmp = NULL;
    printf( "( ");

    TRAVleft(node);

    switch (BINOP_TYPE(node)) {
    case BO_add:
      tmp = "+";
      break;
    case BO_sub:
      tmp = "-";
      break;
    case BO_mul:
      tmp = "*";
      break;
    case BO_div:
      tmp = "/";
      break;
    case BO_mod:
      tmp = "%";
      break;
    case BO_lt:
      tmp = "<";
      break;
    case BO_le:
      tmp = "<=";
      break;
    case BO_gt:
      tmp = ">";
      break;
    case BO_ge:
      tmp = ">=";
      break;
    case BO_eq:
      tmp = "==";
      break;
    case BO_ne:
      tmp = "!=";
      break;
    case BO_or:
      tmp = "||";
      break;
    case BO_and:
      tmp = "&&";
      break;
    case BO_NULL:
      DBUG_ASSERT(false, "unknown binop detected!");
    }

    printf( " %s ", tmp);
    
    TRAVright(node);

    printf( ")(%d:%d-%d)", NODE_BLINE(node), NODE_BCOL(node), NODE_ECOL(node));

    return node;
}

const char *getTypeString(valType type) {
    switch (type) {
    case CT_void:
        return "void";
    case CT_bool:
        return "bool";
    case CT_int:
        return "int";
    case CT_float:
        return "float";
    default:
        return "NULL";
  }

  return "unknown";
}

/**
 * @fn PRTvarlet
 */
node_st *PRTvarlet(node_st *node)
{
    printf("%s(%d:%d)", VARLET_NAME(node), NODE_BLINE(node), NODE_BCOL(node));
    return node;
}

/**
 * @fn PRTvar
 */
node_st *PRTvar(node_st *node)
{
    printf( "%s", VAR_NAME(node));
    return node;
}

/**
 * @fn PRTnum
 */
node_st *PRTnum(node_st *node)
{
    printf("%d", NUM_VAL(node));
    return node;
}

/**
 * @fn PRTfloat
 */
node_st *PRTfloat(node_st *node)
{
    printf( "%f", FLOAT_VAL(node));
    return node;
}

/**
 * @fn PRTbool
 */
node_st *PRTbool(node_st *node)
{
    char *bool_str = BOOL_VAL(node) ? "true" : "false";
    printf("%s", bool_str);
    return node;
}

/**
 * @fn PRTprogram
 */
node_st *PRTprogram(node_st *node)
{
    TRAVdecls(node);
    printf("\n");
    // Hier nog iets? -> PROGRAM_SYMBOLTABLE(arg_node) = TRAVopt(PROGRAM_SYMBOLTABLE(arg_node), arg_info);

    return node;

}

/**
 * @fn PRTdecls
 */
node_st *PRTdecls(node_st *node)
{
    TRAVdecl(node);
    if (TRAVnext(node)) {
        printf(", ");
        TRAVnext(node);
    }
    

    return node;
}

/**
 * @fn PRTexprs
 */
node_st *PRTexprs(node_st *node)
{
    TRAVexpr(node);

    if (EXPRS_NEXT(node));
    {
        printf(", ");
        TRAVnext(node);
    }

    return node;
}

/**
 * @fn PRTarrexpr
 */
node_st *PRTarrexpr(node_st *node)
{
    TRAVexprs(node);
    return node;
}

/**
 * @fn PRTids
 */
node_st *PRTids(node_st *node)
{
    TRAVnext(node);
    return node;
}

/**
 * @fn PRTexprstmt
 */
node_st *PRTexprstmt(node_st *node)
{
    // (?) tabs(arg_info);
    TRAVexpr(node);
    printf(";\n");
    return node;
}

/**
 * @fn PRTreturn
 */
node_st *PRTreturn(node_st *node)
{
    printf("return");
     
    if (TRAVexpr(node))
    {
        printf(" ");
        TRAVexpr(node);
    }
    printf(";\n");

    return node;
}

/**
 * @fn PRTfuncall
 */
node_st *PRTfuncall(node_st *node)
{

    printf("%s(", FUNCALL_NAME(node));
    TRAVargs(node);
    printf(")\n");

    return node;
}

/**
 * @fn PRTcast
 */
node_st *PRTcast(node_st *node)
{
    // (?) typeToString
    printf("( %s )", getTypeString(CAST_TYPE(node)));
    
    TRAVexpr(node);

    return node;
}

/**
 * @fn PRTfundefs
 */
node_st *PRTfundefs(node_st *node)
{
    TRAVfundef(node);
    printf("\n");
    TRAVnext(node);
    return node;
}

/**
 * @fn PRTfundef
 */
node_st *PRTfundef(node_st *node)
{
    if (FUNDEF_EXPORT(node) != NULL) {
        printf('export ');
    }
    printf("%s %s (", getTypeString(FUNDEF_TYPE(node)), FUNDEF_NAME(node));
    TRAVparams(node);
    printf(") \n {");
    TRAVbody(node);
    printf("\n}");
    return node;
}

/**
 * @fn PRTfunbody
 */
node_st *PRTfunbody(node_st *node)
{
    TRAVdecls(node);
    TRAVstmts(node);
    TRAVlocal_fundefs(node);
    return node;
}

/**
 * @fn PRTifelse
 */
node_st *PRTifelse(node_st *node)
{
    printf("if (");
    TRAVcond(node);
    printf(") \n{");
    TRAVthen(node);
    print("} \n");
    if (IFELSE_ELSE_BLOCK(node) != NULL) {
        printf("else {");
        TRAVelse_block(node);
        printf("} \n");
    }

    return node;
}

/**
 * @fn PRTwhile
 */
node_st *PRTwhile(node_st *node)
{
    printf("while (");
    TRAVcond(node);
    printf(") \n{");
    TRAVblock(node);
    printf("\n}");

    return node;
}

/**
 * @fn PRTdowhile
 */
node_st *PRTdowhile(node_st *node)
{

printf("do\n{\n");
TRAVcond(node);
printf("\n} while(");
TRAVblock(node);
printf(");\n");

return node;
}

/**
 * @fn PRTfor
 */
node_st *PRTfor(node_st *node)
{
    printf("for ( int %s = ", FOR_VAR(node));
    FOR_START_EXPR(node);
    printF(", ");
    FOR_STOP(node);
    printF(", ");
    FOR_STEP(node);
    printf(") \n{");
    TRAVblock(node);
    printf("\n}");

    return node;
}

/**
 * @fn PRTglobdecl
 */
node_st *PRTglobdecl(node_st *node)
{
    printf("extern ");
    printf("%s %s", getTypeString(GLOBDECL_TYPE(node)), GLOBDECL_NAME(node));
    TRAVdims(node);

    printf(";")
    return node;
}

/**
 * @fn PRTglobdef
 */
node_st *PRTglobdef(node_st *node)
{

    if (GLOBDEF_EXPORT(node) == true) {
        printf("export ");
    }
    printf("%s %s", getTypeString(GLOBDEF_TYPE(node)), GLOBDEF_NAME(node));
    TRAVdims(node);
    if (GLOBDEF_INIT(node) != NULL) {
        printf(" = ");
        TRAVinit(node);
    }
    printf(";")
    return node;
}

/**
 * @fn PRTparam
 */
node_st *PRTparam(node_st *node)
{
    printf("%s %s", getTypeString(PARAM_TYPE(node)), PARAM_NAME(node));

    TRAVdims(node);

    if (PARAM_NEXT(node) != NULL) {
        printf(', ')
        TRAVnext(node);
    }
    return node;
}

/**
 * @fn PRTvardecl
 */
node_st *PRTvardecl(node_st *node)
{
    printf("%s %s", getTypeString(VARDECL_TYPE(node)), VARDECL_NAME(node));
    TRAVdims(node);

    if (VARDECL_INIT(node) != null) {
        printf(" = ")
        TRAVinit(node);
    }

    if (VARDECL_NEXT(node) != null) {
        print(", ")
        TRAVnext(node);
    }
    printf(";")

    return node;
}

/**
 * @fn PRTmonop
 */
node_st *PRTmonop(node_st *node)
{

   switch (MONOP_OP(node)) {
    case MO_neg:
      tmp = "-";
      break;
    case MO_not:
      tmp = "!";
      break;
    case MO_NULL:
      DBUG_ASSERT(false, "unknown monop detected!");
    }

    printf( "%s", tmp);
    return node;
}

#pragma once
#include "ast.h"
node_st *TRAVblock(node_st *node);
node_st *TRAVelse_block(node_st *node);
node_st *TRAVparams(node_st *node);
node_st *TRAVdecl(node_st *node);
node_st *TRAVstmt(node_st *node);
node_st *TRAVdecls(node_st *node);
node_st *TRAVinit(node_st *node);
node_st *TRAVright(node_st *node);
node_st *TRAVstop(node_st *node);
node_st *TRAVstmts(node_st *node);
node_st *TRAVnext(node_st *node);
node_st *TRAVoperand(node_st *node);
node_st *TRAVthen(node_st *node);
node_st *TRAVleft(node_st *node);
node_st *TRAVargs(node_st *node);
node_st *TRAVstart_expr(node_st *node);
node_st *TRAVcond(node_st *node);
node_st *TRAVexpr(node_st *node);
node_st *TRAVbody(node_st *node);
node_st *TRAVfundef(node_st *node);
node_st *TRAVlet(node_st *node);
node_st *TRAVstep(node_st *node);
node_st *TRAVlocal_fundefs(node_st *node);
node_st *TRAVdims(node_st *node);
node_st *TRAVexprs(node_st *node);
node_st *TRAVindices(node_st *node);

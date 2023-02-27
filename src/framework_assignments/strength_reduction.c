/**
 * @file
 *
 * Traversal: StrengthReduction
 * UID      : SR
 *
 *
 */

#include "ccn/ccn.h"
#include "ccngen/ast.h"

/**
 * @fn SRbinop
 */
node_st *SRbinop(node_st *node)
{
    // TRAVchildren(node);

    // node_st *new = NULL;
    // // Check if there is a multiplaction binary operator type
    // if (BINOP_TYPE(node) == BO_mul) {
    //     // Check if var is right and number is left
    //     if ((NODE_TYPE( BINOP_LEFT( node)) == NT_NUM) && (NODE_TYPE( BINOP_RIGHT( node)) == NT_VAR)) {
    //         // Just two variables so create single binop
    //         if (NUM_VAL(CCNcopy(BINOP_LEFT(node))) == 2) {
    //             new = ASTbinop(CCNcopy(BINOP_RIGHT(node)), CCNcopy(BINOP_RIGHT(node)), BO_add);
    //         } else if (NUM_VAL(CCNcopy(BINOP_LEFT(node))) > 2) {
    //             // Keep creating a binop inside a binop if number is bigger than 2
    //             new = ASTbinop(CCNcopy(BINOP_RIGHT(node)), CCNcopy(BINOP_RIGHT(node)), BO_add);
    //             for (int i = 0; i < NUM_VAL(CCNcopy(BINOP_LEFT(node))) - 2; i++) {
    //                 new = ASTbinop(new, CCNcopy(BINOP_RIGHT(node)), BO_add);
    //             }
    //         }
    //     }
    //     // Check if number is right and variable is left
    //     if ((NODE_TYPE( BINOP_LEFT( node)) == NT_VAR) && (NODE_TYPE( BINOP_RIGHT( node)) == NT_NUM)) {
    //         if (NUM_VAL(CCNcopy(BINOP_RIGHT(node))) == 2) {
    //           new = ASTbinop(CCNcopy(BINOP_LEFT(node)), CCNcopy(BINOP_LEFT(node)), BO_add);
    //         } else if (NUM_VAL(CCNcopy(BINOP_RIGHT(node))) > 2) {
    //             new = ASTbinop(CCNcopy(BINOP_LEFT(node)), CCNcopy(BINOP_LEFT(node)), BO_add);
    //             for (int i = 0; i < NUM_VAL(CCNcopy(BINOP_RIGHT(node))) - 2; i++) {
    //                 new = ASTbinop(new, CCNcopy(BINOP_LEFT(node)), BO_add);
    //             }
    //         }
    //     }
    // }

    // return new;
    return node;
}


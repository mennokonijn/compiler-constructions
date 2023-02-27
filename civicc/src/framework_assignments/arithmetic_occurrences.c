/**
 * @file
 *
 * Traversal: ArithmeticOccurrences
 * UID      : AO
 *
 *
 */

#include "ccn/ccn.h"
#include "ccngen/ast.h"

void AOinit() { return; }
void AOfini() { return; }

/**
 * @fn AObinop
 */
node_st *AObinop(node_st *node)
{
    struct data_ao *data = DATA_AO_GET();

    // Check for every binop type if it need multiplication
    if (BINOP_TYPE(node) == BO_mul) {
        data->mul += 1;
    }
    if (BINOP_TYPE(node) == BO_add) {
        data->add += 1;
    }
    if (BINOP_TYPE(node) == BO_div) {
        data->div += 1;
    }
    if (BINOP_TYPE(node) == BO_mod) {
        data->mod += 1;
    }
    if (BINOP_TYPE(node) == BO_sub) {
        data->sub += 1;
    }
    return node;
}

/**
 * @fn AOmodule
 */
node_st *AOmodule(node_st *node)
{
    TRAVchildren(node);

    struct data_ao *data = DATA_AO_GET();

    // Set the attributes of the Module to the travdata
    MODULE_ADD(node) = data->add;
    MODULE_SUB(node) = data->sub;
    MODULE_MUL(node) = data->mul;
    MODULE_DIV(node) = data->div;
    MODULE_MOD(node) = data->mod;

    return node;

}



/**
 * @file
 *
 * Traversal: IdentifierOccurrences
 * UID      : IO
 *
 *
 */

#include <stdio.h>

#include "ccn/ccn.h"
#include "ccngen/ast.h"
#include "palm/hash_table.h"

void IOinit() { 
    // htable_st *hashTable = HTnew_String(20);
    // struct data_io *data = DATA_IO_GET();

    // // Set the table in the travdata to the hashtable
    // data->identifier_table = hashTable;
    return; 
}
void IOfini() { return; }

void *printTableData(void *key, void *item) {
    // Cast both variables in order to print them
    printf("The amount of times %s occurs is: %d\n", (char*) key, (int*) item);
    return 0;
}

/**
 * @fn IOvar
 */
node_st *IOvar(node_st *node)
{

    // struct data_io *data = DATA_IO_GET();

    // // Cast lookup to int to get the amount it has occured
    // int* number_occured = (int*) HTlookup(data->identifier_table, VAR_NAME(node));

    // if (number_occured == 0) {
    //     HTinsert(data->identifier_table, VAR_NAME(node), 1);
    // } else {
    //     // Make new variable otherwise same number keeps incrementing
    //     int counter = 1;
    //     for (int i = 0; i < number_occured; i++) {
    //         counter += 1;
    //     }
    //     HTinsert(data->identifier_table, VAR_NAME(node), counter);
    // }


    return node;
}

/**
 * @fn IOmodule
 */
node_st *IOprogram(node_st *node)
{
    // TRAVchildren(node);

    // struct data_io *data = DATA_IO_GET();
    // // Use the mapWithKey function in order to print the table
    // HTmapWithKey(data->identifier_table, printTableData);

    return node;
}

/**
 * @fn IOvarlet
 */
node_st *IOvarlet(node_st *node)
{
    // struct data_io *data = DATA_IO_GET();

    // int* number_occured = (int*) HTlookup(data->identifier_table, VARLET_NAME(node));

    // if (number_occured == 0) {
    //     HTinsert(data->identifier_table, VARLET_NAME(node), 1);
    // } else {
    //     int counter = 1;
    //     for (int i = 0; i < number_occured; i++) {
    //         counter += 1;
    //     }
    //     HTinsert(data->identifier_table, VAR_NAME(node), counter);
    // }

    return node;
}


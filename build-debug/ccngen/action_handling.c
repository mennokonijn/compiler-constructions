#include <stddef.h>
#include "ccn/action_types.h"
#include "ccngen/action_handling.h"
#include "ccngen/enum.h"
#include "ccngen/ast.h"
#include "ccngen/gate.h"
#include "ccn/phase_driver.h"
enum ccn_action_id cleanup_ids_table[2] = { CCNAC_ID_free, CCNAC_ID_NULL };
enum ccn_action_id rootphase_ids_table[] = {    CCNAC_ID_SPDOSCANPARSE,     CCNAC_ID_PRINT,     CCNAC_ID_NULL, };

static struct ccn_action ccn_action_array[] = {
{CCN_ACTION_PHASE, CCNAC_ID_ROOTPHASE, "RootPhase", .phase = {NULL, NT_PROGRAM, rootphase_ids_table, false, CCNAC_ID_ROOTPHASE,},},
{CCN_ACTION_TRAVERSAL, CCNAC_ID_PRINT, "Print", .traversal = {TRAV_PRT,},},
{CCN_ACTION_PASS, CCNAC_ID_SPDOSCANPARSE, "SPdoScanParse", .pass = {PASS_SPDOSCANPARSE,},},
{CCN_ACTION_TRAVERSAL, CCNAC_ID_free, "Free", .traversal = {TRAV_free,},},
{CCN_ACTION_PHASE, CCNAC_ID_cleanup, "Cleanup", .phase = {NULL, NT_PROGRAM, cleanup_ids_table, false, CCNAC_ID_cleanup,},},
};

struct ccn_action *CCNgetActionFromID(enum ccn_action_id action_id) {
    return &ccn_action_array[action_id];
}


#pragma once
enum ccn_action_id {
    CCNAC_ID_ROOTPHASE,
    CCNAC_ID_PRINT,
    CCNAC_ID_SPDOSCANPARSE,
    CCNAC_ID_check,
    CCNAC_ID_free,
    CCNAC_ID_cleanup,
    CCNAC_ID_NULL,
};

#ifndef CCN_NUM_OF_ACTIONS
#define CCN_NUM_OF_ACTIONS 6
#endif
#ifndef CCN_ROOT_TYPE
#define CCN_ROOT_TYPE NT_PROGRAM
#endif
#ifndef CCN_ROOT_ACTION
#define CCN_ROOT_ACTION CCNAC_ID_ROOTPHASE
#endif


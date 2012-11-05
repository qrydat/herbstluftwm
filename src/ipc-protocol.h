/** Copyright 2011-2012 Thorsten Wißmann. All rights reserved.
 *
 * This software is licensed under the "Simplified BSD License".
 * See LICENSE for details */

#ifndef __HERBST_IPC_PROTOCOL_H_
#define __HERBST_IPC_PROTOCOL_H_

#define HERBST_IPC_CLASS "HERBST_IPC_CLASS"
//#define HERBST_IPC_READY "HERBST_IPC_READY"
//#define HERBST_IPC_ATOM  "_HERBST_IPC"
#define HERBST_IPC_ARGS_ATOM "_HERBST_IPC_ARGS"
#define HERBST_IPC_OUTPUT_ATOM "_HERBST_IPC_OUTPUT"
#define HERBST_IPC_STATUS_ATOM "_HERBST_IPC_EXIT_STATUS"

#define HERBST_HOOK_CLASS "HERBST_HOOK_CLASS"
#define HERBST_HOOK_WIN_ID_ATOM "__HERBST_HOOK_WIN_ID"
#define HERBST_HOOK_PROPERTY_FORMAT "__HERBST_HOOK_ARGUMENTS_%d"
// maximum number of hooks to buffer
#define HERBST_HOOK_PROPERTY_COUNT 10

// function exit codes
enum {
    HERBST_EXIT_SUCCESS = 0,
    HERBST_UNKNOWN_ERROR,
    HERBST_COMMAND_NOT_FOUND,
    HERBST_INVALID_ARGUMENT,
    HERBST_SETTING_NOT_FOUND,
    HERBST_TAG_IN_USE,
    HERBST_FORBIDDEN,
    HERBST_NO_PARAMETER_EXPECTED,
    HERBST_ENV_UNSET,
};

#endif


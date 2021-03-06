#ifndef _TRAP_TABLE_H_
#define _TRAP_TABLE_H_

#define STR_(X) #X
#define STR(X) STR_(X)

#define KERN_SWI 0

#define TRAP_TABLE_SEND_MESSAGE 0
#define TRAP_TABLE_RECEIVE_MESSAGE 1
#define TRAP_TABLE_REQUEST_MSG_ENV 2
#define TRAP_TABLE_RELEASE_MSG_ENV 3
#define TRAP_TABLE_RELEASE_PROCESSOR 4
#define TRAP_TABLE_REQUEST_PROCESS_STATUS 5
#define TRAP_TABLE_GET_SYSTEM_TIME 6
#define TRAP_TABLE_TERMINATE 8
#define TRAP_TABLE_CHANGE_PRIORITY 9
#define TRAP_TABLE_REQUEST_DELAY 10
#define TRAP_TABLE_SEND_CONSOLE_CHARS 11
#define TRAP_TABLE_GET_CONSOLE_CHARS 12
#define TRAP_TABLE_GET_TRACE_BUFFERS 13


#endif

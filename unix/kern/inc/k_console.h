#ifndef _KERN_CONSOLE_H_
#define _KERN_CONSOLE_H_

#include <rtx.h>

int k_send_console_chars(MsgEnv *msg_env);
int k_get_console_chars(MsgEnv *msg_env);

#endif

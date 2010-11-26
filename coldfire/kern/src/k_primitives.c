#include "k_primitives.h"

/** 5.1 Interprocess Communication **/
int k_send_message(int dest_pid, MsgEnv *msg_env)
{
    pcb_t *dest_pcb;
    if(msg_env == NULL)
    {
        return ERROR_NULL_ARG;
    }

    if(dest_pid < 0 || dest_pid >= k_get_num_processes())
    {
        return ERROR_ILLEGAL_ARG;
    }

    msg_env->send_pid = current_process->pid;
    msg_env->dest_pid = dest_pid;

    pcb_t *dest_pcb = &p_table[dest_pid];
    msg_env_queue_enqueue(dest_pcb ->recv_msgs, msg_env);
    if (dest_pcb->status == P_BLOCKED_ON_RECEIVE)
    {
        dest_pcb->status = P_READY;
        proc_pq_enqueue(ready_pq, dest_pcb );
    }

    _log_msg_event(&_send_trace_buf, msg_env);

    return CODE_SUCCESS;
}

MsgEnv * k_receive_message()
{
}

/** 5.2 Storage Management **/
MsgEnv * k_request_msg_env()
{
}

int k_release_msg_env(MsgEnv * msg_env)
{
}

/** 5.3 Processor Management **/
int k_release_processor()
{
}

int k_request_process_status(MsgEnv *msg_env)
{
}

int k_terminate()
{
}

int k_change_priority(int new_priority, int target_process_id);

/** 5.4 Timing Servicies **/
int k_request_delay(int time_delay, int wakeup_code, MsgEnv *msg_env);

/** 5.5 System Console I/O **/
int k_send_console_chars(MsgEnv *msg_env);
int k_get_console_chars(MsgEnv *msg_env);

/** 5.6 Interprocess Message Trace **/
int k_get_trace_buffers(MsgEnv* msg_env);
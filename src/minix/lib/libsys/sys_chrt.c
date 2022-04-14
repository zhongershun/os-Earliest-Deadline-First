#include "syslib.h"

int sys_chrt(proc_ep,deadline)
endpoint_t proc_ep;		/* which proc_ep has exited */
long deadline;
{
/* A proc_ep has to be signaled via PM.  Tell the kernel. */
    message m;
    m.m2_i1 = proc_ep;
    m.m2_l1 = deadline;
    return(_kernel_call(SYS_CHRT, &m));
}
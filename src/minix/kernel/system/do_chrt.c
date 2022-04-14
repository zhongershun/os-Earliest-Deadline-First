#include "kernel/system.h"
#include <minix/endpoint.h>
#include "kernel/vm.h"
#include <signal.h>
#include <string.h>
#include <assert.h>
#include <minix/u64.h>


/*===========================================================================*
  *                                do_chrt                                   *
  *===========================================================================*/

#if USE_CHRT
int do_chrt(struct proc *caller, message *m_ptr){
    struct proc *rp;

    rp = proc_addr(m_ptr->m2_i1);
    rp->p_deadline = m_ptr->m2_l1;
    return (OK);
}
#endif /* USE_CHRT */
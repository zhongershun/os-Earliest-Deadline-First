#include "pm.h"
#include "mproc.h"
#include <assert.h>
#include <minix/callnr.h>
#include <minix/com.h>
#include <minix/sched.h>
#include <minix/vm.h>
#include <sys/ptrace.h>
#include <sys/resource.h>
#include "glo.h"
#include <minix/callnr.h>

int do_chrt(){
    sys_chrt(who_p, m_in.m2_l1);
    return (OK);
}
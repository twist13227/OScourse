#include <inc/types.h>
#include <inc/stdio.h>
#include <inc/lib.h>

void
umain(int argc, char **argv) {
    binaryname = "udp_send";
    char buf[] = "HELLO";
    int status = sys_udp_send(buf, sizeof(buf));
    cprintf("UDP SEND STATUS: %d\n", status);
}


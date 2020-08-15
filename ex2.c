//Denis Alexandre da Silva 7238999
#include <unistd.h>
#include <sys/syscall.h>

extern ssize_t write(int arq, const void *buf, size_t tam) {
    syscall(SYS_write, arq, buf, tam);
    return 0;
}
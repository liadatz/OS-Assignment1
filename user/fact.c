#include "kernel/param.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"
#include "kernel/fcntl.h"
#include "kernel/syscall.h"
#include "kernel/memlayout.h"
#include "kernel/riscv.h"

int main() {
    sleep(10);
    int n = 30;
    int i;
    unsigned long long fact = 1;
    // int n_forks = 2;
    int pid = getpid();
    // for (int i = 0; i < n_forks; i++) {
    //     fork();
    // }

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
            printf("%d\n", fact);
        }
        printf("pid : %d, Factorial of %d = %llu\n", pid, n, fact);
    }

    exit(0);
}
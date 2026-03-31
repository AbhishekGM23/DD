savedcmd_kernel_semaphore.mod := printf '%s\n'   kernel_semaphore.o | awk '!x[$$0]++ { print("./"$$0) }' > kernel_semaphore.mod

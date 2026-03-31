savedcmd_ddk_mem.mod := printf '%s\n'   ddk_mem.o | awk '!x[$$0]++ { print("./"$$0) }' > ddk_mem.mod

savedcmd_scull.mod := printf '%s\n'   main.o pipe.o access.o | awk '!x[$$0]++ { print("./"$$0) }' > scull.mod

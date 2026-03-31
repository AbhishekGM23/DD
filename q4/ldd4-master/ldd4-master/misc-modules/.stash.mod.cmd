savedcmd_stash.mod := printf '%s\n'   stash.o | awk '!x[$$0]++ { print("./"$$0) }' > stash.mod

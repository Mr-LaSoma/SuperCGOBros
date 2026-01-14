# How to compile and run 

from src...

On linux:

```cmd
gcc ./client/main.c -I./client/include -L/usr/local/lib -lraylib -lm -ldl -pthread -o ../build/client/cbuild
./../build/client/cbuild
```
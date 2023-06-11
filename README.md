# Hello kernel

Hello world kernel module that prints into journal after module insert and
after module remove.


## Compiling
To compile use `make CC=x86_64-linux-gnu-gcc_all all` or other compiler
your distro uses. 

## Running
Insert module:
`sudo insmod hello.ko`

Check output via:
`sudo journalctl --since "1 hour ago" | grep kernel`

Remove module:
`sudo rmmod hello.ko`

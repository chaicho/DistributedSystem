#!/bin/bash

# check the number of arguments

# get the IDL file name
idl='timerIDL.x'

# generate the stubs and header files
rpcgen -C $idl

# compile the manager program
gcc -o manager manager.c timerIDL_clnt.c 

# compile the worker program
gcc -o worker worker.c timerIDL_svc.c 

# remove the intermediate files
# rm timerIDL_clnt.c timerIDL_svc.c timerIDL.h timerIDL_xdr.c

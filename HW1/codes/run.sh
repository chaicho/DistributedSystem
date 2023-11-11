#!/bin/bash

# check the number of arguments
if [ $# -ne 0 ]; then
  echo "Usage: $0"
  exit 1
fi

# start the worker programs in the background and redirect their output to worker1.log, worker2.log, and worker3.log
./worker > worker1.log &
./worker > worker2.log &
./worker > worker3.log &

# start the manager program in the background and redirect its output to manager.log
./manager localhost1 localhost2 localhost3 > manager.log &


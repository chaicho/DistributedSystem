#!/bin/bash

# Define the file name and the destination path
FILE="worker"
DEST="~"

# Define the IP addresses of the three virtual machines
VM1="192.168.1.24"
VM2="192.168.1.26"
VM3="192.168.1.27"

# Use scp command to copy the file to each virtual machine
scp $FILE worker1@$VM1:$DEST
scp $FILE worker2@$VM2:$DEST
scp $FILE worker3@$VM3:$DEST

# Print a message when done
echo "File copied to three virtual machines successfully."

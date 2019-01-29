!bin/bash


sleep $1

process_id=$!

//Check the  process state

wait $process_id && echo success || echo failure

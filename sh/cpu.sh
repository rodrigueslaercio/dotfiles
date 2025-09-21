#!/bin/sh

cpu="$(top -bn1 | awk '/%Cpu\(s\)/ {print $2 + $4 + $6}')"
echo "${cpu}%"
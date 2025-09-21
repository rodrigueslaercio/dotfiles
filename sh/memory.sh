#!/bin/sh

mem="$(free | awk '/Mem/ {printf("%0.f%\n", $3/$2 * 100)}')"
echo $mem
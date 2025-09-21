#!/bin/sh

dte="$(date +"%a %d %b %I:%M%p" | sed 's/ / /g')"
echo $dte

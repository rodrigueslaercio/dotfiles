#!/bin/sh

# Void linux
pack="$(xbps-install -un | wc -l)"
echo $pack
#!/usr/bin/env bash

IFS=""
while read line; do
  echo -e "$line" | cut -f -3
done

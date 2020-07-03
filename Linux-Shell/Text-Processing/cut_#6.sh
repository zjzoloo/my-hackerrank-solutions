#!/usr/bin/env bash

IFS=""
while read line; do
  echo -e "$line" | cut -c13-;
done

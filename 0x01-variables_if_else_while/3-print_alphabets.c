#!/bin/bash
echo $((`echo $PATH | grep -o ":/" | wc -|` +1))

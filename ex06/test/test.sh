#!/bin/bash

TITLE='\e[1;38;5;39m'
RESET='\e[0m'

echo -e $TITLE"=== DEBUG ==="$RESET
./harlFilter "DEBUG"
echo

echo -e $TITLE"=== INFO ==="$RESET
./harlFilter "INFO"
echo

echo -e $TITLE"=== WARNING ==="$RESET
./harlFilter "WARNING"
echo

echo -e $TITLE"=== ERROR ==="$RESET
./harlFilter "ERROR"
echo

echo -e $TITLE"=== WRONG LEVEL ==="$RESET
./harlFilter "other"
echo

echo -e $TITLE"=== DEBUG ==="$RESET
./harlFilter ""
echo

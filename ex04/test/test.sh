#!/bin/bash

TITLE='\e[1;38;5;39m'
RESET='\e[0m'
RED='\e[31m'
GREEN='\e[32m'

touch test/test_files/forbidden_file
chmod 000 test/test_files/forbidden_file

echo
echo -e $TITLE"=== Original File ==="$RESET
cat test/test_files/file1
echo

echo -e $TITLE"=== Replace 'e' by '🐶 🐶' ===" $RESET
./sed_is_for_losers test/test_files/file1 e "🐶 🐶"
if [ ! -e ./test/test_files/file1.replace ]; then
	echo -e $RED"The '.replace' is missing"$RESET
else
	cat test/test_files/file1.replace
fi
echo

echo -e $TITLE"=== Directory ===" $RESET
./sed_is_for_losers test/test_files/directory e "🐶 🐶"
if [ ! -e ./test/test_files/directory.replace ]; then
	echo -e $RED"The '.replace' file is missing"$RESET
else
	if [ -s test/test_files/directory.replace ]; then
		echo -e $RED"The '.replace' file should be empty"$RESET
		cat test/test_files/directory.replace
	else
		echo -e $GREEN"The '.replace' file exists and is empty"$RESET
	fi
fi
echo

echo -e $TITLE"=== Empty file ===" $RESET
./sed_is_for_losers test/test_files/empty_file e "🐶 🐶"
if [ ! -e ./test/test_files/empty_file.replace ]; then
	echo -e $RED"The '.replace' file is missing"$RESET
else
	if [ -s test/test_files/empty_file.replace ]; then
		echo -e $RED"The '.replace' file should be empty"$RESET
		cat test/test_files/empty_file.replace
	else
		echo -e $GREEN"The '.replace' file exists and is empty"$RESET
	fi
fi
echo

echo -e $TITLE"=== '.replace' file exists and is not writable ===" $RESET
./sed_is_for_losers test/test_files/writing_not_allowed e "🐶 🐶"
echo

echo -e $TITLE"=== File is not readable ===" $RESET
./sed_is_for_losers test/test_files/forbidden_file e "🐶 🐶"
if [ ! -e ./test/test_files/forbidden_file.replace ]; then
	echo -e $GREEN"The '.replace' file has not been created"$RESET
else
	echo -e $RED"The '.replace' file has been created despite the error"$RESET
fi
echo

echo -e $TITLE"=== File doesn't exist ===" $RESET
./sed_is_for_losers test/test_files/nofile e "🐶 🐶"
if [ ! -e ./test/test_files/nofile.replace ]; then
	echo -e $GREEN"The '.replace' file has not been created"$RESET
else
	echo -e $RED"The '.replace' file has been created despite the error"$RESET
fi
echo

echo -e $TITLE"=== Replace empty string by '🐶 🐶' ===" $RESET
./sed_is_for_losers test/test_files/file2 "" "🐶 🐶"
if [ ! -e ./test/test_files/file2.replace ]; then
	echo -e $RED"The '.replace' is missing"$RESET
else
	cat test/test_files/file2.replace
fi
echo

echo -e $TITLE"=== Replace 'e' by empty string ===" $RESET
./sed_is_for_losers test/test_files/file3 e ""
if [ ! -e ./test/test_files/file3.replace ]; then
	echo -e $RED"The '.replace' is missing"$RESET
else
	cat test/test_files/file3.replace
fi
echo

echo -e $TITLE"=== Bad number of arguments ===" $RESET
./sed_is_for_losers test/test_files/file1 e
echo

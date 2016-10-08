#!/bin/bash

VAR="global variable"

function bash {
local VAR="local variable"
	echo $VAR
}
echo $VAR
bash
#Note the bash global variable did not change
#'local' is bash reserved word
echo $VAR

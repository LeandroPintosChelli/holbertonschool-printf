PRINTF

The Printf function allow us to output to standard output (the screen) the values (data) of a list of arguments.

In this case, _printf() function receive a character pointer to a string: "format", and a variable arguments list, loop through the string searching for a "%" that mark the start of the conversion specifications and ends with a conversion specifier.

Functions and Conversion Specifiers.

%c - Is used to display character.

%s - Prints an string variable.

%% - Print a %.

%d - Write a signed decimal integer.

%i - Writes a signed decimal, octal, or hexadecimal integer.

HOW PRINTF WORKS

_printf loop for the string of characters until found a percent symbol and it indicates that a conversion specifier is starting for expample "%d", this indicate to the function that it must print a integer in the standard output.  

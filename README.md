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
For example:

	int main()
	{
		int testInteger = 5;
		printf("Number = %d", testInteger);
		return 0;
	}
OUTPUT:
		Number = 5

The printf function advance through the string until found a "%" and then interprets the next character as a function or, if there are two "%" prints one. After that look for the next character and check the code looking for what to do next, in this example print an int.

Example 2:

	int main(void)
	{
		printf("My name is Pepe\n"):
		return (0);
	}
In this example printf write in the standard output "Mi name is Pepe" and continue in the next line, for this we use "\n".

FLOWCHART	

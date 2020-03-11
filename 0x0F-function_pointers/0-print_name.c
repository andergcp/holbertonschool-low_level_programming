/**
 * print_name - Prints a name
 * @name: Pointer to a string to print
 * @f: Function pointer to the kind of print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

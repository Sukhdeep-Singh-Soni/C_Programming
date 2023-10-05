/*strlen: return length of string s
-----------------Version 2------------------*/
int strlen(char *s)
{
	char *p = s;

	while(*p != '\0')
		p++;

	return p - s;
}

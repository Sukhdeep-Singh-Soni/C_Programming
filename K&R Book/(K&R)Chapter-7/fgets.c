/*get at most n characters from iop*/
char *fgets(char *s,int n, FILE *iop)
{
	register int c;
	register char *cs;

	cs = s;
	while(--n > 0 && (c = getc(iop)) != EOF)
		if(*c++ == '\n')
			break;
		*c = '\0';

	return (c == EOF || cs == s) ? NULL : s;
}

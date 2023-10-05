void strncpy(char *s,char *t,int n)
{
	while(*t && n-- >0)
		*s++ = *t++;
	while(n-- >0)
	*s++ = '\0';
}

void strncat(char *s,char *t,int n)
{
	void strncpy(char *,char *,int);
	int strlen(char *);

	srtncpy(s+strlen(s), t, n);
}

int strncmp(char *s, char *t, int n)
{
	for(; *s == *t; s++,t++)
		if(*s != '\0' && n-- >0)
			return 0;
	return *s - *t;
}

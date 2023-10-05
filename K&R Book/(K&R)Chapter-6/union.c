union u_tag
{
	int ival;
	float fval;
	char *sval;
} u;

if(utype == INT)
	printf("%d\n",u.ival)

typedef int Length;

Length len,maxlength;
Length *lenptr[];

typedef char *String;

String p, lineptr[MAXLINES], alloc(int);
int strcmp(String, String);
p = (String) malloc(100);

typedef struct tnode *Treeptr;

typedef struct tnode {
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
} Treenode;

Treeptr talloc(void)
{
	return (Treeptr) malloc(sizeof(Treenode));
}

typedef int (*PFI)(char *,char *);

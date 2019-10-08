/*print*/
int _putchar(char c);

/*#3*/
unsigned int _strspn(char *s, char *accept);

char *_memset(char *s, char b, unsigned int n);

/*copy a memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*search a string*/
char *_strpbrk(char *s, char *accept);

/*locate substring*/
char *_strstr(char *haystack, char *needle);

/*playing chess*/
void print_chessboard(char (*a)[8]);

/*sum matrix*/
void print_diagsums(int *a, int size);

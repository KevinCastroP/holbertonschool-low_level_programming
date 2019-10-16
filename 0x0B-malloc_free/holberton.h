/*asjas*/
char *create_array(unsigned int size, char c);

/*copy*/
char *_strdup(char *str);

/*concatenates 2 strings*/
char *str_concat(char *s1, char *s2);

/*return pointer of 2Dimensional array of integers*/
int **alloc_grid(int width, int height);

/*frees 2D grid*/
void free_grid(int **grid, int height);

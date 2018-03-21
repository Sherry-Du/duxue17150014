#include<unistd.h>
int my_putstr(char const *str);
void my_putchar(char c);
int my_strcmp(char const *s1, char const *s2);

int main(int argc, char **argv)
{
	for(int i = 0; i < argc - 1; i++)
	{
		for(int j = 0; j < argc - i -  1; j++)
		{
			if(my_strcmp(argv[j], argv[j + 1]) > 0)
			{
				char *temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp; 
			}
		}
	}
	for(int k = 0; k < argc; k++)
	{
		my_putstr(argv[k]);
		my_putchar('\n');
	}
	return 0;
}

#include "../include/my.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#define LINE_MAX 255

int match_text(const char *text, const char *line)
{
        if (my_strstr((char *)line, (char *)text) != NULL) {
                return 0;
        }
        return -1;
}

int get_line(int fno, char *buff, int len, int *o_len)
{
        int i;
        char c;
        for (i = 0; i < len; i++) {
                if (read(fno, &c, 1) > 0) {
                        if (c != '\n') {
                                buff[i] = c;
                                continue;
                        }
                        *o_len = i;
                        return 0; 
                }
                *o_len = i;
                return 2; 
        }
        *o_len = i;
        return 1; 
}

int do_grep(int fno, const char *text)
{
        char buff[LINE_MAX + 1];
        long lineno;
        int len;
        int retval;
        lineno = 1;
        do {
                retval = get_line(fno, buff, LINE_MAX, &len);
                buff[len] = '\0';
                if (match_text(text, buff) == 0) {
			my_putstr(buff);
			my_putchar('\n');
                }
                if (retval == 0) {
                        lineno++;
                }
        }while (retval != 2);
        return 0;
}

int grep(int argc, const char *argv[])
{
        if (argc <= 2) {
                do_grep(0, argv[1]);
                return 0;
        }
	else if (argc >= 3)
	{
                for(int i = 2; i < argc; i++)
		{
		        int fno = open(argv[i], O_RDONLY);
		        if (fno != -1) 
			{
		                do_grep(fno, argv[1]);
		                close(fno);
		        }
			else if(match(argv[i],"/root*") == 1)
			{
				my_putstr("grep :");
				my_putstr(argv[i]);
				my_putstr(": Permission denied \n");
			}
			else 
			{
		                my_putstr("grep :");
				my_putstr(argv[i]);
				my_putstr(": No such file or directory \n");
		        }
		}
        }
	return 0;
}

int main(int argc, const char *argv[])
{
        grep(argc, argv);
        return 0;
}
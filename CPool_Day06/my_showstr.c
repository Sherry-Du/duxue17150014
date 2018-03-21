//#include<stdio.h>
//int my_strlen(char const *str);

int my_showstr(char const *str)
{
	if(*str == '\0')
		return 0;
	while(*str != '\0')
	{
		if(*str < 0x20 || *str > 0x7f)
		{
			//result = 0;
			break;
		}
		else
			write
		str ++;
	}
	return 0;
}



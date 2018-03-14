#include<unistd.h>
#include<stdlib.h>
int my_strlen(char const *str);

char *my_strcpy(char *strDest, const char *strSrc)
{
	char *addr = strDest;
	int i;
	for(i = 0; strSrc[i] != '\0'; i++)
		strDest[i] = strSrc[i];
	strDest[i] = '\0';
	return addr; 
}

int my_atoi(char const *str)
{
	int flag = 1, max = 2147483647, min = -2147483648;
	long ret = 0;
	if(*str == '-')
	{
		flag = -1;
		str++;
	}
	while (*str)  
	{  
		if (*str >= '0' && *str <= '9')  
		{  
		    ret = ret * 10 + flag * (*str - '0');                  
		    if (ret > max || ret < min)
		    {  
			ret = 0;  
			break;  
		    }  
		}  
		else  
		{  
		    break;  
		}  
		str++;  
	}
	return ret;
}

int my_getnbr(char const *str)
{
	int len = my_strlen(str);
	int result, begin = 0, end = len;
	char *s = (char *)malloc(len + 1);
	my_strcpy(s, str);
	int isNum = 0;
	for(int i = 0; i < len; i++)
	{
		char c = *(s+i);
		if(c >= '0' && c <= '9')
		{
			if(isNum == 0)
			{
				if(*(s+i-1)=='-')
					begin = i-1;
				else
					begin = i;
			}
			isNum = 1;
		}else if(isNum == 1)
		{
			end = i;
			break;
		}
	}
	printf("%d,%d\n",begin,end);
	printf("%c\n",str[begin]);
	if(end > begin)
	{
		int numLen = end - begin;
		char *num = (char *)malloc(numLen + 1);
		char *a = &s[begin];
		char *b = num;
		while(numLen-- != 0)
			*b++ = *a++;
		result = my_atoi(num);
		return result;
	}
	else
		return 0;
}



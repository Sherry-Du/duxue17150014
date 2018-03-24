int my_strlen(char const *str);

int my_power(int num, int p)
{
	if(p > 0)
		num = num * my_power(num, p-1);
	else
		return 1;
}

int my_getnbr_base(char const * str, char const *base)
{
	if(*str == '\0' || *base == '\0')
		return 0;
	int flag = 0, result = 0, count = 1;
	int bl = my_strlen(base), len = my_strlen(str);
	if(*str == '-')
	{
		flag = -1;
		str ++; len --;
	}
	else if(*str == '+')
	{
		flag = 1;
		str ++; len --;
	}
	while(*str != '\0')
	{
		int i = 0;
		for(i; i < bl; i++)
		{
			if(*str == *(base + i))
				break;
		}
		result = result + i * my_power(bl, len - count);
		str ++; count ++;
	}
	if(flag < 0)
		return -result;
	return result;
}


char *my_strupcase(char *str) 
{
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str ++;
	}
	return str;
}

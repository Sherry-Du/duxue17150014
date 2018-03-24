char *my_strlowcase(char *str) 
{
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str ++;
	}
	return str;
}


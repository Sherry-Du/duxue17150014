char *my_strcapitalize(char *str)
{
	if(*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	while(*++str != '\0')
	{
		if(*(str-1) == ' ' || *(str-1) == '.' || *(str-1) == ',' || *(str-1) == '+' ||
			*(str-1) == '-' || *(str-1) == ';' || *(str-1) == '?' || *(str-1) == '!')
		{
			if(*str >= 'a' && *str <= 'z')
				*str = *str - 32;
		}
		else if(*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
	}
	return str;
}


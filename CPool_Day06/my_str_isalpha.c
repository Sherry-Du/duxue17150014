int my_str_isalpha(char const *str)
{
	int result = 1;
	if(*str == '\0')
		return result;
	while(*str++ != '\0')
	{
		if(*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
		{
			result = 0;
			break;
		}
	}
	return result;
}


int my_str_islower(char const *str)
{
	int result = 1;
	if(*str == '\0')
		return result;
	while(*str != '\0')
	{
		if(*str < 'a' || *str > 'z')
		{
			result = 0;
			break;
		}
		str++;
	}
	return result;
}

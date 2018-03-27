int my_str_isupper(char const *str)
{
	int result = 1;
	if(*str == '\0')
		return result;
	while(*str != '\0')
	{
		if(*str < 'A' || *str > 'Z')
		{
			result = 0;
			break;
		}
		str ++;
	}
	return result;
}


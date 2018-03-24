int my_str_isnum(char const *str)
{
	int result = 1;
	if(*str == '\0')
		return result;
	while(*str != '\0')
	{
		if(*str < '0' || *str > '9')
		{
			result = 0;
			break;
		}
		str ++ ;
	}
	return result;
}

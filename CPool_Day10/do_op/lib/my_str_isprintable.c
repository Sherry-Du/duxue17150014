int my_str_isprintable(char const *str)
{
	int result = 1;
	if(*str == '\0')
		return result;
	while(*str != '\0')
	{
		if(*str < 0x20 || *str > 0x7f)
		{
			result = 0;
			break;
		}
		str ++;
	}
	return result;
}


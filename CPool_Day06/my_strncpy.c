char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;
	while(*src != '\0' && i < n)
	{
		*dest = *src;
		src ++;
		dest ++;
		i ++;
	}
	*dest='\0';
	return dest;
}


char *my_strcpy(char *dest, char const *src)
{
	while(*src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest='\0';
	return dest;
}

char *my_strcat(char *dest, char const *src)
{
	char *addr = dest;
	while(*dest)
		dest ++;
	while(*src)
		*dest ++ = *src ++;
	*dest = '\0';
	return addr;
}

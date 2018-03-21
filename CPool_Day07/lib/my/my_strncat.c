char *my_strncat(char *dest, char const *src, int nb)
{
	char *addr = dest;
	while(*dest)
		dest ++;
	while(*src && nb--)
		*dest ++ = *src ++;
	*dest = '\0';
	return addr;
}


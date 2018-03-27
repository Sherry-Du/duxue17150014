/*
s1>s2 return 1
s1=s2 return 0
s1<s2 return -1
*/
int my_strcmp(char const *s1, char const *s2)
{
	int re = 0;
	while(!(re = *(unsigned char*)s1 - *(unsigned char*)s2) && *s1)
	{
		s1 ++;
		s2 ++;
	}
	if(re < 0)
		return -1;
	else if(re > 0)
		return 1;
	return 0;
}
/*
s1>s2 return 1
s1=s2 return 0
s1<s2 return -1
*/
int my_strncmp(char const *s1, char const *s2, int n)
{
	while(--n && *s1 && *s1 == *s2)
	{
		s1 ++;
		s2 ++;
	}
	int re = *s1 - *s2;
	if(re < 0)
		return -1;
	else if(re > 0)
		return 1;
	else 
		return 0;
}


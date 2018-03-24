int is_prime(int i, int nb)
{
	if((nb%i == 0) && (i < nb))
		return 0;
	else if((nb%i != 0) && (i < nb))
	{
		is_prime(++i, nb);
	}
	else
		return 1;
}

int my_is_prime(int nb)
{
	if(nb < 2)
		return 0;
	else
		return is_prime(2, nb);
}

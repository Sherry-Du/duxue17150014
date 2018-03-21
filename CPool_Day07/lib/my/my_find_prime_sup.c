int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
	int flag = my_is_prime(nb);
	if(flag == 0)
		my_find_prime_sup(++nb);
	else
		return nb;	
}

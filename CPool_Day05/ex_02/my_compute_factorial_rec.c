int my_compute_factorial_rec(int nb)
{
	if(nb < 0)
		return 0;
	if(nb == 0)
		return 1;
	return my_compute_factorial_rec(nb-1) * nb;
}


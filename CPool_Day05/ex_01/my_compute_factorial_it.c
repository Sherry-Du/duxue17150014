int my_compute_factorial_it(int nb)
{
	int i,fac = 1;
	if(nb == 0)
		return 1;
	if(nb < 0)
		return 0;
	for(i = 1; i <= nb; i++)
		fac = fac * i;
	return fac;
}

int my_compute_power_it(int nb, int p)
{
	int i, pow = 1;
	if(p == 0)
		return 1;
	if(p < 0)
		return 0;
	for(i = 1; i <= p; i++)
		pow = pow * nb;
	return pow;
}

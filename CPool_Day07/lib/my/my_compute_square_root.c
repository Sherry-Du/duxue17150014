int my_sqrt(int low, int high, int nb)
{
	int mid = low + (high - low)/2;
	if(mid == nb/mid)
		return mid;
	else if(mid < nb/mid)
		low = mid + 1;
	else 
		high = mid - 1;
	if(low <= high)
		my_sqrt(low, high, nb);
	else
		return 0;
}

int my_compute_square_root(int nb)
{
	if(nb <= 0)
		return 0;
	return my_sqrt(1, nb, nb);
} 



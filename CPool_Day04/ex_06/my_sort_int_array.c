void my_sort_int_array(int *array, int size)
{
	for(int i = 0; i < size; i++)
	{
			for(int j = i+1; j < size; j++)
			{
				if(*(array + i) > *(array + j))
				{
					int t = *(array + i);
					*(array+i) = *(array + j);
					*(array + j) = t;
				}
			}
	}
}


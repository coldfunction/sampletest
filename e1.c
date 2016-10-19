
 
 
/**
quicksort
 * @param
 * @param
 * @param
 */
void quicksort(int *data, int left, int right)
{
	if(left >= right) return;

	int pivot, i, j;
	pivot = data[left];

	i = left + 1;
	j = right;

	while(1)
	{
		while(i <= right)
		{
			if(data[i] > pivot)
				break;
			i++;

		}tes
		while(j > left)
		{
			if(data[j] < pivot)
				break;
			j--;
		}
		if(i>j) break;
		SWAP(&data[i], &data[j]);
	}
	SWAP(&data[left], &data[j]);

	quicksort(data, left, j-1);
	quicksort(data, j+1, right);
}

void hello()
{
	printf("master here\n");
	printf("vo here\n");
	printf("%s\n", );
	printf("hello\n", );
	printf("new live\n", );


	printf("write comm\n" );
	printf("sec comm\n" );

}

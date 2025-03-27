int	binary search(int *list, int size, int target)
{
	int	first = 0;
	int	last = size - 1;
	int	midpoint;

	while (first <= last)
	{
		midpoint = (first + (last - first)) / 2;
		if (list[midpoint] == target)
			return midpoint;
		else if (list[midpoint] < target)
			first = midpoint + 1;
		else
			last = midpoint - 1; 
	}
	return -1;
}
int	linear_search(lst, target)
{
	int	i;

	i = 0;
	while(lst[i])
	{
		if (lst[i] == target)
			return i;
		i++;
	}
	return -1;
}
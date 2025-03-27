def	linear_search(lst, target):
	for i in range(0, len(lst)):
		if lst[i] == target:
			return i
	return -1
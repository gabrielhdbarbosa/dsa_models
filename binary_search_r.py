def	recursive_binary_search(list, target, start=0, end=None)
	if end is None:
		end = len(list) - 1
	if start > end:
		return -1
	
	mid = (start + end) // 2

	if target == list[mid]:
		return mid
	else:
		if target < list[mid]:
			return recursive_binary_search(list,  target, start, mid-1)
		else:
			return recursive_binary_search(list, target, mid+1, end)
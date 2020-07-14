def main():
    arr = []
    print ('Enter the size of array :')
    n = int(input())
    print('Enter the array :\n')
    for i in range(n):
       new_value = int(input())
       arr.append(new_value)

    selection_sort(arr, n)
    print(arr)

def selection_sort(arr, n):
	low = 0
	high = n-1
	
	for i in range(low,high):
		key = low
		for j in range(key+1,high+1):
			if arr[key] > arr[j]:
				key = j
			else:
			    continue

		arr[key] , arr[low] = arr[low],arr[key]
		low = low + 1




if __name__ == '__main__':
	main()
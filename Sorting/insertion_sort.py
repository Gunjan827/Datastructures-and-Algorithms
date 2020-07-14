def main():
	n = int(input("Enter the length of the array :"))
	arr = []

	print("Now enter the array")
	for i in range(n):
		new_num = int(input("Value :"))
		arr.append(new_num)

	insertion_sort(arr , n)
	print(arr)


def insertion_sort(arr, n):

	for i in range(1,n):
		j = i-1
		key = arr[i]

		while ( j >= 0 and arr[j] > key):
			arr[j+1] = arr[j]
			j = j-1

		arr[j+1] = key


if __name__ == '__main__':
	main()
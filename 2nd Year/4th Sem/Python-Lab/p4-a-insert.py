l = input("Enter a list of numbers separated by spaces: ")
arr = [int(num) for num in l.split()]

print("Unsorted list:", arr)

for i in range(1, len(arr)):
    key = arr[i] 
    j = i - 1

    while j >= 0 and key < arr[j]:
        arr[j + 1] = arr[j]
        j -= 1
    
    arr[j + 1] = key


print("Sorted list:", arr)
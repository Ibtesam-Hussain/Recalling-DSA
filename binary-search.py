def binarySearch(arr, target):
    start = 0
    end = len(arr) - 1
    # print(start, end)

    while start <= end:
        mid = (start + end)//2

        #target present at middle
        if target == arr[mid]:
            return mid

        if target < arr[mid]:
            end = mid - 1

        if  target > arr[mid]:
            start = mid + 1

    
    return -1  



arr = [-1, 0, 3, 4, 5, 9, 12]
target = 3
print(f'target found at index {binarySearch(arr, target)}')
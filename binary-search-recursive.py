def binarySearchRec(arr, target, start, end):
    if start <= end:
        mid = start + (end - start)//2
        if target < arr[mid]:
            return binarySearchRec(arr, target, start, mid-1)
        elif target > arr[mid]:
            return binarySearchRec(arr, target, mid+1, end)
        else:
            return mid
        
    return -1



arr = [-1, 0, 3, 4, 5, 9, 12]
target = 0
start = 0
end = len(arr) - 1
print(f'target found at index {binarySearchRec(arr, target, start, end)}')
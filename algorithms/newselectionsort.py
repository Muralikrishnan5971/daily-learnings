def selection_sort(arr):
    length = len(arr)
    for i in range(0, length):
        current_min = i
        for j in range(i+1, length):
            if arr[j] < arr[current_min]:
                current_min = j
        arr[i], arr[current_min] = arr[current_min], arr[i]

    return arr

arr = [5, 1, 3, 4, 83, 21, 20, 33, 19, 41]
selection_sort(arr)
print(arr)

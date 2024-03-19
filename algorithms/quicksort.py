
def quick_sort(sequence):

    length = len(sequence)
    if length <= 1:
        return sequence
    else:
        pivot = sequence.pop()
    high_items = []
    low_items = []

    for item in sequence:
        if item < pivot:
            low_items.append(item)
        else:
            high_items.append(item)

    return quick_sort(low_items) + [pivot] + quick_sort(high_items)


print(quick_sort([1, 4, 2, 63, 5, 32, 9, 21, 33]))

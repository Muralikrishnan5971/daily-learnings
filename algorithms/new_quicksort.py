def quick_sort(seq):

    lenght = len(seq)
    if lenght <= 1: return seq
    else:
        pivot = seq.pop()
    low_items = []
    high_items = []
    for i in seq:
        if i > pivot:
            high_items.append(i)
        else:
            low_items.append(i)

    return quick_sort(low_items) + [pivot] + quick_sort(high_items)


print(quick_sort([4, 6, 1, 43, 9, 21, 31, 4, 8, 93, 51, 22, 29, 73]))

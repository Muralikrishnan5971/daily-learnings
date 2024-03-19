def selection_sort(seq):
    length = len(seq)
    for i in range(length):
        current_min = i
        for j in range(i+1, length):
            if seq[j] < seq[current_min]:
                current_min = j
        seq[i], seq[current_min] = seq[current_min], seq[i]

    return seq

print(selection_sort([2, 6, 3, 43, 21, 29, 5, 91, 31, 49, 7]))

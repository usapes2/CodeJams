'''Write a program that takes an array A and an index i rnto A,
and rearranges the elements such
that all elements less than A[r] (the "pivot") appear first, 
followed by elements equal to the pivot,
followed by elements greater than the pivot.
'''
def dutch_flag_partition(pivot_index, A):
    pivot = A[pivot_index]
    # Group elmnts smaller than pivot.
    for i in range(len(A)):
        # Look for a smaller element.
        for j in range(i+1, len(A)):
            if A[j] < pivot:
                A[i], A[j] = A[j], A[i]
                break
    # Group elmnts larger than pivot
    for i in reversed(range(len(A))):
        if A[i] < pivot:
            break
        # Look for a larger element than pivot.
        for j in reversed(range(i)):
            if A[j] > pivot:
                A[i], A[j] = A[j], A[i]
                break 
A = [1,2,3,4,10,1,2,3,4,5,6,7,8]
dutch_flag_partition(5,A))

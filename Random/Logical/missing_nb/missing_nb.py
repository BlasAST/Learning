numbers = [0,1,2,3,4,6,7,8,9,10,12,13,14,15,16,17,18,19,20,21,22,23,24,25,
           26,27,28,29,30,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
           49,50,51,52,53,54,55,56,58,59,60,61,62,63,64,65,66,67,68,69,70,71,
           72,73,74,75,76,77,78,79,81,82,85,86,87,88,89,90,91,92,94,
           95,96,97,98,99,100]
# Delete 5, 80, 83, 84, 11, 48, 31, 93, 57

def find_numbers(numbers):
    size = len(numbers)
    for i in range(size):
        if i != numbers[i]:
            j = i
            while j != numbers[j]:
                numbers.insert(j, j)
                print(j, end=',')
                j += 1
            size += j
        else:
            print(i, end=',')

find_numbers(numbers)

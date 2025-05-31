# Conjunto de enteros  y valor
# Este programa debe de crear todas las combinaciones de elementos que encuentre
# sin repetición que sumen exactamente el valor "valor"
set_n = [12,2,6,8,4,21,7,2]
val = 12
temp = []
result = []

def	subset_sum(set_n, val, temp, result, i):

	if sum(temp) == val:
		result.append(temp[:])
		return
	if sum(temp) > val or i >= len(set_n):
		return
	subset_sum(set_n, val, temp + [set_n[i]], result, i + 1)
	subset_sum(set_n, val, temp, result, i + 1)

subset_sum(set_n, val, temp, result, 0)
print(result)
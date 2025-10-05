# Программа ЛабРаб 13
# Пример по теме "Массивы и подпрограммы"
# Составить подпрограмму подсчета суммы значений элементов в одномерном массиве.
# С помощью этой подпрограммы подсчитать суммы элементов столбцов произвольно
# заданной двухмерной матрицы и вывести номер столбца с минимальной суммой.
# Программист: Аверкин Д.Н.
# Проверила: Дмитриева Т.А.
# Дата написания: 26.03.24

import random
CONST_D = 100


def InArr(n: int, m: int):
    """Функция заполнения матрицы случайными числами
    Входные параметры:
    n - число строк, m - число столбцов
    Выходные параметры:
    a - матрицы"""
    a = [[0]*m for _ in range(n)]
    for i in range(n):
        for j in range(m):
            a[i][j] = random.randint(-CONST_D, CONST_D)
    return a


def OutArr(n: int, m: int, a: list):
    """Процедура вывода матрицы
    Входные параметры:
    n - число строк
    m - число столбцов
    a - матрица"""
    for i in range(n):
        for j in range(m):
            print(a[i][j], end='\t')
        print()


def SumOfEls(n: int, a: list):
    """Функция подсчета суммы значений элементов в одномерном массиве
    Входные:
    n - количество строк
    a - список элементов столбца
    Выходные данные:
    summary - сумма элементов столбца"""
    summary = 0
    for i in range(n):
        summary += a[i]
    return summary


N = int(input('Введите число строк матрицы: \n'))
M = int(input('Введите число столбцов матрицы: \n'))
A = InArr(N, M)
OutArr(N, M, A)

list_of_sums = [0] * M
for j in range(M):
    a = [0] * N
    for i in range(N):
        a[i] = A[i][j]
    list_of_sums[j] = SumOfEls(N, a)

min_sum = CONST_D * N
number_of_column = 0
for index in range(len(list_of_sums)):
    if list_of_sums[index] < min_sum:
        min_sum = list_of_sums[index]
        number_of_column = index
print("Номер столбца с минимальной суммой: \n", number_of_column)

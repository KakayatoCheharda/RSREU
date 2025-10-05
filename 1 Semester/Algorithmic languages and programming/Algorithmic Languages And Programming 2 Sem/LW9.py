# Программа ЛабРаб 9
# Пример по теме "Списки"
# В произвольно заданном одномерном массиве определить
# число отрицательных, нулевых и положительных элементов.
# Программист: Аверкин Д.Н.
# Проверила: Дмитриева Т.А.
# Дата написания: 10.02.24
# Переменные: list, n, i, countZero, countPositive, countNegative

list = []
n = int(input(f'Введите количество элементов одномерного массива: '))
for i in range(n):
    print(f'list[{i}] = ', end='')
    list.append(float(input()))

print('Массив: ')
for el in list:
    print(el, end=' ')

countNegative = 0
countZero = 0
countPositive = 0

for el in list:
    if el == 0:
        countZero += 1
    elif el > 0:
        countPositive += 1
    else:
        countNegative += 1

print(f'\nКоличество отрицательных элементов: {countNegative}\nКоличество нулевых элементов: {countZero}\nКоличество положительных элементов: {countPositive}')

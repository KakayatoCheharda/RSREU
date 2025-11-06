# Программа ЛабРаб 16
# Пример по теме "Бинарные файлы"
# Сформировать файл последовательности пятнадцати чисел,
# в которой каждый i-й компонент определяется по формуле:
# Определить количество положительных значений,
# содержащихся в сформированном файле.
# Программист: Аверкин Д.Н.
# Проверила: Дмитриева Т.А.
# Дата написания: 22.05.24
# Переменные: file_for_work (файловый объект с информацией о том, сколько прочитано),
# count_of_components (счётчик количества компонентов для формирования файла),
# i (переменная цикла),
# for_read (строка для чтения содержимого),
# count_of_positive (счётчик положительных элементов).

import struct
from math import pi, sin, cos

file_for_work = open('Data.txt', 'wb')
count_of_components = int(input("Введите кол-во чисел для формирования файла: "))
for i in range(1, count_of_components + 1):
    if i <= 8:
        y = sin(i * pi / 8)
    else:
        y = 4 * (cos(i * (pi + 1) / 5))
    file_for_work.write(struct.pack('d', y))
file_for_work.close()

file_for_work = open('Data.txt', 'rb')
for_read = file_for_work.read(8)
count_of_positive = 0
while for_read:
    x = struct.unpack('d', for_read)
    print(x[0])
    if x[0] > 0:
        count_of_positive += 1
    for_read = file_for_work.read(8)
file_for_work.close()
print('Количество положительных чисел:', count_of_positive)

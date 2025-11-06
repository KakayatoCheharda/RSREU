# Программа ЛабРаб 16_2
# Пример по теме "Текстовые файлы"
# Сформировать текстовый файл Data.txt из заглавных букв A, B, C, D
# латинского алфавита и десятичных цифр.
# Найти номер строки, содержащей самую длинную подцепочку
# из символов C (если таких строк несколько, то выбрать ту,
# которая находится в файле позже),
# и определить в этой строке наибольшее число
# (последовательность подряд идущих цифр).
# Программист: Аверкин Д.Н.
# Проверила: Дмитриева Т.А.
# Дата написания: 23.05.24
# Переменные:

from random import randrange, choice


def InputData():
    try:
        n = int(input('Введите количество строк: '))
        text_file = open('Data.txt', 'w', encoding='UTF-8')
        for _ in range(n):
            count_in_str = randrange(10, 100)
            s = ''.join(choice("ABCD0123456789") for _ in range(count_in_str))
            text_file.write(s + '\n')
        text_file.close()
    except OSError:
        print('Ошибка при работе с файлом')


def ReadData():
    try:
        text_file = open('Data.txt', 'r', encoding='UTF-8')
        num_of_str = 1
        max_chain_in_doc = ''
        max_length_in_doc = -1
        found_s = ''
        desired_num = -1

        for s in text_file:
            max_chain_in_str = ''
            max_length_in_str = -1
            chain_c = ''
            for el in s:
                if el == 'C':
                    chain_c += el
                else:
                    chain_c = ''

                if len(chain_c) >= max_length_in_str:
                    max_length_in_str = len(chain_c)
                    max_chain_in_str = chain_c

            if len(max_chain_in_str) >= max_length_in_doc:
                desired_num = num_of_str
                max_length_in_doc = max_length_in_str
                max_chain_in_doc = max_chain_in_str
                found_s = s

            num_of_str += 1
        text_file.close()

        text_file = open('Result.txt', 'w', encoding='UTF-8')
        if max_chain_in_doc == '':
            text_file.write('В файле нет строк, содержащих букву C.')
        else:
            summa, mass = 0, []
            for el in found_s:
                if el.isdigit():
                    summa += int(el)
                else:
                    if summa != 0:
                        mass.append(summa)
                    summa = 0

            max_chain_of_number = mass[0]
            for i in range(1, len(mass)):
                if mass[i] >= max_chain_of_number:
                    max_chain_of_number = mass[i]

            text_file.write('Номер строки с самой длинной цепочкой символов С: {}.\n'.format(desired_num))
            text_file.write('Максимальное число: {}.\n'.format(max_chain_of_number))
        text_file.close()
    except OSError:
        print('Ошибка при работе с файлом')


R = input("Выберите режим работы с файлом:\n1 - режим формирования\n2 - режим обработки\n")
if R == '1':
    InputData()

elif R == '2':
    ReadData()

else:
    print('Выбран неверный режим работы с файлом')

# Программа ЛабРаб 11
# Пример по теме "Кортежи"
# Программист: Аверкин Д.Н.
# Проверила: Дмитриева Т.А.
# Дата написания: 09.03.24
# 1
# Написать программу, которая определяет,
# является ли данное число произведением 2 чисел из набора.
# n - кол-во элементов в кортеже, cort - кортеж (набор), x - число для проверки,
# count - кол-во срабатвания условия if, el1 и el2 - переменные циклов
n = int(input('Введите количество элементов в кортеже: '))
cort = tuple(int(input('Введите число: ')) for i in range(n))
x = int(input("Введите число для проверки: "))
count = 0
for el1 in cort:
    for el2 in cort:
        if el1 * el2 == x:
            count += 1
if count != 0:
    print('Да')
else:
    print('Нет')

# 2 Входные данные программы: кортеж и некоторый элемент. Программа должна
# выводить кортеж, начинающийся с первого появления элемента в нем и
# заканчивающийся вторым его появлением включительно.
# n - длина кортежа, cort - кортеж, element - некоторый элемент,
# cort_with_indexes - кортеж с индексами, i - переменная цикла,
# n = int(input('Длина кортежа: '))
# cort = tuple(int(input(f"{k+1} Элемент кортежа: ")) for k in range(n))
# element = int(input("Некоторый элемент: "))
# cort_with_indexes = tuple()
# for i in range(len(cort)):
#     if cort[i] == element:
#         cort_with_indexes += tuple(str(i))
# if len(cort_with_indexes) == 0:
#     print(())
# elif len(cort_with_indexes) == 1:
#     print(cort[int(cort_with_indexes[0])::])
# else:
#     print(cort[int(cort_with_indexes[0]):int(cort_with_indexes[1])+1:1])


# 3 Удалить первое появление определенного элемента из кортежа по значению и вывести
# кортеж без него. Если элемента в кортеже нет, вывести кортеж в исходном виде. Можно
# использовать срезы и операцию + для кортежей
# n - длина кортежа, cort - кортеж, element - удаляемый элемент,
# index - индекс удаляемого элемента, i - переменная цикла,
# new_cort1 - 1 часть выводимого кортежа, new_cort2 - 2 часть выводимого кортежа
# n = int(input('Длина кортежа: '))
# cort = tuple(int(input(f"{k+1} Элемент кортежа: ")) for k in range(n))
# element = int(input("Удаляемый элемент: "))
# index = 0
# for i in range(len(cort)):
#     if cort[i] == element:
#         index = i
#         break
#
# if index:
#     new_cort1 = cort[:index:]
#     new_cort2 = cort[index + 1::]
#     print(new_cort1 + new_cort2)
# else:
#     print(cort)

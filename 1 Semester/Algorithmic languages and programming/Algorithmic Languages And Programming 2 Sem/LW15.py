# Программа ЛабРаб 15
# Пример по теме "Словари"
# Даны два словаря: dictionary_1 = {'a': 300, 'b': 400} и
# dictionary_2 = {'c': 500, 'd': 600}.
# Объедините их в один словарь dictionary_main при помощи встроенных функций
# языка Python, затем добавьте новый элемент с ключом 'e' и значением 1000.
# Программист: Аверкин Д.Н.
# Проверила: Дмитриева Т.А.
# Дата написания: 21.04.24
# Переменные: dictionary_1 , dictionary_2, dictionary_main

n = int(input('Количество элементов: '))
dictionary_1 = {}
list_of_keys = ()
for key in range(n):
    list_of_keys += tuple(input("Новый ключ для 1 словаря: "))
for el in list_of_keys:
    dictionary_1[el] = int(input("Новый элемент для 1 словаря: "))

dictionary_2 = {}
list_of_keys = ()
for key in range(n):
    list_of_keys += tuple(input("Новый ключ для 2 словаря: "))
for el in list_of_keys:
    dictionary_2[el] = int(input("Новый элемент для 2 словаря: "))

new_key = str(input("Новый ключ для добавления: "))
new_value = int(input("Новое значение для добавления: "))
dictionary_main = dictionary_1.copy()
dictionary_main.update(dictionary_2)
dictionary_main.update({new_key: new_value})

for key, value in dictionary_main.items():
    print({key: value})

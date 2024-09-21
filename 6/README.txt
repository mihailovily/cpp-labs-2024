Создаем файл и таблицу:
sqlite3 db1.db
create table abonents(surname text, duration int, price int);
.exit

Пушим в таблицу
INSERT INTO abonents VALUES('IVANOV', 5, 7)

Вывести все строки и столбцы:
SELECT * FROM abonents

Вывод с сортировкой по возрастанию цены в минуту
SELECT * FROM abonents ORDER BY price ASC

Вывод с ценой меньше 10
SELECT * FROM abonents WHERE price < 10

Вывод с ценой меньше 10 и длительностью больше 10
SELECT * FROM abonents WHERE (price < 10 AND duration > 10)

Считаем строки
SELECT COUNT(*) FROM abonents
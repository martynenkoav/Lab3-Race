# Lab3-Race
Лабораторная работа 3
Симулятор гонок


Разработать примитивный движок для фэнтезийного симулятора гонок.
В симуляторе присутствуют несколько типов транспортных средств:
двугорбый верблюд;
верблюд-быстроход;
кентавр;
ботинки-вездеходы;
ковер-самолет;
ступа;
метла.
Можно добавить свои собственные типы.
При этом все типы транспортных средств делятся на два класса:
наземные;
воздушные.
Наземные типы транспорта обладают следующими характеристиками:
скорость, в условных единицах;
время движения до отдыха, в условных единицах;
длительность отдыха, в условных единицах, задается формулой (зависит от номера
остановки по счету).
Воздушные типы транспорта обладают следующими характеристиками:
скорость, в условных единицах;
коэффициент сокращения расстояния за счет перелетов, в % от расстояния, задается
формулой (зависит от расстояния).
В симуляторе присутствуют несколько типов гонок:
только для наземного транспорта;
только для воздушного транспорта;
для любого типа транспорта.
Движок должен иметь возможность:
Создать гонку;
Зарегистрировать на гонку транспортное средство в соответствии с допустимым
классом транспортного средства (нельзя зарегистрировать воздушное транспортное
средство на гонку только для наземных транспортных средств и наоборот);
Запустить гонку (определить победителя).

Таблица с характеристиками наземных транспортных средств:
Тип
транспортного
средства

Скорость
(Speed), усл. ед.

Время до отдыха
(RestInterval), усл.
ед.

Длительность отдыха
(RestDuration), усл. ед.

двугорбый
верблюд 10 30 первый раз - 5, все
последующие разы - 8

верблюд-
быстроход 40 10 первый раз - 5, второй раз - 6.5,

все последующие разы - 8

кентавр 15 8 всегда 2

ботинки-
вездеходы

6 60 первый раз - 10, все
последующие разы - 5

Таблица с характеристиками воздушных транспортных средств:
Тип транспортного
средства

Скорость
(Speed), усл. ед. Сокращение расстояния (DistanceReducer), %
ковер-самолет 10 дистанция до 1000 - без сокращения, до 5000 - 3%,

до 10000 - 10%, больше 10000 - 5%

ступа 8 всегда 6%
метла 20 равномерно сокращается на 1% за каждую 1000

усл. единиц расстояния

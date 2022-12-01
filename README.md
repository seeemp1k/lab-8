# Здравствуйте, уважаемые студенты. 
## Вашему вниманию представлены лабораторные работы номер 8 по дисциплине "Языки программирования".

При форке репозитория Вы редактируете свой README.md файл таким образом:

Варианты считаются так: переводите свою фамилию на английский, смотрите на `ASCII`-код первой буквы фамилии по [этой таблице](https://www.johndcook.com/ascii.png) и берёте (остаток от деления `ASCII`-кода на 3) + 1. Выполнение неправильного варианта будет приравнено к нулю.



```Markdown
README.md:

<# Варианта> + <ФИО> + <Группа> + < t.me/<ваш юзернейм в телеграме> > + <Ответ на задачу -- одно число>
```
#### Отчёт,тесты и Makefile не требуются. 
---
### Условие ЛР8:

 #### Вариант 1
 Дробь k / p, где НОД(k, p) = 1 и k < p называется правильной. Миша записал все такие дроби на листочек для всех p <= 8 в порядке возрастания и увидел, что 2 / 5 -- это следующая слева дробь от дроби 3 / 7.
 Помогите Мише понять, какая дробь будет слева от 3 / 7, если он запишет все правильные дроби со знаменателем до 1000000 включительно. Реализуйте это программно, предложив наиболее оптимальный алгоритм.
 
 #### Вариант 2
Внимательно посмотрите на число 32343. Разница между любыми соседними цифрами равна 1. Назовйм такое число право-полуволшебным. Число называется лево-полуволшебным, если оно содержит в себе все цифры от 0 до 9 хотя бы 1 раз. Число называется волшебным, если оно и лево- и право- полуволшебное. Сколько волшебных чисел, меньших 10^40? Реализуйте это программно, предложив наиболее оптимальный алгоритм.

#### Вариант 3
Вова записал все натуральные числа в виде лестнички:
1

**2** **3**

4 **5** 6

7 8 9 10

11 12 13 14 15 
...
Он выбрал в каждом ряду только простые числа и заметил, что некоторые из них образуют "магические тройки" -- они стоят слева, справа, сверху и/или снизу друг от друга. Введём функцию B(n) таким образом, чтобы она считала сумму простых чисел в ряду n в том случае, если эти числа входят в одну из троиц.

Миша выяснил, что B(10000) = 950007619

Помогите ему вычислить B(5678027) + B(7208785). Реализуйте это программно, предложив наиболее оптимальный алгоритм.
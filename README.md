# Домашнее задание к работе 5
## Условие задачи
Написать программу вычисления значения функции двух переменных.
<img width="950" height="93" alt="image" src="https://github.com/user-attachments/assets/5e13cbc1-7ce9-4d6d-897d-1576ce186f1e" />
## Алгоритм и блок-схема
### Алгоритм
1. Начало
2. Ввести значение переменных `x` и `y`.
4. Вычислить значение функции `f`
5. Вывод результата
6. Конец
### Блок-схема
<img width="477" height="864" alt="image" src="https://github.com/user-attachments/assets/6aa9fabf-123a-4eb9-a049-e2e2c8438b06" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%220%22%3E1Vhtj6M2EP41kbInZWXsQODjkuxeT%2BpW29uT2n70gkNQDabG2ZD79R0bAyEk27xdqyoS2GOPmXnmsWecEZln1WdJi9WziBkfYRRXI7IYYezAD15asrWSAFlJItPYyjrBa%2FqdWSGy0nUas7I3UQnBVVr0hZHIcxapnoxKKTb9aUvB%2B18taMIGgteI8qH0tzRWq1rq41kn%2F4mlyar5suMF9UhGm8nWk3JFY7HZEZHHEZlLIVTdyqo54xq9Bpda7%2BnIaGuYZLk6RaFUVKqhkl2nVNvGZVADdKETblapYq8FjfTIBiIMspXKOPQcaC5TzueCC2n0yNKPWBSBvFRS%2FNnChfVMkasnmqVc0%2BBbmkFEMfqFbeD5VWQ0hym1Ge%2BUr60ZowUaBQvzRPr5MOvaQWiej1aJScWqHXcsAJ%2BZyJiSW5iy2omRbwOy6eLpeFZmVyEN%2FSxtJwRZAbV8Stq1O8ihYVE%2FHIE0L9YnRQCoUugmzKKcMy4SSTPAqGASsFNM7o%2B9dANnBi12mR9PDwatrDcjuncIQd7UdTwHB4hg7MKgFOs8ZtoxBD3K0wSCuIjAKWPERQHHHgdIwjh978Hh%2FbXWeyTstRL7NhplASseUtFmTGo%2FHmCC4xeVUUMGpEmpUZpEgnNqCK%2FnFJKVTL6zgx%2BsRnhuWGE%2FDBGvv923B8TGiUZ6AUmDIUkJcnskxWR27%2FZp6rg3oCkcftEpLO1T4MyzYsm8W54VF1MHwn2cOUtrhuYFDNFMO2UnzGkZ0TilMPQscrE%2FXNMsqj3W%2BjJ5G6OaPs3r7kPLtAUnkXpqSb2%2F0FJbrRXRmNwj44K2iVXFWLNtonXv7prPvcnOAKS5AmpOq1SIzdiSH4MK%2BqRzKX0r25UUzcf0rlsOVqgdGOwMg%2FjN94uDz9ow1%2BwPlsf%2FtzT6YNNll1Jdk1K9i7CeucME6u8lUNRPoFPnBgcTsyCzeFCzDQMh1jJq0mlX%2BezE52QwQTthai%2BFDxGSjFOVvvctu8pdfJm7O2XGte42qeDf8JZc5m2Xra511v3y%2FVfh%2FRy6OKFfnzPykm%2FfJs70Sv%2Bt6otIzXHe7I%2Bgvz%2FaArRZojbMau2h2JpxGrCzy4D9AI5zsWZVqn43paRre3%2FYs0%2B3F5UtIUxnazvD%2BNhz9wfEIrgn2HfJbEZ8uNoF%2Fcig6V5oapBuEZoPIf7vrghm7S95CTfvNkVVrLmcO6clomMFX79qPHrrIOhgMju3NnKP1EYmB0JudEa%2BaYcmT4YmQ4ZTXfZYYT0Bnub2Gfqm7Zh2rWgSabjYedaLBM0iT800UEQ7KvN%2FVF8eLaZuVCDhvWtv27fcx%2Bj8cgm63X8a9Z7o%2Fhoij38D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы
Программа написана на языке C++
```ccp
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	const double a = 1.0;
	double x, y,f;
	printf("Введите число x:");
	scanf("%lf", &x);
	printf("Введите число y:");
	scanf("%lf", &y);
	f = (3.0 + exp(y - 1)) / (1 + pow(x, 2) * fabs(y - tan(a)));
	printf("Результат: %lf", f);
	return 0;
}
```
## Результат работы программы
```
Введите число x: 3
Введите число y: 2
Результат: 1,147482
```

```
Введите число x: 1,5e-6
Введите число y: -2
Результат: 3,049787
```
## Информация о разработчике
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 28

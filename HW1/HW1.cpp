// HW1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <locale>
#include <cstdlib>
#include <ctime>

double square_trapezoid(double a, double b, double h) {
    return (((a + b) / 2) * h);
}

double square_triangle(double a, double b) {
    return ((a * b) / 2);
}

double hypotenuse(double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

double quadratic(double a, double b, double c) {
    double D, x1, x2;
    D = b * b - 4 * a * c; // Рассчитываем дискриминант
    if (D > 0) { // Условие при дискриминанте больше нуля
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        std::cout << "x1 = ";
        return x1;
        std::cout << "x2 = ";
        return x2;
    }
    if (D == 0) { // Условие для дискриминанта равного нулю
        x1 = -(b / (2 * a));
        std::cout << "x = ";
        return x1;
    }
    else {
        std::cout << "There is no solution" << std::endl;
        std::cout << "Diskriminant = ";
        return D;
    }
}

int day(int sec) {
    sec--;//избавляемся от “идущей” незавершившейся секунды
    int hours, min;
    hours = (int)(sec / 3600); // количество полных часов
    min = (int)(sec % 3600) / 60; // количество полных минут
    std::cout << "It is " << hours << " hours " << min << " minutes."<< std::endl;
    return 0;
}

float cost_purchase(double a) {
    if (a > 1000) {
        double x;
        x = a - ((a * 10) / 100);
        std::cout << "Cost of purchase (including 10% discount): "<< x << std::endl;
        return 0;
    }
    else {
        std::cout << "Cost of purchase: "<< a << std::endl;
        return 0;
    }
}

int month_year(int mounth) {
    if (mounth == 1){
        std::cout << "Winter" << std::endl;
        std::cout << "January" << std::endl;
    }
    else if (mounth == 2) {
        std::cout << "Winter" << std::endl;
        std::cout << "February" << std::endl;
    }
    else if (mounth == 12) {
        std::cout << "Winter" << std::endl;
        std::cout << "December" << std::endl;
    }
    else if (mounth == 3) {
        std::cout << "Spring" << std::endl;
        std::cout << "March" << std::endl;
    }
    else if (mounth == 4) {
        std::cout << "Spring" << std::endl;
        std::cout << "April" << std::endl;
    }
    else if (mounth == 5) {
        std::cout << "Spring" << std::endl;
        std::cout << "May" << std::endl;
    }
    else if (mounth == 6) {
        std::cout << "Summer" << std::endl;
        std::cout << "June " << std::endl;
    }
    else if (mounth == 7) {
        std::cout << "Summer" << std::endl;
        std::cout << "July" << std::endl;
    }
    else if (mounth == 8) {
        std::cout << "Summer" << std::endl;
        std::cout << "August" << std::endl;
    }
    else if (mounth == 9) {
        std::cout << "Autumn" << std::endl;
        std::cout << "September" << std::endl;
    }
    else if (mounth == 10) {
        std::cout << "Autumn" << std::endl;
        std::cout << "October " << std::endl;
    }
    else if (mounth == 11) {
        std::cout << "Autumn" << std::endl;
        std::cout << "November" << std::endl;
    }
    else{
        std::cout << "Enter a number from 1 to 12;) " << std::endl;
        return 0;
    }
}

int lacky_number(int part1, int part2) {
    int sum1 = 0, sum2 = 0;
    while (part1 != 0) { //пока число не кончилось
        sum1 += part1 % 10;
        part1 /= 10;
    }
    while (part2 != 0) { //пока число не кончилось
        sum2 += part2 % 10;
        part2 /= 10;
    }
    if (sum1 == sum2) {
        std::cout << "Lucky ticket" << std::endl;
    }
    else {
        std::cout << "Unluky" << std::endl;
    }
    return 0;
}

int penny(int number) {
    int x;
    x = number % 10;//смотрим последнюю цифру
    if (x >= 5 && x <= 9 || x == 0 || number == 11) {
        std::cout << number << " копеек" << std::endl;
    }
    else if (x == 1) {
        std::cout << number << " копейка" << std::endl;
    }
    else if (x >= 2 && x <= 4) {
        std::cout << number << " копейки" << std::endl;
    }
    return 0;
}

int threedigit_number(int number){
    int e, d, s, product;
    e = number % 10; // единицы 
    d = (number / 10) % 10; // десятки 
    s = number / 100; // сотни 
    product = e * d * s;
    if (product > number) {
        std::cout << "Произведение цифр числа больше самого числа" << std::endl;
    }
    else if (product == number) {
        std::cout << "Произведение цифр числа равно числу" << std::endl;
    }
    else{
        std::cout << "Произведение цифр числа меньше самого числа" << std::endl;
    }
    return 0;
}
int multiplicity_number(int number) {
    int e, d, s, sum;
    e = number % 10; // единицы 
    d = (number / 10) % 10; // десятки 
    s = number / 100; // сотни 
    sum = e + d + s;
    if (sum % 7 == 0) {
        std::cout << "Сумма цифр числа кратна 7" << std::endl;
    }
    else {
        std::cout << "Сумма цифр числа НЕ кратна 7" << std::endl;
    }
    return 0;
}

double CartesianToPolar(double x, double y) {
    double radius = sqrt((x * x) + (y * y));
    double angle = atan2(y, x);
    std::cout << "Полярный радиус"<< radius << std::endl;
    std::cout << "Полярный угол" << angle << "(радиан)" << std::endl;
    return radius, angle;

}
int Generation(int a, int b, int c) {
    std::cout << ((a * b == c) ? "correct" : "wrong") << std::endl;
    return 0;
}



int main(){
    setlocale(LC_ALL, "Russian");
    /*Task1*/
    std::cout << "*Task1*/" << std::endl;
    double b1; // инициализируем исходные данные тип double
    double b2;
    double h;
    std::cout << " Enter footing1, footing2, height" << std::endl;
    std::cin >> b1 >> b2 >> h; // вводим стороны и высоту
    std::cout << "Square" << square_trapezoid(b1, b2, h) << std::endl;

    /*Task3*/
    double cathet1, cathet2;
    std::cout << "*Task3*/" << std::endl;
    std::cout << "Cathet1, Cathet2" << std::endl;
    std::cin >> cathet1 >> cathet2 ;
    std::cout << "square" << square_triangle(cathet1, cathet2) << std::endl;
    std::cout << "hypotenuse" << hypotenuse(cathet1, cathet2) << std::endl;
    
    /*Task5*/
    std::cout << "*Task5*/" << std::endl;
    double x, y;
    std::cout << "Введи X, Y (декартовые)" << std::endl;
    std::cin >> x >> y;
    CartesianToPolar(x, y);

    /*Task7*/
    std::cout << "*Task7*/" << std::endl;
    double a, b, c; // Объявляем переменные с плавающей точкой
    std::cout << "Enter a" << std::endl; // Вводим исходные данные
    std::cin >> a;
    std::cout << "Enter b" << std::endl; // Вводим исходные данные
    std::cin >> b;
    std::cout << "Enter c" << std::endl; // Вводим исходные данные
    std::cin >> c;
    std::cout << "The equation: " << a << "x^2" << "+(" << b << ")" << "x" << "+(" << c << ")" << "=0" << std::endl;
    std::cout << quadratic(a, b, c) << std::endl;
    
    /*Task9*/
    std::cout << "*Task9*/" << std::endl;
    int k;
    std::cout << "Enter the second of the day " << std::endl; // Вводим исходные данные
    std::cin >> k;
    day(k);

    /*Task11*/
    std::cout << "*Task11*/" << std::endl;
    double cost;
    std::cout << "Enter cost of purchase " << std::endl; // Вводим исходные данные
    std::cin >> cost;
    cost_purchase(cost);

    /*Task13*/
    std::cout << "*Task13*/" << std::endl;
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int n1, n2, composition;
    n1 = rand() % 10; // генерируем число и берем последнюю цифру
    n2 = rand() % 10; // генерируем число и берем последнюю цифру
    std::cout << n1 << std::endl; //выводим в консоль
    std::cout << n2 << std::endl;
    std::cout << "Введи произведение данных чисел" << std::endl; 
    std::cin >> composition; //ввод произведения с консоли
    Generation(n1, n2, composition);

    /*Task15*/
    std::cout << "*Task15*/" << std::endl;
    int month;
    std::cout << "Enter the mounth number: " << std::endl; // Вводим исходные данные
    std::cin >> month;
    month_year(month);

    /*Task16*/
    std::cout << "*Task16*/" << std::endl;
    int part1, part2 ;
    std::cout << "Enter number XXX XXX: " << std::endl; // Вводим исходные данные
    std::cin >> part1 >> part2;
    lacky_number(part1, part2);

    /*Task17*/
    std::cout << "*Task17*/" << std::endl;
    int number;
    std::cout << "Enter number  from 1 to 99: " << std::endl; // Вводим исходные данные
    std::cin >> number;
    penny(number);

    /*Task19*/
    std::cout << "*Task19*/" << std::endl;
    int n;
    std::cout << "Введи трехзначное число: " << std::endl; // Вводим исходные данные
    std::cin >> n;
    multiplicity_number(n);
    threedigit_number(n);

    return 0;

}


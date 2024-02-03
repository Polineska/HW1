// HW1.cpp 
#include <iostream>
#include <math.h>
#include <locale>
#include <cstdlib>
#include <ctime>
#define _USE_MATH_DEFINES
#include <math.h>

/*Task1*/
double square_trapezoid(double a, double b, double h) { //параметры функции - стороны треугольника и высота
    return (((a + b) / 2) * h); //вычисляем площадь трапеции
}

/*Task3*/
double square_triangle(double a, double b) { //параметры функции - стороны прямоугольного треугольника.
    return ((a * b) / 2); // вычисляем площадь прямоугольного треугольника.
}

double hypotenuse(double a, double b) { //параметры функции - стороны прямоугольного треугольника.
    return sqrt(pow(a, 2) + pow(b, 2)); // вычисляем гипотенузу.
}

double quadratic(double a, double b, double c) { //параметры функции - коэфиценты квадратного уравнения
    double D, x1, x2; //инициализируем D, x1, x2
    D = b * b - 4 * a * c; // Рассчитываем дискриминант
    if (D > 0) { // Условие при дискриминанте больше нуля
        x1 = ((-b) + sqrt(D)) / (2 * a); //Расчитиваем корни уравнения при D>0
        x2 = ((-b) - sqrt(D)) / (2 * a);
        std::cout << "x1 = ";
        return x1;
        std::cout << "x2 = ";
        return x2;
    }
    if (D == 0) { // Условие для дискриминанта равного нулю
        x1 = -(b / (2 * a)); //Расчитиваем корень уравнения при D=0
        std::cout << "x = ";
        return x1;
    }
    else { 
        std::cout << "There is no solution" << std::endl;//если D<0 нет решений
        std::cout << "Diskriminant = "; //Выводим отрицательный дискриминант
        return D;
    }
}

int day(int sec) { //параметры функции - идущая секунда
    sec--;//избавляемся от “идущей” незавершившейся секунды
    int hours, min; //инициализируем hours, min
    hours = (int)(sec / 3600); // количество полных часов
    min = (int)(sec % 3600) / 60; // количество полных минут
    std::cout << "It is " << hours << " hours " << min << " minutes."<< std::endl; //Выводим сколько целых часов и целых минут прошло с начала суток.
    return 0;
}

float cost_purchase(double a) { ////параметры функции - стоимость покупки
    if (a > 1000) { //проверяем условие на скидку
        double x; //инициализируем стоимость покупки с учетом скидки
        x = a - ((a * 10) / 100); //расчитываем стоимость покупки с учетом скидки 
        std::cout << "Cost of purchase (including 10% discount): "<< x << std::endl; //выводим стоимость покупки со скидкой
        return 0;
    }
    else {
        std::cout << "Cost of purchase: "<< a << std::endl; //если покупка меньше 1000, то стоимость не изменяется
        return 0;
    }
}

int month_year(int mounth) {//параметр функции - число месяца 
    if (mounth == 1){ //по номеру месяца определяем название время года и месяца
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
        std::cout << "Enter a number from 1 to 12;) " << std::endl; //проверка на дурака, если введен месяц, который не существует
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

/*Task 17*/
int penny(int number) { //параметр функции- кол-во копеек
    int x; //инициализируем переменную для последней цифры
    int x1; //инициализируем переменную для первой цифры
    x = number % 10;//смотрим последнюю цифру
    x1= number / 10; //смотрим первую цифру
    if (x >= 5 && x <= 9 || x == 0 || x1 ==1 ) { // если последняя цифра от 5 до 9 или равна 0 (то есть число сотоит 
        //из одной цифры или если первая цифра равна 1)
        std::cout << number << " копеек" << std::endl;
    }
    else if (x == 1) { //если последняя цифра равна 1
        std::cout << number << " копейка" << std::endl;
    }
    else if (x >= 2 && x <= 4) { //если последняя цифра от 2 до 4
        std::cout << number << " копейки" << std::endl;
    }
    return 0;
}

int threedigit_number(int number){
    int e, d, s, product; //инициализируем единицы, десятки, сотни, произведение 
    e = number % 10; // единицы 
    d = (number / 10) % 10; // десятки 
    s = number / 100; // сотни 
    product = e * d * s; // произведение цифр числа
    if (product > number) { //если произведение цифр больше самого числа
        std::cout << "Произведение цифр числа больше самого числа" << std::endl;
    }
    else if (product == number) { //если произведение цифр равно самому числу
        std::cout << "Произведение цифр числа равно числу" << std::endl;
    }
    else{ //есди ни одно условие выше не выполнилось
        std::cout << "Произведение цифр числа меньше самого числа" << std::endl;
    }
    return 0;
}
int multiplicity_number(int number) {
    int e, d, s, sum; //инициализируем данные 
    e = number % 10; // единицы 
    d = (number / 10) % 10; // десятки 
    s = number / 100; // сотни 
    sum = e + d + s; //сумму цифр числа 
    if (sum % 7 == 0) { //если сумма цифр числа делится на 7 без остатка т.е остаток равен 0
        std::cout << "Сумма цифр числа кратна 7" << std::endl;
    }
    else { ///если число не кратно 7
        std::cout << "Сумма цифр числа НЕ кратна 7" << std::endl;
    }
    return 0;
}

double CartesianToPolar(double x, double y) { // параметр функции- декартовые
    double radius = sqrt((x * x) + (y * y)); //полярные кооридинаты 
    double angle = atan2(y, x);
    std::cout << "Полярный радиус"<< radius << std::endl; //выводим полярные координаты
    std::cout << "Полярный угол" << angle << "(радиан)" << std::endl;
    return radius, angle;

}
int Generation(int a, int b, int c) { // парметр функции - случайные числа и произведение, которое ввел пользователь
    std::cout << ((a * b == c) ? "correct" : "wrong") << std::endl;
    return 0;
}

/*Task2*/
int circle_length(double r) { //параметр функции - радиус
    double C = 0.; //инициализируем длину окружности
    double pi = M_PI; //создаем переменную пи и подключаем к ней значение из мат библиотеки
    C = 2 * pi * r; //вычисляем длину окружности
    return C;
}
int circle_square(double r) {
    double S = 0.; //инициализируем площадь круга
    double pi = M_PI;
    S = pi * pow(r, 2); //вычисляем площадь круга
    return S;
}

/*Task4*/
int sum_of_digits(int number) { //параметр функции - 4-х значное число
    if (number < 1000 || number > 9999) { //проверка на 4-х значность числа
        std::cout << "Enter 4-digit number" << std::endl;
        int sum = 0; //сумму цифр числа
        for (int i = 1; i <= 4; i++) { //пока не пройдем по всем 4 цифрам числа в сумму добавляем остаток от деления на 10
            sum += number % 10; // увеличиваем счетчик на 1
            number /= 10; //делим число на 10, откидываем последнюю цифру
        }
        return sum;
    }
}

/*Task6*/
double convert(double x, double y) { //параметры функции - полярные координаты
    int x1 = 0; //инициализируем декартовы координаты
    int y1 = 0;
    x1 = x * cos(y); //вычисляем декартовы координаты через полярные
    y1 = x * sin(y);

    std::cout << "Cartesian x: " << x1 << std::endl; //выводим декартовы координаты
    std::cout << "Cartesian y: " << y1 << std::endl;
    return 0;
}

/*Task8*/
double find_medians(double a, double b, double c) { //параметры функции - стороны исходного треугольника
    double med1 = 0.; //инициализируем медианы
    double med2 = 0.;
    double med3 = 0.;
    double med4 = 0.;
    double med5 = 0.;
    double med6 = 0.;
    if (a < b + c || b < a + c || c < a + b) {//проверка на существование треугольника со сторонами a,b,c
        med1 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)); //вычисляем медианы по формуле
        med2 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2));
        med3 = 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));
        if (med1 < med2 + med3 || med2 < med1 + med3 || med3 < med1 + med2) { //проверка на существование треугольника со сторонами med1, med2, med3
            med4 = 0.5 * sqrt(2 * pow(med1, 2) + 2 * pow(med2, 2) - pow(med3, 2)); //вычисляем медианы по формуле
            med5 = 0.5 * sqrt(2 * pow(med1, 2) + 2 * pow(med3, 2) - pow(med2, 2));
            med6 = 0.5 * sqrt(2 * pow(med2, 2) + 2 * pow(med3, 2) - pow(med1, 2));
            std::cout << "Median 1: " << med4 << std::endl; //выводим значение медиан
            std::cout << "Median 2: " << med5 << std::endl;
            std::cout << "Median 3: " << med6 << std::endl;
        }
        else {
            std::cout << "Entered incorrect sides of a triangle" << std::endl; //в случае несуществующего треугольника выводим сообщение об ошибке
        }
    }
    else {
        std::cout << "Entered incorrect sides of a triangle" << std::endl;
    }
    return 0;
}

/*Task10*/
double identify_triangle(double a1, double b1, double c1) { //параметры функции - стороны исходного треугольника
    if (a1 < b1 + c1 || b1 < a1 + c1 || c1 < a1 + b1) {//проверка на существование треугольника со сторонами a1,b1,c1
        if (a1 == b1 || a1 == c1 || b1 == c1) {//проверка на равенство сторон
            std::cout << "Isosceles triangle" << std::endl; //выводим сообщение пользователю
        }
        else {
            std::cout << "Not isosceles triangle" << std::endl;
        }
    }
    else {
        std::cout << "Entered incorrect sides of a triangle" << std::endl;
    }
    return 0;
}

/*Task12*/
double recommend(double height, double weight) { //параметры функции - высота и вес человека
    double idealWeight = 0.; //инициализируем переменную идеальный вес 
    idealWeight = height - 100; //вычисляем идеальный вес
    if (weight < idealWeight) { //если вес меньше идеального - набрать вес, больше - сбросить, равен - идеальный
        std::cout << "You need to gain weight" << std::endl; //выводим сообщение пользователю
    }
    if (weight > idealWeight) {
        std::cout << "You need to loose weight" << std::endl;
    }
    if (weight == idealWeight) {
        std::cout << "You weight is ideal" << std::endl;
    }
    return 0;
}

/*Task14*/
int cost_of_calls(int time, int day) { //параметры функции - номер дня недели и время разговора
    int costPerMin = 0; //инициализируем время за минуту и время общее, вводим время за минуту
    int cost = 0;
    std::cout << "Enter cost per minute: ";
    std::cin >> costPerMin;
    if (day > 7) {
        std::cout << "Entered incorrect day of week" << std::endl; //проверка на номер дня недели
    }
    if (day < 6) {
        cost = time * costPerMin; //если день - пн-пт без скидки = время * стоимость минуты
    }
    else {
        cost = time * costPerMin * 0.8;  //если день - сб-вс скидка = время * стоимость минуты - 20% (*0.8)
    }
    return cost;
}

/*Task16*/
int identify_number(int number) {  //параметр функции - 6-значное число
    int a1 = 0;  //инициализируем цифры числа
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int a6 = 0;
    if (number >= 100000 || number <= 999999) {  //проверка на шестизначность
        a1 = number / 100000;  //делим число на отдельные цифры и кладем их в отдельные переменные
        a2 = (number / 10000) % 10;
        a3 = (number / 1000) % 10;
        a4 = (number / 100) % 10;
        a5 = (number / 10) % 10;
        a6 = number % 10;
        if (a1 + a2 + a3 == a4 + a5 + a6) {  //проверяем равенство суммы первых трех цифр и суммы второй половины цифр
            std::cout << "Number is happy" << std::endl;
        }
        else {
            std::cout << "Number is unhappy" << std::endl;
        }
        return 0;
    }
    else {
        std::cout << "Entered incorrect number" << std::endl;
    }
}

/*Task18*/
int check_number(int number) { //параметр функции - 4-значное число
    int a1 = 0; //инициализируем цифры числа
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    if (number < 1000 || number > 9999) { //проверка на 4-х значность числа
        std::cout << "Enter 4-digit number" << std::endl;
    }
    a1 = number / 1000; //делим число на отдельные цифры и кладем их в отдельные переменные
    a2 = (number / 100) % 10;
    a3 = (number / 10) % 10;
    a4 = number % 10;

    if (a1 == a4 and a2 == a3) { //если первая цифра = последней, а вторая = третьей - число палидром
        std::cout << "Number is a polidrom" << std::endl;
    }
    else {
        std::cout << "Number is not a polidrom" << std::endl;
    }
    return 0;
}

/*Task20*/
int check_rectangles(int a, int b, int c, int d) { //параметры - стороны двух прямоугольников
    if (a < c && b < d || a < d && b < c) { //если обе стороны одного прямоугольника меньше соответственных сторон другого прямоугольника
        std::cout << "Rectangle AB can be placed in CD" << std::endl; // то меньший можно вписать в больший
    }
    else {
        std::cout << "Rectangle AB cannot be placed in CD" << std::endl;
    }
    return 0;
}




int main(){
    setlocale(LC_ALL, "Russian"); // для русских сообщений
    /*Task1*/
    std::cout << "*Task1*/" << std::endl;
    double footing1; // инициализируем исходные данные тип double
    double footing2;
    double h;
    std::cout << " Enter footing1, footing2, height" << std::endl; // ввыводится соообщение в консоль для ввода необходимых данных
    std::cin >> footing1 >> footing2 >> h; // вводим стороны и высоту
    std::cout << "Square" << square_trapezoid(footing1, footing2, h) << std::endl; //выводим площадь
    std::cout << "" << std::endl;

    /*Task2*/
    double r = 0; // инициализируем радиус, вводим его с клавиатуры
    std::cout << "/*Task2*/" << std::endl;
    std::cout << "Radius: ";
    std::cin >> r;
    std::cout << "Length of circle: " << circle_length(r) << std::endl; // вызываем функцию длины и площади
    std::cout << "Square of circle: " << circle_square(r) << std::endl;
    std::cout << "" << std::endl;


    /*Task3*/
    double cathet1, cathet2;  // инициализируем исходные данные тип double
    std::cout << "*Task3*/" << std::endl;
    std::cout << "Cathet1, Cathet2" << std::endl; // ввыводится соообщение в консоль для ввода необходимых данных
    std::cin >> cathet1 >> cathet2 ; //вводим исходные данные 
    std::cout << "square" << square_triangle(cathet1, cathet2) << std::endl;//вызвается функция для вывода площади с исходными данными
    std::cout << "hypotenuse" << hypotenuse(cathet1, cathet2) << std::endl; //вызывается функция для вывода гипотенузы
    std::cout << "" << std::endl;

    /*Task4*/
    int number = 0; // инициализируем исходное число, вводим с клавиатуры
    std::cout << "/*Task4*/" << std::endl;
    std::cout << "Input 4-digit number: ";
    std::cin >> number;
    std::cout << "Summ of digits: " << sum_of_digits(number) << std::endl; // вызываем функцию, выводим результат
    std::cout << "" << std::endl;

    
    /*Task5*/
    std::cout << "*Task5*/" << std::endl;
    double x, y; // инициализируем исходные данные тип double
    std::cout << "Введи X, Y (декартовые)" << std::endl; // ввыводится соообщение в консоль для ввода необходимых данных
    std::cin >> x >> y; //вводятся данные с консоли
    CartesianToPolar(x, y); //вызов необходимой функции 
    std::cout << "" << std::endl;

    /*Task6*/
    double x1 = 0.; // инициализируем полярыне координаты, вводим их с клавиатуры
    double y1 = 0.;
    std::cout << "/*Task6*/" << std::endl;
    std::cout << "Input polar cordinates: ";
    std::cin >> x1 >> y1;
    convert(x1, y1); // вызываем функцию по переводу полярных в декартовы
    std::cout << "" << std::endl;


    /*Task7*/
    std::cout << "*Task7*/" << std::endl;
    double a, b, c; // Объявляем переменные с плавающей точкой
    std::cout << "Enter a" << std::endl; // Вводим исходные данные
    std::cin >> a;
    std::cout << "Enter b" << std::endl; // Вводим исходные данные
    std::cin >> b;
    std::cout << "Enter c" << std::endl; // Вводим исходные данные
    std::cin >> c;
    std::cout << "The equation: " << a << "x^2" << "+(" << b << ")" << "x" << "+(" << c << ")" << "=0" << std::endl; //выводится уравнение в консоль для пользователя
    std::cout << quadratic(a, b, c) << std::endl; //вызов необходимой функции 
    std::cout << "" << std::endl;

    /*Task8*/
    double side1 = 0.; // инициализируем стороны треугольника, вводим их с клавиатуры
    double side2 = 0.;
    double side3 = 0.;
    std::cout << "/*Task8*/" << std::endl;
    std::cout << "Enter sides of triangle: ";
    std::cin >> side1 >> side2 >> side3;
    find_medians(side1, side2, side3); // вызываем функцию по расчету медиан
    std::cout << "" << std::endl;

    
    /*Task9*/
    std::cout << "*Task9*/" << std::endl;
    int k; // Объявляем переменную типа int
    std::cout << "Enter the second of the day " << std::endl; // Вводим исходные данные
    std::cin >> k; 
    day(k); //вызов необходимой функции
    std::cout << "" << std::endl;

    /*Task10*/
    double a1 = 0.; // инициализируем стороны треугольника, вводим их с клавиатуры
    double b1 = 0.;
    double c1 = 0.;
    std::cout << "/*Task10*/" << std::endl;
    std::cout << "Enter sides of triangle: ";
    std::cin >> a1 >> b1 >> c1;
    identify_triangle(a1, b1, c1); // вызываем функцию с проверкой на равнобедренный треугольник
    std::cout << "" << std::endl;


    /*Task11*/
    std::cout << "*Task11*/" << std::endl;
    double cost; // Объявляем переменную типа double т.к стоимость покупки может быть не целой
    std::cout << "Enter cost of purchase " << std::endl; // Вводим исходные данные
    std::cin >> cost; 
    cost_purchase(cost); //вызов необходимой функции
    std::cout << "" << std::endl;
    
    /*Task12*/
    double height = 0.; // инициализируем рост и вес, вводим с клавиатуры
    double weight = 0.;
    std::cout << "/*Task12*/" << std::endl;
    std::cout << "Enter height: ";
    std::cin >> height;
    std::cout << "Enter weight: ";
    std::cin >> weight;
    recommend(height, weight); // вызываем функцию с рекоммендациями
    std::cout << "" << std::endl;


    /*Task13*/
    std::cout << "*Task13*/" << std::endl;
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int n1, n2, composition; // Объявляем переменные типа int
    n1 = rand() % 10; // генерируем число и берем последнюю цифру
    n2 = rand() % 10; // генерируем число и берем последнюю цифру
    std::cout << n1 << std::endl; //выводим в консоль случайное число
    std::cout << n2 << std::endl;
    std::cout << "Введи произведение данных чисел" << std::endl; // ввыводится соообщение в консоль для ввода необходимых данных
    std::cin >> composition; //ввод произведения с консоли
    Generation(n1, n2, composition); //вызов необходимой функции
    std::cout << "" << std::endl;

    /*Task14*/
    int time = 0; // инициализируем время и номер дня недели, вводим с клавиатуры
    int day = 0;
    std::cout << "/*Task14*/" << std::endl;
    std::cout << "Enter time: ";
    std::cin >> time;
    std::cout << "Enter day: ";
    std::cin >> day;
    std::cout << "Cost of your call: " << cost_of_calls(time, day) << std::endl; // выводим сообщение о стоимости
    //вызываем функцию с подсчетом стоимости
    std::cout << "" << std::endl;


    /*Task15*/
    std::cout << "*Task15*/" << std::endl;
    int month; //Объявляем переменную типа int
    std::cout << "Enter the mounth number: " << std::endl; // Вводим исходные данные с консоли
    std::cin >> month; 
    month_year(month); //вызов необходимой функции
    std::cout << "" << std::endl;


    /*Task16*/
    int number1 = 0;  // инициализируем шестизначное число, вводим с клавиатуры
    std::cout << "/*Task16*/" << std::endl;
    std::cout << "Enter 6-digit number" << std::endl;
    std::cin >> number1;
    identify_number(number1);  // вызываем функцию по проверке числа
    std::cout << "" << std::endl;


    /*Task16*/
    std::cout << "*Task16*/" << std::endl;
    int part1, part2 ;
    std::cout << "Enter number XXX XXX: " << std::endl; // Вводим исходные данные
    std::cin >> part1 >> part2;
    lacky_number(part1, part2);
    std::cout << "" << std::endl;

    /*Task17*/
    std::cout << "*Task17*/" << std::endl;
    int quantity; //Объявляем переменную типа int
    std::cout << "Enter number  from 1 to 99: " << std::endl; // Вводим исходные данные
    std::cin >> quantity;
    penny(quantity); //вызов необходимой функции
    std::cout << "" << std::endl;

    /*Task18*/
    int digit = 0; // инициализируем четырехзначное число, вводим с клаивиатуры
    std::cout << "/*Task18*/" << std::endl;
    std::cout << "Enter 4-digit number: ";
    std::cin >> digit;
    check_number(digit); // вызываем функцию по проверке числа
    std::cout << "" << std::endl;


    /*Task19*/
    std::cout << "*Task19*/" << std::endl;
    int num; //Объявляем переменную типа int
    std::cout << "Введи трехзначное число: " << std::endl; // Вводим исходные данные
    std::cin >> num;
    multiplicity_number(num); //вызов необходимой функции
    threedigit_number(num); //вызов необходимой функции
    std::cout << "" << std::endl;

    /*Task20*/
    double a2 = 0.; // инициализируем стороны прямоугольников, вводим их с клавиатуры
    double b2 = 0.;
    double c2 = 0.;
    double d2 = 0.;
    std::cout << "/*Task20*/" << std::endl;
    std::cout << "Enter sides of smaller rectangle: ";
    std::cin >> a2 >> b2;
    std::cout << "Enter sides of bigger rectangle: ";
    std::cin >> c2 >> d2;
    check_rectangles(a2, b2, c2, d2);  // вызываем функцию по проверке сторон


    return 0;

}








    
#include <iostream>
using namespace std;


//ДЗ №1
//int main() {
//setlocale(0, "RUS");

//int num;
//cout << "Введите число:" << "\n";
//cin >> num;
//num % 2 == 0 ?
//cout << "Число чётное":cout << "Число не чётное";
//}








//ДЗ №2
//int main() {
//setlocale(0, "RUS");

//int number_first;
//int number_second;
//int number_third;

//cout << "Введите первое число:";
//cin >> number_first;

//cout << "Введите второе число:";
//cin >> number_second;

//cout << "Введите третье число:";
//cin >> number_third;



//if (number_first < number_second && number_first < number_third) 
//{
//  cout << "Первое число наименьшее";
//}

//else if (number_second < number_first && number_second < number_third)
//{
//  cout << "Второе число наименьшее";
//}

//else if (number_third < number_first &&  number_third < number_second)
//{
//  cout << "Третье число наименьшее";
//}

//else 
//  cout << "ОШИБКА";
//}






//ДЗ №3
//int main() {
//setlocale(0, "RUS");

//int num;

//cout << "Введите число:";
//cin >> num;

//if (num > 0)
//{
//cout << "Число положительное";
//}

//else if (num < 0)
//{
//  cout << "Число отрицательное";
//}

//else if (num == 0)
//{
//  cout << "Число равно нулю";
//}

//else 
//  cout << "ОШИБКА";
//}
  






//ДЗ №4
//int main() {
//setlocale(0, "RUS");

//double number_first;
//double number_second;

//cout << "Введите первое число:\n";
//cin >> number_first;

//cout << "Введите второе число:\n";
//cin >> number_second;

//cout << "Выберите операцию:\n";
//cout << "1:+\n 2:-\n 3:*\n 4:/\n 5:%\n";

//double operation;
//cin >> operation;


//if (operation == 1) 
//{
 // cout << number_first + number_second;
//}

//else if (operation == 2)
//{
//  cout << number_first - number_second;
//}

//else if (operation == 3)
//{
//  cout << number_first * number_second;
//}

//else if (operation == 4)
//{ if (number_first != 0 && number_second != 0)
//  cout << number_first / number_second;
  
//  else
//{
//  cout << "Делить на ноль нельзя";
//}
//}

//else if (operation == 5)
//{
//  if (number_first != 0 && number_second != 0)
//  cout << int(number_first) % int(number_second);
  
//  else
//{
//  cout << "Делить на ноль нельзя";
//}
//}

//}







//ДЗ №5
//int main() {
//setlocale(0, "RUS");

//double symbol;

//cout << "Введите любой символ:\n";
//cin >> symbol;

//if (isdigit(symbol))
//{
//  cout << "Символ является числом.";
//}

//else if (iscntrl(symbol))
//{
//  cout << "Символ является буквой.";
//}

//else if (ispunct(symbol))
//{
//  cout << "Символ является знаком пунктуации.";
//}
//}







//ДЗ №6
//int main() {
//setlocale(0, "RUS");

//int number_first;
//int number_second; 
//int num;

//cout << "Введите первую цифру диапазона:\n";
//cin >> number_first;
  
//cout << "Введите вторую цифру диапазона:\n";
//cin >> number_second;

//cout << "Введите любую цифру:\n";
//cin >> num;

//if (num > number_first && num < number_second) {
//cout << "Число принадлежит диапазону";
//}

//else 
//{
//cout << "Число не принадлежит диапазону";}
//}







//ДЗ №7
//int main() {
//setlocale(0, "RUS");

//int number_first;
//int number_second; 

//cout << "Введите первое число:\n";
//cin >> number_first;
//cout << "Введите второе число:\n";
//cin >> number_second;

//number_first % number_second == 0 ?
//cout << "Число " << number_first << " кратно числу " << number_second:cout << "Число " << number_first << " не кратно числу " << number_second;
//}









//ДЗ №8
//int main() {
//setlocale(0, "RUS");

//int num;

//cout << "Введите число:\n";
//cin >> num;

//num % 3 == 0 && num % 5 == 0 && num % 7 == 0 ?
//cout << "Число " << num << " кратно числам 3,5 и 7":cout << "Число " << num << " не кратно числам 3,5 и 7 ";
//}








//ДЗ №9
//int main() {
//setlocale(0, "RUS");

//int num;

//cout << "Введите число:\n";
//cin >> num;

//cout << abs(num);
//}








//ДЗ №10
//int main() {
//setlocale(0, "RUS");

//int num;

//cout << "Введите число:";
//cin >> num;

//if (num < 10) 
//{
//cout << "Число содержит 1 цифру";
//} 

//else if (num < 100) 
//{
//cout << "Число содержит 2 цифры";
//} 

//else if (num < 1000) 
//{
//cout << "Число содержит 3 цифры";
//} 

//else if (num < 10000) {
//cout << "Число содержит 4 цифры";
//} 

//else {
//cout << "Введено число,содержащее более 4 цифр";
//}
//}









//ДЗ №11

//int main() {
//setlocale(0, "RUS");

//int number;
//cout << "Введите пятизначное число:";
//cin >> number;

//int ten_thousands =  number / 1000 % 100 / 10;
//int thousands =  number / 1000 % 10;
//int hundreds = number % 1000 / 100;
//int dozens = number % 100 / 10;
//int units = number % 10;

//if (units == ten_thousands && dozens == thousands)
//{
//cout << "Число является палиндромом.";
//}
//else
//cout << "Число не является палиндромом.";
//}








//ДЗ №12
//int main() {
//setlocale(0, "RUS");

//int X1;
//int Y1;

//int X2; 
//int Y2;  
  
//int X;
//int Y;  


//cout << "Введите координаты верхнего левого угла прямоугольника (X1,Y1):\n";
//cin >> X1;
//cin >> Y1;

//cout << "Введите координаты нижнего правого угла прямоугольника (X2,Y2):\n";
//cin >> X2;
//cin >> Y2;

//cout << "Введите координаты точки(X,Y):\n";
//cin >> X;
//cin >> Y;


//if (X <= X1 && X >= X2   &&   Y <= Y1 && Y >= Y2) 
//{
//cout << "Точка принадлежит прямоугольнику.\n";
//} 
//else 
//{
//cout << "Точка не принадлежит прямоугольнику.\n";
//}
//}










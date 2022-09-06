#include <iostream> // заголовочный файл, который содержит все функции программы, такие как cout, cin и т.д.
#include <io.h> // включает в себя какое-то функции, которыми я  никогда не пользовался
#include <fcntl.h> // по идее, если void, то аргумент не нужен
#include <Windows.h> // использование функционала, предоставляемым операционной системой
#include <math.h> // выполнение простых математических операций
#include <ctime> // srand(time(0));
#include <conio.h> // вывод консольного ввода, принимает ввод с клавиатуры и отображает его на экране.
#include <functional> // plus и minus, который меня бесит, да и вроде к нему относится этот странный template
#include <string.h> // определяет один тип переменной size_t
#include <stdio.h> // стандартный заголовочный файл ввода-вывода
#include <cstring> // определяет несколько функций для управления строками и массивами
#include <cctype> // Функции преобразования символов, вверхний, нижний регистр 
#include <fstream> // работа с файлами


using namespace std;

class Student
{
private:
    int a;
public:
    Student()
    {
        a = {};
    }
    Init()
    {
        a = 3;
    }
};
void SetColor(int text, int bg)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

int main()
{
    system("chcp 1251");
    system("cls");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //array[i] = min + rand() % (max - min + 1);
    //srand(time(0));
    //if (buff != nullptr){
    //    FirstName = new char[strlen(buff) + 1];
    //    strcpy_s(FirstName, strlen(buff) + 1, buff);
    //    a++;
    //    system("cls");}
    //void SetFirstName(const char* fn) // Ассесоры
    //{if (FirstName != nullptr)
    //    {delete[]FirstName;}
    //    FirstName = new char[strlen(fn) + 1];
    //    strcpy_s(FirstName, strlen(fn) + 1, fn);}


    Student one;
    cout << "Тут ничего нет!!!" << endl;
    one.Init();



}


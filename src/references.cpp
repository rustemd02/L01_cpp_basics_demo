#include <iostream>  // cout
#include <cstdio>    // printf

using namespace std;

int main() {

    int a = 3;  // переменная типа int со значением равным 3

    int a_copy = a;        // копия переменной типа int
    // переменная 'a_copy' не имеет ничего общего с переменной 'a' кроме значения

    int *a_pointer = &a;   // взяли указатель на переменную типа int
    // указатель (переменная, которая хранит в себе адрес на переменную 'a')
    // мы можем получить доступ к переменной 'a' (изменить ее и прочесть значение)

    int &a_reference = a;  // взяли ссылку на переменную типа int
    // ссылка - это почти тоже самое, что и указатель
    // различия с указателем:
    // 1. не нужно использвовать оператор разыменования * для получения доступа к данным по ссылке
    // 2. ссылка является неизменяемым типом данных, ее сразу необходимо инициализировать, нельзя изменить ссылку

    // после инициализации ссылка не может изменить своего значения
    int b = 11;
    a_reference = b;  // оишбки не выйдет, однако ссылка не изменит своего значения (будет ссылаться на переменную 'a')

    // у ссылки так же, как и у самой переменной можно взять указатель
    // указатель на переменную и на ссылку будет один и тот же
    // т.е. по сути ссылка - это псевдоним (alias) для переменной
    printf("Address of 'a': %d\n", &a);
    printf("Address of 'a_copy': %d\n", &a_copy);
    printf("Address of 'a_reference': %d\n", &a_reference);

    // выводим значение переменной по указателю и ссылке
    cout << "\nValue of 'a' by pointer: " << *a_pointer << endl;
    cout << "Value of 'a' by reference: " << a_reference << endl;  // просто и без лишних операторов

    // изменяем значения переменных по указателю и ссылке
    cout << "\nChanging the value of 'a':" << endl;
    *a_pointer = 2;   // через оператор разыменования
    a_reference = 1;  // будто это сама переменная 'a', никаких дополнительных операторов

    cout << "Value of 'a': " << a << endl;

    // ссылки не могут быть пустыми, т.е. у них нет состояния, когда они ни на что не ссылаются
    // для ссылок нет nullptr

    // работать со ссылками гораздо приятнее по сравнению с указателями
    // из-за отсутствия необходимости использовать дополнительные операторы

    return 0;
}
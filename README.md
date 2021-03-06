# L01_cpp_basics_demo
Демо код занятия №01 - Основы C++ (Часть 1)

Рассматриваемые темы:
- указатели и операторы `&` и `*`, указатели на указатели, `nullptr`;
- статические массивы, связь с указателями, класс `array`, копирование и заполнение массивов;
- ссылки, различия ссылок и указателей;
- управление памятью, стек vs. куча, операторы `new` и `delete`;
- динамические массивы, класс `vector`;
- передача аргументов в функцию по значению, ссылке и указателю.

## Как запустить проект?

Самый простой способ запуска проекта - это использование онлайн IDE.

**Внимание!** Необходимо авторизоваться в Repl.it со своего GitHub аккаунта. 

[![Work in Repl.it](https://classroom.github.com/assets/work-in-replit-14baed9a392b3a25080506f3b7b6d57f295ec2978f6f33ec97e36a161684cbe9.svg)](https://repl.it/github/Algorithms-and-Data-Structures-2021/L01_cpp_basics_demo)


Если Вы хотите внести изменения в проект и сохранить их у себя в репозитории, то Вам необходимо выполнить `Fork` проекта.
Подробные инструкции можно прочесть по [ссылке](https://docs.github.com/en/github/getting-started-with-github/fork-a-repo).

1. Клонируете проект к себе на компьютер в терминале (консоли):
```shell
git clone https://github.com/Algorithms-and-Data-Structures-2021/L01_cpp_basics_demo.git
```
или через среду разработки, клиента Git (например, [Git for Windows](https://git-scm.com/download/win) или [GitHub Desktop](https://desktop.github.com/)).

2. Импортируете/открываете проект в среде разработки (как CMake проект, см. [здесь](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html)).

3. Запуск программы осуществляется в среде разработки.

Ручная сборка проекта в терминале:
```shell
mkdir build && cd build
cmake ..
cmake --build .
```

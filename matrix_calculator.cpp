#include "Menu.h"
char Home_Menu(char *ex)
{
    std::cout << "Введите 'e' для выхода." << std::endl;
    std::cout << "Введите любой символ чтобы продолжить." << std::endl;
    std::cin >> *ex;
    return *ex;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    char exite=0;

    Home_Menu(&exite);

    while (exite != 'e')
    {
        Menu start;
        start.menu();
        Home_Menu(&exite);

    }

    return 0;
}



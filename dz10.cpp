#include <iostream>

class Test
{
private:
    int a = 1;
    double b = 2.2;
    char c = '!';

    mutable bool isShowed = false;

public:
    void Enter()
    {
        isShowed = false;
        std::cout << "Enter a: ";
        std::cin >> a;
        std::cout << "Enter b: ";
        std::cin >> b;
        std::cout << "Enter c: ";
        std::cin >> c;
    }

    void Show() const
    {
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl;
    }
};

int main()
{
    const Test object;

    object.Enter();
    object.Show();
        
 }
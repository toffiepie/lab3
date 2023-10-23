#include <iostream>

void staticMemory()
{
    static int a = 0;
    std::cout << "a: " << a << std::endl;
    a += 1;
}

int main()
{
    staticMemory(); // prints 0
    staticMemory(); // prints 1
    staticMemory(); // prints 2
    return 0;
}

//Переменная a объявлена как static внутри функции staticMemory. 
//Это означает, что она имеет статическую продолжительность жизни и сохраняет своё значение между вызовами функции. 
//Это означает, что значение a будет сохранено между вызовами функции staticMemory, и оно инициализируется только 
// один раз при первом вызове.
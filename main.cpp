﻿#include <iostream>

static int hello(int x) { //компилятор видит объявление функции hello, но он не может найти её определение. 
    // Поэтому добавляем в функицю ретурн, т.е. ее определение
    return x * 2;
}
// Если попытаться скомпилировать только файл main.cpp без
// определения функции hello в этом файле, получаем ту же 
// ошибку "undefined reference to hello(int)", так как компилятор не может найти определение функции. 
// Добавлякс статик к функции.

int main() {
    int result = hello(42);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

//Объясните, сколько копий тела функции hello скомпилируется в 
// финальный executable (можете предположить, что компилятор не уберет неиспользованные копии).
//В финальный исполняемый файл попадет только одно тело функции hello.
// Если функция определена в разных файлах и каждая из них компилируется в отдельный объектный 
// файл, компилятор выберет одну из них(обычно ту, которая была первой в списке исходных файлов при компиляции).
// В итоговом исполняемом файле не будет дублирования кода функции hello, даже если она определена в нескольких файлах.
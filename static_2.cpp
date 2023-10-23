#include <iostream>
/* �����  ������� ������ static2 ������������� static1, ���������� ������� � ���������� � static_2
���������� � �����������. ��������: 
void staticMemory()
{
    static int a = 0;
    // ...
}
*/
int a = 0;

void staticMemory()
{
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
//����� ���������� a ��������� ��� ���������� ���������� ��� �������. 
// ��� ����� ���������� ������� ���������, � � �������� ����� ��� ���� ������� � ���� �����
//  (� ����� ��� ������� �� ������ ������, ���� ���������� �� �������� static). 
// ��� �� ����� ����������� ����������������� �����, � � �������� ����� ���������� ��� ������ ������� ���������.
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using namespace std;

bool hamming(int n)
{
    for(int i=1;i<=n/2;i++)
    {
        if(n%2==0 and n%3==0 and n%5==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

// перед unit-тестированием необходимо закомментировать всю функцию main() 
// и раскомментировать первые две строки программы
// int main()
// {
    
// }


TEST_CASE("Dulustan's tests"){
    CHECK(!hamming(1));
    CHECK(hamming(8));
    CHECK(hamming(12));
    CHECK(hamming(24));
    CHECK(hamming(45));
    CHECK(hamming(384));
    CHECK(!hamming(14));
    CHECK(!hamming(26));
    CHECK(!hamming(44));
    CHECK(!hamming(365));    
    
}

// тут придумайте хотя бы 10 интересных тестов: 5 положительных и 5 отрицательных
TEST_CASE("Student's tests"){
        
}
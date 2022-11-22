#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
    double a,b,c,d;
    a=x2-x1;b=y2-y1;
    c=pow(a,2)+pow(b,2);
    d=sqrt(c);
    return d;
}

double solve(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a,b,c,ans;
    a=dist(x1,y1,x2,y2);
    b=dist(x2,y2,x3,y3);
    c=dist(x3,y3,x1,y1);
    if(a+b>c and a+c>b and c+b>a)
    {
        if(a>b and a>c){ans=a;}
        if(b>a and b>c){ans=b;}
        if(c>a and c>b){ans=c;}
        return ans;
    }
    else
    {
        return -1;
    }
    // solve должна решить поставленную задачу и вернуть ответ
}

// перед unit-тестированием необходимо закомментировать всю функцию main() 
// и раскомментировать первые две строки программы
// int main()
// {
//     // здесь делайте ввод данных с консоли, передайте их функции solve()
//     // возвращаемый ответ функции выводите на консоль
    
// }


TEST_CASE("Dulustan's tests"){
    CHECK(dist(0, 0, 1000, 0) == doctest::Approx(1000));
    CHECK(dist(-5, 15, 10, -10) == doctest::Approx(29.154759474));
    CHECK(dist(-12.5, 50000, 12.5, 50200) == doctest::Approx(201.556443707));

    CHECK(solve(0, 0, 6, 0, 3, 2) == doctest::Approx(6));
}

TEST_CASE("Student's tests"){
    CHECK(dist(0,24,0,0)==doctest::Approx(24));
    CHECK(dist(2,78,2,7)==doctest::Approx(71));
    CHECK(dist(7,3,6,1)==doctest::Approx(2.23607));
    CHECK(dist(6,2,5,7)==doctest::Approx(5.09902));
    
    CHECK(solve(0,0,-1,-3,4,1)==doctest::Approx(6.40312));
    CHECK(solve(2,6,2,1,-3,-7)==doctest::Approx(13.9284));
    CHECK(solve(1,0,-4,-2,2,9)==doctest::Approx(12.53));
    CHECK(solve(1,0,1,1,1,1)==doctest::Approx(-1));
    // CHECK(solve(-2,-1,2,3,4,2))
}


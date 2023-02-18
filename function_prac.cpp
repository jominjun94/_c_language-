#include <iostream>

// 참조변수? int&b = a 식으로 포인터가 아닌 참조를 할 수 있다.
// 함수 템플릿 



struct Time{
    int hours;
};

Time sum(Time*,Time*);
int pra(int*  , int );

using namespace std;
int main()
{

int arr[] = {1,2,3,4,5}; 
std::cout << pra(arr,1) << std::endl;

Time day1;
Time day2;
day1.hours = 10;
day2.hours = 20;
std::cout << sum(&day1,&day2).hours << std::endl;
return 0;
}

Time sum(Time *t1 , Time *t2){
    Time total;
    int a = t1->hours + t2->hours;
    total.hours = a;
    return total;
};

int pra(int* x , int n){
  
   return x[0] + n;
}


template <class Any> // 제네릭과 비슷하다
Any sum(Any a, Any b){
    return a + b ; 
}
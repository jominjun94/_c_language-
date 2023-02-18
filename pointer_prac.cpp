#include <iostream>

using namespace std;

int main(){

    cout << "hello" << endl;
    
    // 구조체
    struct My{
        string name;
        string position;
    };

    My c;
    c.name = "coding";
    c.position = "codede";

    My a = {
        "son",
        "Striker"
    };
    My b[2] = {
        {"mj"},
        {"ch"}
    };
    
    cout << b[0].name << endl;


    //포인터 사용할 주소에 이름을 붙여 사용
    //즉, 포인터는 포인터의 이름이 주소를 나타낸다.
    int num = 6;
    int* po;

    po = &num;

     
     cout << num << endl; //6
     cout << *po << endl; //6
     cout << &num << endl; //6 주소 = 위치
     cout << po << endl; //6 주소 = 위치

    int *p3 = new int;
    *p3 = 5;
    cout << p3 << endl; //주소 
    cout << "---" <<*p3 << endl; //값


    // int a[] ==> 배열의 주소값은 *a
    int* poo  = new int[3];
    poo[0] = 1;
    poo[1] = 2;
    poo[2] = 3;
    cout << poo[0] << endl; 
    cout << poo[1]<< endl; 
    cout << *poo << endl; 
    cout << poo << endl; 
    
    poo += 1; // 각각 지정해준 바이트 만큼 올라가게 된다. =int 4 그래서 다음 포인터가 나오죠

    cout << "---" << poo[0] << endl; 
    cout << "---" << poo[1]<< endl; 




    // 동적 구조체 
    struct  mystr
    {
        /* data */
        char name[20];
        int age;
    };

    // new의 동적 할당 연산 객체지향의 
    // 힙에 할당하면 컴파일이 아닌 런타임시 크기를 정하는 장점이 있다.
    mystr *temp = new mystr;
    temp->age = 10;
    cout << temp->age << endl;

    delete temp;


    // function 

    return 0;
}
#include <iostream>
// 산술연산자 오버라이딩 operator+, * ,,
using namespace std;


class Stock{

    private: 
        string name;
        int money;
    public:
        int buy(int,float);
        void call();
        Stock(string);
        ~Stock();
};

class NewStock : public Stock{
    private :
        string newname;
        int newmoney;
    public:
        NewStock(string);
        ~NewStock();

};

NewStock::NewStock(string x) : Stock(x){
        newname = x;
}
NewStock::~NewStock(){}


void Stock::call(){
    std::cout << name << endl;
};
int Stock::buy(int a ,float b){
        return a + b; 
};

Stock::Stock(string nam){
    name = nam;
};
Stock::~Stock(){}; // 파괴자


int main()
{
 Stock stock("jominjun");
 stock.call();
 cout << stock.buy(1,2) << endl;

 NewStock newstock("kakak");
 stock.call();
 return 0;
}


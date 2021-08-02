
#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents {};
 
public:
	Cents(int cents) { m_cents = cents; }
    explicit Cents(int c1, int c2){ c1 =0; c2=0; }
	int getCents() const { return m_cents; }
    
	// friend Cents operator+(const Cents &c1, int value);
	// friend Cents operator+(int value, const Cents &c1);
};

Cents operator+(Cents const &lhs, int v)
{
    return (Cents(lhs.getCents() + v));
}

Cents operator+(int v, Cents const &rhs)
{
    return (Cents(v+ rhs.getCents()));
}




void func(int, int)
{
    std::cout << "Yaaaxy!"<< std::endl;
}

int main()
{

    int *value = new (std::nothrow) int;
    *value =  10;
    cout << *value << endl;
    Cents c1(10);
    Cents c2(20);
    
    Cents c3 = 6 + c2;
    cout << c3.getCents() << endl;

    func(10, 11);
    return 0;
}

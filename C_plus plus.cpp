#include <iostream>
using namespace std;
class RECT
{
    public:
    void area()
    {
        cout<<"Area of rectangle"<<endl;
    }
};

class SQUARE
{
    public:
    void area()
    {
        cout<<"Area of square";
    }
};

class SHAPES : public RECT,public SQUARE    
{
};

int main()
{
    SHAPES obj;
    // obj.area(); (It will give "AMBIGUITY ERROR" as the compiler gets confused that of which class the function named "area" should it execute first)
    obj.RECT::area(); 
    obj.SQUARE::area(); 
}

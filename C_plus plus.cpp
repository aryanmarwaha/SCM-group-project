#include <iostream>
using namespace std;
class RECT
{
    public:          //edited this file by armankang
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
   //doing edit number 2
    obj.RECT::area(); 
    obj.SQUARE::area(); 
}

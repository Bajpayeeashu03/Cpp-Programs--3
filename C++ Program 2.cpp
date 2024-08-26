#include <iostream>
using namespace std;
class shape
{
protected:
    int side;
public: 
    void input ()
    {
        cout << "Enter the side: "<<endl; 
        cin>> side;
    }
};
class square:public shape 
{
    public:
    void areasquare() 
    {
      shape::input();
      cout <<"The area of square is: "<< side * side <<endl;
    }
};

class rectangle:public shape 
{
    private:
         int length;
    public:
    void arearect ()
    {
        shape::input();
        cout <<"Enter the length: "<<endl;
        cin>> length;
        cout <<"The area of rectangle is: "<< side *length<<endl;
    }
};
int main ()
{
    square obj1; 
    rectangle obj2; 
    obj1.areasquare(); 
    obj2.arearect();
    return 0;
}

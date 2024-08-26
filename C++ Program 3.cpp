#include <iostream>
using namespace std;
class addNumbers 
{
    private:
        int num1;
        int num2;
    public:
        void addDigits (int n1, int n2)
        {
            num1=n1;
            num2=n2;
            cout <<"Result of adding "<<n1<<" and "<<n2<<" is: "<<num1+num2<<endl;
        }
};
int main()
{
    int inp1, inp2;
    addNumbers obj1;
    cout << "Enter 1st no: "<<endl;
    cin >> inp1;
    cout << "Enter 2nd no:"<<endl;
    cin >> inp2;
    obj1.addDigits(inp1, inp2);
    return 0;
}
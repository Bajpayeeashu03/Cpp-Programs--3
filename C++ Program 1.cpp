#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
class coin {
private:
    string call;
    string outcome;

public:
void makecall()
{ 
    cout <<"Enter your call (head/ tail): "<<endl;
    cin >> call;

}
void toss() 
{
    srand(time (0));
    int random = rand() %2;
    if (random == 0)
    {
        outcome = "heads";
    }
    else 
    { 
        outcome = "tails";
    }
}
void analyze()
{
    if (call == outcome)
    {
          cout << "win! "<<endl;
    }
       else 
    {
         cout <<"Lose! "<<endl;
    }
}
void declare()
{
     cout <<"The outcome is: " <<outcome<<endl;
}
};
int main()
{
    coin abc;
    abc.makecall();
    abc.toss();
    abc.analyze();
    abc.declare();
    return 0;
}
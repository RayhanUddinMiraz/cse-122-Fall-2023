#include<iostream>
#include<string>
using namespace std;
class watermelon
{
public :

    void display (int n)
    {
        if(n%2==0 && n>2 && n<100)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
};

int main()
{

    int n;
    cin >> n;
    watermelon obj;
    obj.display(n);

    return 0;
}

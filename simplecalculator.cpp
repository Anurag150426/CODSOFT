#include<iostream>
using namespace std;
int main()
{
    char op;
    float value1,value2;
    cout<<"Enter the op(+,-,*,/)";
    cin>>op;
    cout<<"Enter the values";
    cin>>value1>>value2;

    switch(op)
    {
        case '+':
        {
            cout<<"v1+v2="<<value1+value2;
            break;
        }
                case '-':
        {
            cout<<"v1-v2="<<value1-value2;
            break;
        }
                case '*':
        {
            cout<<"v1*v2="<<value1*value2;
            break;
        }
                case '/':
        {
            cout<<"v1/v2="<<value1/value2;
            break;
        }
        default:
        {
            cout<<"Invalid operation";
        }

    }
    return 0;

}


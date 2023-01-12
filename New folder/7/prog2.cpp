#include <iostream>
using namespace std;
class ConstDemo
{   
        int n1, n2;
     public:
        ConstDemo()
        {
            n1 = n2 = 0;
        }
        ConstDemo(int a1 , int a2 = 0 )
        {
            if(a2 ==0)
                a2 = a1;
            n1 = a1;
            n2 = a2;
        }
        void maxNumber()
        {
            if ( n1 > n2)
            {
                cout << " n1 ( value = " << n1 << " ) is greater ";
                cout << "than n2 ( value = " << n2 << " )";
            }
            else
                if ( n2 > n1 )
                {
                    cout << " n2 ( value = " << n2 << " ) is greater ";
                    cout << "than n1 ( value = " << n1 << " )";
                }
                else
                {
                    cout << " Both values n1 ( value = " << n1 << " ) ";
                    cout << "and n2 ( value = " << n2 << " ) are same. ";
                }
        }
};
int main()
{
  while(true)
   {
    int n, n1, n2;
    cout << " \t Initialize the object using " << endl;
    cout << " 1 : Default Constructor \t 2 : Parameterized Constructor" << endl;
    cout << "    3 : Parameterized Constructor with default value" << endl;
    cout << "\t \t Exit : Other" << endl;
    cout << " \t Choose Appropriate option " << endl;
    cout << " \t ";
    cin >> n;
    switch(n)
    {
        case 1:
        {
        ConstDemo c1;
        cout << " \t Display maximum from two integer data numbers " << endl;
        c1.maxNumber();
        break;
        }
        case 2:
        {
        cout << " \t Accept first Parameter " << endl << " \t ";
        cin >> n1;
        cout << " \t Accept Second Parameter " << endl << " \t ";
        cin >> n2;
        ConstDemo c2( n1, n2);
        cout << "    Display maximum from two integer data numbers " << endl;
        c2.maxNumber();
        break;
        }
        case 3:
        {
        cout << " \t Accept One Parameter " << endl ;
        cout << " \t ( This Parameter use as default Parameter )" << endl;
        cout << " \t ";
        cin >> n1;
        ConstDemo c3( n1);
        cout << " \t Display maximum from two integer data numbers " << endl;
        c3.maxNumber();
        break;
        }
        default:
        cout << " \t Thank You to Use this Program !";
        exit(0);
    }
    cout << endl;
    cout << " \t Are you want to continue ... " << endl;
    cout << " \t IF Yes : 1 \t No : Any other value " << endl << " \t ";
    cin >> n;
    if(n == 1)
    {
        continue;
    }
    else
    {
        cout << " \t Thank You to Use this Program !";
        exit(0);
    }
   }
}


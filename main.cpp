#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int a[10][10], sum1=0, sum2=0;
    for (int i=0; i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            a[i][j]=rand()%201 -101;
        }
    }

    for ( int i=0; i<10;i++)
    {
        for(int j=0; j<10;j++)
        {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
      for ( int i=0; i<10;i++)
    {
        for(int j=0; j<10;j++)
        {
            if(i%2==0 && j%2==0)
            {
                sum1+=a[i][j];
            }
            else
            {
                sum2+=a[i][j];
            }
        }
    }

    cout << endl;
    cout << "SUM1=" << sum1<< endl;
    cout << "SUM2=" << sum2<< endl;


}

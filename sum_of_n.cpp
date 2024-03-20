#include <iostream>
using namespace std;

int sumofn(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
       return sumofn(n - 1);
    }
}
void iterativesum(int n)
{
    int sum = 0;
    for(int i = n;i>0;i--)
    {
        sum = sum + i;
    }
}
void cg()
{
    for (int i = 100; i <= 1000; i += 100)
    {
        clock_t t;
        t = clock();
        for (int j = 0; j < 10; j++)
        {
            sumofn(i);
        }
        t = clock()-t;
        clock_t avgt;
        avgt=t/10;
        cout<<avgt<<"   "<<i<<endl;
    }
}
void cg1()
{
    for (int i = 1000; i <= 10000; i += 1000)
    {
        clock_t t;
        t = clock();
        for (int j = 0; j < 10; j++)
        {
            iterativesum(i);
        }
        t = clock()-t;
        clock_t avgt;
        avgt=t/10;
        cout<<avgt<<"   "<<i<<endl;
    }
}
int main()
{
    cg();
    cout<<endl;
    cg1();
}
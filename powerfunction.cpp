#include <iostream>
#include<math.h>
using namespace std;

int powerfind(int base, int exponent)
{
    int result = 1;
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    return result;
}
int powerusingrecc(int base, int exponent)
{
    if(exponent==1)
    {
        return base;
    }
    return base*powerusingrecc(base,exponent-1);
}
int *generate(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    return arr;
}
void cg()
{
    for(int i=1000;i<=10000;i=i+1000)
    {
        clock_t t;
        int *arr=generate(i);
        t = clock();
        for(int j=1;j<=10;j++)
        {
            powerfind(*arr,i);
        }        
        t = clock() - t;
        clock_t avgt;
        avgt=t/10;
        cout<<avgt<<"   "<<i<<endl;
    }
}
void cgrec()
{
    for(int i=1000;i<=10000;i=i+1000)
    {
        clock_t t;
        int *arr=generate(i);
        t = clock();
        for(int j=1;j<=10;j++)
        {
            powerusingrecc(*arr,i);
        }        
        t = clock() - t;
        clock_t avgt;
        avgt=t/10;
        cout<<avgt<<"   "<<i<<endl;
    }
}

int main()
{
    cout<<"power with time complexity O(n)"<<endl;
    cg();
   cout<<"power with rec"<<endl;
   cgrec();
}

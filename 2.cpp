#include<iostream>
#include<ctime>
using namespace std;
int hornerrule(int arr[],int n, int m)
{
    if(n==m)
    {
        return arr[m];
    }
    return (arr[n]+ hornerrule(arr,n+1,m));
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
            hornerrule(arr,0,i);
        }        
        t = clock() - t;
        clock_t avgt;
        avgt=t/10;
        cout<<avgt<<"   "<<i<<endl;
    }
}
int main()
{
    cg();


}
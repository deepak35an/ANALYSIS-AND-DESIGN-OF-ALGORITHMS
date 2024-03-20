#include <iostream>
#include<ctime>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        for (int k = i + 1; k < n; k++)
        {
            if (arr[j] > arr[k])
            {
                j = k;
            }
            swap(arr[i], arr[j]);
        }
    }
}
int *generate(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%100;//%100 is edited here
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
            selectionsort(arr,i);
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
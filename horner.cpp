#include <iostream>
using namespace std;

int horner(int poly[], int n, int x) {
    int result = poly[0];

    for (int i = 1; i <= n; i++) {
        result = result * x + poly[i];
    }

    return result;
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
            horner(arr,i,3);
        }        
        t = clock() - t;
        clock_t avgt;
        avgt=t/10;
        cout<<avgt<<"   "<<i<<endl;
    }
}

int main() {
    cg();
}

#include <iostream>
using namespace std;

void merge(int arr1[], int low, int high)
{
    int i = low; 
    int mid = (low + high) / 2; 
    int j = mid + 1;
    int k = 0; 
    int arr3[high - low + 1]; 

    while (i <= mid && j <= high)
    {
        if (arr1[i] < arr1[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr1[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from left subarray
    while (i <= mid)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        arr3[k] = arr1[j];
        j++;
        k++;
    }

    for (int l = 0; l < k; l++)
    {
        arr1[low + l] = arr3[l];
    }
}

void mergesort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, high);
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
            mergesort(arr,0,i);
        }        
        t = clock() - t;
        clock_t avgt;
        avgt=t/10;
        cout<<avgt<<"   "<<i<<endl;
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout<<endl;
}
void inputinarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    cg();
}
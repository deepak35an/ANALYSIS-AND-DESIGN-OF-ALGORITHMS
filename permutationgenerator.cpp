#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void generatePermutations(int arr[], int size, int start) {
    if (start == size - 1) {
        for (int i = 0; i < size; ++i) {
            // cout << arr[i] << " ";
        }
        // cout << endl;
        return;
    }

    for (int i = start; i < size; ++i) {
        swap(arr[start], arr[i]);
        generatePermutations(arr, size, start + 1);
        swap(arr[start], arr[i]);
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
    for(int i=1;i<=10;i=i+1)
    {
        clock_t t;
        int *arr=generate(i);
        t = clock();
        for(int j=1;j<=10;j++)
        {
            generatePermutations(arr,i,0);
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

#include <iostream>
#include <ctime>

using namespace std;

void generate(int a[], int b[], int n) {
    for (int j = 0; j < n; j++) {
        a[j] = rand();
        b[j] = rand();
    }
}

void merge(int a[], int b[], int c[], int n, int m) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) {
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }
}

void cg() {
    for (int i = 10000; i <= 100000; i += 10000) {
        int *a = new int[i];
        int *b = new int[i];
        int *c = new int[i * 2];
        
        generate(a, b, i);
        
        clock_t t = clock();
        for (int j = 1; j <= 10; j++) {
            merge(a, b, c, i, i);
        }
        t = clock() - t;
        
        clock_t avgt = t / 10.0;
        cout << avgt << "   " << i << endl;
        
        delete[] a;
        delete[] b;
        delete[] c;
    }
}

int main() {
    cg();
    return 0;
}

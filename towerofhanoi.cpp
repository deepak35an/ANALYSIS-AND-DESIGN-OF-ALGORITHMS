#include <iostream>
using namespace std;

void tower_of_hanoi(int n, char source, char target, char auxiliary)
{
    if (n == 1)
    {
        // cout << "Move disk 1 from rod " << source << " to rod " << target << std::endl;
        return;
    }
    tower_of_hanoi(n - 1, source, auxiliary, target);
    // cout << "Move disk " << n << " from rod " << source << " to rod " << target << std::endl;
    tower_of_hanoi(n - 1, auxiliary, target, source);
}
char *generate(int n)
{
    char *arr = new char[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100; //%100 is edited here
    }
    return arr;
}
void cg()
{
    for (int i = 5; i <= 50; i += 5)
    {
        clock_t t = clock();
        for (int j = 1; j <= 10; j++)
        {
            char *arr = generate(i);
            char target[10], auxiliary[10];
            tower_of_hanoi(i, 'A', 'C', 'B'); // Initial call with default source, target, and auxiliary rods
            delete[] arr;
        }
        t = clock() - t;
        clock_t avg_time = t / 10;
        cout << avg_time << "   " << i << endl;
    }
}

int main()
{
    cg();
}

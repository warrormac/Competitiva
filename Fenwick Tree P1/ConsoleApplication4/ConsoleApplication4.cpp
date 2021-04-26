#include <iostream>
#include <vector>

using namespace std;



void actualizar(int BITree[], int n, int index, int val)
{
    index =index + 1;
    while (index <= n)
    {

        BITree[index] += val;

        index += index & (-index); //incremento de bits en el padre
    }
}

int* build(vector<int> arr, int size)
{

    int* BITree = new int[size + 1];
    for (int i = 1; i <= size; i++)
        BITree[i] = 0;


    for (int i = 0; i < size; i++)
        actualizar(BITree, size, i, arr[i]);

    
    return BITree;
}


int main()
{   
    vector<int> freq;
    int size,temp;
    for (int i = 0; i < 10; i++)
        freq.push_back(i);
    size = freq.size();

    int* BITree = build(freq, size);
    for (int i = 1; i <= size; i++)
        cout << BITree[i] << " ";




    cout << "\n";
    /*
    for (int i = 11; i < 20; i++)
        freq.push_back(i);
    for (int i = 0; i < size; i++)
        actualizar(BITree, size, i, freq[i]);

    for (int i = 1; i <= size; i++)
        cout << BITree[i] << " ";
    */
}
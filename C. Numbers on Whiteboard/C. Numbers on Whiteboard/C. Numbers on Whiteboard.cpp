#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


void printPairs(vector<double> arr, int n)
{
    int count = 0; 

    while (count < n)
    {
        cout << arr[count] << " " << arr[count + 1]<<"\n";
        count += 2;
    }
}


void test(int t, int x, vector<double> arr)
{
    vector<double> arr2;
    for (int i = 1; i <= x; i++)
        arr.push_back(i);
    double temp;

        
   while (arr.size()>1)
   {
       int size = arr.size();
       arr2.push_back(arr[size-1]);
       arr2.push_back(arr[size - 2]);
       temp = round((arr[size-1]+arr[size-2]) / 2);
   
       arr.pop_back();
       arr.pop_back();
       arr.push_back(temp);
        
       
   }
    cout << arr[0]<<"\n";
    temp = arr2.size();
    printPairs(arr2, temp);
       
}

int main()
{
    vector<double> arr;
    int t,x;
    cin >> t;
    cin >> x;
    
    while (t > 0)
    {
        test(t, x, arr);
        t--;
    }
    
}



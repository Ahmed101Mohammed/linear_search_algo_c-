#include <iostream>
#include <vector>

using namespace std;

int linearsearch(vector <int> arr, int x)
{
    int index = 0;
    for (int i : arr)
    {
        if (i == x)
        {
            break;
        }
        index += 1;
    }
    int result = arr[index] == x? index : -1;
    return result;
}

int main() 
{    
    vector <int> a = {1,4,7,9,22,111,223,500,890,1200,7505};   
    cout << linearsearch(a,1209);
}

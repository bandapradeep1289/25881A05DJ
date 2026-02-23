#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1, 3, 2, 2};

    // 1. sort the container
    sort(v.begin(), v.end());

    cout << "Sorted elements: ";
    for(int x : v)
        cout << x << " ";
    cout << endl;

    // 2. find an element
    auto it = find(v.begin(), v.end(), 3);
    if(it != v.end())
        cout << "Element 3 found in the container" << endl;
    else
        cout << "Element 3 not found" << endl;

    // 3. count occurrences of an element
    int c = count(v.begin(), v.end(), 2);
    cout << "Number of times 2 appears = " << c << endl;

    return 0;
}
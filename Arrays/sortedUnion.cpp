#include <bits/stdc++.h>
using namespace std;

void unionArr(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    // display the union array
    cout << "Sorted Union array:" << endl;
    for (auto it : unionArr)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 5, 7};
    vector<int> arr2 = {1, 6, 8, 9, 10};

    // function to get sorted union array
    unionArr(arr1, arr2);
    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> list = {10, 20, 23, 45, 96, 10, 21, 22, 21};
    unordered_set<int> seen;
    vector<int> filtered_list;

    // Remove duplicates
    for (int i = 0; i < list.size(); i++)
    {
        if (seen.find(list[i]) == seen.end())
        {
            seen.insert(list[i]);
            filtered_list.push_back(list[i]);
        }
    }

    // Reverse
    reverse(filtered_list.begin(), filtered_list.end());

    for (int i = 0; i < filtered_list.size(); i++)
    {
        cout << filtered_list[i] << " ";
    }

    return 0;
}

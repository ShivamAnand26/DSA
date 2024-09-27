#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

int findLastOccurrence(const vector<int> &v, int target)
{
    auto it = upper_bound(v.begin(), v.end(), target);

    if (it == v.begin() || *(--it) != target)
    {
        return -1; // Target not found
    }

    return it - v.begin(); // Return the index of the last occurrence
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n); // Pair of (value, original index)
    vector<int> v(n);              // Initialize vector of size n
    // Read the array and store value with its original index
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i; // Store the original index of the element
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = arr[i].first; // Store the values in vector v
    }

    // Sort the array based on the value
    sort(arr.begin(), arr.end());
    sort(v.begin(), v.end());

    long long measurement = 0;

    // Traverse the sorted array and calculate sanity for each element
    for (int i = 0; i < n; i++)
    {
        // Sanity = original index (arr[i].second) + last occurrence index (last_occurrence)
        int last_occurrence = findLastOccurrence(v, arr[i].first);
        if (last_occurrence != -1)
        {
            measurement += arr[i].second + last_occurrence;
            measurement %= MOD; // Ensure the result is within MOD
        }
    }

    // Print the final measurement modulo 10^9 + 7
    cout << measurement << endl;

    return 0;
}

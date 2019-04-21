#include <iostream>
#include <vector>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
void merge(vector<int> &a, int start, int mid, int end)
{
    int left = mid - start + 1;
    int right = end - mid;
    vector<int> left_part;
    vector<int> right_part;
    for (int i = 0; i < left; i++)
    {
        left_part.push_back(a[start + i]);
    }
    left_part.push_back(INT32_MAX);
    for (int j = 0; j < right; j++)
    {
        right_part.push_back(a[mid + 1 + j]);
    }
    right_part.push_back(INT32_MAX);
    int i = 0, j = 0;
    for (int k = start; k <= end; k++)
    {
        if (left_part[i] < right_part[j] && left_part[i] != INT32_MAX)
        {
            a[k] = left_part[i];
            i++;
        }
        else
        {
            a[k] = right_part[j];
            j++;
        }
    }
}

void merge_sort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

int main(void)
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    merge_sort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
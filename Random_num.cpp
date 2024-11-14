#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    set<int> pervnum;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        pervnum.insert(arr[i]);
    }
	cout << pervnum.size() << endl;
    for(const auto& resnum:pervnum)
    {
        cout << resnum << " ";
    }
}

/**
* @runId: 8118
* @language: C++
* @author: 董胤扬
* @submitTime: 2024-11-13 10:39:51
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input = "";
    cin >> input;
    int a = 0;
    vector<int> v, vv;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 97)
        {
            a--;
            v.push_back(i);
        }
        else
        {
            a++;
            vv.push_back(i);
        }
    }
    if (a <= 0)
    {
        for (int i = 0; i < vv.size(); i++)
        {
            input[vv[i]]+=32;
        }
    }
    else
    {
         for (int i = 0; i < v.size(); i++)
        {
            input[v[i]]-=32;
        }
    }
    cout << input<<endl;
}
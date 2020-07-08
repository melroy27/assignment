#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
  std::vector< string > arr;
  int x, i;
  string y="YES";
  string n="NO";
  std::cout << "Enter the times you wanna check: ";
  std::cin >> x;

  for (i = 1; i <= x; i++)
  {
    string a, b, c, d, e, f;
    string ans;


    cin >> a;
    cin >> b;

    string str1 = b;
    string str2 = a;

    int pos = 0;
    int index;

    if ((index = str1.find(str2, pos)) != string::npos)
    {
      arr.push_back(y);
      pos = index + 1;
    }
    else
    {
     arr.push_back(n);
    }

    cin >> c;
    cin >> d;
    if (c == d)
    {
      arr.push_back(y);
    }
    else
    {
      arr.push_back(n);
    }


    cin >> e;
    cin >> f;

    string reverse = string(f.rbegin(), f.rend());

    string str3 = reverse;
    string str4 = f;

    int pos1 = 0;
    int index1;

    if ((index1 = str4.find(str3, pos1)) != string::npos)
    {
      cout<<index1;
      arr.push_back(y);
      pos1 = index1 + 1;
    }
    else
    {
     arr.push_back(n);
    }
    for(int i=0; i < arr.size(); i++)
      cout << arr.at(i) << ' ';
  }
}
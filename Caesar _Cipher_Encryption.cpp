#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string s;
  getline(cin, s);

  int k;
  cin >> k;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  k %= 26;
  for (int i = 0; i < n; i++)
  {
    int j = s[i];
    if (j >= 'a' && j <= 'z')
    {
      j += k;
      if (j > 'z')
      {
        j = 96 + (j % 122);
      }
    }
    else if (j >= 'A' && j <= 'Z')
    {
      j += k;
      if (j > 'Z')
      {
        j = 64 + (j % 90);
      }
    }
    cout << char(j);
  }

  return 0;
}

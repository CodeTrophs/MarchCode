#include<iostream>
using namespace std;
string convert(string str)
{
  for (int i = 0;
           i < str.length(); i++)
  {
    if (i == 0 && str[i] != ' ' ||
        str[i] != ' ' && str[i - 1] == ' ')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] = (char)(str[i] - 'a' + 'A');
      }
    }

    else if (str[i] >= 'A' &&
             str[i] <= 'Z')

      str[i] = (char)(str[i] + 'a' - 'A');
  }

  return str;
}

// Driver code
int main()
{
  string str;
  cout<<"Enter a string"<<endl;
  cin>>str;
  cout << convert(str);
  return 0;
}

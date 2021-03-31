//WAP using Function to take a string as input and convert first letter of all the words present in the string to uppercase.

#include<iostream>
#include<string>
using namespace std;

string uppercase(string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (i == 0 && str[i] != ' ' || str[i] != ' ' && str[i - 1] == ' ')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] = (char)(str[i] - 'a' + 'A');
      }
    }
    else if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = (char)(str[i] + 'a' - 'A');
  }
  return str;
}

int main()
{
  string s;
  cout<<"Enter a string: "<<endl;
  cin>>s;
  cout << uppercase(s);
  return 0;
}

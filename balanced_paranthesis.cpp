#include <bits/stdc++.h>

using namespace std;

void isBalanced(string s) {
  stack<long long> st;
  st.push(7);
  long i;
  for (i = 0; i < s.length(); i++) {
    // cout<<s.at(i)<<endl;
    if (s[i] == '(')
      st.push(1);
    else if (s[i] == '{')
      st.push(2);
    else if (s[i] == '[')
      st.push(3);
    else if (s[i] == ')')
     {
      if (st.top() == 1)
        st.pop();
      else
        st.push(-1);
    }
     else if (s[i] == '}')
      {
      if (st.top() == 2)
        st.pop();
      else
        st.push(-2);
    }
     else if (s[i] == ']') 
     {
      if (st.top() == 3)
        st.pop();
      else
        st.push(-3);
    }
  }
  st.pop();
  if (st.empty())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main() {
  int t;
  cin >> t;
  string str1,str;
  getline(cin, str1);
  for (int q = 0; q < t; q++) {

    getline(cin, str);
    //cout<<str<<endl;
    isBalanced(str);
  }
  return 0;
}

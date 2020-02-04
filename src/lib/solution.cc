#include "solution.h"
using namespace std;

string Solution::Add(string& s, int& x) { 
  return s+to_string(x); 
}

string Solution::Add(int& x, string& s) { 
  return s+to_string(x); 
}

int Solution::Add(int& x,int& y)
{
  return x+y;
}

string Solution::Add(string& s,string& s1)
{
  return s+s1;
}

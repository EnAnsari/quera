/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/136480/
*/

#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 

void reverse(string &str,int l,int r)
{
    while(l < r)
    swap(str[l++],str[r--]);
}

int binarySearch(string& str,int l,int r,char val) 
{ 
  int index = -1; 
  
  while (l <= r) 
  { 
    int mid = (l+r)/2;
    if (str[mid] <= val) 
    {
        r = mid - 1;
    }
    else 
    { 
      l = mid + 1; 
      if (index == -1 || str[index] >= str[mid]) 
        index = mid; 
    } 
  } 
  return index; 
} 

bool nextPermutation(string& str) 
{ 
  int len = str.length();
  int i = len-2; 
  
  while (i >= 0 && str[i] >= str[i+1]) 
  i--;
  
  if (i < 0) 
    return false; 
  else 
  { 
    int index = binarySearch(str,i+1,len-1,str[i]); 
    swap(str[i],str[index]); 
    reverse(str,i+1,len-1); 
    return true; 
  } 
} 

int main() 
{ 
  int n;
  cin >> n;
  string v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
      bool is = nextPermutation(v[i]); 
  
  if(is == false) 
    cout<< "no answer" <<endl; 
  else
    cout<<v[i]<<endl; 
  }
    
  return 0; 
}
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Brute Force Approach - storing words in stack 
// string reverse(string s){
//     s+=" ";
//   stack<string> st;  
//   string str=""; 
//   for (int i = 0; i <s.length(); i++)
//   {
//     if (s[i]==' ')
//     {
//       st.push(str);
//       str="";
//     }else{
//       str+=s[i];
//     } 
//   } 
//  string res="";
//  while (st.size()!=1)
//  {
//   res+=st.top()+" ";
//   st.pop();
//  }
//  res+=st.top();
//  return res; 
// } 

// Brute Force Approach - storing words in stack 
string reverse(string s){
  string str="";  
   
  int n = s.length(); 
  string res = "";
  int i = 0;
  while(i<=n)
  {   
    char ch=s[i];
    if(ch!=' '){ 
      str+=ch;
    } 
    else if (ch==' ')
    {
     if(res!="")  res= str+ " " + res;
     else res=str;
      str="";
    }
    i++;
  }  
 
 
 if(str!=""){
  if(res!="")  res= str+ " " + res;
     else res=str;
 }

 return res; 
} 


int main()
{
  // string s = "this is string"; 
  string s = " hello world "; 
  cout<<reverse(s);
  // reverse(s);
  return 0;
}

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

 class MinStack {
  public:
       stack < long long > st;  
       long long mini = INT8_MAX;

       MinStack() {
            while (st.empty() == false) st.pop();
       
      }
      
      void push(int val) {
          
          if(st.empty()){
              mini = val;
              st.push(val);

    long long mini;
              } else {
              if(mini > val) {
                st.push(2LL * val - mini);
  
                  mini = val;
              } else {
                  st.push(val);
              }
          }
      }
      
      void pop() {
            if(st.empty()) return;
            long long x = st.top();
            st.pop();
  
            if( x < mini) mini = 2*mini - x;
      }
      
      int top() {
           if(st.empty()) return NULL;
          long long x = st.top();
  
           if(x < mini) return mini;
           else return x;
      }
      
      int getMin() {
          return mini;
      } 
  };
  
  
int main()
{
  return 0;
}



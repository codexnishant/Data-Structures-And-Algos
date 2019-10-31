//queue is implemented using two stacks
//-------->>>>>>METHOD 1-------<<<<<<<<<
//making enqueue operation costly
#include<bits/stdc++.h>
#include<stack>
using namespace std;
struct Queue{
  stack<int> s1,s2;
  void enQueue(int x)
  {
    //move all elements of s1 to s2
    while (!s1.empty()) {
           s2.push(s1.top());
           s1.pop();
       }
       // Push item into s1
       s1.push(x);
       // Push everything back to s1
       while (!s2.empty()) {
           s1.push(s2.top());
           s2.pop();
       }
  }
  int deQueue()
   {
       // if first stack is empty
       if (s1.empty()) {
           cout << "Q is Empty";
           exit(0);
       }

       // Return top of s1
       int x = s1.top();
       s1.pop();
       return x;
   }
};
int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';

    return 0;
}
//making deQueue costly
// ------->>>>>>>similarly as first
//---->>>>> one user stack and one call function stack<<<<<<<------

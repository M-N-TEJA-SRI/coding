// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int stack[5],top=-1;
bool isfull(){
    return top+1==5;
}
bool isempty(){
    return top==-1;
}
void push(int x){
    if(isfull()==true)
    cout<<"cannot push as stack is full\n";
    else{
    stack[++top]=x;
    cout<<"pushed successfully\n";
}
}
void pop(){
    if(isempty()==true)
    cout<<"cannot pop as it is empty\n";
    else
    cout<<stack[top--]<<"popped\n";
}
void peek(){
    if(isempty()==true)
    cout<<"no peek as stack is empty\n";
    else
    cout<<stack[top]<<"is the peek\n";;
}
void display(){
    if(isempty()==true)
    cout<<"cannot display\n";
    else{
        int i;
        for(i=0;i<=top;i++){
            cout<<stack[i]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
  int n=-1,x;
  while(n!=5){
      cout<<"1-push\n2-pop\n3-peek\n4-display\n5-exit\n";
      cout<<"enter choice\n";
      cin>>n;
      switch(n){
          case 1:
          cout<<"enter value to push\n";
          cin>>x;
          push(x);
          break;
          case 2:
          pop();
          break;
          case 3:
          peek();
          break;
          case 4:
          display();
          break;
          case 5:
          cout<<"exit\n";
          break;
      }
  }

    return 0;
}
/*
output
1-push
2-pop
3-peek
4-display
5-exit
enter choice
1
enter value to push
2
pushed successfully
1-push
2-pop
3-peek
4-display
5-exit
enter choice
3
2is the peek
1-push
2-pop
3-peek
4-display
5-exit
enter choice
4
2 
1-push
2-pop
3-peek
4-display
5-exit
enter choice
2
2popped
1-push
2-pop
3-peek
4-display
5-exit
enter choice
*/

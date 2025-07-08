// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int queue[5],front=-1,back=-1;
bool isfull(){
    return back+1==5;
}
bool isempty(){
    return front==-1&&back==-1;
}
void enqueue(int x){
    if(isfull()==true)
    cout<<"cannot enqueue as queue is full\n";
    else{
    if(front==-1&&back==-1){
        front=0;
        back=0;
        queue[front]=x;
    }
    else
    queue[++back]=x;
    cout<<"enqueued successfully\n";
}
}
void dequeue(){
    if(isempty()==true)
    cout<<"cannot dequeue as it is empty\n";
    else
   {
       if(front==back){
           cout<<queue[front]<<" is dequeued\n";
           front=-1;
           back=-1;
       }
       else
       cout<<queue[front++]<<" is dequeued\n";
   }
}
void peek(){
    if(isempty()==true)
    cout<<"no peek as queue is empty\n";
    else
    cout<<queue[front]<<"is the peek\n";;
}
void display(){
    if(isempty()==true)
    cout<<"cannot display\n";
    else{
        int i;
        for(i=front;i<=back;i++){
            cout<<queue[i]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
  int n=-1,x;
  while(n!=5){
      cout<<"1-enqueue\n2-dequeue\n3-peek\n4-display\n5-exit\n";
      cout<<"enter choice\n";
      cin>>n;
      switch(n){
          case 1:
          cout<<"enter value to push\n";
          cin>>x;
          enqueue(x);
          break;
          case 2:
          dequeue();
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
1-enqueue
2-dequeue
3-peek
4-display
5-exit
enter choice
1
enter value to push
2
enqueued successfully
1-enqueue
2-dequeue
3-peek
4-display
5-exit
enter choice
3
2is the peek
1-enqueue
2-dequeue
3-peek
4-display
5-exit
enter choice
2
2 is dequeued
1-enqueue
2-dequeue
3-peek
4-display
5-exit
enter choice
4
cannot display
1-enqueue
2-dequeue
3-peek
4-display
5-exit
enter choice
1
enter value to push

*/

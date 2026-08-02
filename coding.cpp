#include <iostream>
using namespace std;
class account{
    private:
    int acc, bal;
    
    public:
  account(int a)
    {
 bal=0;
 acc=a;
 }
 void deposit()
 {
int amo;
cout<<"add balance ";
cin>>amo;
bal+=amo;
 }
void withdraw(){
  int amo;
  cout<<"how much want to draw ";
  cin>>amo;
  bal-=amo;
}
void show() {
   cout<<"current balance " << bal<<endl ;
    
} 
};

int main()
{
   account obj(1);
obj.deposit();
obj.withdraw();

 
obj.show();
}

    
   

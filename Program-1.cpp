#include<iostream>
using namespace std;
class Calculator{
    public:
        void operation(double a,double b,char op){
            switch(op){
                case '+':
                    cout<<a+b;
                    break;
                case '-':
                    cout<<a-b;
                    break;
                case '*':
                    cout<<a*b;
                    break;
                case '/':
                    cout<<a/b;
                    break;
        }
    }
};
int main(){
    double a,b;
    char op;
    cin>>a>>b>>op;
    Calculator obj;
    obj.operation(a,b,op);
    return 0;
}

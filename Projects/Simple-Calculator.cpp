#include <iostream>

using namespace std;
int main() {int sum;
cout<<"enter number 1" <<endl;
int num1;
cin>>num1;
cout<<"enter number 2" <<endl;
int num2;
cin>>num2;
while(true){
    cout<<"choose an operand" <<endl;
    int op;
    cout<<"1: +" <<endl;
    cout<<"2: -" <<endl;
    cout<<"3: *" <<endl;
    cout<<"4: /" <<endl;
    cin>>op;
    if(op==1){
        sum=num1+num2;
        cout<<num1 << " + "<<num2 <<" is = " << sum <<endl;

    }
    else if (op==2){
        sum=num1-num2;
        cout<<num1 << " - "<<num2 <<" is = " <<sum <<endl;


    }
    else if(op==3){
        sum=num1*num2;
        cout<<num1 << " * "<<num2 <<" is = " <<sum <<endl;


    }
    else if (op == 4) {
        sum = num1 / num2;
        cout<< num1 << " / "<<num2 <<" is = " <<sum <<endl;
        break;



    }
    else
        cout << "please choose the right operand";
}


    return 0;
}

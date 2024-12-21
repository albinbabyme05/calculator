
#include<iostream>
#include<cstdlib>


using namespace std;

void display(){
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
}

int operation(int choise, int num1, int num2){
    switch (choise)
    {
    case 1:
        return num1 + num2;
        break;
    case 2:
        return num1 - num2;
        break;

    case 3:
        return num1 * num2;
        break;
    case 4:
        if (num2 == 0)
        {
            cout<<"Not possible to divde with Zero"<<endl;
        }else{
            return num1 / num2;
        }
        break;
    
    default:
        cout<<"Invalid Entry"<<endl;
        break;
    }
}


int main(){

    int userInput, firstNum, secondNum;

    display();
    cout<<"enter your choise : ";
    cin>>userInput;

    bool isCaculated = true;

    cout<<"Enter First Number: "<<endl;
    cin>>firstNum;

    cout<<"Enter Second Number: "<<endl;
    cin>>secondNum;

    int result = operation(userInput,firstNum, secondNum );
    cout<<"The Result is : "<<result<<endl;

	return 0;
}
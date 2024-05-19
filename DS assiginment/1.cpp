#include<iostream>
#include<string>

using namespace std;

class Stack
{
  private:
    int top;

    int arr[5];

  public:
      Stack()
      {
          top=-1;
          for(int i=0;i<5;i++)
          {
              arr[i]=0;

          }
      }
      bool isEmty()
      {
          if (top==-1)
            return true;

          else
            return false;

      }
      bool isfull()
      {
          if (top==4)
            return true;
          else
            return false;
      }

      void push(int val)
      {
         if(isfull())
            {
                cout<<"Stack overflow"<<endl;
            }
            else
                {
                    top++;
                    arr[top]=val;

                }
            }

      int pop()
      {
          if(isEmty())
          {
             cout<<"Stack underflow"<<endl;
             return 0;
          }
          else{
            int popval= arr[top];
            arr[top]=0;
            top--;
            return popval;
          }
      }

      void display(){
          cout<<"Stack :"<<endl;
          for(int i=4;i>=0;i--){
            cout<<arr[i]<<endl;
          }
      }

};

int main() {
  Stack s1;
  int option, postion, value;


  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. peek()" << endl;
    cout << "4. display()" << endl;
    cout << "5. Clear Screen" << endl << endl;

    cin >> option;
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter an item to push in the stack" << endl;
      cin >> value;
      s1.push(value);
      break;
    case 2:
      cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
      break;
    case 3:
      if (s1.isEmty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;



    case 4:
      cout << "Display Function Called - " << endl;
      s1.display();
      break;
    case 5:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);
  return 0;
}

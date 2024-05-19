#include<iostream>

using namespace std;

class Queue {
  private:
  int front;
  int rear;
  int arr[5];

  public:
    Queue() {
      front = -1;
      rear = -1;
      for (int i = 0; i < 5; i++) {
        arr[i] = 0;
      }
    }
  bool isEmpty() {
    if (front == -1 && rear == -1)
      return true;
    else
      return false;
  }
  bool isFull() {
    if (rear == 4)
      return true;
    else
      return false;
  }

  void enqueue(int val) {
    if (isFull()) {
      cout << "Queue full" << endl;
      return;
    } else if (isEmpty())
     {
      rear = 0;
      front = 0;
      arr[rear] = val;
    }
    else
        {
      rear++;
      arr[rear] = val;
    }

  }

  int dequeue() {
    int x = 0;
    if (isEmpty()) {
      cout << "Queue is Empty" << endl;
      return x;
    } else if (rear == front) {
      x = arr[rear];
      rear = -1;
      front = -1;
      return x;
    } else {
      cout << "front value: " << front << endl;
      x = arr[front];
      arr[front] = 0;
      front++;
      return x;
    }
  }



  void display() {
    cout << "All values in the Queue are - " << endl;
    for (int i = 0; i < 5; i++) {
      cout << arr[i] << "  ";

    }
     cout<<""<<endl;
  }

};

int main() {
  Queue q1;
  int value, option;

  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;

    cout << "3. display()" << endl;
    cout << "4. Clear Screen" << endl << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
      cin >> value;
      q1.enqueue(value);
      break;
    case 2:
      cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
      break;

    case 3:
      cout << "Display Function Called - " << endl;
      q1.display();
      break;
    case 4:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}


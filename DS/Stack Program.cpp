// Author Pavel
#include <bits/stdc++.h>
using namespace std;
#define SIZE 10
int s[SIZE], top = -1;

void pop()
{

    int n;

    cout << "DELETE TE TOP ELEMENT" << endl;

    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {

        int temp = s[top];

        top--;

        cout << temp << " is deleted from the stack  and now top is " << top << endl;
    }
}
void display()
{
    cout << "stack is :" << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << s[i] << endl;
    }
}
void push()
{

    int n;
    cout << "enter the number" << endl;

    cin >> n;

    if (top >= SIZE - 1)
    {

        cout << "STACk is full" << endl;
    }
    else
    {

        top++;
        s[top] = n;
        cout << n << " IS ADDED TO STACK AND TOP IS :" << top << endl;
    }
}

int main()
{

    while (1)
    {
        int op;

        cout << "1. PUSH" << endl
             << "2. POP" << endl
             << "3. DISPLAY" << endl;
        cout << "ENTER THE OPTION" << endl;

        cin >> op;

        switch (op)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        }
    }

    return 0;
}

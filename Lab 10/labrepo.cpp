#include <iostream>
using namespace std;

class Stack
{
private:
    int stack[5]; 
    int top;      
public:
    
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (top < 4)
        { 
            stack[++top] = value;
        }
        else
        {
            cout << "Stack overflow!" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            cout << "Pop: " << stack[top--] << endl;
        }
        else
        {
            cout << "Stack is empty." << endl;
        }
    }

    bool empty() const
    {
        return top == -1;
    }
 
    void printRemaining()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Elements remain: ";
        for (int i = top; i >= 0; --i)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while (true)
    {
        if (!s.empty())
        {
            s.pop();
            s.printRemaining();
        }
        else
        {
            break; 
        }
    }

    return 0;
}
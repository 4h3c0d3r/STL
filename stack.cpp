#include <iostream>
#include <stack>

using namespace std;

void display(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

stack<int> reverse(stack<int> s)
{
    stack<int> s1, s2;
    while (!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty())
    {
        s.push(s2.top());
        s2.pop();
    }
    return s;
}

int main()
{
    stack<int> s1, s2, s3;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        s1.push(i);
    }

    cout << "Origrinal Stack : ";
    display(s1);

    cout << "Reversed Stack : ";
    //display(s1);
    s1 = reverse(s1);
    display(s1);
    // display(s2);
}
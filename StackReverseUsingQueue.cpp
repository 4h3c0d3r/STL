#include <iostream>
#include <bits/stdc++.h>

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
    queue<int> q;
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    return s;
}

int main()
{
    stack<int> s;
    int i;
    for (i = 1; i <= 100; i++)
    {
        s.push(i);
    }

    cout << "Original Stack : ";
    display(s);

    cout << "Reversed Stack : ";
    s = reverse(s);
    display(s);
}

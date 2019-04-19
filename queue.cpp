#include <iostream>
//#include <queue>
#include <bits/stdc++.h>

using namespace std;

void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

queue<int> reverse(queue<int> q)
{
    queue<int> temp;
    while (!q.empty())
    {
        temp.push(q.front());
        q.pop();
    }
    while (!temp.empty())
    {
        q.push(temp.front());
        temp.pop();
    }
    return q;
}

int main()
{
    queue<int> q;
    int i;
    for (i = 0; i < 10; i++)
    {
        q.push(i);
    }

    cout << "Original Queue : ";
    display(q);

    q = reverse(q);
    cout << "Reversed Queue : ";
    display(q);
}
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int player_id;
    struct Node *next;
};

struct Node *start; 
struct Node *ptr; 
struct Node *new_node;

int main()
{
    cout << "Enter the number of people: " << endl;
    int n;
    cin >> n;
    cout << "Enter the value of K: " << endl;
    int k;
    cin >> k;
    start = new Node;
    start->player_id = 1;
    ptr = start;
    for (int i = 2; i <= 5; i++)
    {
        new_node = new Node;
        ptr->next = new_node;
        new_node->player_id = i;
        new_node->next = start;
        ptr = new_node;
    }

    for (int i = n; i > 1; i--)
    {
        for (int j = 0; j < k - 1; j++)
            ptr = ptr->next;

        cout << ptr->next->player_id << " Executed !" << endl;
        ptr->next = ptr->next->next;
    }

    cout << "The Winner is Player " << ptr->player_id << endl;
    return 0;
}

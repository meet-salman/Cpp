#include <iostream>
using namespace std;

struct Node
{
    string value;
    int idx;
    Node *next;
};

struct linkList
{
    Node *first;
    Node *last;
    int length = 0;

    void addValue(string val)
    {
        // Creating new Node and setting all values
        Node *n = new Node;
        n->value = val;
        n->idx = length;
        n->next = nullptr;

        // If length == 0 -> first & last both = n
        if (length == 0)
        {
            first = n;
            last = n;
        }
        // If length > 0 -> first always same - last jump to n - first pointing n
        else
        {
            last->next = n;
            last = n;
        }
        length++;
    }

    // Display Function -> all values
    void display()
    {
        // Creating temp Node for treversing
        Node *temp = first;

        for (int i = 0; i < length; i++)
        {
            cout << "Index: " << temp->idx << "  " << "Value: " << temp->value << endl;
            temp = temp->next;
        }
    }

    // Find Value Function -> At specific index
    void findValueAtIndex(int idx)
    {
        Node *temp = first;

        for (int i = 0; i <= idx; i++)
        {
            if (idx == temp->idx)
            {
                cout << "Index: " << temp->idx << "  " << "Value: " << temp->value << endl;
            }
            temp = temp->next;
        }
    }
};

int main()
{

    linkList l1;

    l1.addValue("Salman Ahmed");
    l1.addValue("Suheer Khan");
    l1.addValue("Subhan Bashir");

    l1.display();
    cout << endl;

    l1.findValueAtIndex(2);

    return 0;
}
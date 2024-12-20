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
        // Show msg -> If given idx > list length
        if (idx > length - 1)
        {
            cout << "No Value at index: " << idx;
            return;
        }

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

    // Find Value Function -> Find specific value
    void findValue(string value)
    {
        Node *temp = first;

        for (int i = 0; i < length; i++)
        {
            if (value == temp->value)
            {
                cout << "Value: " << temp->value << "  " << "Index: " << temp->idx << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Value not found" << endl;
    }

    // Upadate Value Function -> At specific index
    void updateValueAtIndex(int idx, string value)
    {
        // Show msg -> If given idx > list length
        if (idx > length - 1)
        {
            cout << "No Value at index: " << idx;
            return;
        }

        Node *temp = first;

        for (int i = 0; i <= idx; i++)
        {
            if (idx == temp->idx)
            {
                temp->value = value;
                cout << "Value Updated" << endl;
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
    cout << endl;

    l1.findValue("Salman Ahmed");
    cout << endl;

    l1.updateValueAtIndex(1, "Shaheer Ahmed");

    l1.display();
    cout << endl;

    return 0;
}
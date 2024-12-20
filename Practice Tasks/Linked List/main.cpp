#include <iostream>
using namespace std;

struct Node
{
    string value;
    int idx;
    Node *next;
};

struct linkedList
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
            cout << "No Value at index: " << idx << endl;
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
            cout << "No Value at index: " << idx << endl;
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

    // Upadate Value Function -> Specific value
    void updateValue(string value, string newValue)
    {
        Node *temp = first;

        for (int i = 0; i < length; i++)
        {
            if (value == temp->value)
            {
                temp->value = newValue;
                cout << "Value Updated" << endl;

                return;
            }
            temp = temp->next;
        }
        cout << "Value not found" << endl;
    }
};

int main()
{

    linkedList list;

    list.addValue("Salman Ahmed");
    list.addValue("Suheer Khan");
    list.addValue("Subhan Bashir");

    list.display();
    cout << endl;

    list.findValueAtIndex(2);
    cout << endl;

    list.findValue("Salman Ahmed");
    cout << endl;

    list.updateValueAtIndex(1, "Shaheer Ahmed");

    list.display();
    cout << endl;

    list.updateValue("Shaheer Ahmed", "Abeer Khan");

    list.display();
    cout << endl;

    return 0;
}
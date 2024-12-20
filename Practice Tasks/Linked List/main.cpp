#include <iostream>
using namespace std;

struct Node
{
    string value;
    int index;
    Node *next;

    Node(string val, int idx) : value(val), index(idx), next(nullptr) {}
};

struct linkedList
{
    Node *first = nullptr;
    Node *last = nullptr;
    int length = 0;

    void addValue(string val)
    {
        // Create new node with the given value and index
        Node *n = new Node(val, length);

        // If list empty -> first & last both = n
        if (!first)
        {
            first = last = n;
        }
        // If list has some values -> first always same - last jump to n - first pointing n
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
        // Check if the list is empty
        if (!first)
        {
            cout << "List is empty!" << endl;
            return;
        }

        // Creating temp Node for traverse
        Node *temp = first;

        while (temp)
        {
            cout << "Index: " << temp->index << "  " << "Value: " << temp->value << endl;
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
            if (idx == temp->index)
            {
                cout << "Index: " << temp->index << "  " << "Value: " << temp->value << endl;
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
                cout << "Value: " << temp->value << "  " << "Index: " << temp->index << endl;
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
            if (idx == temp->index)
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

    void deleteValueAtIndex(int idx)
    {
        if (idx == 0)
        {
            first = first->next;
            length--;
        }
        else
        {
            Node *temp = first;
            Node *prev = temp;
            for (int i = 0; i <= idx; i++)
            {
                if (idx == temp->index)
                {
                    prev->next = temp->next;
                    length--;
                    break;
                }
                prev = temp;
                temp = temp->next;
            }
        }

        Node *temp = first;
        for (int i = 0; i < length; i++)
        {
            if (temp->index > idx)
            {
                temp->index--;
            }
            temp = temp->next;
        }
    }
};

int main()
{

    linkedList list;

    list.addValue("Salman Ahmed");
    list.addValue("Suheer Khan");
    list.addValue("Subhan Bashir");
    list.addValue("Abeer Khan");
    list.addValue("Talha Sohaib");
    list.addValue("Zohain Gul");

    list.display();
    cout << endl;

    // list.findValueAtIndex(2);
    // cout << endl;

    // list.findValue("Salman Ahmed");
    // cout << endl;

    // list.updateValueAtIndex(1, "Shaheer Ahmed");

    // list.display();
    // cout << endl;

    // list.updateValue("Shaheer Ahmed", "Abeer Khan");

    // list.display();
    // cout << endl;

    // list.deleteValueAtIndex(2);

    // list.display();
    // cout << endl;

    return 0;
}
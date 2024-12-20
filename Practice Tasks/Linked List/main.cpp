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
        // Check for invalid index
        if (idx < 0 || idx >= length)
        {
            cout << "No Value at index: " << idx << endl;
            return;
        }

        Node *temp = first;

        // Traverse the list up to the given index
        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }
        // Output the value at the index
        cout << "Index: " << temp->index << " -> " << "Value: " << temp->value << endl;
    }

    // Find Value Function -> Find specific value
    void findValue(string value)
    {
        // Check if the list is empty
        if (first == nullptr)
        {
            cout << "List is empty. Value not found." << endl;
            return;
        }

        Node *temp = first;

        while (temp)
        {
            if (temp->value == value)
            {
                cout << "Value: " << temp->value << " -> " << "Index: " << temp->index << endl;
                return;
            }
            temp = temp->next;
        }

        // If value not found
        cout << "Value not found" << endl;
    }

    // Upadate Value Function -> At specific index
    void updateValueAtIndex(int idx, string value)
    {
        // Check for invalid index
        if (idx < 0 || idx >= length)
        {
            cout << "No Value at index: " << idx << endl;
            return;
        }

        Node *temp = first;

        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }
        temp->value = value;
        cout << "Value Updated" << endl;
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

    // list.findValueAtIndex(3);
    // cout << endl;

    // list.findValue("Salman Ahmed");
    // cout << endl;

    list.updateValueAtIndex(0, "Aqeel sahib");

    list.display();
    cout << endl;

    // list.updateValue("Shaheer Ahmed", "Abeer Khan");

    // list.display();
    // cout << endl;

    // list.deleteValueAtIndex(2);

    // list.display();
    // cout << endl;

    return 0;
}
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
    void findValue(string val)
    {
        // Check if the list is empty
        if (!first)
        {
            cout << "List is empty. Value not found." << endl;
            return;
        }

        Node *temp = first;

        while (temp)
        {
            if (temp->value == val)
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
    void updateValueAtIndex(int idx, string val)
    {
        // Check for invalid index
        if (idx < 0 || idx >= length)
        {
            cout << "No Value at index: " << idx << endl;
            return;
        }

        Node *temp = first;

        int i = 0;
        while (i < idx)
        {
            temp = temp->next;
            i++;
        }

        // Update the value
        temp->value = val;
        cout << "Value updated at index " << idx << endl;
    }

    // Upadate Value Function -> Specific value
    void updateValue(string val, string newVal)
    {
        Node *temp = first;

        int i = 0;
        while (temp)
        {
            if (temp->value == val)
            {
                temp->value = newVal;
                cout << "Value Updated: " << newVal << endl;

                return;
            }
            temp = temp->next;
            i++;
        }

        // If value is not found
        cout << "Value not found: " << val << endl;
    }

    // Delete Value Function -> At specific index
    void deleteValueAtIndex(int idx)
    {
        // Check for invalid index
        if (idx < 0 || idx >= length)
        {
            cout << "No Value at index: " << idx << endl;
            return;
        }

        Node *toDelete = nullptr;

        // Deletion of first node
        if (idx == 0)
        {
            toDelete = first;
            first = first->next;
        }
        else
        {
            Node *temp = first;

            // Traverse to the node just before the target
            int i = 0;
            while (i < idx - 1)
            {
                temp = temp->next;
                i++;
            }
            toDelete = temp->next;
            temp->next = toDelete->next;
        }
        length--;

        Node *temp = first;

        // Update all indices
        int i = 0;
        while (temp)
        {
            temp->index = i;
            temp = temp->next;
            i++;
        }

        cout << "Value Deleted: " << toDelete->value << endl;

        // Delete from memory
        delete toDelete;
    }

    // Delete Value Function -> Specific value
    void deleteValue(string val)
    {
        // Check if the list is empty
        if (!first)
        {
            cout << "List is empty. Value not found." << endl;
            return;
        }

        Node *toDelete = nullptr;

        if (first->value == val)
        {
            toDelete = first;
            first = first->next;
        }
        else
        {
            Node *prev = first;
            Node *temp = first;

            while (temp)
            {
                if (temp->value == val)
                {
                    toDelete = temp;
                    prev->next = toDelete->next;
                    break;
                }
                prev = temp;
                temp = temp->next;
            }
        }

        if (toDelete)
        {
            length--;

            Node *temp = first;

            int i = 0;
            while (i < length)
            {
                temp->index = i;
                temp = temp->next;
                i++;
            }

            cout << "Value Deleted: " << toDelete->value << endl;
            delete toDelete;
        }
        else
        {
            cout << "Value not found: " << val << endl;
        }
    }
};

int choice, idx;
string val;

string enterValue()
{
    cout << endl
         << "Enter Value: ";
    cin >> val;

    return val;
}

bool isContinue()
{
    bool is;
    cout << "Enter 1 to Continue, 0 to Exit:  ";
    cin >> is;

    return is;
}

void exitProgram()
{
    cout << "Exiting the program. Goodbye!" << endl;
    return;
}

linkedList myList;

int mainMenu()
{

    // Displaying the menu
    cout << "------------------------" << endl;
    cout << "    Linked List Menu" << endl;
    cout << "------------------------" << endl;
    cout << "1. Add Value" << endl;
    cout << "2. Display List" << endl;
    cout << "3. Find Value by Index" << endl;
    cout << "4. Find Specific Value" << endl;
    cout << "5. Update Value by Index" << endl;
    cout << "6. Update Specific Value" << endl;
    cout << "7. Delete Value by Index" << endl;
    cout << "8. Delete Specific Value" << endl;
    cout << "9. Exit" << endl;

    cout << endl
         << "Enter Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:

        myList.addValue(enterValue());

        if (isContinue())
            mainMenu();
        else
            exitProgram();

        break;

    case 2:

        myList.display();

        if (isContinue())
            mainMenu();
        else
            exitProgram();

        break;

    case 9:
        exitProgram();

    default:
        break;
    }
    return 0;
}

int main()
{

    mainMenu();

    // list.addValue("Salman Ahmed");
    // list.addValue("Suheer Khan");
    // list.addValue("Subhan Bashir");
    // list.addValue("Abeer Khan");
    // list.addValue("Ahmed Shah");
    // list.addValue("Zohaib Gul");

    // list.display();
    // cout << endl;

    // list.findValueAtIndex(3);
    // cout << endl;

    // list.findValue("Salman Ahmed");
    // cout << endl;

    // list.updateValueAtIndex(0, "Aqeel sahib");

    // list.display();
    // cout << endl;

    // list.updateValue("Abeer Khan", "Malik Jee");

    // list.display();
    // cout << endl;

    // list.deleteValueAtIndex(3);

    // list.display();
    // cout << endl;

    // list.deleteValue("Abeer Khan");

    // list.display();
    // cout << endl;

    return 0;
}
#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

template <class T>

class A
{
public:
    T *arr;
    int size;

    A(int s) : size(s)
    {
        arr = new T[size];
        cout << "\nConstructor called -> Memory allocated for " << size << " elements.\n";
    }

    void setValues()
    {
        cout << "\nEnter array elements:\n";
        for (int i = 1; i <= size; i++)
        {
            cout << "Element " << i << ": ";
            cin >> arr[i - 1];
        }
    }

    ~A()
    {
        delete[] arr;
        cout << "Destructor called -> Memory deallocated.\n";
    }

    void display()
    {
        cout << "\nArray elements of type: " << typeid(arr).name() << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{

    A<int> i(3);
    i.setValues();
    i.display();

    A<char> c(3);
    c.setValues();
    c.display();

    A<float> f(3);
    f.setValues();
    f.display();

    return 0;
}
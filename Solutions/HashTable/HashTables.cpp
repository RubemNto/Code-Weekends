#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename Key, typename Value>
class HashTable
{
    struct node
    {
        Key key;
        Value value;
        struct node *next;
    };
    typedef node *Node;

public:
    HashTable()
    {
        head = NULL;
    };

    void Add(Key key, Value value)
    {
        if (head == NULL)
        {
            Push(key, value);
            return;
        }
        Node tempHead = head;
        Node previous = NULL;
        while (tempHead != NULL)
        {
            previous = tempHead;
            if (tempHead->key == key)
            {
                throw std::invalid_argument("Key already inside HashTable");
            }
            tempHead = tempHead->next;
        }
        tempHead = previous;
        Node element = new node;
        element->value = value;
        element->key = key;
        element->next = NULL;
        tempHead->next = element;
    };

    void Remove(Key key)
    {
        if (head == NULL)
        {
            return;
        }
        Node tempHead = head;
        Node previous = NULL;
        while (tempHead != NULL)
        {
            if (tempHead->key == key)
            {
                previous->next = tempHead->next;
                break;
            }
            previous = tempHead;
            tempHead = tempHead->next;
        }
    };

    //Challenge 2
    void ChangeValueOf(Key key, Value value)
    {
        if (head == NULL)
        {
            return;
        }
        Node tempHead = head;
        while (tempHead != NULL)
        {
            if (tempHead->key == key)
            {
                tempHead->value = value;
                break;
            }
            tempHead = tempHead->next;
        }
    }

    Value GetValue(Key key)
    {
        if (head == NULL)
        {
            throw std::invalid_argument("non existent table");
        }
        Node tempHead = head;
        while (tempHead != NULL)
        {
            if (tempHead->key == key)
            {
                return tempHead->value;
            }
            tempHead = tempHead->next;
        }
        throw std::invalid_argument("Key not found inside HashTable");
    }

    void PrintTable(){
        Node tempHead = head;
        while (tempHead != NULL)
        {
            cout<<"Value: "<<tempHead->value<<endl;
            tempHead = tempHead->next;
        }        
    }

    int GetSize(){
        Node tempHead = head;
        int counter = 0;
        while (tempHead != NULL)
        {
            counter+=1;
            tempHead = tempHead->next;
        }
        return counter;
    }

        Node head = NULL;

private:
    void Push(Key key, Value value)
    {
        Node element = new node;
        element->value = value;
        element->key = key;
        element->next = NULL;
        head = element;
    }
};

// Challenge 1 
void getAverageGrades(HashTable<int, vector<int>> table)
{
    while (table.head != NULL)
    {
        vector<int> data = table.head->value;
        float average = (data[0] + data[1] + data[2]) / 3.0f;
        cout << "Average: " << average << endl;
        table.head = table.head->next;
    }
}

//Challenge 3
HashTable<string,int> ParseData(HashTable<string,int> table)
{
    for (int i = 0; i < table.GetSize(); i++)
    {
        for (int b = 0; b < table.GetSize(); b++)
        {
            if (i == b)
                continue;
            else
            {
                if (table.GetValue(to_string(i)) > table.GetValue(to_string(b)))
                {
                    int temp = table.GetValue(to_string(i));
                    table.ChangeValueOf(to_string(i),table.GetValue(to_string(b)));
                    table.ChangeValueOf(to_string(b),temp);
                }
            }
        }
    }
    return table;
}

int main()
{
    //don't do what i did. This is really stupid code and must be avoided at all cost
    // Please, if needed to use this, be prepared to face the consequences of using a very unprotected HashTable for parsing a string integer pair
    //Good Luck and keep on coding.
    HashTable<string, int> tableOfValues;
    for (int i = 0; i < 11; i++)
    {
        tableOfValues.Add(to_string(i),i+i);
    }

    tableOfValues.PrintTable();    
    cout<<endl;
    tableOfValues = ParseData(tableOfValues);
    tableOfValues.PrintTable();    

    return 0;
}
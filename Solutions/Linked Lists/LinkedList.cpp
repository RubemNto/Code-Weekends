#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef node *Node;

void Push(Node &head, int value)
{
    Node element = new node;
    element->data = value;
    element->next = head;
    head = element;
}

void Add(Node &head, int value)
{
    if (head == NULL)
    {
        Push(head, value);
        return;
    }
    Node tmpNode = head;
    while (tmpNode->next != NULL)
    {
        tmpNode = tmpNode->next;
    }
    Node element = new node;
    element->data = value;
    element->next = NULL;

    tmpNode->next = element;
    tmpNode = head;
}

void PrintNodes(Node head)
{
    Node tmpNode = head;
    while (tmpNode != NULL)
    {
        cout << tmpNode->data << "->";
        tmpNode = tmpNode->next;
    }
    cout << endl;
}

int GetLength(Node &head)
{
    int count = 0;
    Node tmpHead = head;
    while (tmpHead != NULL)
    {
        count += 1;
        tmpHead = tmpHead->next;
    }
    return count;
}

int GetElementAt(Node &head, int Index)
{
    int count = 0;
    Node tmpHead = head;
    while (tmpHead != NULL)
    {
        if (count == Index)
        {
            return tmpHead->data;
        }
        count += 1;
        tmpHead = tmpHead->next;
    }
    cout << "ElementNotFound" << endl;
    return 0;
}

void ChangeElementAt(Node &head, int Index, int value)
{
    int count = 0;
    Node tmpHead = head;
    while (tmpHead != NULL)
    {
        if (count == Index)
        {
            cout << "Element Found" << endl;
            tmpHead->data = value;
            break;
        }
        count += 1;
        tmpHead = tmpHead->next;
    }
    tmpHead = head;
}

void Merge(Node &head1, Node &head2)
{
    Node tmpHead = head1;
    while (tmpHead->next != NULL)
    {
        tmpHead = tmpHead->next;
    }
    tmpHead->next = head2;
    tmpHead = head1;
}

bool AreEqual(Node &head1, Node &head2)
{
    bool result = true;
    if (GetLength(head1) == GetLength(head2))
    {
        for (int i = 0; i < GetLength(head1); i++)
        {
            int i1 = GetElementAt(head1, i);
            int i2 = GetElementAt(head2, i);
            if (i1 != i2)
            {
                result = false;
                return result;
            }
        }
    }
    else
        result = false;
    return result;
}

bool IsPalindrome(Node &head)
{
    bool isPalindrome = false;
    int listLength = GetLength(head);
    Node tmpHead = head;
    Node list1 = NULL;
    Node list2 = NULL;
    for (int i = 0; i < listLength / 2; i++)
    {
        int v = GetElementAt(head, i);
        Add(list1, v);
    }

    for (int i = listLength / 2; i < listLength; i++)
    {
        int v = GetElementAt(head, i);
        Push(list2, v);
    }

    isPalindrome = AreEqual(list1, list2);
    return isPalindrome;
}

int main()
{
    Node list = NULL;
    Add(list, 1);
    Add(list, 2);
    Add(list, 2);
    Add(list, 1);
    bool palindrome = IsPalindrome(list);
    cout << "Is Palindrome: " << palindrome << endl;

    return 0;
}
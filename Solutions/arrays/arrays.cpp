#include <iostream>

using namespace std;

void SortUp(int *array, int length);
void SortDown(int *array, int length);

void FindRepeatingElements(int array[], int length);
void FindMissingElement(int array[], int length);

int main()
{
    int array[5] = {5, 3, 2, 7, 8};
    int array2[5] = {1, 1, 2, 5, 5};
    int array3[5] = {1, 2, 3, 5, 6};

    SortUp(array, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    SortDown(array, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    FindRepeatingElements(array2, 5);
    cout << endl;
    FindMissingElement(array3, 5);
}

void SortUp(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int b = 0; b < length; b++)
        {
            if (i == b)
                continue;
            else
            {
                if (array[i] < array[b])
                {
                    int temp = array[i];
                    array[i] = array[b];
                    array[b] = temp;
                }
            }
        }
    }
}

void SortDown(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int b = 0; b < length; b++)
        {
            if (i == b)
                continue;
            else
            {
                if (array[i] > array[b])
                {
                    int temp = array[i];
                    array[i] = array[b];
                    array[b] = temp;
                }
            }
        }
    }
}

void FindRepeatingElements(int array[], int length)
{
    int *repeatingElements = new int[length];

    for (int i = 0; i < length; i++)
    {
        for (int b = 0; b < length; b++)
        {
            if (array[i] == array[b] && i != b)
            {
                bool foundCopy = false;
                for (int c = 0; c < length; c++)
                {
                    if (repeatingElements[c] == array[i])
                    {
                        foundCopy = true;
                        break;
                    }
                }
                if (foundCopy == false)
                {
                    repeatingElements[i] = array[i];
                    cout << array[i] << " ";
                    break;
                }
            }
        }
    }
}

void FindMissingElement(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i + 1] - array[i] >= 2)
        {
            int missingElement = (array[i + 1] + array[i]) / 2;
            cout << "Found the missing element: " << missingElement << endl;
        }
    }
}

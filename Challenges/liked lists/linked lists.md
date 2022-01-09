```
1. Given a linked list of integers, make a function that returns the lenght of the list, another that returns a specific element indexed in the function and another that changes the value of an element in the list

EXAMPLE:
list a = 1 -> 2 -> 3 -> null
int i1 = GetLength(a) return 3
int i2 = GetElementAt(a,0) return 1
ChangeElementAt(a,0,10) return 10 -> 2 -> 3 -> null

2. Given two linked list of integers, merge them together as one single list

EXAMPLE:
list a = 1 -> 2 -> 3 -> null
list b = 4 -> 5 -> 6 -> null

MergeLists(a,b) return 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> null

3. Given a Liked List of integers, check if it is a palindrome

EXAMPLE:
list a = 1 -> 2 -> 2 -> 1 -> null
IsPalindrome(a) return true

list b = 1 -> 2 -> 2 -> 0 -> null
IsPalindrome(b) return false
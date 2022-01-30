```
1.Traverse a binary tree with a preorder, inorder and postorder method

EXAMPLE:

tree t = (((null<--3->null)<--2->null)<-1->(null<-2->(<-3->null)))
preorder = 1,-2,-3,2,3
inorder = -3,-2,1,2,3
postorder =3,2,-2,-3,1

2.Given an array of numbers, sort it into a binary tree formation 

EXAMPLE:
array a = 1,2,3,-2,-3
tree t = makeTree(a)
return (((null<--3->null)<--2->null)<-1->(null<-2->(<-3->null)))

3.Given a tree, check if it is a binary search tree or not

EXAMPLE:
tree t = (((null<--3->null)<--2->null)<-1->(null<-2->(<-3->null)))
isBinary(t)
return true

tree b = ((((null<--3->null)<--3->null)<--2->null)<-1->(null<-2->(<-3->null)))
isBinary(b)
return false
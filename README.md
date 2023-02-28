# stack-using-array-pro

Stack is a linear Data Structure. It can perform two operations: 
Push and Pop PUSH function in the code is used to insert an element to the top of stack, POP function used to remove the element from the top of stack.

Adding an element onto the stack (push operation):
Adding an element into the top of the stack is referred to as push operation.
Push operation involves following two steps:
1.Increment the variable Top so that it can now refere to the next memory location.
2.Add element at the position of incremented top. This is referred to as adding new element at the top of the stack. 
Stack is overflown when we try to insert an element into a completely filled stack therefore, our main function must always avoid stack overflow condition.

![image](https://user-images.githubusercontent.com/110607289/221892635-883def10-3bac-4499-bc49-1650ec4eb133.png)


Deletion of an element from a stack (Pop operation):
Deletion of an element from the top of the stack is called pop operation. 
1.The value of the variable top will be incremented by 1 whenever an item is deleted from the stack.
2.The top most element of the stack is stored in an another variable and then the top is decremented by 1. 
The operation returns the deleted value that was stored in another variable as the result.

![image](https://user-images.githubusercontent.com/110607289/221892756-880ee06f-8a25-4bff-bba0-7fb70b662bf6.png)

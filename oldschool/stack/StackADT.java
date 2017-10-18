
public interface StackADT {
		  public boolean isEmpty();
		  // Determines whether the stack is empty.
		  // Precondition: None.
		  // Postcondition: Returns true if the stack is empty;
		  // otherwise returns false.

		  public void popAll();
		  // Removes all the items from the stack.
		  // Precondition: None.
		  // Postcondition: Stack is empty.

		  public void push(Object newItem);
		  // Adds an item to the top of a stack.
		  // Precondition: newItem is the item to be added.
		  // Postcondition: If insertion is successful, newItem
		  // is on the top of the stack.

		  public Object pop();
		  // Removes the top of a stack.
		  // Precondition: None.
		  // Postcondition: If the stack is not empty, the item 
		  // that was added most recently is removed from the
		  // stack and returned.

		  public Object peek();
		  // Retrieves the top of a stack.
		  // Precondition: None.
		  // Postcondition: If the stack is not empty, the item
		  // that was added most recently is returned. The 
		  // stack is unchanged. 
	}


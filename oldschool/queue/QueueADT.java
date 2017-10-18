public interface QueueADT {
	  public boolean isEmpty();
	  // Determines whether the queue is empty.
	  // Precondition: None.
	  // Postcondition: Returns true if the queue is empty;
	  // otherwise returns false.

	  public void dequeueAll();
	  // Removes all the items from the queue.
	  // Precondition: None.
	  // Postcondition: queue is empty.

	  public void enqueue(Object newItem);
	  // Adds an item to the back of a queue.
	  // Precondition: newItem is the item to be added.
	  // Postcondition: If insertion is successful, newItem
	  // is on the back of the queue.

	  public Object dequeue();
	  // Removes the front of a queue.
	  // Precondition: None.
	  // Postcondition: If the queue is not empty, the item 
	  // that was added first is removed from the
	  // queue and returned.

	  public Object peek();
	  // Retrieves the front of a queue.
	  // Precondition: None.
	  // Postcondition: If the queue is not empty, the item
	  // that was added most recently is returned. The 
	  // queue is unchanged. 
}
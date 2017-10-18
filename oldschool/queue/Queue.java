import java.util.Random;

public class Queue implements QueueADT{
	
	private Node first;
	private Node last;
	
	public Queue(Node first, Node last) {
		super();
		this.first = first;
		this.last = last;
	}
	public Queue(){
		first = null;
		last = null;
	}
	public Node getFirst() {
		return first;
	}
	public void setFirst(Node first) {
		this.first = first;
	}
	public Node getLast() {
		return last;
	}
	public void setLast(Node last) {
		this.last = last;
	}
	
	
	public boolean isEmpty(){
		if(first.equals(null))
			return true;
		else return false;
	}
	public void dequeueAll(){
		first = null;
	}
	public void enqueue(Object x){
		if(first.equals(null)){
			first = last;
		}
		Node temp = new Node(x);
		Node newThing = new Node(last);
		last = newThing;
		last.equals(temp);
	}
	public Object dequeue(){
		Node temp1 = first.next();
		Object save = first.getItem();
		first = first.next();
		return save;
	}
	public Object peek(){
		return first;		
	}







	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Queue myQueue = new Queue();
		
		Random rand = new Random();
		
		int randInt = rand.nextInt();
		
		myQueue.enqueue(randInt);
		System.out.println("The queue is: " + myQueue.dequeue());
		
		

	}

}

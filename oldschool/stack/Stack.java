
public class Stack implements StackADT{

	private Node top;
	private int size;
	
	public Stack( Node top_, int size_){
		top = top_;
		size = size_;
	}
	
	public Node getTop() {
		return top;
	}

	public void setTop(Node top) {
		this.top = top;
	}

	public int getSize() {
		return size;
	}

	public void setSize(int size) {
		this.size = size;
	}
	
	boolean isEmpty(Node top){
		if(top.equals(null))
			return false;
		else return true;
	}
	void popAll(Node top){
		top = null;		
	}
	Object peek( Node top ){
		return top;
	}
	void push( Node top ){
		Node temp = top;
		Node newThing = new Node(top);
		top = newThing;
		top.setNext(temp);
	}
	void pop( Node top ){
		top.setNext(top);
		}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		
		

	}

}

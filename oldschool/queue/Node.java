public class Node {

	private Object item;
	private Node next;
	
	public Node(){
		item = 0;
		next = null;
	}
	public Node(Object item){
		this.item = item;
		next = null;
	}
	public Node(Object item, Node next){
		this.item = item;
		this.next = next;
	}
	public Object getItem(){
		return item;
	}
	public void setItem(Object item){
		this.item = item;
	}
	public Node next(){
		return next;
	}
	public void setNext(Node next){
		this.next = next;
	}
	public String toString(){
		return ""+item;
	}
}

public class Node {
	private double item;
	private Node next;
	
	public Node(){
		item = 0;
		next = null;
	}
	public Node(double item){
		this.item = item;
		next = null;
	}
	public Node(double item, Node next){
		this.item = item;
		this.next = next;
	}
	public double getItem(){
		return item;
	}
	public void setItem(double item){
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

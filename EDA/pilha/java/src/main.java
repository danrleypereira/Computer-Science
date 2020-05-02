/* Java program to implement basic stack 
operations */
import stack.Stack;
import stack.StackAsLinkedList;;
// Driver code 
class Main { 
	public static void main(String args[]) 
	{ 
		Stack s = new Stack(); 
		s.push(10); 
		s.push(20); 
		s.push(30); 
		System.out.println(s.pop() + " Popped from stack"); 
		
		
		StackAsLinkedList sll = new StackAsLinkedList(); 

		sll.push(10); 
		sll.push(20); 
		sll.push(30); 

		System.out.println(sll.pop() + " popped from stack"); 

		System.out.println("Top element is " + sll.peek()); 
	} 
} 

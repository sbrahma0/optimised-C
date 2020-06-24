#include <iostream>

struct node {
	int data;
	node *next;
	};

class linked_list {
	private:
	node *head, *tail;
	public:
	linked_list() {
		head = NULL;
		tail = NULL;
		}

	void creat_node(int value) {
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;
		
		if (head == NULL) {
			head = temp;
			tail = temp;
			temp = NULL;
			}
		else {
			tail->next = temp;
			tail = temp;
			temp = NULL;
			}
		}
		
	void display() {
		node *temp=new node;
		temp = head;
		
		while(temp != NULL) {
			std::cout<<temp->data<<std::endl;
			temp = temp->next;
		}
	}
	
	void insert_at_strt(int value) {
		node *temp = new node;
		temp->data = value;
		temp->next = head;
		head = temp;
		}
	
	void insert_at_end(int value) { // a bit redundant function since creat_node function does the same
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
		}
	
	void insert_position(int pos, int value) { // Assuming the position entered is valid
    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;	
    temp->next=cur;
  
  }
};
int main() {
	linked_list obj;
	obj.creat_node(25);
	obj.creat_node(50);
	obj.creat_node(90);
	obj.creat_node(40);
	obj.insert_at_strt(15);
	obj.insert_at_end(45);
	obj.insert_position(5,95);
	std::cout<<"\n--------------------------------------------------\n";
	std::cout<<"---------------Displaying All nodes---------------";
	std::cout<<"\n--------------------------------------------------\n";
	obj.display();
	return 0;
}


 


#include<iostream>
#include<list>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

void print ( ListNode node) {
	
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
}

int main () {

	ListNode l4(4);
	ListNode l3(3);
	l4.next = &l3; 
	cout << (*(l4.next)).val<<endl;
	return 0;
}

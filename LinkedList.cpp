// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int val;
//     Node *next;
//     Node(int data)
//     {
//         val = data;
//         next = NULL;
//     }
// };

// void inserthead(Node* &head, int d) {
//     Node* temp = new Node(d); //new variable of temp and 1) the first operation will do make the new elements as a head and then the head will the temp , 
//     temp->next = head;
//     head = temp;
// }

// void inserttail(Node* &tail , int d){
//     Node *temp= new Node(d);
//     tail->next = temp;
//     tail = temp;

// }

// void print(Node* &head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }


// int main() {
//     Node *n = new Node(10);
//     // cout << n->val << " " << n->next << " " << endl;

//     Node* head = n;
//     Node* tail = n;


//     print(head);
//     inserttail(tail, 15);
//     print(head);    
//     inserttail(tail, 120);
//     print(head);

//     return 0;
// }


#include<iostream>
using namespace std;
class Node{
    public:
    int val ;
    Node *next;
    Node(int data ){
        val = data ;
        next = NULL;
    }
};
    void insertHead(Node* &head , int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp ;
    }

    void  insertTail(Node* &tail , int data ){
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }

    void print(Node* &head){
        Node *temp = head;
        while (temp != NULL)
        {
           cout<<temp->val<<" ";
           temp = temp->next;

        }cout<<endl;
         
    }
int main(){
    Node* n= new Node(10);
    Node* head = n;
    Node* tail = n;
    print(head);
    insertTail(tail, 101);
    print(tail);
    insertTail(tail , 26);
    print(tail);

return 0;
}
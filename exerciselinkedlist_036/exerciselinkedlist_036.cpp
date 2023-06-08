#include <iostream>
#include <string>
using namespace std;

class Node {//membuat class Node
public: // Status kelas
	int rollNumber; // variable rollNumber
	string name; // variable string untuk menyimpan nama 
	Node* next; // Untuk  
};
class CircularLinkedList { //Membuat class Circular linked list
private: //status kelas
	Node* LAST;//
public://status node* Last 
	CircularLinkedList() {//Untuk memanggil class CircularLinkedList
		LAST = NULL; //Untuk deklarasi LAST sama dengan Null
	}
	void addNode(); //Deklarasi prosedur void addNode
	bool search(int rollno, Node** masud, Node** muhammad);//Deklarasi bool search untuk memcari data
	bool listEmpty();//deklarasi bool listempty
	bool delNode(); // deklarasi bool delnode untuk menghapus data
	void traverse();// deklarasi prosedur void traverse untuk membaca data
};
void CircularLinkedList::addNode()  // Untuk fungsi menambahkan data
{
	int rollNumber; //variable menyimpan rollNumber
	string name;//variable penyimpan name
	Node* newNode = new Node;// Allocate memory for the new node.
	Node* LAST;
	cout << "Masukkan NIM  : ";
	cin >> rollNumber;
	cout << "Masukkan nama : ";
	cin >> name;

	newNode->rollNumber = rollNumber;//Assign value to the data field of the new node
	newNode->name = name;



	






	

}
bool CircularLinkedList::search(int rollno, Node** masud, Node** muhammad) {
	*masud = LAST->next;
	*muhammad = LAST->next;
	while (*muhammad != LAST) {
		if (rollno == (*muhammad)->rollNumber) {
			return true;
		}
		*masud = *muhammad;
		*muhammad = (*muhammad)->next;
	}
	if (rollno == LAST->rollNumber) {
		return true;
	}
	else {
		return false;
	}
}
bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}
bool CircularLinkedList::delNode() { //write your answer here
}
void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* currentNode = LAST->next;
		while (currentNode != LAST) {
			cout << currentNode->rollNumber << " " << currentNode->name << endl;
			currentNode = currentNode->next;
		}
		cout << LAST->rollNumber << " " << LAST->name << endl;
	}
}
int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";
			char ch;
			cin >> ch;
			switch (ch) {
			case '1': {
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;

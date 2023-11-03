#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insert(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    void deleteNode(int data)
    {
        if (head == nullptr)
        {
            std::cout << "List is empty. Cannot delete." << std::endl;
            return;
        }

        if (head->data == data)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *current = head;
        while (current->next != nullptr && current->next->data != data)
        {
            current = current->next;
        }

        if (current->next == nullptr)
        {
            std::cout << "Node with data " << data << " not found." << std::endl;
        }
        else
        {
            Node *temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }
};

int main()
{
    LinkedList list;

    int choice, data;

    do
    {
        std::cout << "\nSingly Linked List Menu:\n";
        std::cout << "1. Insert a node\n";
        std::cout << "2. Delete a node\n";
        std::cout << "3. Display the list\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter data to insert: ";
            std::cin >> data;
            list.insert(data);
            break;
        case 2:
            std::cout << "Enter data to delete: ";
            std::cin >> data;
            list.deleteNode(data);
            break;
        case 3:
            std::cout << "Linked List: ";
            list.display();
            break;
        case 4:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

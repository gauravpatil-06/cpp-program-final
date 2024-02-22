#include <iostream>

using namespace std;

#define MAX 5

class CircularQueue
{
    string jobs[MAX];
    int front, rear, count;

public:
    CircularQueue()
    {
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty()
    {
        return count == 0;
    }

    bool isFull()
    {
        return count == MAX;
    }

    void enqueue(string job)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        jobs[rear] = job;
        count++;
        cout << "Added print job: " << job << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Processed job: " << jobs[front] << endl;
        front = (front + 1) % MAX;
        count--;
    }

    void showfront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Front job: " << jobs[front] << endl;
    }

    void jobcount()
    {
        cout << "Total jobs in queue: " << count << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Jobs in queue: ";
        int index = front;
        for (int i = 0; i < count; i++)
        {
            cout << jobs[index] << " ";
            index = (index + 1) % MAX;
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue cq;
    int choice;
    string job;

    while (true)
    {
        cout << "\nPrinter Job Queue:";
        cout << "\n1. Add Print Job (enqueue)";
        cout << "\n2. Process Job (dequeue)";
        cout << "\n3. View Front Job";
        cout << "\n4. Check if Queue is Empty";
        cout << "\n5. Check if Queue is Full";
        cout << "\n6. Print Job Count";
        cout << "\n7. Display All Jobs";
        cout << "\n8. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter job name: ";
            cin >> job;
            cq.enqueue(job);
            break;

        case 2:
            cq.dequeue();
            break;

        case 3:
            cq.showfront();
            break;

        case 4:
            cout << (cq.isEmpty() ? "Queue is Empty." : "Queue is NOT Empty.") << endl;
            break;

        case 5:
            cout << (cq.isFull() ? "Queue is Full." : "Queue is NOT Full.") << endl;
            break;

        case 6:
            cq.jobcount();
            break;

        case 7:
            cq.display();
            break;

        case 8:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid choice, try again!" << endl;
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ------ Defines   ----------

#define MAX 5 // max length for random list

// ------ Structs   ----------

typedef struct Node
{
    int number;
    struct Node *next;
    struct Node *prev;
} Node;

// ------ Function declarations   ----------

// This function generates a set of random numbers and adds them to a list
Node *random_list(void);

// This function adds 'data' to the first position in the list
Node *add_first(Node *temp, int data);

// get a random number from 0 to 100
int get_random_number(void);

// ------ Main   --------------------------
// The main entry point for the program
int main(int argc, char *argv[])
{
    int nr = 0; // node number
    Node *act_post;
    Node *head = NULL;

    srand(time(0));   // Random seed
    head = random_list();       // Create a random linked list
    act_post = head;            // Make a copy of the head linked list

    // while there are elements in the list, print them.
    while (act_post != NULL)
    {
        printf("\n Post nr %d : %d", nr++, act_post->number);
        act_post = act_post->next; // Point to next Node in list
    }

    head = add_first(head, 101); // insert new node and set to new head
    act_post = head;                        // reset pointer to head
    nr = 0;                                 // reset number

    while (act_post != NULL)
    {
        printf("\n Post nr %d : %d", nr++, act_post->number);
        act_post = act_post->next;
    }

    // --- Free the allocated memory  ---
    while ((act_post = head) != NULL)
    {
        head = act_post->next;
        free(act_post);
    }

    return 0;
}

// ------ Function definitions   ----------

Node *random_list(void)
{
    // init variables for the loop
    int nr, i = 0; // for storing random number
    Node *head, *old, *item;

    head = malloc(sizeof(Node)); // allocate memory
    old = malloc(sizeof(Node));  // allocate memory

    // create head
    head->number = get_random_number(); // assign number to head
    head->prev = NULL;                  // init prev pointer
    head->next = NULL;                  // init next pointer

    for (i = 0; i < MAX; i++) // since head is created, 5 more elements will created and added to listed list
    {
        item = malloc(sizeof(Node)); // allocate memory
        nr = get_random_number();    // get random number
        item->number = nr;           // assign number to item
        item->next = NULL;           // init values
        item->prev = NULL;           // init values
        if (head->next == NULL)
        {
            head->next = item; // if head doesn't a next node, set it to item
        }
        item->prev = old; // set previous of item to old
        old->next = item; // set next to item
        old = item;       // set old to item
    }

    return head;
}

Node *add_first(Node *temp, int data)
{
    Node *new = malloc(sizeof(Node)); // allocate memory
    new->number = data;               // assign data to number field
    new->next = NULL;                 // init next pointer
    new->prev = NULL;                 // init prev pointer

    if (temp == NULL) // if temp is null
    {
        temp = new;  // assign the new node to temp
        return temp; // return temp
    }
    new->next = temp; // assign new node's next pointer to the current first element of the linked list
    temp->prev = new; // point the former first element previous pointer to newly created node
    return new;       // return the new node
}

int get_random_number(void)
{
    return rand() % 101; // return random number between 0 and 100
}
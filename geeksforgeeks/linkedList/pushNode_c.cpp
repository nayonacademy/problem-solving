struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node** head_href, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_href);
}

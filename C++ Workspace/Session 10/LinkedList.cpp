#include<iostream>
#include<vector>
struct Record
{
  std::string name;
  int num;  
};
struct Node
{
Record record;
Node *next;
};

void Print(Node *Head)
{
    std::cout << Head->record.name << " " << Head->record.num << std::endl;
}

void Traverse (Node *Head , void (*callBack) (Node*))
{
    while(Head)
    {
        callBack(Head);
        Head = Head->next;

    }
}
int main(void)
{
    Node *Head = new Node;
    Node *firstNode = new Node;
    Node *secondNode = new Node;

    Head->record.name = "Ahmed";
    Head->record.num = 28;
    Head->next = firstNode;

    firstNode->record.name = "Alaa";
    firstNode->record.num = 64;
    firstNode->next = secondNode;

    secondNode->record.name = "Ahmed";
    secondNode->record.num = 98;
    secondNode->next = NULL;
    Traverse(Head,Print);

    std::vector<int> v;

    std::cout<<v.size()<<std::endl;

for(int i = 0;i<10;i++)
{
    v[i] = i;
}
    

    
for(int i = 0;i<10;i++)
{
    std::cout<< v[i] << std::endl;
}
    std::cout<<v.size()<<std::endl;
    return 0;
}
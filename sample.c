<<<<<<< HEAD
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

<<<<<<< HEAD
#define N 50

int queue[N]={0};
int rear=0,front=0;

void insert(void);
void del(void);
void disp(void);
void cre(void);

void main()
{
    int input = 0;
    while(input != 4)
    {
	system("cls");
        printf("\n\n\n\t\t\t THE SIZE OF QUEUE IS %d",N);
        printf("\n\t 1.INSERT");
        printf("\n\t 2.DELETE");
        printf("\n\t 3.DISPLAY");
        printf("\n\t 4.EXIT");
        printf("\n\t 5.CREATE");
   
        scanf("%d",&input);

        switch(input)
        {
	    system("cls");
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                disp();
                break;
            case 4:
                printf("\n\t THANK U");
                break;
            case 5:
                cre();
                break;
	    default:
		break;
        }

        getch();
	
      }

}

/********************* insert ********************/
void insert(void)
{
    int value=0;

    if(rear < N)
    {

        printf("\n\t ENTER A VALUE IN QUEUE");
        scanf("%d",&value);
        queue[rear]=value;
        rear++;

=======
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 6

std::queue<int> queue;

void insert();
void remove();
void display();
void create();

// �ڷᱸ�� ť
int main() {

    int oper = 0; // �ʱ�ȭ
    
    while( oper !=  4 ) {

        system("cls");
        printf("\n\n\n\t\t\t THE SIZE OF QUEUE IS %d",QUEUE_SIZE);
        printf("\n\t ��.INSERT");
        printf("\n\t ��.REMOVE");
        printf("\n\t ��.DISPLAY");
        printf("\n\t ��.CREATE");
        printf("\n\t ��.EXIT\n");

        printf("\n\t Select Menu-> ");
        scanf("%d",&oper);

        switch(oper) {

        system("cls"); //  system("clear"); for linux
        case 1:
            insert();
            break;
        case 2:
            remove();
            break;
        case 3:
            display();
            break;
        case 4:
            create();
            break;
        case 5:
            printf("\n\t System ShutDowned !!\n\n");
            break;
        default:
            break;
        }

        getch();
>>>>>>> ac7a8dee18a44a0891a6ea57fb61c5654c834021
    }


    return 0;
}
/******************** insert **********************/
void insert() {
	int value=0; //�Է°� ���� �� �ʱ�ȭ.
	printf("\n\t ENTER A VALUE IN QUEUE :: ");    
	scanf("%d",&value);

	queue.push(value);
	printf("\t PRESS ENTER KEY");
}

/******************** remove **********************/
void remove() {
	if(queue.empty())
		printf("Empty Queue\n");
	printf("\n\t %d gets removed.........\n",queue.front());
	queue.pop();
	printf("\t PRESS ENTER KEY");
}

<<<<<<< HEAD
/********************* delete ********************/
void del(void)
{
    printf("\n\t %d gets deleted.........",queue[front]);
    queue[front]=0;
    	front++;
}

/********************* display ********************/
void disp(void)
{
    int i=0;
    for(i = front ; i < rear ; i++)
        printf("\n\t %d", queue[i]);
}

/********************* create ********************/
void cre(void)
{
    int t=0;
    printf("\n\t ENTER A VALUE IN QUEUE");
    
    scanf("%d",&t);
    front=0;
    queue[front]=t;
    rear=front+1;
=======
/********************** display **********************/
void display() {
    int size = queue.size();
    int i=0; //�ʱ�ȭ 
    for(i = 0 ; i < size ; i++) {
		int temp = queue.front();
		printf("\n\t %d", temp);
		queue.pop();
		queue.push(temp);
	}
    
    printf("\n");
    printf("\t PRESS ENTER KEY");
}

/********************* create ***********************/
void create() {
    
    //t�� �ʿ����
    printf("\n\t ENTER A VALUE IN QUEUE :: ");
    
	int size = queue.size();
	int i = 0;     // i ���� �ʱ�ȭ
	for (int i=0;i<size;i++) {
		queue.pop();
	}


    printf("\t PRESS ENTER KEY");
>>>>>>> ac7a8dee18a44a0891a6ea57fb61c5654c834021
}
//indentation modified

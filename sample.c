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
    }

    return 0;
}
/******************** insert **********************/
void insert() {
	int value=0; //�Է°� ���� �� �ʱ�ȭ.
	printf("\n\t ENTER A VALUE IN QUEUE :: ");    
	scanf("%d",&value);

	queue.push(value);
	printf("\t PRESS ENTER KEY!!");
}

/******************** remove **********************/
void remove() {
	if(queue.empty())
		printf("Empty Queue\n");
	printf("\n\t %d gets removed.........\n",queue.front());
	queue.pop();
	printf("\t PRESS ENTER KEY");
}

/********************** display **********************/
void display() {
    int size = queue.size();
    int i; //for loop variable i initialization 0
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
	int i;	//for loop variable i initialization 0
	for (int i=0;i<size;i++) {
		queue.pop();
	}


    printf("\t PRESS ENTER KEY");
}
//indentation the modified

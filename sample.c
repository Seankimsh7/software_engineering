#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


#define QUEUE_SIZE 6

std::queue<int> queue;

void insert();
void remove();
void display();
void create();

int main() {

    int op = 0; //초기화
    
    while( op !=  4 ) {

        system("cls");
        printf("\n\n\n\t\t\t THE SIZE OF QUEUE IS %d",QUEUE_SIZE);
        printf("\n\t 1.INSERT");
        printf("\n\t 2.REMOVE");
        printf("\n\t 3.DISPLAY");
        printf("\n\t 4.CREATE");
        printf("\n\t 5.EXIT\n");



        printf("\n\t -> ");
        scanf("%d",&op);

        switch(op) {

        system("cls"); // system("clear"); for linux
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
/******************** insert ********************/
void insert() {
	int value=0;
	printf("\n\t ENTER A VALUE IN QUEUE :: ");    
        	scanf("%d",&value);

	queue.push(value);
	printf("\t PRESS ENTER KEY");
}

/******************** remove ********************/
void remove() {
	if(queue.empty())
		printf("Empty Queue\n");

        	printf("\n\t %d gets removeed.........\n",queue.front());
	queue.pop();
	printf("\t PRESS ENTER KEY");
}

/******************** display ********************/
void display() {
    int size = queue.size();
    int i=0; //초기화 
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
    
    //t가 필요없다
    printf("\n\t ENTER A VALUE IN QUEUE :: ");
    
	int size =queue.size();
	int i = 0;     // i 변수 초기화
	for (int i=0;i<size;i++) {
		queue.pop();
	}

    printf("\t PRESS ENTER KEY");
}
//indentation modified

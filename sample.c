#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <iterator>

#define QUEUE_SIZE 6

std::queue<int> queue;

void insert(void);
void del(void);
void disp(void);
void cre(void);

int main()
{
    int input = 0;
    
    while (input !=  4) {
        system("cls");
        printf("\n\n\n\t\t\t THE SIZE OF QUEUE IS %d",QUEUE_SIZE);
        printf("\n\t 1.INSERT");
        printf("\n\t 2.DELETE");
        printf("\n\t 3.DISPLAY");
        printf("\n\t 4.CREATE");
        printf("\n\t 5.EXIT\n");

        printf("\n\t Select Menu-> ");
        scanf("%d",&input);

        switch(input)
        {
        system("cls"); // system("clear"); for linux
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
            cre();
            break;
        case 5:
            printf("\n\t THANK U\n\n");
            break;
        default:
            break;
        }

        getch();
    }

    return 0;
}

/********************* insert ********************/
void insert(void)
{
	int value;
	printf("\n\t ENTER A VALUE IN QUEUE :: ");    
    scanf("%d",&value);

	queue.push(value);
	printf("\t PRESS ENTER KEY");
}

/********************* delete ********************/
void del(void) {
	if(queue.empty())
		printf("Empty Queue\n");

    printf("\n\t %d gets deleted.........\n",queue.front());
	queue.pop();
	printf("\t PRESS ENTER KEY");
}

/********************* display ********************/
void disp(void) {
	int size = queue.size();
    for(int i = 0 ; i < size ; i++)
	{
		int temp = queue.front();
		printf("\n\t %d", temp);
		queue.pop();
		queue.push(temp);
	}
    
    printf("\n");
    printf("\t PRESS ENTER KEY");
}

/********************* create ********************/
void cre(void) {
    int t = 0;
    
    printf("\n\t ENTER A VALUE IN QUEUE :: ");
    
	int size =queue.size();
	for (int i=0;i<size;i++)
	{
		queue.pop();
	}

    printf("\t PRESS ENTER KEY");
}

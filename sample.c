#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 6


int queue[QUEUE_SIZE] = {0};
int rear = 0,front = 0;

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

        printf("\n\t -> ");
        scanf("%d",&input);

        switch(input)
        {
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
    int value = 0;

    if(rear < QUEUE_SIZE) {
        printf("\n\t ENTER A VALUE IN QUEUE :: ");
        
        scanf("%d",&value);
        queue[rear] = value;
        rear++;
        
        printf("\t PRESS ENTER KEY");
    }

    else {
        printf("\n\t Q OVERFLOW!!!!!!!!!!!!!!!");

    }
}
void del(void)
{
	printf("\n\t %d gets deleted.........",queue[front]);
	queue[front]=0;

/********************* delete ********************/
void del(void) {
    printf("\n\t %d gets deleted.........\n",queue[front]);
    
        front++;
    
    printf("\t PRESS ENTER KEY");
}

/********************* display ********************/
void disp(void) {
    int i = 0;
    
    for(i = front ; i < rear ; i++)
        printf("\n\t %d", queue[i]);   
    
    printf("\n");
    printf("\t PRESS ENTER KEY");
}

/********************* create ********************/
void cre(void) {
    int t = 0;
    
    printf("\n\t ENTER A VALUE IN QUEUE :: ");
    scanf("%d",&t);
    
    front = 0;
    queue[front] = t;
    rear=front+1;
    
    printf("\t PRESS ENTER KEY");
}

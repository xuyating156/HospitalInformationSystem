typedef struct patient
{
	char ID[10];
	char name[10];
	char bingli[300];
	int cost[10]; 
	struct patient * next;
}node1;//���˽ṹ�� 

typedef struct medicine_storage
{
	int amount[10];
	int price[10];
}node2;//ҩƷ�ṹ�� 

//�������� 
void mainmeun();
int LandedApp(void);
void RandomCode(char Rcode[]);
node2 init(node2 temp);
node1 * create(node1 *p1);
node1 * insert(node1 * head,node1 *p);
void search(node1 *p1);
void bingli(node1 *p);
node2 buy(node1 *p,node2 temp);
void list(node1 *p);
char modify(node1 *p);
void liststock(node2 temp);
char chose();












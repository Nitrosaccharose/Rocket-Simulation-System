//�궨�� 

#define ROCKETLEN sizeof(struct Singlestagerocket)
#define DATALEN sizeof(struct Companydata)

//�������� 

int MainMenu(); //һ���˵��������û�ѡ��ֵ
void CreateSubMenu1(int coin,double Prestige); //�����˵�����ѯ�ʽ���������
int CreateSubMenu2(int coin,int Prestige); //�����˵����������̵꣬�����û�ѡ��ֵ
int CountRocketSingle() ; //���زֿ��ļ������е�֧�������
int CountRocketStar(); //���زֿ��ļ������������������
int CountRocket(); //���زֿ��ļ��������������ͻ������
void ShowRocketofwarehouse(); //չʾ�ֿ��ļ��������������ͻ�� 
void Rocketstorage(int i); //д���Ӧ��ŵĻ���������ֿ��ļ�
void Launchsettlement(double *Prestige,int *Capital,double s,int Price); //�������,��д���µ��ʽ�����ֵ�����������ļ�
double Percentagerandomnumber(int down,int up); //�ٷ���������ɺ�����down��upΪ�ٷ�����ʽ�������ޣ�����������ɵİٷ���
int Sixdigitrandomnumber() ; //��λ��������ɺ���������������ɵ���λ�����
int Incomeconversion(double s,double *Prestige,int Price,int *Capital) ; //���о���ת�����溯������������ֵ
int WarehouseselectionSingle(); //�����˵������䵥֧���չʾ�ֿ�״̬���������û�ѡ��ֵ
int WarehouseselectioStar(int n[]) ; //�����˵��������������չʾ�ֿ�״̬���������û�ѡ��ֵ
int IsRocketExistSingle (int Rocketnumer); //��ѯָ����ŵĵ�֧������ļ��Ƿ���ڣ������ڷ���1�����򷵻�0 
int IsRocketExistStar (int Rocketnumer); //��ѯָ����ŵ�����������ļ��Ƿ���ڣ������ڷ���1�����򷵻�0 
int GetRocketstoragelocation(int number); //��ѯָ����ŵĻ��,�������ŵ�λ��
void DelRocket(int n) ; //ɾ��ָ��λ�õĻ�� 
int Initializationdetection() ; //��ʼ����� �����ѳ�ʼ������1�����򷵻�0
void Initializationdata(); //��ʼ�����������ļ�
void Emptywarehouse(); //��ʼ���ֿ��ļ�
void Savebasicdata(int Capital,double Prestige,int Animation) ; //���浱ǰ�������������������ļ�
int FindCapital(); //���ػ��������ļ����ʽ�ֵ 
int FindPrestige(); //���ػ��������ļ�������ֵ 
int FindAnimation(); //���ػ��������ļ��Ķ�������ֵ����������1�����򷵻�0
int InsMenu(); //�����˵������ò˵��������û�ѡ��ֵ 
int LaunchCSnMenu(); //�����˵����������ѡ��˵��������û�ѡ��ֵ
void ReviseCandP(int *Capital,double *Prestige); //�Զ����޸Ļ��������ļ����ʽ������
void Rocketanimation(int x); //����������ź���
void Initializeanimation(); //��һ�γ�ʼ�����ź���
void InitializeanimationAgain(); //�ڶ��γ�ʼ�����ź���

//�ṹ�嶨�� 

struct Companydata //�������� 
{
	int flag; //��ʼ����־��1Ϊ�ѳ�ʼ����0Ϊδ��ʼ�� 
	int Capital;  //��˾�ʽ� 
	double Prestige;  //��˾����
	int Animation; //��������  
}Inidata={1,10000,1.000,1};

struct Singlestagerocket //���
{
	char Rockettype[10];   //������� 
	char Tradename[10];   //��Ʒ�� 
	int Price;  //����۸� 
	double Distance;  //���о��� 
	int number; //��Ʒ��� 
	int IsAvailable; //��Ч״̬ 1Ϊ��Ч 0Ϊ��Ч 
}Rocket[6]={
				{"����","�϶�7��",4000,1.00,1,1},
				{"����","�϶�8��",7500,2.00,2,1},
				{"����","C����",800,0.300,3,1},
				{"����","B����",1200,0.500,4,1},
				{"����","�϶�S��",14000,3.00,5,1},
				{"����","A����",2700,0.75,6,1}
		   };




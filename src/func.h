int MainMenu() //һ���˵��������û�ѡ��ֵ 
{
	int k,m; //����k��m ����k�����ж������Ƿ�ɹ� m�ж������ֵ�Ƿ�Ϸ� 
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ���϶�Xϵͳ��                |\n"); 
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                   ���˵�                    |\n");
		printf("        | ��������������������������������������������|\n"); 
		printf("        |   ��     ��       ��    ��         ��   ��  |\n");
		printf("        |                                             |\n");
		printf("        |       ��    1 - ��ѯ�ʽ�����    ��    ��    |\n");
		printf("        | ��                                          |\n");
		printf("        |       ��    2 - �������̵�      ��        |\n");
		printf("        |                                        ��   |\n");
		printf("        |      ��     3 - ��ѯ�ֿ���״̬            |\n");
		printf("        |  ��                              ��         |\n");
		printf("        |             4 - ������           ��       |\n");
		printf("        |   ��                                  ��    |\n");
		printf("        |         ��  5 - �˳�ϵͳ       ��           |\n");
		printf("        |                                             |\n");
		printf("        |     ��      6 - �����߹���       ��    ��   |\n");
		printf("        |                                             |\n");
		printf("        |   ��       ��     ��      ��       ��     ��|\n");
		printf("        |_____________________________________________|\n");
		printf("        ��ѡ������Ҫ�Ĺ��ܣ�1-6����");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=1 && m<=6 && k==1)
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
			printf("\n�����������1-6֮��ѡ��\n");
		}
	}
	return m; //���������m��ֵ 
}

void CreateSubMenu1(int coin,double Prestige) //�����˵�����ѯ�ʽ���������
{
	int k,m; //����k��m ����k�����ж������Ƿ�ɹ� m�ж������ֵ�Ƿ�Ϸ�
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ���϶�Xϵͳ��                |\n"); 
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                ��ѯ�ʽ�����                 |\n");
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |             1 - ��ѯ�����ʽ�                |\n");
		printf("        |                                             |\n");
		printf("        |               �ʽ�********                |\n");
		printf("        |                                             |\n");
		printf("        |             2 - ��ѯ��������                |\n");
		printf("        |                                             |\n");
		printf("        |               ����: ********                |\n");
		printf("        |                                             |\n");
		printf("        |             3 - ������һ������              |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        ��ѡ������Ҫ�Ĺ��ܣ�1-3����");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=1 && m<=3 && k==1)
		{
			if(m==1)
			{
				system("cls");
				while(1)
				{
				printf("\n         _____________________________________________\n");
				printf("        |                                             |\n");
				printf("        |                ���϶�Xϵͳ��                |\n"); 
				printf("        | ��������������������������������������������|\n"); 
				printf("        |                ��ѯ�ʽ�����                 |\n");
				printf("        | ��������������������������������������������|\n"); 
				printf("        |                                             |\n");
				printf("        |                                             |\n");
				printf("        |             1 - ��ѯ�����ʽ�                |\n");
				printf("        |                                             |\n");
				printf("        |               �ʽ�%-10d              |\n",coin);
				printf("        |                                             |\n");
				printf("        |             2 - ��ѯ��������                |\n");
				printf("        |                                             |\n");
				printf("        |               ����: ********                |\n");
				printf("        |                                             |\n");
				printf("        |             3 - ������һ������              |\n");
				printf("        |                                             |\n");
				printf("        |                                             |\n");
				printf("        |_____________________________________________|\n");
				printf("        �����Ҫ������ѯ����������2��������3�˳�ϵͳ��");
				fflush(stdin);
				k=scanf("%d",&m);
				if(m==2 && k==1)
				{
					system("cls");
					printf("\n         _____________________________________________\n");
					printf("        |                                             |\n");
					printf("        |                ���϶�Xϵͳ��                |\n"); 
					printf("        | ��������������������������������������������|\n"); 
					printf("        |                ��ѯ�ʽ�����                 |\n");
					printf("        | ��������������������������������������������|\n"); 
					printf("        |                                             |\n");
					printf("        |                                             |\n");
					printf("        |             1 - ��ѯ�����ʽ�                |\n");
					printf("        |                                             |\n");
					printf("        |               �ʽ�%-10d              |\n",coin);
					printf("        |                                             |\n");
					printf("        |             2 - ��ѯ��������                |\n");
					printf("        |                                             |\n");
					printf("        |               ����: %-12.2lf            |\n",Prestige);
					printf("        |                                             |\n");
					printf("        |             3 - ������һ������              |\n");
					printf("        |                                             |\n");
					printf("        |                                             |\n");
					printf("        |_____________________________________________|\n");
					printf("        ���س��������������������һ���棺");
					getchar();
					getchar();
					system("cls");
					return;
				}
				else if(m==3 && k==1)
				{
					system("cls");
					return;
				}
				else
				{
					system("cls");
					printf("\n�����������������!\n");
				}
				}
				
			}
			
			if(m==2)
			{
				system("cls");
				while(1)
				{
				printf("\n         _____________________________________________\n");
				printf("        |                                             |\n");
				printf("        |                ���϶�Xϵͳ��                |\n"); 
				printf("        | ��������������������������������������������|\n"); 
				printf("        |                ��ѯ�ʽ�����                 |\n");
				printf("        | ��������������������������������������������|\n"); 
				printf("        |                                             |\n");
				printf("        |                                             |\n");
				printf("        |             1 - ��ѯ�����ʽ�                |\n");
				printf("        |                                             |\n");
				printf("        |               �ʽ�********                |\n");
				printf("        |                                             |\n");
				printf("        |             2 - ��ѯ��������                |\n");
				printf("        |                                             |\n");
				printf("        |               ����: %-12.2lf            |\n",Prestige);
				printf("        |                                             |\n");
				printf("        |             3 - ������һ������              |\n");
				printf("        |                                             |\n");
				printf("        |                                             |\n");
				printf("        |_____________________________________________|\n");
				printf("        �����Ҫ������ѯ�ʽ�������1��������3�˳�ϵͳ��");
				fflush(stdin);
				k=scanf("%d",&m);
				if(m==1 && k==1)
				{
					system("cls");
					printf("\n         _____________________________________________\n");
					printf("        |                                             |\n");
					printf("        |                ���϶�Xϵͳ��                |\n"); 
					printf("        | ��������������������������������������������|\n"); 
					printf("        |                ��ѯ�ʽ�����                 |\n");
					printf("        | ��������������������������������������������|\n"); 
					printf("        |                                             |\n");
					printf("        |                                             |\n");
					printf("        |             1 - ��ѯ�����ʽ�                |\n");
					printf("        |                                             |\n");
					printf("        |               �ʽ�%-10d              |\n",coin);
					printf("        |                                             |\n");
					printf("        |             2 - ��ѯ��������                |\n");
					printf("        |                                             |\n");
					printf("        |               ����: %-12.2lf            |\n",Prestige);
					printf("        |                                             |\n");
					printf("        |             3 - ������һ������              |\n");
					printf("        |                                             |\n");
					printf("        |                                             |\n");
					printf("        |_____________________________________________|\n");
					printf("        ���س��������������������һ���棺");
					getchar();
					getchar();
					system("cls");
					return;
				}
				else if(m==3 && k==1)
				{
					system("cls");
					return;
				}
				else
				{
					system("cls");
					printf("\n�����������������!\n");
				}
			}
			if(m==3 && k==1)
			{
				break;
			}
		}
		}
		if(m==3 && k==1)
		{
			break;
		}
		else
		{
			system("cls");
			printf("\n�����������1-3֮��ѡ��\n");
		}
	}
	system("cls");
}

int CreateSubMenu2(int coin,int Prestige) //�����˵����������̵꣬�����û�ѡ��ֵ
{
	int k,m; //����k��m ����k�����ж������Ƿ�ɹ� m�ж������ֵ�Ƿ�Ϸ� 
	int Price[6]={4000,7500,800,1200,14000,2700};
	int Prestigeflag[6]={1,10,20,50,75,100};
	while(1)
	{
		printf("\n         _____________________________________________________\n");
		printf("        |                                                     |\n");
		printf("        |                    ���϶�Xϵͳ��                    |\n"); 
		printf("        | ����������������������������������������������������|\n"); 
		printf("        |                       ����̵�                      |\n");
		printf("        | ����������������������������������������������������|\n"); 
		printf("        | ��Ʒ��� �������  ��Ʒ��  �۸�  ���о���  �����޶� |\n");
		printf("        |                                                     |\n");
		printf("        |    1       ����    �϶�7�� 4000w   1����      1     |\n");
		printf("        |                                                     |\n");
		printf("        |    2       ����    �϶�8�� 7500w   2����	10    |\n");
		printf("        |                                                     |\n");
		printf("        |    3       ����    C����   800w    0.3����    20    |\n");
		printf("        |                                                     |\n");
		printf("        |    4       ����    B����   1200w   0.5����    50    |\n");
		printf("        |                                                     |\n");
		printf("        |    5       ����    �϶�S�� 14000w  3����	75    |\n");
		printf("        |                                                     |\n");
		printf("        |    6       ����    A����   2700w   0.75����	100   |\n");
		printf("        |_____________________________________________________|\n");
		printf("        ��ѡ�����빺��������Ʒ���,������빺������0:��0-6����");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=0 && m<=6 && k==1)
		{
			if(m==0)
			{
				system("cls");
				return 0;
			}
			else if(coin-Price[m-1]<0 && !(Prestigeflag[m-1]>Prestige)) 
			{
				printf("        �����ʽ��㣬����ʧ�ܣ����س��������������������һ���档");
				getchar();
				getchar();
				m=0; 
				system("cls");
			}
			else if(!(coin-Price[m-1]<0) && Prestigeflag[m-1]>Prestige)
			{
				printf("        �����������㣬����ʧ�ܣ����س���������������˷�����һ���档");
				getchar();
				getchar();
				m=0; 
				system("cls");
			}
			else if(coin-Price[m-1]<0 && Prestigeflag[m-1]>Prestige)
			{
				printf("        �����������ʽ�����㣬����ʧ�ܣ����س��������������������һ���档");
				getchar();
				getchar();
				m=0; 
				system("cls");
			}
			break;
		}
		else
		{
			system("cls");
			printf("\n�����������0-6֮��ѡ��\n");
		}
	}
	return m; //���������m��ֵ 
}
int CountRocketSingle() //���زֿ��ļ������е�֧�������
{
	struct Singlestagerocket RocketTemp;
	FILE *fp;
	int count=0;
	char type[10]="����";
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)                                                              
	{
		return 0;
	}
	else
	{
		while(fread(&RocketTemp,ROCKETLEN,1,fp))
		{
			if(RocketTemp.IsAvailable==1 && strcmp(type,RocketTemp.Rockettype)==0)
			{
				count++;	
			}
		}
		fclose(fp);
		return count;
	}
} 

int CountRocketStar() //���زֿ��ļ������������������
{
	struct Singlestagerocket RocketTemp;
	FILE *fp;
	int count=0;
	char type[10]="����";
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		return 0;
	}
	else
	{
		while(fread(&RocketTemp,ROCKETLEN,1,fp))
		{
			if(RocketTemp.IsAvailable==1 && strcmp(type,RocketTemp.Rockettype)==0)
			{
				count++;	
			}
		}
		fclose(fp);
		return count;
	}
} 

int CountRocket() //���زֿ��ļ��������������ͻ������
{
	struct Singlestagerocket RocketTemp;
	FILE *fp;
	int count=0;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		return 0;
	}
	else
	{
		while(fread(&RocketTemp,ROCKETLEN,1,fp))
		{
			if(RocketTemp.IsAvailable==1)
			{
				count++;	
			}
		}
		fclose(fp);
		return count;
	}
} 
void ShowRocketofwarehouse() //չʾ�ֿ��ļ��������������ͻ�� 
{
	struct Singlestagerocket Myrocket;
	int Rocketnum=CountRocket();
	if(Rocketnum==0)
	{
		printf("�ֿ���û�л������ǰ���̵깺��");
		return;
	}
	FILE *fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("�ļ���ʧ��,��ǰ����̨�鿴�����ļ�Warehouse.bat�Ƿ���ڣ�");
		exit(0);
	}
	printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ���϶�Xϵͳ��                |\n"); 
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                    �ֿ�                     |\n");
		printf("        | ��������������������������������������������|\n"); 
		printf("        |  �������  ��Ʒ��  �۸�  ���о���  ��Ʒ��� |\n");
		printf("        |                                             |\n");
		while(fread(&Myrocket,ROCKETLEN,1,fp))
		{
			if(Myrocket.IsAvailable==1)
			{
				printf("        |    %s    %-8s%-5d  %2.1f����     %-2d    |\n",Myrocket.Rockettype,Myrocket.Tradename,Myrocket.Price,Myrocket.Distance,Myrocket.number);
				printf("        |                                             |\n");
			}
		}
		fclose(fp);
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        ���س��������������������һ���棺");
		getchar();
		getchar();
		system("cls");
}


void Rocketstorage(int i) //д���Ӧ��ŵĻ���������ֿ��ļ�
{
	FILE *fp;
	if((fp=fopen("Warehouse.bat","ab+"))==NULL)
	{
		printf("�ļ���ʧ��,��ǰ����̨�鿴�����ļ�Warehouse.bat�Ƿ���ڣ�");
		exit(0);
	}
	fwrite(&Rocket[i],ROCKETLEN,1,fp);
	fclose(fp);
} 

void Launchsettlement(double *Prestige,int *Capital,double s,int Price) //�������

{
	double Prestige0=*Prestige;
	int sum=Incomeconversion(s,Prestige,Price,Capital);
printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ���϶�Xϵͳ��                |\n"); 
printf("        | ��������������������������������������������|\n"); 
printf("        |                 ���������С���              |\n");
printf("        | ��������������������������������������������|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η��о��룺__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η���Ͷ�룺__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η������棺__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |_____________________________________________|\n");
sleep(1);
system("cls");

printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ���϶�Xϵͳ��                |\n"); 
printf("        | ��������������������������������������������|\n"); 
printf("        |                 ���������С���              |\n");
printf("        | ��������������������������������������������|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η��о��룺%-10.2lf            |\n",s);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η���Ͷ�룺__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η������棺__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |_____________________________________________|\n");
sleep(1);
system("cls");

printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ���϶�Xϵͳ��                |\n"); 
printf("        | ��������������������������������������������|\n"); 
printf("        |                 ���������С���              |\n");
printf("        | ��������������������������������������������|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η��о��룺%-10.2lf            |\n",s);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η���Ͷ�룺%-10d            |\n",Price);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η������棺__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |_____________________________________________|\n");
sleep(1);
system("cls");

printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ���϶�Xϵͳ��                |\n"); 
printf("        | ��������������������������������������������|\n"); 
printf("        |                 ���������С���              |\n");
printf("        | ��������������������������������������������|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η��о��룺%-10.2lf            |\n",s);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η���Ͷ�룺%-10d            |\n",Price);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η������棺%-10d            |\n",sum);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |_____________________________________________|\n");
sleep(1);
system("cls");
printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ���϶�Xϵͳ��                |\n"); 
printf("        | ��������������������������������������������|\n"); 
printf("        |                 ���������С���              |\n");
printf("        | ��������������������������������������������|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η��о��룺%-10.2lf            |\n",s);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η���Ͷ�룺%-10d            |\n",Price);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         ���η������棺%-10d            |\n",sum);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                ����:+%.2lf   |\n",*Prestige-Prestige0);
printf("        |_____________________________________________|\n");
sleep(1);
printf("        ���س��������������������һ����\n");
getchar();
getchar();
system("cls");
}

double Percentagerandomnumber(int down,int up) //�ٷ���������ɺ�����down��upΪ�ٷ�����ʽ�������ޣ�����������ɵİٷ���
{
	double x;
	struct timeb timeSeed;
	ftime(&timeSeed);
	srand(timeSeed.time*1000+timeSeed.millitm); 
	unsigned int crand = rand();
	x=down*0.01+
	(rand()%(up-down))*0.01;
	return x;
}

int Sixdigitrandomnumber() //��λ��������ɺ���������������ɵ���λ�����
{
	int x;
	struct timeb timeSeed;
	ftime(&timeSeed);
	srand(timeSeed.time*1000+timeSeed.millitm); 
	unsigned int crand = rand();
	x=100000+rand()%899999;
	return x;
}

int Incomeconversion(double s,double *Prestige,int Price,int *Capital) //���о���ת�����溯������������ֵ
{
	
	if(s<=1 )
	{
		Price=Price*Percentagerandomnumber(95,105);
		*Prestige+=1;
	}
	else if(s>1  && s<=1.5 )
	{
		Price=Price*Percentagerandomnumber(95,110);
		*Prestige+=2;
	}
	else if(s>1.5  && s<=2 )
	{
		Price=Price*Percentagerandomnumber(90,115);
		*Prestige+=3;
	}
	else if(s>2  && s<=3 )
	{
		Price=Price*Percentagerandomnumber(80,120);
		*Prestige+=4;
	}
	else if(s>3  && s<=3.5 )
	{
		Price=Price*Percentagerandomnumber(70,135);
		*Prestige+=6;
	}
	else if(s>3.5  && s<=4 )
	{
		Price=Price*Percentagerandomnumber(50,155);
		*Prestige+=8;
	}
	else if(s>4)
	{
		Price=Price*Percentagerandomnumber(35,200);
		*Prestige+=10;
	}
	*Capital+=Price;
	return Price;
}

int WarehouseselectionSingle() //�����˵������䵥֧���չʾ�ֿ�״̬���������û�ѡ��ֵ
{
	struct Singlestagerocket Myrocket;
	int number;
	int Rocketnum=CountRocket();
	char type[10]={"����"};
	if(Rocketnum==0)
	{
		return;
	}
	FILE *fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("�ļ���ʧ��,��ǰ����̨�鿴�����ļ�Warehouse.bat�Ƿ���ڣ�");
		exit(0);
	}
	printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ���϶�Xϵͳ��                |\n"); 
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                    �ֿ�                     |\n");
		printf("        | ��������������������������������������������|\n"); 
		printf("        |  �������  ��Ʒ��  �۸�  ���о���  ��Ʒ��� |\n");
		printf("        |                                             |\n");
		while(fread(&Myrocket,ROCKETLEN,1,fp))
		{
		if(Myrocket.IsAvailable==1 && strcmp(Myrocket.Rockettype,type)==0)
			{
				printf("        |    %s    %-8s%-5d  %2.1f����     %-2d    |\n",Myrocket.Rockettype,Myrocket.Tradename,Myrocket.Price,Myrocket.Distance,Myrocket.number);
				printf("        |                                             |\n");
			}
		else
		{
			continue;
		}
		}
		fclose(fp);
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        ��ѡ����Ҫ����Ļ�����,��������0������һ����");
		getchar();
		fflush(stdin);
		scanf("%d",&number);
		return number;
		system("cls");
}

int WarehouseselectioStar(int n[]) //�����˵��������������չʾ�ֿ�״̬���������û�ѡ��ֵ 
{
	struct Singlestagerocket Myrocket;
	int number;
	int Rocketnum=CountRocket();
	char type[10]={"����"};
	int N[7]={-12345,-12345,-12345,-12345,-12345,-12345,-12345};
	if(Rocketnum==0)
	{
		return;
	}
	FILE *fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("�ļ���ʧ��,��ǰ����̨�鿴�����ļ�Warehouse.bat�Ƿ���ڣ�");
		exit(0);
	}
	printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ���϶�Xϵͳ��                |\n"); 
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                    �ֿ�                     |\n");
		printf("        | ��������������������������������������������|\n"); 
		printf("        |  �������  ��Ʒ��  �۸�  ���о���  ��Ʒ��� |\n");
		printf("        |                                             |\n");
		while(fread(&Myrocket,ROCKETLEN,1,fp))
		{
		if(Myrocket.IsAvailable==1 && strcmp(Myrocket.Rockettype,type)==0)
			{
				printf("        |    %s    %-8s%-5d  %2.1f����     %-2d    |\n",Myrocket.Rockettype,Myrocket.Tradename,Myrocket.Price,Myrocket.Distance,Myrocket.number);
				printf("        |                                             |\n");
			}
		else
		{
			continue;
		}
		}
		fclose(fp);
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        ��ѡ��һ�������(2<n<6)��-1����,��������0������һ����");
		getchar();
		int i;
		int flag;
		while(1)
		{
			flag=0;
			for(i=0;N[i-1]!=-1;i++)
			{
				scanf("%d",&N[i]);
				if(IsRocketExistStar(N[i])!=1 && N[i]!=-1)
				{
					flag++;
				}
				
				if(N[i]==0)
				{
					return;
				}
			}
			if( (i-1<2 || i-1>6) || flag!=0 )
			{
				printf("        ����ĸ������Ϸ������ݲ����ڣ�����������:");
				fflush(stdin);
				int ii;
				for(ii=0;ii<7;ii++)
				{
					N[i]=-12345;
				}
			}
			else
			{
				break;
			}
		}
		int j;
		int h=0;
		for(j=0;j<i-1;j++)
		{
		
			n[h]=N[j];
			h++;
		}
		system("cls");
		return h;
		
}

int IsRocketExistSingle (int Rocketnumer) //��ѯָ����ŵĵ�֧������ļ��Ƿ���ڣ������ڷ���1�����򷵻�0 
{
	int IsExist=0;
	char type[10]={"����"};
	FILE* fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("�ļ���ʧ��,��ǰ����̨�鿴�����ļ�Warehouse.bat�Ƿ���ڣ�");
		exit(0);
	}
	struct Singlestagerocket Myrocket;
	while(fread(&Myrocket,ROCKETLEN,1,fp))
	{
		if(Myrocket.number==Rocketnumer && strcmp(Myrocket.Rockettype,type)==0)
		{
			IsExist=1;		
			break;
		}
 	}
 	fclose(fp);
 	return IsExist;
}

int IsRocketExistStar (int Rocketnumer) //��ѯָ����ŵ�����������ļ��Ƿ���ڣ������ڷ���1�����򷵻�0 

{
	int IsExist=0;
	char type[10]={"����"};
	FILE* fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("�ļ���ʧ��,��ǰ����̨�鿴�����ļ�Warehouse.bat�Ƿ���ڣ�");
		exit(0);
	}
	struct Singlestagerocket Myrocket;
	while(fread(&Myrocket,ROCKETLEN,1,fp))
	{
		if(Myrocket.number==Rocketnumer && strcmp(Myrocket.Rockettype,type)==0)
		{
			IsExist=1;		
			break;
		}
 	}
 	fclose(fp);
 	return IsExist;
}

int GetRocketstoragelocation(int number) //��ѯָ����ŵĻ��,�������ŵ�λ��
{
	int count=0;
	FILE *fp;
	struct Singlestagerocket Myrocket;
	if((fp=fopen("Warehouse.bat","rb"))==NULL)
	{
		printf("�ļ���ʧ��,��ǰ����̨�鿴�����ļ�Warehouse.bat�Ƿ���ڣ�");
		exit(0);
	}
	rewind(fp);
	while(fread(&Myrocket,ROCKETLEN,1,fp))
	{
		if(Myrocket.IsAvailable==0)
		{
			count++;
			
			continue;
		}
		if(Myrocket.number==number)
		{
			break;
		}
		
		count++;
 	}
 	fclose(fp);
 	return count;
}

void DelRocket(int n) //ɾ��ָ��λ�õĻ�� 
{
	FILE *fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("�ļ���ʧ��,��ǰ����̨�鿴�����ļ�Warehouse.bat�Ƿ���ڣ�");
		exit(0);
	}
	struct Singlestagerocket Myrocket;
	int RocketPosition=n;
	Myrocket.IsAvailable=0;
	fseek(fp,(long)ROCKETLEN*RocketPosition,SEEK_SET);
	fwrite(&Myrocket,ROCKETLEN,1,fp);
	fclose(fp);
}

int Initializationdetection() //��ʼ����� �����ѳ�ʼ������1�����򷵻�0
{
	struct Companydata Mydata;
	FILE *fp;
	int count=0;
	if((fp=fopen("Basicdata.bat","rb"))==NULL)
	{
		fclose(fp);
		return 0;
	}
	else
	{
		fclose(fp);
		return 1;
	}
} 

void Initializationdata() //��ʼ�����������ļ�
{
	//struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Basicdata.bat","wb+");
	fwrite(&Inidata,DATALEN,1,fp);
	fclose(fp);
}

void Emptywarehouse() //��ʼ���ֿ��ļ�
{
	//struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Warehouse.bat","wb+");
	fclose(fp);
}

void Savebasicdata(int Capital,double Prestige,int Animation) //���浱ǰ�������������������ļ�
{
	struct Companydata Mydata;
	FILE *fp;
	//Mydata.flag=1;
	Mydata.Capital=Capital;
	Mydata.Prestige=Prestige;
	Mydata.Animation=Animation;
	fp=fopen("Basicdata.bat","wb+");
	fwrite(&Mydata,DATALEN,1,fp);
	fclose(fp);
}

int FindCapital() //���ػ��������ļ����ʽ�ֵ 
{
	struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Basicdata.bat","rb+");
	fread(&Mydata,ROCKETLEN,1,fp);
	return Mydata.Capital;
}

int FindPrestige() //���ػ��������ļ�������ֵ 
{
	struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Basicdata.bat","rb+");
	fread(&Mydata,ROCKETLEN,1,fp);
	return Mydata.Prestige;
}

int FindAnimation() //���ػ��������ļ��Ķ�������ֵ����������1�����򷵻�0
{
	struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Basicdata.bat","rb+");
	fread(&Mydata,DATALEN,1,fp);
	return Mydata.Animation;
}

int InsMenu() //�����˵������ò˵��������û�ѡ��ֵ 
{
	int k,m; //����k��m ����k�����ж������Ƿ�ɹ� m�ж������ֵ�Ƿ�Ϸ� 
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ���϶�Xϵͳ��                |\n"); 
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                 �����߹���                  |\n");
		printf("        | ��������������������������������������������|\n"); 
		printf("        |   ��     ��       ��    ��         ��   ��  |\n");
		printf("        |                                             |\n");
		printf("        |       ��    1 - �޸Ļ�������    ��    ��    |\n");
		printf("        | ��                                          |\n");
		printf("        |       ��    2 - ��ղֿ�����      ��        |\n");
		printf("        |                                             |\n");
		printf("        |      ��     3 - ȫ����ʼ��                  |\n");
		printf("        |                                             |\n");
		printf("        |             4 - ��������           ��       |\n");
		printf("        |                                             |\n");
		printf("        |         ��  5 - �����ڴ�       ��           |\n");
		printf("        |                                             |\n");
		printf("        |     ��      0 - ������һ������     ��       |\n");
		printf("        |                                             |\n");
		printf("        |   ��       ��     ��      ��       ��     ��|\n");
		printf("        |_____________________________________________|\n");
		printf("        ��ѡ������Ҫ�Ĺ��ܣ�0-4����");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=0 && m<=4 && k==1)
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
			printf("\n�����������1-4֮��ѡ��\n");
		}
	}
	return m; //���������m��ֵ 
}

int LaunchCSnMenu() //�����˵����������ѡ��˵��������û�ѡ��ֵ
{
	int k,m; //����k��m ����k�����ж������Ƿ�ɹ� m�ж������ֵ�Ƿ�Ϸ� 
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ���϶�Xϵͳ��                |\n"); 
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                   ��  ��                    |\n");
		printf("        | ��������������������������������������������|\n"); 
		printf("        |   ��     ��       ��    ��         ��   ��  |\n");
		printf("        |                                             |\n");
		printf("        |       ��    1 - ���䵥֧���    ��    ��    |\n");
		printf("        | ��                                          |\n");
		printf("        |       ��                          ��        |\n");
		printf("        |                                             |\n");
		printf("        |      ��     2 - �����������                |\n");
		printf("        |                                             |\n");
		printf("        |                                    ��       |\n");
		printf("        |                                             |\n");
		printf("        |         ��  0 - ������һ������        ��    |\n");
		printf("        |                                             |\n");
		printf("        |     ��                             ��       |\n");
		printf("        |                                             |\n");
		printf("        |   ��       ��     ��      ��       ��     ��|\n");
		printf("        |_____________________________________________|\n");
		printf("        ��ѡ������Ҫ�Ĺ��ܣ�0-2����");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=0 && m<=2 && k==1)
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
			printf("\n�����������0-2֮��ѡ��\n");
		}
	}
	return m; //���������m��ֵ 
}

void ReviseCandP(int *Capital,double *Prestige) //�Զ����޸Ļ��������ļ����ʽ������
{
	int k,m; //����k��m ����k�����ж������Ƿ�ɹ� m�ж������ֵ�Ƿ�Ϸ� 
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ���϶�Xϵͳ��                |\n"); 
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                �޸��ʽ�����                 |\n");
		printf("        | ��������������������������������������������|\n"); 
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |             1 - �޸��ʽ�                    |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |             2 - �޸�����                    |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |             3 - ������һ������              |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        ��ѡ������Ҫ�Ĺ��ܣ�1-3����");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=1 && m<=3 && k==1)
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
			printf("\n�����������1-3֮��ѡ��\n");
		}
	}	
	
	if(m==1)
	{
		int C;
		while(1)
		{
			printf("        ����������ĵ��ʽ���(0<�ʽ���<999999999)��");
			fflush(stdin);
			int k=scanf("%d",&C);
			if(C<=0 || k!=1 || C>=999999999)
			{
				system("cls");
				printf("        �����������������һ�Σ�\n");
			}
			else
			{
				printf("        �޸ĳɹ��������ԭ����%dw�����%dw\n",*Capital,C);
				printf("        ���س�����������������ز˵�");
				getchar();
				getchar();
				system("cls");
				break;
			}
		}
		*Capital=C;
	}
	else if(m==2)
	{
		double P;
		while(1)
		{
			printf("        ����������ĵ�����(1<=������<999999999)��");
			fflush(stdin);
			int k=scanf("%lf",&P);
			if(P<1 || k!=1 || P>=999999999)
			{
				system("cls");
				printf("        �����������������һ�Σ�\n");
			}
			else
			{
				printf("        �޸ĳɹ���������ԭ����%.2lf�����%.2lf\n",*Prestige,P);
				printf("        ���س�����������������ز˵�");
				getchar();
				getchar();
				system("cls");
				break;
			}
		}
		*Prestige=P;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#include "head.h"
#include "func.h"
#include "Animation.h"
int main (void)
{
	int r;
	struct Companydata Cydata;
	if(Initializationdetection()==0)
	{
		Initializeanimation();
		Initializationdata();
		Emptywarehouse();
	}
	Cydata.Capital=FindCapital();
	Cydata.Prestige=FindPrestige();
	Cydata.Animation=FindAnimation();
	while(1)
	{
		int k=MainMenu();
		if(k==1)
		{
			CreateSubMenu1(Cydata.Capital,Cydata.Prestige);
		}
		else if(k==2) 
		{
			r=CreateSubMenu2(Cydata.Capital,Cydata.Prestige);
			if(r>=1 && r<=6)
			{
				printf("        ����ɹ������س��������������������һ���档");
				getchar();
				getchar();
				system("cls");				
				Rocketstorage(r-1);
				Cydata.Capital-=Rocket[r-1].Price;	
				Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
			}
		}
		else if(k==3) 
		{
			ShowRocketofwarehouse();
		}
		else if(k==4)
		{
			int v=LaunchCSnMenu();
			int f=0;
			
			if(v==1)
			{
				while(1)
				{
					if(CountRocketSingle()==0)
					{

						system("cls");
						printf("�ֿ���û�е�֧�������ǰ���̵깺�򣡰�������˳�");
						getchar();
						getchar();
						system("cls");
						break;
					}	
					f=WarehouseselectionSingle();
				
					if(IsRocketExistSingle(f)==1 || f==0 )
					{
						break;
					}
					else
					{
						system("cls");
						printf("�������Ʒ��Ų�����,����������:");
					}
				}
				if(f==0)
				{
					system("cls");
					continue;
				}
				int t=GetRocketstoragelocation(f);
				Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
				DelRocket(t);
				system("cls");
				Rocketanimation(Cydata.Animation);
				Launchsettlement(&Cydata.Prestige,&Cydata.Capital,Rocket[f-1].Distance,Rocket[f-1].Price);	
				Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
			}
			else if(v==2)
			{
				int NN[6]={0};
				while(1)
				{
					if(CountRocketStar()==0)
					{

						system("cls");
						printf("�ֿ���û�������������ǰ���̵깺�򣡰�������˳�");
						getchar();
						getchar();
						system("cls");
						break;
					}	
					double RocketDistance=0;
					int RocketPrice=0;
					int k=WarehouseselectioStar(NN);
					int j;
					if(NN[0]==0)
					{
						system("cls");
						break;
					}
					for(j=0;j<k;j++)
					{
						RocketDistance+=Rocket[NN[j]-1].Distance;
						RocketPrice+=Rocket[NN[j]-1].Price;
						DelRocket(GetRocketstoragelocation(NN[j]));
					}
					system("cls");
					Rocketanimation(Cydata.Animation);
					Launchsettlement(&Cydata.Prestige,&Cydata.Capital,RocketDistance,RocketPrice);	
					Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
					system("cls");
					break;
				}
			}
			else if(v==0)
			{
				system("cls");
				continue;
			}
			
		
		}
		else if(k==5)
		{
			Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
			system("cls");
			break;
		}
		else if(k==6)
		{
			while(1)
			{
				int w=InsMenu();
				if(w==0)
				{
					break;
				}
				else if(w==1)
				{
					ReviseCandP(&Cydata.Capital,&Cydata.Prestige);	
				}
				else if(w==2)
				{
					int a;
					system("cls");
					printf("        ��ȷ��Ҫ��ղֿ�������1��ȷ������������������������������һ��:");
					scanf("%d",&a);
					if(a==1)
					{
						Emptywarehouse();
						printf("        ��ղֿ�ɹ���\n");
						printf("        ���س�����������������ز˵�");
						getchar();
						getchar();
						system("cls");
					}
					else
					{
						printf("        ȡ���ɹ���");
						printf("        ���س�����������������ز˵�");
						getchar();
						getchar();
						system("cls");
					}
					
				}
				else if(w==3)
				{
					int a;
					int VerificationCode=Sixdigitrandomnumber();
					system("cls");
					printf("                             ��֤��:%-6d\n",VerificationCode);
					printf("        ��ȷ��Ҫ��ʼ������������������֤����ȷ������������������������������һ��:");
					scanf("%d",&a);
					if(a==VerificationCode)
					{
						InitializeanimationAgain();
						Initializationdata();
						Emptywarehouse();
						printf("        ��ʼ���ɹ���\n");
						printf("        ���س�����������������ز˵�");
						Cydata.Capital=FindCapital();
						Cydata.Prestige=FindPrestige();
						Cydata.Animation=FindAnimation();
						getchar();
						getchar();
						system("cls");
						break;
					}
					else
					{
							printf("        ȡ���ɹ���\n");
							printf("        ���س�����������������ز˵�");
							getchar();
							getchar();
							system("cls");
					}
				}
				else if(w==4)
				{
					int a;
					system("cls");
					if(Cydata.Animation==1)
					{
						printf("        �������ص�״̬Ŀǰ�ǿ��������Ҫ�رն���������0���������������������һ��:");
						scanf("%d",&a);
						if(a==0)
						{
							
							Cydata.Animation=0;
							Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
							printf("        �رն����ɹ���\n");
							printf("        ���س�����������������ز˵�");
							getchar();
							getchar();
							system("cls");
						}
						else
						{
							printf("        ȡ���ɹ���\n");
							printf("        ���س�����������������ز˵�");
							getchar();
							getchar();
							system("cls");
						}
					}
					else
					{
						printf("        �������ص�״̬Ŀǰ�ǹأ������Ҫ�򿪶���������1���������������������һ��:");
						scanf("%d",&a);
						if(a==1)
						{
							
							Cydata.Animation=1;
							Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
							printf("        �򿪶����ɹ���\n");
							printf("        ���س�����������������ز˵�");
							getchar();
							getchar();
							system("cls");
						}
						else
						{
							printf("        ȡ���ɹ���\n");
							printf("        ���س�����������������ز˵�");
							getchar();
							getchar();
							system("cls");
						}
					}
					
				}
				else if(w==5)
				{
				
				}
			}
			
		}
	} 
	Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
	return 0;
	
}

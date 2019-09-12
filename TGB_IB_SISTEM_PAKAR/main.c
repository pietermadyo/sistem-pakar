#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"windows.h"

void main()
{
	typedef char string[15];
	int jumlah_roda;
	string jenis,jenis2,bbm,bbm2,bbm3,bbm4;
	
	system("cls");
	printf("\n ----==== SISTEM PAKAR ====----");
	printf("\n --Menentukan Jenis Kendaraan--");
	printf("\n ------------------------------");

	do
	{	
		printf("\n ==> Masukkan Jumlah roda kendaraan anda: ");scanf("%d",&jumlah_roda);
		if(jumlah_roda!=2 && jumlah_roda!=4)
		{
			printf("\n Roda kendaraan hanya 2 dan 4!");
		}
		
	}while(jumlah_roda!=2 && jumlah_roda!=4);

	if(jumlah_roda==2)
	{
		do
		{
			printf("\n ==> Dilandasan seperti apa kendaraan anda digunakan:  ");fflush(stdin);gets(jenis);
			if((strcmpi(jenis,"bertanah")!=0 && strcmpi(jenis,"aspal")!=0))
			{
				printf("\n Landasan kendaraan hanya Bertanah dan Aspal!");
			}
		}while((strcmpi(jenis,"bertanah")!=0 && strcmpi(jenis,"aspal")!=0));

		if(strcmpi(jenis,"bertanah")==0)
		{	
			do
			{
				printf("\n ==> Masukkan jenis bahan bakar kendaraan: ");fflush(stdin);gets(bbm);
				if(strcmpi(bbm,"bensol")!=0 && strcmpi(bbm,"premium")!=0)
				{
					printf("\n Bahan bakar hanya Bensol dan Premium!");
				}
			}while(strcmpi(bbm,"bensol")!=0 && strcmpi(bbm,"premium")!=0);

			if(strcmpi(bbm,"bensol")==0)
			{
				printf("\n ==> Kendaraan anda adalah: Motor Cross Special Engine");
			}else if(strcmpi(bbm,"premium")==0)
			{
				printf("\n kendaraan anda adalah: Motor Trial Standar");
			}

		}

		if(strcmpi(jenis,"aspal")==0)
		{
			do
			{
				printf("\n ==> Masukkan jenis bahan bakar kendaraan: ");fflush(stdin);gets(bbm2);
				if(strcmpi(bbm2,"bensol")!=0 && strcmpi(bbm2,"premium")!=0)
				{
					printf("\n Bahan bakar hanya Bensol dan Premium!");
				}
			}while(strcmpi(bbm2,"bensol")!=0 && strcmpi(bbm2,"premium")!=0);

			if(strcmpi(bbm2,"bensol")==0)
			{
				printf("\n ==> Kendaraan anda adalah: Motor Sport");
			}else if(strcmpi(bbm2,"premium")==0)
			{
				printf("\n kendaraan anda adalah: Motor Bebek atau Standar");
			}
		}
	}

	 if(jumlah_roda==4)
	{
		do
		{
			printf("\n ==> Dilandasan seperti apa kendaraan anda digunakan:  ");fflush(stdin);gets(jenis2);
			if((strcmpi(jenis2,"bertanah")!=0 && strcmpi(jenis2,"aspal")!=0))
			{
				printf("\n Landasan kendaraan hanya Bertanah dan Aspal!");
			}
		}while((strcmpi(jenis2,"bertanah")!=0 && strcmpi(jenis2,"aspal")!=0));

	    if(strcmpi(jenis2,"bertanah")==0)
		{
			do
			{
				printf("\n ==> Masukkan Jenis Bahan Bakar: ");fflush(stdin);gets(bbm3);
				if(strcmpi(bbm3,"bensol")!=0 && strcmpi(bbm3,"premium")!=0)
				{
					printf("\n Jenis bahan bakar hanya Bensol dan premium");
				}
			}while(strcmpi(bbm3,"bensol")!=0 && strcmpi(bbm3,"premium")!=0);

			if(strcmpi(bbm3,"bensol")==0)
			{
				printf("\n ==> Kendaraan anda adalah: Mobil Offroad ");
			}else if(strcmpi(bbm3,"premium")==0)
			{
				printf("\n kendaraan anda adalah:Mobil Rally ");
			}

		}

		else if(strcmpi(jenis2,"aspal")==0)
		{
			do
			{
				printf("\n ==> Masukkan Jenis Bahan Bakar: ");fflush(stdin);gets(bbm4);
				if(strcmpi(bbm4,"bensol")!=0 && strcmpi(bbm4,"premium")!=0)
				{
					printf("\n Jenis bahan bakar hanya Bensol dan premium");
				}
			}while(strcmpi(bbm4,"bensol")!=0 && strcmpi(bbm4,"premium")!=0);

			if(strcmpi(bbm4,"bensol")==0)
			{
				printf("\n ==> Kendaraan anda adalah: Mobil Sport");
			}else if(strcmpi(bbm4,"premium")==0)
			{
				printf("\n kendaraan anda adalah: City Car");
			}

		}
	}
	printf("\n Terima Kasih :D");
	
	getch();
	
}
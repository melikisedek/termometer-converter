#include <stdio.h>

int main()
{
	int lang;
	printf("Choose language\nDil secin\nFor ENG :1\nFor TR  :2 \n");
	scanf("%d",&lang);
	
	if(lang==2)
	{
		float cins,deger;
	printf("Celcius icin    : 1\nFahrenheit icin : 2\nKelvin icin     : 3\nReomur icin     : 4 \n");
	scanf("%f",&cins);
	printf("Lutfen deger giriniz : ");
	scanf("%f",&deger);
	
	if(cins==1)
	{
		printf("\n%.0f C =  %.0f F =  %.0f K =  %.0f R",deger, deger*1.8+32, deger+273, deger*0.8);
	}
	
	if(cins==2)
	{
		printf("%.0f C =  %.0f F =  %.0f K =  %.0f R",(deger-32)/1.8, deger, (deger-32)/1.8+273,((deger-32)/1.8)*0.8 );
	}
	
	if(cins==3)
	{
		printf("%.0f C =  %.0f F =  %.0f K =  %.0f R",deger-273, (deger-273)*1.8+32, deger, (deger-273)*0.8);
	}
	
	if(cins==4)
	{
		printf("%.0f C =  %.0f F =  %.0f K =  %.0f R",deger*10/8, (deger*10/8)*1.8+32, (deger*10/8)+273, deger);
	}
	
	}
	
	if(lang==1)
	{
		float cins,deger;
	printf("For Celcius     : 1\nFor Fahrenheit  : 2\nFor Kelvin      : 3\nFor Reomur      : 4 \n");
	scanf("%f",&cins);
	printf("Enter value, please : ");
	scanf("%f",&deger);
	
	if(cins==1)
	{
		printf("\n%.0f C =  %.0f F =  %.0f K =  %.0f R",deger, deger*1.8+32, deger+273, deger*0.8);
	}
	
	if(cins==2)
	{
		printf("%.0f C =  %.0f F =  %.0f K =  %.0f R",(deger-32)/1.8, deger, (deger-32)/1.8+273,((deger-32)/1.8)*0.8 );
	}
	
	if(cins==3)
	{
		printf("%.0f C =  %.0f F =  %.0f K =  %.0f R",deger-273, (deger-273)*1.8+32, deger, (deger-273)*0.8);
	}
	
	if(cins==4)
	{
		printf("%.0f C =  %.0f F =  %.0f K =  %.0f R",deger*10/8, (deger*10/8)*1.8+32, (deger*10/8)+273, deger);
	}
	
	}
	
	
	
	
} 

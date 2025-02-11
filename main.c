/*Cafeteria Management system*/
#include <stdio.h>
int main()
{
	int a=15,b=12,c=30,d=30,e=30,f=10,g=10,h=60,i=50,j=40,k=35,l=25,m=35,n=45,o=50,p=25,q=25,r=25,s=25,t=25;
	int sum=0;
	int num1=0,num2=0,num3=0,num4=0,num5=0;
   // int n1=1,n2=2,n3=3,n4=4,n5=5,n6=6,n7=7,n8=8,n9=9,n10=10,n11=11,n12=12,n13=13,n14=14,n15=15,n16=16,n17=17,n18=18;
	//int n19=19,n20=20;
	printf("        	Welcome To Epic Cafeteria.");
	printf("                  	\n                    	MENU");
	printf("\n1.Vada Paav.......................................%d/-",a);
	printf("\n2.Samosa..........................................%d/-",b);
	printf("\n3.Misal Paav......................................%d/-",c);
	printf("\n4.Vada Sambar.....................................%d/-",d);
	printf("\n5.Idli Sambar.....................................%d/-",e);
	printf("\n6.Tea.............................................%d/-",f);
	printf("\n7.Coffee..........................................%d/-",g);
	printf("\n8.Chicken Shawarma.................................%d/-",h);
	printf("\n9.Paneer Shawarma..................................%d/-",i);
	printf("\n10.Pav Bhaji.....................................%d/-",j);
	printf("\n11.Cheese Frankie.................................%d/-",k);
	printf("\n12.Masala Dosa....................................%d/-",l);
	printf("\n13.Sada Dosa......................................%d/-",m);
	printf("\n14.Veg Sandwich...................................%d/-",n);
	printf("\n15.Veg Cheese Sandwich............................%d/-",o);
	printf("\n16.Egg Sandwich...................................%d/-",p);
	printf("\n17.Apple Juice....................................%d/-",q);
	printf("\n18.Orange Juice...................................%d/-",r);
	printf("\n19.Pineapple Juice................................%d/-",s);
	printf("\n20.Mosambi Juice..................................%d/-",t);
    
	int or1,or2,or3,or4,or5;
	printf("\nNOTE:YOU CAN ONLY ORDER UPTO 5 ITEMS AT A TIME.");
	printf("\nOrder no1:");
	scanf("%d",&or1);
    printf("Order no2:");
    scanf("%d",&or2);
    printf("Order no3:");
    scanf("%d",&or3);
    printf("Order no4:");
    scanf("%d",&or4);
    printf("Order no5:");
    scanf("%d",&or5);
    
	if(or1==1)
	{
	printf("Your order is 1).Vada Paav.          	%d/-",a);
	num1=a;
	}
   else if(or1==2)
	{
	printf("\nYour order is 2).Samosa.             	%d/-",b);
	num1=b;
	}
	else if(or1==3)
	{
	printf("\nYour order is 3).Misal Paav.         	%d/-",c);
	num1=c;
	}
	else if(or1==4)
	{
	printf("\nYour order is 4).Vada Sambar.        	%d/-",d);
	num1=d;
	}
	else if(or1==5)
	{
	printf("\nYour order is 5).Idli Sambar.        	%d/-",e);
    num1=e;
	}
	else if(or1==6)
	{
	printf("\nYour order is 6).tea.                	%d/-",f);
    num1=f;
	}
	else if(or1==7)
	{
	printf("\nYour order is 7).Coffee.             	%d/-",g);
	num1=g;
	}
	else if(or1==8)
	{
	printf("\nYour order is 8).Chicken Shawarma.    	%d/-",h);
	num1=h;
	}
	else if(or1==9)
	{
	printf("\nYour order is 9).Paneer Shawarma.     	%d/-",i);
	num1=i;
	}
	else if(or1==10)
	{
	printf("\nYour order is 10).Pav Bhaji.        	%d/-",j);
	num1=j;
	}
	else if(or1==11)
	{
	printf("\nYour order is 11).Cheese Frankie.    	%d/-",k);
	num1=k;
	}
	else if(or1==12)
	{
	printf("\nYour order is 12).Masala Dosa.       	%d/-",l);
	num1=l;
	}
	else if(or1==13)
	{
	printf("\nYour order is 13).Sada Dosa.         	%d/-",m);
	num1=m;
	}
	else if(or1==14)
	{
	printf("\nYour order is 14).Veg Sandwich.      	%d/-",n);
	num1=n;
	}
	else if(or1==15)
	{
	printf("\nYour order is 15).Veg Cheese Sandwich.   %d/-",o);
	num1=o;
	}
	else if(or1==16)
	{
	printf("\nYour order is 16).Egg Sandwich.      	%d/-",p);
	num1=p;
	}
	else if(or1==17)
	{
	printf("\nYour order is 17).Apple Juice.       	%d/-",q);
	num1=q;
	}
	else if(or1==18)
	{
	printf("\nYour order is 18).Orange Juice.      	%d/-",r);
	num1=r;
	}
	else if(or1==19)
	{
	printf("\nYour order is 19).Pineapple Juice.   	%d/-",s);
	num1=s;
	}
	else if(or1==20)
	{
	printf("\nYour order is 20).Mosambi Juice.     	%d/-",t);
	num1=t;
	}
	else
	{
	printf("\nInvalid Order.");
	}
	
	
	//order number 2
	
    	if(or2==1)
	{
	printf("\nYour order is 1).Vada Paav.          	%d/-",a);
	num2=a;
	}
   else if(or2==2)
	{
	printf("\nYour order is 2).Samosa.             	%d/-",b);
	num2=b;
	}
	else if(or2==3)
	{
	printf("\nYour order is 3).Misal Paav.         	%d/-",c);
	num2=c;
	}
	else if(or2==4)
	{
	printf("\nYour order is 4).Vada Sambar.        	%d/-",d);
	num2=d;
	}
	else if(or2==5)
	{
	printf("\nYour order is 5).Idli Sambar.        	%d/-",e);
	num2=e;
    }
	else if(or2==6)
	{
	printf("\nYour order is 6).tea.                	%d/-",f);
	num2=f;
	}
	else if(or2==7)
	{
	printf("\nYour order is 7).Coffee.             	%d/-",g);
	num2=g;
	}
	else if(or2==8)
	{
	printf("\nYour order is 8).Chicken Shawarma.    	%d/-",h);
	num2=h;
	}
	else if(or2==9)
	{
	printf("\nYour order is 9).Paneer Shawarma.     	%d/-",i);
	num2=i;
	}
	else if(or2==10)
	{
	printf("\nYour order is 10).Pav Bhaji.        	%d/-",j);
	num2=j;
	}
	else if(or2==11)
	{
	printf("\nYour order is 11).Cheese Frankie.    	%d/-",k);
	num2=k;
	}
	else if(or2==12)
	{
	printf("\nYour order is 12).Masala Dosa.       	%d/-",l);
	num2=l;
	}
	else if(or2==13)
	{
	printf("\nYour order is 13).Sada Dosa.         	%d/-",m);
	num2=m;
	}
	else if(or2==14)
	{
	printf("\nYour order is 14).Veg Sandwich.      	%d/-",n);
	num2=n;
	}
	else if(or2==15)
	{
	printf("\nYour order is 15).Veg Cheese Sandwich.   %d/-",o);
	num2=o;
	}
	else if(or2==16)
	{
	printf("\nYour order is 16).Egg Sandwich.      	%d/-",p);
	num2=p;
	}
	else if(or2==17)
	{
	printf("\nYour order is 17).Apple Juice.       	%d/-",q);
	num2=q;
	}
	else if(or2==18)
	{
	printf("\nYour order is 18).Orange Juice.      	%d/-",r);
	num2=r;
	}
	else if(or2==19)
	{
	printf("\nYour order is 19).Pineapple Juice.   	%d/-",s);
	num2=s;
	}
	else if(or2==20)
	{
	printf("\nYour order is 20).Mosambi Juice.     	%d/-",t);
	num2=t;
	}
	else
	{
	printf("\nInvalid Order.");
	}
	
	//order number 3 
	
	
    	if(or3==1)
	{
	printf("\nYour order is 1).Vada Paav.          	%d/-",a);
	num3=a;
	}
    else if(or3==2)
	{
	printf("\nYour order is 2).Samosa.             	%d/-",b);
	num3=b;
	}
	else if(or3==3)
	{
	printf("\nYour order is 3).Misal Paav.         	%d/-",c);
	num3=c;
	}
	else if(or3==4)
	{
	printf("\nYour order is 4).Vada Sambar.        	%d/-",d);
	num3=d;
	}
	else if(or3==5)
	{
	printf("\nYour order is 5).Idli Sambar.        	%d/-",e);
	num4=e;
    }
	else if(or3==6)
	{
	printf("\nYour order is 6).tea.                	%d/-",f);
	num5=f;
	}
	else if(or3==7)
	{
	printf("\nYour order is 7).Coffee.             	%d/-",g);
	num3=g;
	}
	else if(or3==8)
	{
	printf("\nYour order is 8).Chicken Shawarma.    	%d/-",h);
	num3=h;
	}
	else if(or3==9)
	{
	printf("\nYour order is 9).Paneer Shawarma.     	%d/-",i);
	num3=i;
	}
	else if(or3==10)
	{
	printf("\nYour order is 10).Pav Bhaji.        	%d/-",j);
	num3=j;
	}
	else if(or3==11)
	{
	printf("\nYour order is 11).Cheese Frankie.    	%d/-",k);
	num3=k;
	}
	else if(or3==12)
	{
	printf("\nYour order is 12).Masala Dosa.       	%d/-",l);
	num3=l;
	}
	else if(or3==13)
	{
	printf("\nYour order is 13).Sada Dosa.         	%d/-",m);
	num3=m;
	}
	else if(or3==14)
	{
	printf("\nYour order is 14).Veg Sandwich.      	%d/-",n);
	num3=n;
	}
	else if(or3==15)
	{
	printf("\nYour order is 15).Veg Cheese Sandwich.   %d/-",o);
	num3=o;
	}
	else if(or3==16)
	{
	printf("\nYour order is 16).Egg Sandwich.      	%d/-",p);
	num3=p;
	}
	else if(or3==17)
	{
	printf("\nYour order is 17).Apple Juice.       	%d/-",q);
	num3=q;
	}
	else if(or3==18)
	{
	printf("\nYour order is 18).Orange Juice.      	%d/-",r);
	num3=r;
	}
	else if(or3==19)
	{
	printf("\nYour order is 19).Pineapple Juice.   	%d/-",s);
	num3=s;
	}
	else if(or3==20)
	{
	printf("\nYour order is 20).Mosambi Juice.     	%d/-",t);
	num3=t;
	}
	else
	{
	printf("\nInvalid Order.");
	}
    	if(or4==1)
	{
	printf("\nYour order is 1).Vada Paav.          	%d/-",a);
	num4=a;
	}
   else if(or4==2)
	{
	printf("\nYour order is 2).Samosa.             	%d/-",b);
	num4=b;
	}
	else if(or4==3)
	{
	printf("\nYour order is 3).Misal Paav.         	%d/-",c);
	num4=c;
	}
	else if(or4==4)
	{
	printf("\nYour order is 4).Vada Sambar.        	%d/-",d);
	num4=d;
	}
	else if(or4==5)
	{
	printf("\nYour order is 5).Idli Sambar.        	%d/-",e);
	num4=e;
    }
	else if(or4==6)
	{
	printf("\nYour order is 6).tea.                	%d/-",f);
	num4=f;
	}
	else if(or4==7)
	{
	printf("\nYour order is 7).Coffee.             	%d/-",g);
	num4=g;
	}
	else if(or4==8)
	{
	printf("\nYour order is 8).Chicken Shawarma.    	%d/-",h);
	num4=h;
	}
	else if(or4==9)
	{
	printf("\nYour order is 9).Paneer Shawarma.     	%d/-",i);
	num4=i;
	}
	else if(or4==10)
	{
	printf("\nYour order is 10).Pav Bhaji.        	%d/-",j);
	num4=j;
	}
	else if(or4==11)
	{
	printf("\nYour order is 11).Cheese Frankie.    	%d/-",k);
	num4=k;
	}
	else if(or4==12)
	{
	printf("\nYour order is 12).Masala Dosa.       	%d/-",l);
	num4=l;
	}
	else if(or4==13)
	{
	printf("\nYour order is 13).Sada Dosa.         	%d/-",m);
	num4=m;
	}
	else if(or4==14)
	{
	printf("\nYour order is 14).Veg Sandwich.      	%d/-",n);
	num4=n;
	}
	else if(or4==15)
	{
	printf("\nYour order is 15).Veg Cheese Sandwich.   %d/-",o);
	num4=o;
	}
	else if(or4==16)
	{
	printf("\nYour order is 16).Egg Sandwich.      	%d/-",p);
	num4=p;
	}
	else if(or4==17)
	{
	printf("\nYour order is 17).Apple Juice.       	%d/-",q);
	num4=q;
	}
	else if(or4==18)
	{
	printf("\nYour order is 18).Orange Juice.      	%d/-",r);
	num4=r;
	}
	else if(or4==19)
	{
	printf("\nYour order is 19).Pineapple Juice.   	%d/-",s);
	num4=s;
	}
	else if(or4==20)
	{
	printf("\nYour order is 20).Mosambi Juice.     	%d/-",t);
	num4=t;
	}
	else
	{
	printf("\nInvalid Order.");
	}
   	 if(or5==1)
	{
	printf("\nYour order is 1).Vada Paav.          	%d/-",a);
	num5=a;
	}
            else if(or5==2)
	{
	printf("\nYour order is 2).Samosa.             	%d/-",b);
	num5=b;
	}
	else if(or5==3)
	{
	printf("\nYour order is 3).Misal Paav.         	%d/-",c);
	num5=c;
	}
	else if(or5==4)
	{
	printf("\nYour order is 4).Vada Sambar.        	%d/-",d);
	num5=d;
	}
	else if(or5==5)
	{
	printf("\nYour order is 5).Idli Sambar.        	%d/-",e);
	num5=e;
    }
	else if(or5==6)
	{
	printf("\nYour order is 6).tea.                	%d/-",f);
	num5=f;
	}
	else if(or5==7)
	{
	printf("\nYour order is 7).Coffee.             	%d/-",g);
	num5=g;
	}
	else if(or5==8)
	{
	printf("\nYour order is 8).Chicken Shawarma.    	%d/-",h);
	num5=h;
	}
	else if(or5==9)
	{
	printf("\nYour order is 9).Paneer Shawarma.     	%d/-",i);
	num5=i;
	}
	else if(or5==10)
	{
	printf("\nYour order is 10).Pav Bhaji.        	%d/-",j);
	num5=j;
	}
	else if(or5==11)
	{
	printf("\nYour order is 11).Cheese Frankie.    	%d/-",k);
	num5=k;
	}
	else if(or5==12)
	{
	printf("\nYour order is 12).Masala Dosa.       	%d/-",l);
	num5=l;
	}
	else if(or5==13)
	{
	printf("\nYour order is 13).Sada Dosa.         	%d/-",m);
	num5=m;
	}
	else if(or5==14)
	{
	printf("\nYour order is 14).Veg Sandwich.      	%d/-",n);
	num5=n;
	}
	else if(or5==15)
	{
	printf("\nYour order is 15).Veg Cheese Sandwich.   %d/-",o);
	num5=o;
	}
	else if(or5==16)
	{
	printf("\nYour order is 16).Egg Sandwich.      	%d/-",p);
	num5=p;
	}
	else if(or5==17)
	{
	printf("\nYour order is 17).Apple Juice.       	%d/-",q);
	num5=q;
	}
	else if(or5==18)
	{
	printf("\nYour order is 18).Orange Juice.      	%d/-",r);
	num5=r;
	}
	else if(or5==19)
	{
	printf("\nYour order is 19).Pineapple Juice.   	%d/-",s);
	num5=s;
	}
	else if(or5==20)
	{
	printf("\nYour order is 20).Mosambi Juice.     	%d/-",t);
	num5=t;
	}
	else
	{
	printf("\nInvalid Order.");
	}
	sum=num1+num2+num3+num4+num5;
	printf("\n\n\n\nYour Total Bill is:₹%d",sum);
	printf("\n\n\nThank You For Ordering From Epic Cafeteria.");
	return 0;
}

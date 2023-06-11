#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
bool netmask_check(int ,int ,int ,int );
int main(int argc, char *argv[])
{
	int arr[4],i=0;
	int a,b,c,d;
	bool ans;
	char* token=strtok(argv[1],".");
	while(token!=NULL)
	{
		printf("%s\n",token);
		arr[i]=atoi(token);
		token=strtok(NULL,".");
		i++;
	}
	a=arr[0];
	b=arr[1];
	c=arr[2];
	d=arr[3];
	printf("The netmask is valid:\n");
	ans=netmask_check(a,b,c,d);
	if(ans==true)
		{printf("TRUE\n");}
	else
		{printf("FALSE\n");}	
	return 0;	
}

bool netmask_check(int a, int b,int c,int d)
{
	int remainder,base=1;
	int bin_a=0,bin_b=0,bin_c=0,bin_d=0;
	bool res;
	while(a>0)
		{
			remainder=a%2;
			bin_a=bin_a+remainder*base;
			base=base*10;
			a=a/2;
		}
	base=1;
	
	while(b>0)
		{
			remainder=b%2;
			bin_b=bin_b+remainder*base;
			base=base*10;
			b=b/2;
		}
	
	base=1;
	while(c>0)
		{
			remainder=c%2;
			bin_c=bin_c+remainder*base;
			base=base*10;
			c=c/2;
		}
	base=1;

	while(d>0)
		{
			remainder=d%2;
			bin_d=bin_d+remainder*base;
			base=base*10;
			d=d/2;
		}

if(bin_a==11111111)
{
    if(bin_b==11111111)
    {
        if(bin_c==11111111)
        {
            if(bin_d==11111100||bin_d==11111000||bin_d==11110000||bin_d==11100000||bin_d==11000000||bin_d==10000000||bin_d==00000000)
            {
                res=true;
            }
            else
            {
                res=false;
            }
        }
        else if(bin_c==11111110||bin_c==11111100||bin_c==11111000||bin_c==11110000||bin_c==11100000||bin_c==11000000||bin_c==10000000||bin_c==00000000)
        {
            if(bin_d==00000000)
            {
                res=true;
            }
            else
            {
                res=false;
            }
        }
    }
    else if(bin_b==11111110||bin_b==11111100||bin_b==11111000||bin_b==11110000||bin_b==11100000||bin_b==11000000||bin_b==10000000||bin_b==00000000)
    {
        if(bin_c==00000000&&bin_d==00000000)
        {
            res=true;
        }
        else
        {
            res=false;
        }
    }
}
else
{
    res=false;
}

return res;
}
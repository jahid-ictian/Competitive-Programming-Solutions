#include<stdio.h>
int main()
{
    int n,num,i,a[10000];
    int mid=0,right,left,flag=0;
    scanf("%d%d",&n,&num);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    int p=0,m=0;
    for(i=1; i<n; i++)
    {
        right=n;
        left=i+1;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(a[i]+num==a[mid])
            {
                m=a[i];
                p=a[mid];
                flag=1;
                break;
            }
            else if(a[mid]>a[i]+num)
            {
                right=mid-1;
            }

            else
            {
                left=mid+1;
            }

        }
        if(flag==1)
            break;//stop looping

    }
    printf("%d %d",m,p);

}

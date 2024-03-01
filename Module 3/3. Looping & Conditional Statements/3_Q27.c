#include <stdio.h>

int main()
{
    int n,i;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++) {
        if (i % 2 == 1) {
            sum = sum + (float)i / (i + 1);
        } else {
            sum = sum - (float)i / (i + 1);
        }
    }
    for(i=1;i<=n;i++)
    {
    	if(i%2!=0){
    		printf("%d/%d ",i,i+1);
    		if(i<n){
    			printf("- ",i,i+1);
			}
		}else{
			printf("%d/%d ",i,i+1);
			if(i<n){
    			printf("+ ",i,i+1);
			}
		}
	}

    printf("= %.2f", sum);

    return 0;
}

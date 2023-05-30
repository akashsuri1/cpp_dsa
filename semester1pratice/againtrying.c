#include <stdio.h>
int factorial(int n);
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int array[11];
        int score[101];
        for(int j=0;j<101;j++){
            score[j]=0;
        }
	    for(int j=0;j<11;j++){
	        scanf("%d",&array[j]);
            score[array[j]]++;
	    }
        int product=1;
        int k;
        scanf("%d",&k);
        for(int j=100;j>=0 && k>0;j--){
            if(score[j]==0){
                continue;
            }else{
                if(k-score[j]>=0){
                    k=k-score[j];
                }else{
                   int value=factorial(score[j]);
                   int valu2=factorial(k)*(factorial(score[j]-k));
                   product=product*(value/(valu2));
                   break; 
                }
                 
            }
        }
    printf("%d\n",product);
    }
     
	return 0;
}
int factorial(int n){
    int factorial=1;
    for(int j=1;j<=n;j++){
          factorial*=j;
    }
    return factorial;
}
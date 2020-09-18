// count maximum number of characters between two same characters

#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	int i=1;
	for(i = 1; i<= t; i++){

		int x[123], y[123], d = 0;
		char str[100000];
		scanf("%s",str);
		int strLen = strlen(str);
		int j;
		for(j = 97; j< 123;j++) {
		    x[j] = -1;
		    y[j] = -1;
		}

		 for(j = 0; j < strLen; j++)
         {
            if (x[(int)str[j]] != -1){
            	y[(int)str[j]] = j;
            }
			else
			{
				x[(int)str[j]] = j;
            }
         }
         int p;
         for(p = 97; p < 123; p++)
          {
              if(d < (y[p] - x[p])){
                  d = (y[p] - x[p]);
              }
          }
          printf("%d\n", d - 1);
	}
	return 0;
}

ans1:

#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("Maximum of the three numbers is: %d\n", max);
    return 0;
}

output:

Enter three numbers: 3 5 6
Maximum of the three numbers is: 6

ans2:

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Using conditional/ternary operator to check if ch is an alphabet or not
    (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') ? printf("%c is an alphabet.\n", ch) : printf("%c is not an alphabet.\n", ch);

    return 0;
}

output:

Enter a character: a
a is an alphabet.

ans3:

#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    
    printf("Sum of all odd numbers from 1 to %d is %d\n", n, sum);
    
    return 0;
}

output:

Enter a number: 9
Sum of all odd numbers from 1 to 9 is 25

ans4:

#include <stdio.h>

#include <string.h>

#define MAX_SIZE 100    // maximum size of the string

int main() {

    char str[MAX_SIZE];

    int freq[256] = {0};    // initialize frequency of all characters to 0

    int i, max_freq = -1;

    char max_char;

    

    printf("Enter a string: ");

    fgets(str, MAX_SIZE, stdin);

    

    // calculate frequency of each character in the string

    for(i=0; i<strlen(str); i++) {

        freq[str[i]]++;

    }


output:

Enter a string: 65
The maximum occurring character in the string is '6' with frequency 1

ans5:

#include <stdio.h> 

int tmp=20; 

main( ) {    

    printf("%d ",tmp);    

    func( );    

    printf("%d ",tmp); 

} 

func() {    

    static int tmp=10;    

    printf("%d ",tmp); 

}

output:

20,10,20

ans6:

main() {

    int a = 10;      

    if ((fork ( ) == 0))      

    a++;      

    printf ("%dn", a ); 

}

output:

10n11n

ans7:

#include <stdio.h>

int main () {

int a;

a=1;
while(a<=100)
{
    printf("%d\n",a*a);
    a++;
}


output:

1
4
9
16
25
36
49
64
81
100
121
144
169
196
225
256
289
324
361
400
441
484
529
576
625
676
729
784
841
900
961
1024
1089
1156
1225
1296
1369
1444
1521
1600
1681
1764
1849
1936
2025
2116
2209
2304
2401
2500
2601
2704
2809
2916
3025
3136
3249
3364
3481
3600
3721
3844
3969
4096
4225
4356
4489
4624
4761
4900
5041
5184
5329
5476
5625
5776
5929
6084
6241
6400
6561
6724
6889
7056
7225
7396
7569
7744
7921
8100
8281
8464
8649
8836
9025
9216
9409
9604
9801
10000

ans8:

output:

1200,1200,1200

ans9:

#include<stdio.h>
void fun(int **p);
int main()
{   
int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 8, 7, 8, 9, 0}; 
   int *ptr; 
   ptr = &a[0][0];  
  fun(&ptr); 
   return 0;
}
void fun(int **p)
{
    printf("%dn", **p);
}

output:

1n

ans10:

#include <stdio.h>

#include <string.h>

#define MAX_NAMES 100

int main() {

    char names[MAX_NAMES][50];  

   

    int num_names = 0;  

    char order;  

    

    while (num_names < MAX_NAMES) {

        printf("Enter a name (or 'done' to stop): ");

        scanf("%s", names[num_names]);

        if (strcmp(names[num_names], "done") == 0) {

            break;

        }

        num_names++;

    }

    printf("Enter the order (A for ascending or D for descending): ");

    scanf(" %c", &order);

    if (order == 'A' || order == 'a') {

        for (int i = 0; i < num_names - 1; i++) {

            for (int j = i + 1; j < num_names; j++) {

                if (strcmp(names[i], names[j]) > 0) {

                    char temp[50];

                    strcpy(temp, names[i]);

                    strcpy(names[i], names[j]);

                    strcpy(names[j], temp);

                }

            }

        }

    } else if (order == 'D' || order == 'd') {

        for (int i = 0; i < num_names - 1; i++) {

            for (int j = i + 1; j < num_names; j++) {

                if (strcmp(names[i], names[j]) < 0) {

                    char temp[50];

                    strcpy(temp, names[i]);

                    strcpy(names[i], names[j]);

                    strcpy(names[j], temp);

                }

            }

        }

    }

    printf("Sorted list of names:\n");

    for (int i = 0; i < num_names; i++) {

        printf("%s\n", names[i]);

    }

    return 0;

}

output:

Enter a name (or 'done' to stop): banana
Enter a name (or 'done' to stop): carrot
Enter a name (or 'done' to stop): radhish
Enter a name (or 'done' to stop): apple
Enter a name (or 'done' to stop): jack
Enter a name (or 'done' to stop): potato
Enter a name (or 'done' to stop): tomato
Enter a name (or 'done' to stop): done
Enter the order (A for ascending or D for descending): a
Sorted list of names:
apple
banana
carrot
jack
potato
radhish
tomato


/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/41172/
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,w,n,a,b,sum;
    sum = 0;
    scanf("%d", &w);
    scanf("%d", &n);
    
    while(n--) {
        scanf("%d%d", &a, &b);
        sum += (a*b);
    }
    
    printf("%d\n", (sum)/w);
    
    return 0;
}
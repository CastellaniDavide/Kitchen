/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>

// constraints
#define MAXN 100000
#define MAXM 100000

// input data
int N, M, i;
int H[MAXN], T[MAXM];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d%d", &N, &M));
    for (i = 0; i < N; i++) assert(1 == scanf("%d", &H[i]));
    for (i = 0; i < M; i++) assert(1 == scanf("%d", &T[i]));

    // insert your code here

    printf("%d\n", 42);                         // change 42 with actual answer
    for (i = 0; i < N; i++) printf("%d ", 42);  // change 42 with actual answer
    printf("\n");
    return 0;
}

// Copyright (c) 2019-present, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the
// LICENSE file in the root directory of this source tree.
//


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

int min(int x, int y) { return (x < y)? x: y; }
int max(int x, int y) { return (x > y)? x: y; }
int cmpfunc (const void * a, const void * b) {return ( *(int*)a - *(int*)b );}
int len (int arr [ ]) {return ((int) (sizeof (arr) / sizeof (arr)[0]));}
void sort (int arr [ ], int n) {qsort (arr, n, sizeof(int), cmpfunc);}

bool f_gold ( int a1 [ ], int a2 [ ], int a3 [ ], int n1, int n2, int n3, int sum ) {
  unordered_set < int > s;
  for ( int i = 0;
  i < n1;
  i ++ ) s . insert ( a1 [ i ] );
  for ( int i = 0;
  i < n2;
  i ++ ) {
    for ( int j = 0;
    j < n3;
    j ++ ) {
      if ( s . find ( sum - a2 [ i ] - a3 [ j ] ) != s . end ( ) ) return true;
    }
  }
  return false;
}


bool f_filled ( int a1 [ ], int a2 [ ], int a3 [ ], int n1, int n2, int n3, int sum ) {}

int main(void) {
    int n_success = 0;
    int param0_0[] = {6,7,10,15,28,30,30,35,38,43,44,44,54,55,64,68,69,73,75,75,86,87,92,93,94};
int param0_1[] = {-72,-90,-92,4,22,14,-50,16,-56,-66,62,-32,82,8,12,-24,92,-98,-94,56,-74,-66,26,-98,10,-74,-14,2,60,-88,-84,34,82,28,-86,-90,-92,52,72,90,92,-20,-86,74,-96,-46,28};
int param0_2[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1};
int param0_3[] = {85,34,78,64,22,94,52,71,44,48,46,88,59,95,4,55,21,83,56,19,85,6,87,13};
int param0_4[] = {-98,-98,-96,-94,-90,-90,-84,-36,-34,-34,-32,16,26,26,56,74,80};
int param0_5[] = {1,1,1,0,0,0,1,1,1,1};
int param0_6[] = {4,4,25,27,35,39,50,60,60,63,67,73,75,81,84,85,91,98};
int param0_7[] = {54,-64,76,78,24,40,44,-56,80,-10,-12,-8,-18,42,70,14,-70,48,-68,-98,-74,-40,-16,-90,48,92,-64,58,-98,60,-10,-10};
int param0_8[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int param0_9[] = {28,88,75,86,51,82,2,20,22,18,96,11};
int *param0[10] = {param0_0,param0_1,param0_2,param0_3,param0_4,param0_5,param0_6,param0_7,param0_8,param0_9};
    int param1_0[] = {11,17,18,24,26,26,33,35,38,41,55,60,63,63,69,73,78,81,82,87,90,91,93,94,99};
int param1_1[] = {50,-20,26,32,-46,38,36,0,-96,60,-70,-36,-12,50,64,-70,22,-22,32,60,-94,98,-58,-86,-16,40,-68,2,-50,6,-36,-28,-68,44,-98,-38,-46,68,4,60,-36,28,-38,4,50,-84,-12};
int param1_2[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int param1_3[] = {58,45,14,13,73,82,34,78,83,84,39,34,65,84,84,61,26,67,48,51,41,46,89,10};
int param1_4[] = {-92,-70,-70,-56,-54,-48,-38,-14,-10,0,4,30,34,70,72,76,78};
int param1_5[] = {0,0,1,0,0,1,0,1,0,1};
int param1_6[] = {20,21,23,25,37,41,51,57,62,66,74,77,77,79,80,87,88,95};
int param1_7[] = {88,-66,-50,74,-44,-32,-58,-24,-40,62,52,88,-48,-2,-46,38,30,-56,76,56,60,52,-32,36,90,92,-74,88,-36,-14,-16,-14};
int param1_8[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int param1_9[] = {62,54,79,88,27,13,48,94,86,28,86,60};
int *param1[10] = {param1_0,param1_1,param1_2,param1_3,param1_4,param1_5,param1_6,param1_7,param1_8,param1_9};
    int param2_0[] = {3,3,8,22,24,24,28,30,32,32,34,39,40,45,46,50,54,59,75,78,79,90,95,95,97};
int param2_1[] = {-28,20,-62,-84,14,10,28,-10,94,-2,52,66,38,-50,48,-88,-28,92,-48,86,4,-16,26,26,-82,44,70,72,-6,-98,80,56,38,42,-20,64,36,80,12,4,-50,54,22,98,-30,-52,4};
int param2_2[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1};
int param2_3[] = {46,1,2,90,31,49,62,10,28,4,48,84,87,51,88,74,99,15,35,24,32,66,10,66};
int param2_4[] = {-92,-88,-70,-56,-50,-50,-48,-36,-20,-10,-8,2,16,22,48,70,78};
int param2_5[] = {1,1,1,1,0,1,1,1,0,1};
int param2_6[] = {2,3,9,10,10,18,24,40,41,47,68,69,70,86,90,95,96,98};
int param2_7[] = {38,-96,16,38,-48,-22,-52,-78,42,94,-26,-20,12,-10,72,16,-8,-2,-36,-76,-6,-92,10,34,-76,-54,-20,20,-76,-46,24,44};
int param2_8[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int param2_9[] = {49,14,18,61,94,54,12,56,97,59,85,44};
int *param2[10] = {param2_0,param2_1,param2_2,param2_3,param2_4,param2_5,param2_6,param2_7,param2_8,param2_9};
    int param3[] = {21,41,26,15,15,5,12,23,38,6};
    int param4[] = {16,42,20,16,10,7,17,18,22,6};
    int param5[] = {17,34,30,23,15,9,13,29,40,8};
    int param6[] = {18,32,16,15,15,6,9,19,32,9};
    for(int i = 0; i < len(param0); ++i)
    {
        if(f_filled(param0[i],param1[i],param2[i],param3[i],param4[i],param5[i],param6[i]) == f_gold(param0[i],param1[i],param2[i],param3[i],param4[i],param5[i],param6[i]))
        {
            n_success+=1;
        }
    }
    printf("#Results:", " ", n_success, ", ", len(param0));
    return 0;
}
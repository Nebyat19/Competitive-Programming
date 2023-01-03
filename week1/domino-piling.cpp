#include <bits/stdc++.h>
 
using namespace std;

int main(){
int M,N;

cin>>M>>N;

int area=2*1;
int T_area=M*N;
int num_dominoes=T_area/area;

cout<<num_dominoes;
return 0;
}

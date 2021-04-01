#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void populateArray(int A[101][101], int N){
	srand(time(0));

		int k=0;
		while (k<N){
		int random=rand()%100;
		int random2=rand()%100;
		if(A[random][random2]!=0){
			A[random][random2]+=1;}
			else{
		A[random][random2]=1;
	}
		k++;
		}

}

void searchValidEntries(int XL, int YL, int XH, int YH, int A[101][101]){
	for (int i=XH;i<=XL;i++){
		for (int j=YL;j<=YH;j++){
			if(A[i][j]!=0){
				cout<<i<<" ,"<<j<<"; "<<A[i][j]<<endl;
			}
	}
}
}
int main(){
		srand(time(0));
int A[101][101]={};
populateArray(A,900);
		//searchValidEntries(100,1,80,10,A);
		//searchValidEntries(40,20,10,79,A);
		//searchValidEntries(100,90,1,100,A);
		//searchValidEntries(70,30,40,60,A);
		//searchValidEntries(70,50,50,70,A);

return 0;
}

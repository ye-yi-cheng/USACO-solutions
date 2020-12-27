#include<bits/stdc++.h>
using namespace std;
char a[3][3],teams[9];

bool norepeat(char ch){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(ch==a[i][j]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int teamcnt=0;
	int pscore=0,tscore=0;
	for(int i=0;i<3;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(norepeat(teams[teamcnt])){
				teams[teamcnt]=a[i][j];
				teamcnt++;
			}
		}
	}
	for(int i=0;i<9;i++){
		if(a[0][0]==teams[i]&&a[1][1]==teams[i]&&a[2][2]==teams[i]||
		   a[0][2]==teams[i]&&a[1][1]==teams[i]&&a[2][0]==teams[i]||
		   
		   a[0][0]==teams[i]&&a[0][1]==teams[i]&&a[0][2]==teams[i]||
		   a[1][0]==teams[i]&&a[1][1]==teams[i]&&a[1][2]==teams[i]||
		   a[2][0]==teams[i]&&a[2][1]==teams[i]&&a[2][2]==teams[i]||
		   
		   a[0][0]==teams[i]&&a[1][0]==teams[i]&&a[2][0]==teams[i]||
		   a[0][1]==teams[i]&&a[1][1]==teams[i]&&a[2][1]==teams[i]||
		   a[0][2]==teams[i]&&a[1][2]==teams[i]&&a[2][2]==teams[i]
		){
			pscore++;
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			for(int i=0;i<9;i++){
				if(
				  (a[0][0]!=teams[i]&&a[1][1]!=teams[i]&&a[2][2]!=teams[i]||
				   a[0][2]!=teams[i]&&a[1][1]!=teams[i]&&a[2][0]!=teams[i]||
				   
				   a[0][0]!=teams[i]&&a[0][1]!=teams[i]&&a[0][2]!=teams[i]||
				   a[1][0]!=teams[i]&&a[1][1]!=teams[i]&&a[1][2]!=teams[i]||
				   a[2][0]!=teams[i]&&a[2][1]!=teams[i]&&a[2][2]!=teams[i]||
				   
				   a[0][0]!=teams[i]&&a[1][0]!=teams[i]&&a[2][0]!=teams[i]||
				   a[0][1]!=teams[i]&&a[1][1]!=teams[i]&&a[2][1]!=teams[i]||
				   a[0][2]!=teams[i]&&a[1][2]!=teams[i]&&a[2][2]!=teams[i])
				   
				   ||
				   
				  (a[0][0]!=teams[j]&&a[1][1]!=teams[j]&&a[2][2]!=teams[j]||
				   a[0][2]!=teams[j]&&a[1][1]!=teams[j]&&a[2][0]!=teams[j]||
				   
				   a[0][0]!=teams[j]&&a[0][1]!=teams[j]&&a[0][2]!=teams[j]||
				   a[1][0]!=teams[j]&&a[1][1]!=teams[j]&&a[1][2]!=teams[j]||
				   a[2][0]!=teams[j]&&a[2][1]!=teams[j]&&a[2][2]!=teams[j]||
				   
				   a[0][0]!=teams[j]&&a[1][0]!=teams[j]&&a[2][0]!=teams[j]||
				   a[0][1]!=teams[j]&&a[1][1]!=teams[j]&&a[2][1]!=teams[j]||
				   a[0][2]!=teams[j]&&a[1][2]!=teams[j]&&a[2][2]!=teams[j])
				){
					tscore++;
				}
			}
		}
	}
	printf("%d\n",pscore);
	printf("%d\n",tscore);
	return 0;
} 

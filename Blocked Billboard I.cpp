#include<bits/stdc++.h>
using namespace std;

struct rect{
	int x1,y1,x2,y2;
};

int area(rect r){
	return (r.x2-r.x1)*(r.y2-r.y1);
}

int intersect_area(rect p,rect q){
	int x_overlap=max(0,min(p.x2,q.x2)-max(p.x1,q.x1));
	int y_overlap=max(0,min(p.y2,q.y2)-max(p.y1,q.y1));
	return x_overlap*y_overlap;
} 

int main(){
	rect a,b,car;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a.x1,&a.y1,&a.x2,&a.y2,&b.x1,&b.y1,&b.x2,&b.y2,&car.x1,&car.y1,&car.x2,&car.y2);
	printf("%d",area(a)+area(b)-intersect_area(a,car)-intersect_area(b,car));
	return 0;
}

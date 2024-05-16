#include<iostream>
#include<vector>
using namespace std;

//// mảng là tập hợp các biến có cùng kiểu dữ liệu 
//// mảng có kích thước cố định không thể thay đổi 
////mản có index bắt dầu từ 0
int main(){
//	1. cách khai báo ||khởi tạo mảng 
//	 -> kiểu_dữ _liệu <tên mảng>[];
//	 -> kiểu_dữ _liệu <tên mảng>[]={gt1,gt2,gt3,......};
//	int M3[3];//mang nguyen co 3 phan tu
//	string M4[7]; //mang string co 7 phan tu 
//	int M5[]={1,2,3,4,5,6,7};
//	string M6[]={"mot","hai","ba","bon"};


//	2.Truy xuat cac ptu cua mang
//	cout << M5[0] << endl;
//	cout <<M5[3] << endl;



//	3.  (chiều dài mảng,bắt đầu từ 1)
//	int M7 []={1,2,3,4,5,6};
//	int chieudai=sizeof(M7) / sizeof(int);// lấy độ dài mảng 
//	cout <<"chieu dai mang 7 la :" << chieudai;
//	
	
	
	
	
	//* Duyệt mảng:
	//4.Duyệt mảng , dùng đẻ xuất các phần tử trong mảng
		int M8[]={10,20,30,40,50};
//		for(int pt : M8){
//			cout << pt << " ";
//		}
	//5.Duyệt mảng theo vị trí index
	for(int i=0;i<sizeof(M8)/sizeof(int);i++){
		// in ra  vị trí index
		cout << i <<" ";
		// in ra giá trị tại ví trị i
		 cout << M8[i] <<endl;
		 
	}
	cout << endl;
	
	
	
	
	
	// 6.Thay đổi giá trị cho mảng 
	//	-> cách 1:gọi trực tiếp và gán giá trị 
	
	int M9[]={10,20,30,40,50,60};
	cout << M9[0]<< endl;// xuất tại vị trí index =0 có giá trị là 10
	
	M9[0]=88;//thay đôi giá trị tại index 0;
	cout <<  "sau khi thay doi gia tri : " << M9[0] <<endl;
	
	//-> cách 2 : thay đổi bằng dùng for update tất cả phần tử 
	
	for(int i=0;i<sizeof(M9)/sizeof(int);i++){
		M9[i]+=2;
		cout << M9[i]<< " ";
	}


	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
}
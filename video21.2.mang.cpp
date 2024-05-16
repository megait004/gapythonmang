#include<iostream>
#include<algorithm>
#include<random>
using namespace std;
int main(){
//	int mang1chieu[4];
//	for(int i=0;i<sizeof(mang1chieu)/sizeof(int);i++){
//	 cout << "mang[" << i<<"]" <<endl;
//	 cin >> mang1chieu[i];
//	}
//	// xuat mang khi nguoi dung nhap 
//	for ( int i: mang1chieu){
//		cout << i << " ";
//	}
//	cout << endl;
//	cout << endl;
//	
//	// sap xep mang
//		int mang2[5]={14,5,7,8,4};
//		// sap xep mang
//			sort(mang2,mang2+sizeof(mang2)/sizeof(int));// 'sort' sap xep mang tang dan
//			cout << " mang 2 sau sx tang dang la :";
//			for(int i=0;i<sizeof(mang2)/sizeof(int);i++){
//				cout << mang2[i] << " ";
//			}
//			
//			cout << endl;
//			cout << endl;
//		// dao nguoc mang
//			reverse(mang2,mang2+sizeof(mang2)/sizeof(int));// 'reverse' ham dao nguoc mang
//			cout << "mang sau khi dao nguoc la: ";
//			for(int i=0;i<sizeof(mang2)/sizeof(int);i++){
//				cout << mang2[i] << " ";
//			}
		// tao mang voi phan tu ngau nhien 
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dis(0,99);//set khoang ngau nhien 
			int mang3[10];
			for(int i=0;i<sizeof(mang3)/sizeof(int);i++){
				mang3[i]=dis(gen);// gan so ngau nhien voi dis da set
			}
			// xuat mang 
			 for(int i : mang3){
			 	cout << i << " ";
			 }
	}
	

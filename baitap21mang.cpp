#include<iostream>
#include<random>
#include<algorithm>
using namespace std;
int main(){
	//1 .tạo mảng 1 chiều gồm các phần tử có 7 số nguyên 
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0,10);// lấy giá trị ngẫu nhien
	int mang1c[7];
	cout << " danh sach pt trong mang la :";
	for(int i=0;i<sizeof(mang1c)/sizeof(int);i++){
	 mang1c[i]= dis(gen);
	}// 2. xuất giá trị trong mảng
	for( int i : mang1c){
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	// 3 .đảo ngược mảng 
	  reverse(mang1c,mang1c+sizeof(mang1c)/sizeof(int));
	  cout << " mang sau khi dao nguoc la : ";
	  for(int i=0;i<sizeof(mang1c)/sizeof(int);i++){
	  	cout << mang1c[i] <<  " ";
	  }
	  cout << endl ;
	  cout << endl;
	// 4.sắp xếp mảng tăng dần
	    sort(mang1c,mang1c+sizeof(mang1c)/sizeof(int ));
	    cout << " mang sau khi sap xep tang dan la :";
	    for(int i=0;i<sizeof(mang1c)/sizeof(int);i++){
	    	cout << mang1c[i] << " ";
		}
		
		cout << endl ;
	  	cout << endl;
	// 5.tinh tong pt trong mang
	 int sum =0;
	 for(int i=0;i<sizeof(mang1c)/sizeof(int);i++){
	 	sum=sum+mang1c[i];
	 	
	 }
	 cout << " tong pt trong mang la :" << sum ;
	 
	 	cout << endl ;
	  	cout << endl;
	// 6.cho người dùng nhập 1 số bất kỳ , kiểm tra số đo có tồn tại trong mảng hay không nếu có thì có bao nhiều số 
		
		int n;
		cout << "moi nhap 1 so bat ky :" << endl;
		cin >> n;
			int dem = 0;
	 for(int i=0;i<sizeof(mang1c)/sizeof(int );i++){
	 	if(n==mang1c[i]){
	 	dem =dem +1;
	 
  }
		 }
		  if (dem > 0) {
    cout << "So " << n << " xuat hien " << dem << " lan trong mang." << endl;
  } else {
    cout << "So " << n << " khong ton tai trong mang." << endl;
	 }
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
}
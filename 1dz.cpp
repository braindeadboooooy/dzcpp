#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	int l1, l2, w1, w2, h1, h2;
	char fname1[30], fname2[30]; 
	cout << "Enter file name:";
	cin >> fname1;
	strcat(fname1,".txt");
	ofstream fout (fname1);
	if(!fout.is_open()){
		cout << "File was not opened!";
		return 1;
	}else{
		cout << "Enter hole size(length, width, height)";
		cin >> l1 >> w1 >> h1;
		fout << l1 <<" "<< w1 <<" "<< h1;
		fout.close();
	}
	ifstream fin(fname1);
	if(!fin.is_open()){
		cout << "File wans not opened!";
		return 1;
	}else{
		fin >> l1 >> w1 >> h1;
		fin.close();
	    cout <<"Enter brick size:";
		cin >> l2 >> w2 >> h2;
		cout << "Enter file name:";
		cin >> fname2;
		strcat(fname2,".txt");
		ofstream fout2(fname2);
		if(!fout2.is_open()){
			cout << "File was not opened!";
			return 1;
		}else {
			if ((l2 > l1) || (w2 > w1) || (h2 > h1)){
				fout2 << "Brick size exceeds hole size! Brick will not enter.";
				fout2.close();
       	    } else {
				fout2 << "The brick will go into the hole!";
				fout2.close();
			} 
       		 
		}
	}
}
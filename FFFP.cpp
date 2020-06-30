//fifa financial fair play program
#include<iostream>  
using namespace std;
	float uang[100], uang1[100];
	int jml, jml1, sel;
	int n=1;
	int m=1;
	float total, total1; 
template <class D>
D selisih(D x, D y){
    return(x-y);
}
template <class D>
class dyas
{
		char nama[100];
		char klub[100];
	public :
		class squad{};
	void buy()
	{
		cout<<"Masukan jumlah pemain yang ingin dibeli: ";cin>>jml;
		cin.ignore();
		cout<<"Masukan nama pemain (nama[1], nama[2], nama[n]) : ";cin.getline(nama,100);
		cin.ignore();
		cout<<"Masukan Klub asal(klub[1], klub[2], klub[n]) : ";cin.getline(klub,100);
	}void biayatff()
	{
		for(int a=0;a<jml;a++)
		{
			cout<<"Biaya Transfer Pemain ke "<<n++<<": ";cin>>uang[n];
			total=total+uang[n];
		}
	}
	void sell()
	{
		cout<<"Masukan jumlah pemain yang ingin dijual: ";cin>>jml1;
		cin.ignore();
		cout<<"Masukan nama pemain (nama[1], nama[2], nama[n]) : ";cin.getline(nama,100);
	}
	void biayatf()
	{
		for(int a=0;a<jml1;a++)
		{
			cout<<"Biaya Transfer Pemain ke "<<m++<<": ";cin>>uang1[m];
			total1=total1+uang1[m];
		}
		
	}
	void display()
	{
		try
		{
		cout<<endl;
		cout<<"List Pemain yang dibeli: "<<nama<<endl;
		cout<<"List Klub Asal Pemain: "<<klub<<endl;
		cout<<"Jumlah pemain baru yang datang ke klub "<<jml<<endl;
		cout<<"Jumlah pemain baru yang meninggalkan ke klub "<<jml1<<endl;
		cout<<"Total Pengeluaran Klub: "<<total<<endl;
		cout<<"Total Pemasukan Klub: "<<total1<<endl;
		cout<<endl;
		sel=selisih(jml,jml1);
		if(sel<0)
		throw squad();
		}
		catch (dyas::squad)
        {
        	sel=sel*-1;
        	cout<<"-----------------------------------------"<<endl;
            cout<<"Squad anda berkurang sebanyak "<<sel<<endl;
            cout<<"Segera beli pemain baru untuk kedalaman tim anda"<<endl;
            cout<<"Dan Tetap Perhatikan FIFA FINANCIAL FAIR PLAY"<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<endl;
        }
}D balance();
};
template <class D>
D dyas<D>::balance()
{
    D balance;
    balance = total1-total;
    return balance;	
}
int main()
{
	float fair;
	try
	{
	dyas<float>obj;
	cout<<"FIFA FINANCIAL FAIRPLAY CHECK"<<endl;
	obj.buy();
	obj.biayatff();
	obj.sell();
	obj.biayatf();
	obj.display();
	cout<<"Balance keuangan selama bursa transfer: "<<obj.balance();
	fair=obj.balance();
	if(fair<0)
	{ 
		throw(fair);
	}
	
	}catch(float fair)
	{
		cout<<endl;
		cout<<"-----------------------------------------"<<endl;
		cout<<"Finansial Klub anda tidak sehat"<<endl;
		cout<<"Jumlah pengeluaran dan pemasukan tidak seimbang"<<endl;
		cout<<"Balance-kan Neraca keuangan Klub untuk menghindari sanksi FIFA"<<endl;
		cout<<"-----------------------------------------"<<endl;
	}
	
}

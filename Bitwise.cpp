//Bitwise
/*
operator[]	Access bit (public member function )
count		Count bits set (public member function )
size		Return size (public member function )
Test 		Return bit value (public member function ) a.test(i);
any			Test if any bit is set (public member function ) a.any();
none		Test if no bit is set (public member function )
all 		Test if all bits are set (public member function )

Bit operations
set			Set bits (public member function ) a.set(i);
reset		Reset bits (public member function )
flip   		Flip bits (public member function ) a.flip(), a.flip(i);

Bitset operations
to_string	Convert to string (public member function ) a.to_string();
to_ulong 	Convert to unsigned long integer (public member function ) a.to_ulong();
to_ullong 	Convert to unsigned long long (public member function )
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
// int n;
// cin>>n;
// bitset<8> b = n;
// cout<<b<<endl;
// for(int i=0;i<b.size();i=i+2)
// {
// 	int a = b[i];
// 	b[i] = b[i+1];
// 	b[i+1] = a;
// }
// cout<<b<<endl;
// cout<<b.to_ulong();


// int l,h;
// cin>>l>>h;
// for(int i=l;i<=h;i++) 
// {
// 		b.set(i);
// }
// cout<<b<<endl;

// string x;
// string y;
// cin>>x>>y;
// bitset<32> a(x);
// bitset<32> b(y);
// cout<<a<<endl<<b<<endl;
// int x1 = a.to_ulong()+b.to_ulong();
// bitset<32> c(x1);
// cout<<c<<endl;


// bitset<32> d;
// d=0;
// for(int i=0;i<32;i++)
// {
//     d.set(i);
// }
// cout<<d<<endl;
// cout<<d.size()<<endl;
// cout<<d.to_ullong()<<endl; //for long int.
// cout<<d.size()<<endl;


// bitset<8> e;
// e = 35;
// cout<<e<<endl;
// cout<<e.count()<<endl;
// cout<<(e.size()-e.count())<<endl;

// bitset<8> f;
// f=34;
// cout<<"34 = "<<f<<endl;
// f.flip();
// cout<<"After flipping all = "<<f<<endl;
// f.flip(2);
// cout<<"After Flipping index 2 bit = "<<f<<endl;
// cout<<f.to_ulong()<<endl;

return 0;
}
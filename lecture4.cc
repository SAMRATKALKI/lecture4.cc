#include<iostream>
using namespace std;

    
int main(){
    // pattern using while loop
    int a ;
    cout<<"enter the no of times the pattern should be print "<<endl;
    cin>>a;
    int b = 1;
    while(b<=a){
        int c = 1;
        while(c<=a) {
            cout<<c;
            c += 1;
        }
        cout<<endl;
        b += 1;
    }

    // pattern printing using while loop reverse number 
    int d ;
    cout<<"enter the no of times you want the pattern to be printed"<<endl;
    cin>>d;
    int e = 1;
    while(e<=d){
        int f = 1;
        while(f<=d){
            cout<<d-f+1;
            f += 1;
        }
        cout<<endl;
        e += 1;
    }
    // pattern printing using while loop till the square of the given no
    int g ;
    cout<<"enter the no of times you want the pattern to be printed - ";
    cin>>g;
    int h = 1;
    int count = 1;
    while(h<=g){
        int i = 1;
        while (i<=g){
            cout<<count;
            count += 1;
            i += 1;
        }
        cout<<endl;
        h += 1;
    }

    // pattern printing of star triangle using while loop
    int j ;
    cout<<"enter the no of times you want the pattern to be printed - ";
    cin>>j;
    int k = 1;
    
    while (k<=j){
        int l = 1;
        while (l<=k){
            cout<<"*";
            l += 1;
        }
        cout<<endl;
        k += 1;
    } 
    
    
    // patten printing of no triangle using while loop
    int m ;
    cout<<"enter the no of times you want patten to be printed ";
    cin>>m;
    int n = 1;
    while(n<=m){
        int o = 1;
        while(o<=n){
            cout<<n;
            o += 1;
        }
        cout<<endl;
        n += 1;

    } 
    
    // pattern printing of count no triangle using while loop
    int p ;
    cout<<" enter the no of times you want the pattern to be printed -  ";
    cin>>p;
    int q = 1;
    int num = 1;
    while(q<=p){
        int r = 1;
        while (r<=q){
            cout<<num;
            num += 1;
            r += 1;
        }
        cout<<endl;
        q += 1;
    }

    // pattern printing of count no row increasing triangle using while loop
    int r ;
    cout<<"enter the no of times you want the loop to be printed";
    cin>>r;
    int s = 1;
    int u = 1;
    while(s<=r){
        int t = 1;
        while (t <= s){
            cout<<u;
            u += 1;
            t += 1;
        }
        cout<<endl;
        s += 1;
        u = s;

    }
    // pattern printing of reverse no triangle using while loop 
    int v ;
    cout<<"enter the no of times you want the patten to be printed - ";
    cin>>v;
    int w = 1;
    int y = 1;
    while(w<=v){
        int x = 1;
        while(x<=w){ // we can use another way also 
            cout<<y; // cout<<w-x+1;
            y -= 1;  // not needed
            x += 1;
        }
        cout<<endl;
        w += 1;
        y = w; // not needed
    }

    // pattern printing of alphabets using while loop
    int z;
    cout<<"enter the no of times you want the pattern to be printed - ";
    cin>>z;
    int ab = 1;
    while(ab<=z){
        int bc = 1;
        while(bc<=z){
            char ch = 'A' + ab - 1; 
            cout<<ch;
            bc += 1;
        }
        cout<<endl;
        ab += 1;
    } 
    // alphabet pattern printing using while loop
    int de ;
    cout<<"enter the no of times you want to print the pattern - ";
    cin>>de;
    int fg =1;
    while(fg<=de){
        int hi = 1;
        while(hi<=de){
            char jk = 'A' + hi - 1;
            cout<<jk;
            hi += 1;
        }
        cout<<endl;
        fg += 1;
    }

    // alphabet pattern printing using while loop
    int lm ;
    cout<<"enter the of times you want the pattern to be printed - ";
    cin>>lm;
    int no =1;
    char alpha = 'A';
    while(no<= lm){
        int pq = 1;
        while(pq<=lm){
            cout<<alpha;
            alpha += 1;
            pq += 1;
        }
        cout<<endl;
        no += 1;
    }
    // alphabet pattern printing using while loop
    int qr;
    cout<<"enter the no of times you want to print the pattern - ";
    cin>>qr;
    int rs = 1;
    char chars = 'A';
    char alphas = 'A';
    while(rs<=qr){
        int st = 1 ;
        while(st<=qr){
            cout<<chars;
            chars += 1;
            st += 1;
        }
        cout<<endl;
        chars = alphas + rs;
        rs +=1;

    }
    // triangle alphabet pattern printing using while loop
    int uv;
    cout<<"enter the no of times you want to print the pattern = ";
    cin>>uv;
    int wx = 1;
    while(wx<=uv){
        int zy = 1;
        char yzx = 'A';
        char uws = yzx + wx - 1;
        while(zy<=wx){
            cout<<uws;
            zy += 1;
        }
        cout<<endl;
        wx += 1;

    }
    // triangle alphabet pattern printing using while loop (direct)
    int abc ;
    cout<<"enter the no of times you want to print the pattern ";
    cin>>abc;
    int bcd = 1;

    while(bcd<=abc){
        int def = 1;
        char efg = 'A' + bcd + def - 2;
        while(def<=bcd){
            cout<<efg;
            def += 1;
        }
        cout<<endl;
        bcd += 1;  
    }
    
    // piramid pattern using while loop
    int fgh ;
    cout<<"enter the no of times you want to print the pattern ";
    cin>>fgh;
    int ghi = 1;
    while(ghi<=fgh){

        // print spaces 
        int hij = 1;
        int ijk = fgh - ghi;
        while(ijk - hij + 1){
            cout<<"*";
            hij += 1;

        }
        // print no pattern 
        int jkl = 1;
        while(jkl<=ghi){
            cout<<jkl;
            jkl += 1;
        }
        // print the second no pattern
        int klm = 1;
        int lmn = ghi - 1 ;
        while(klm<ghi){
            cout<<lmn;
            lmn -= 1;
            klm += 1;
        }

        cout<<endl;
        ghi +=1;
    }

    // no star piramid pattern using while loop
    int mno ;
    cout<<"enter the no of times you want to print the pattern ";
    cin>>mno;
    
    int nop = 1;
    while(nop<=mno){
        // no triangular  pattern 
        int opq = 1;
        int t1 = mno - nop + 1;
        while(t1!=0){
            cout<<opq;
            opq += 1;
            t1 -= 1;
        }
        // frist star pattern 
        int pqr = 1;
        while(pqr<nop){
            cout<<"*";
            pqr += 1;


        }
        // second star pattern 
        int qrs =1;
        while(qrs<nop){
            cout<<"*";
            qrs += 1;
        }
        // second triangular pattern 

        int t2 = mno - nop + 1;
        while(t2!=0){
            cout<<t2;
            t2 -= 1;
        }

        cout<<endl;
        nop += 1;
    }

    







    
    





    

    

}
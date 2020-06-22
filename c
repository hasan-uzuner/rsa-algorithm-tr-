
#include<stdio.h>
#include<math.h>

//euler totient bulma
//[gcd Sayısı ortak bölenlerin en büyüğüdür(greatest common divisor) bulma]

int gcd(int a, int h)
{
    int temp;
    while(1)
    {
        temp = a%h;
        if(temp==0)
        return h;
        a = h;
        h = temp;
    }
}
 
int main()
{
    //2 rastgele asal sayı bulmak
    double p = 3;
    double q = 7;
    double n=p*q;
    double count;
    double totient = (p-1)*(q-1);
 
    //genel anahtar
    //e =şifreleme
    double e=2;
 
    //kontrol etme eş asal sayı e>1
    while(e<totient){
    count = gcd(e,totient);
    if(count==1)
        break;
    else
        e++;
    }
 
    //özel anahtar
    //d şifreyi çözme
    double d;
 
    //k herhengi bir [keyfi]arbitrary value deger
    double k = 2;
 
    //d için totient  işlemi yapma
    d = (1 + (k*totient))/e;
    double msg = 12;
    double c = pow(msg,e);
    double m = pow(c,d);
    c=fmod(c,n);
    m=fmod(m,n);
 
    printf("Message data = %lf",msg);
    printf("\np = %lf",p);
    printf("\nq = %lf",q);
    printf("\nn = pq = %lf",n);
    printf("\ntotient = %lf",totient);
    printf("\ne = %lf",e);
    printf("\nd = %lf",d);
    printf("\nEncrypted data = %lf",c);
    printf("\nOriginal Message Sent = %lf",m);
 
    return 0;
}

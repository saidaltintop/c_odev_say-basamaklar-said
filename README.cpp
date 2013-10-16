c_odev_say-basamaklar-said
==========================
//said altıntop
#include<stdio.h>//"printf ve scanf_s" yi kullanabilmek için stdio.h kütüphanesini cagırdık
#include<conio.h>//"getch" i kullanmak için conio.h kütüphanesini cagırdık 
#include<Windows.h>//system("cls") yi kullanabilmek için bu kütüphaneyi cagırdık
void main()
{
	int sayi,birler,onlar,yuzler,binler,binlerdenkalan,yuzlerdenkalan;//kullanacaklarımızı tanımlıyoruz
   do
   {
   system("cls");//o anda ekrandakileri siler
   printf("4 basamakli bir sayi giriniz(cikis = -1) = ");
   scanf_s("%d",&sayi);//kullanıcının girdigi sayıyı "sayi" ya atıyoruz
     if(sayi != -1 )//programdan cıkıs için 
	 {
     if(sayi < 10000 && 0<sayi)//sayi 10000 le 0 arasındaysa buraya girsin
      {
       binler=sayi/1000; //binler basamagındaki rakamı bulmak için yapıyoruz
       binlerdenkalan=sayi % 1000; //son 3 basamakdaki sayıları bulmak için yapıyoruz( bunu bulmamızın nedeni bi sonraki adımda yüzler basamagındaki rakamı bulabilmek için)
       yuzler=binlerdenkalan / 100; //yuzler basamagındaki rakamı bulmak için yapıyoruz
       yuzlerdenkalan=binlerdenkalan % 100;//son 2 basamakdaki sayıları bulmak için yapıyoruz( bunu bulmamızın nedeni bi sonraki ve ondan sonraki adımlarda bunu kullancak olmamız.onlar ve birler basamagındaki rakamı bulabilmek için)
       onlar=yuzlerdenkalan / 10;//onlar basamagındaki rakamı bulmak için yapıyoruz
       birler=yuzlerdenkalan % 10;//birler basamagındaki rakamı bulmak için yapıyoruz
       printf("\nCozumlenecek Sayi = %d",sayi);//çözümlenecek sayıyı yazdırıyoruz
       printf("\n\nGirilen Sayi %d.",sayi);//girilen sayıyı yazdırıyoruz
       printf("\n\n%d Tane Binlik Sayi Var",binler);//binler basamagındaki rakamı yazdırıyoruz
       printf("\n\n%d Tane Yuzluk Sayi Var",yuzler);//yuzler basamagındaki rakamı yazdırıyoruz
       printf("\n\n%d Tane Onluk  Sayi Var",onlar);//onlar basamagındaki rakamı yazdırıyoruz
       printf("\n\n%d Tane Birlik Sayi Var",birler);//birler basamagındaki rakamı yazdırıyoruz
       printf("\n\nDEVAM ETMEK ICIN BIR TUSA BASINIZ" );
	 }  
	 else//sayi 10000 le 0 arasında değilse buraya girsin
	  {
   	   printf("\nLUTFEN 4 BASAMAKLI SAYI GIRINIZ\n");
	   printf("\nDEVAM ETMEK ICIN BIR TUSA BASINIZ" );
      }
	 }
	 _getch();//console ekranının kendi kendine kapanmaması için yazıyoruz
   }while(sayi != -1 );//sayi -1 e eşit degilse döngüye girsin
}

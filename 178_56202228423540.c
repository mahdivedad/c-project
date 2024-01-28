/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a;
int b;
int d;
int c;
int e;


// سالی که از کاربر می گیرد
    int saltavalodage;
    // ماهی که از کاربر می گیرد
    int mahtavalod;
    // روزی که از کاربر می گیرد
    int rooztavalod;
    // تفاضل سال دریافت شده با سال 1210 جهت محاسبه تعداد سال کبیسه
    int deltasal;
    // تفاضل سال دریافت شده با سال 1402 جهت محاسبه سن کاربر
    int deltasal2;
    // متغیر محاسبه تعداد روز های ماه دریافت شده از کاربر 
    int roozmah;
    // متغیر محاسبه تعداد روز های این ماه
    int roozh;
    // متغیر تعداد روز های گذشته از سال تولد تا تاریخ تولد
    int rooznahayimah;
    // متغیر تعداد روز های گذشته از امسال
    int rooznahayihal;
    // متغیر محاسبه تعداد سال کبیسه از سال 1210
    int taghsim;
    // حاصل تقسیم تفاضل سال با 1210 بر 33
    int taghsim2;
    // تعداد سال های کبیسه میان امسال و سال تولد دریافت شده از کاربر
    int remind;
    // سن نهایی بر حسب روز
    int seninrooz;
    // سن نهایی بر حسب ماه
    int seninmah;
    // تفاضل تعداد روز های گذشته از سال تولد و تعداد روز های گذشته از امسال
    int roozpayani;
    // امروز
    int roozhal=7;
    // این ماه
    int mahhal=11;
    // سال میلادی
    int christianyear;
    
    int hafteh;
    
    int mahsal;
    int deltarooz;
    int deltarooz2;
    int mah;
    
    int a;
    int b;

int sn(int saltavalodage,int mahtavalod,int rooztavalod)
{
    do{
    printf("\nEnter Year : ");
    scanf("%d",&saltavalodage);
    if(saltavalodage==0){
        a=0;
        d=menu(a=0);
    }
    else{
    if(saltavalodage>1402 || saltavalodage<0){
       printf("invalid input !"); 
    }
    else{
    if(saltavalodage!=0){
    printf("Enter Month : ");
    scanf("%d",&mahtavalod);
    }
    if(mahtavalod>12 || mahtavalod<1){
       printf("invalid input !");  
    }
    else{
    if(saltavalodage!=0){
    printf("Enter Day : ");
    scanf("%d",&rooztavalod);
    }
    if(mahtavalod<7){
        if(rooztavalod>31){
            printf("invalid input !");  
        }
    }
    else if(mahtavalod>6 && mahtavalod<12){
        if(rooztavalod>30){
            printf("invalid input !");  
        }
    }
    else if(mahtavalod==12){
        if(rooztavalod>29){
            printf("invalid input !");  
        }
    }

    // -------------------------------------------------
    deltasal2=1402-saltavalodage;
    // -------------------------------------------------
    seninmah=(deltasal2*12)+mahhal-mahtavalod;
    // -------------------------------------------------
    taghsim2=floor(deltasal/33);
    deltasal=saltavalodage-1210;
    if(saltavalodage<1342){
    taghsim=floor(deltasal/4)+taghsim2+1;
    }
    else if(saltavalodage>=1342){
    taghsim=floor(deltasal/4)+taghsim2;  
    }
    remind=47-taghsim;
    if(mahtavalod<7){
        roozmah=(mahtavalod-1)*31;
    }
    else if(mahtavalod>6 && mahtavalod<12){
        roozmah=(((mahtavalod-7)*30)+186);
    }
    else if(mahtavalod==12){
        roozmah=336;
    }
    rooznahayimah=roozmah+rooztavalod;
    if(mahhal<7){
        roozh=(mahhal-1)*31;
    }
    else if(mahhal>6 && mahhal<12){
        roozh=((mahhal-7)*30)+186;
    }
    else if(mahhal==12){
        roozh=336;
    }
    rooznahayihal=roozh+roozhal;
    roozpayani=rooznahayihal-rooznahayimah;
    seninrooz=(deltasal2*365)+remind+roozpayani;
    
    deltarooz=floor((seninrooz-(deltasal2*365))/30);
    
    deltarooz2=seninrooz-(deltasal2*365)-(deltarooz*30);
    
    if((mahtavalod<7 && rooztavalod<32) || (mahtavalod>6 && mahtavalod<12 && rooztavalod<31) || (mahtavalod==12 && rooztavalod<30)){
    if((seninrooz-1)%7==1){
        printf("\npanjshanbeh");
    }
    else if((seninrooz-1)%7==2){
        printf("\ncharshanbeh");
    }
    else if((seninrooz-1)%7==3){
        printf("\nseshanbeh");
    }
    else if((seninrooz-1)%7==4){
        printf("\ndoshanbeh");
    }
    else if((seninrooz-1)%7==5){
        printf("\nyekshanbeh");
    }
    else if((seninrooz-1)%7==6){
        printf("\nshanbeh");
    }
    else if((seninrooz-1)%7==0){
        printf("\njome");
    }    
    printf("\nYour age in year is : %d years %d months %d days \nYour age in month is : %d\nYour age in day is : %d",deltasal2,deltarooz,deltarooz2,seninmah,seninrooz+1);
}
    }
    }
    }
    }
    while(saltavalodage!=0);
}

// متغیر دریافت سال
int saltavalod;
// متغیر دریافت ماه
int mahtavalod;
// متغیر تفاضل سال با سال 1210;
int tafazolsal;
// متغیر حاصل تقسیم تفاضل بر 33
int taghsim;
// متغیر تقسیم تفاضل بر 4
int taghsim2;
// متغیر تعداد سال کبیسه از سال 1210
int kabiseh;
// متغیر دریافت تابع
int a;
// متغیر تفاضل سال دریافت شده با سال 1210
int deltasal;
//+تعدادسال های کبیسه متغیر ضرب سادل دریافت شده در 365
int majmooehsal;
// متغیر محاسبه تعداد روز های مجموع
int majmooehrooz;
// متغیر محاسبه تعداد روز های ماه های گذشته از امسال
int roozmah;
// باقی مانده مجموع روز بر 7
int remind;
// i
int i;
// باقی مانده سال دریافت شده بر 33
int remind2;
// باقی مانده مجموع روز بر 7
int remind3;
// وضعیت سال کبیسه
int vaziat;
// وضعیت باقی مانده جهت چاپ
// {
    int vaziatremind1;
    int vaziatremind2;
    int vaziatremind3;
    int vaziatremind4;
    int vaziatremind5;
    int vaziatremind6;
    int vaziatremind0;
// }
int b;

int majmooehrooz1;
    
int sum1;

int kabisehnumber(int saltavalod){
    if(saltavalod>1205 && saltavalod<=1210){b=0;}
    else if(saltavalod>1210 && saltavalod<=1214){b=1;} else if(saltavalod>1214 && saltavalod<=1218){b=2;}
    else if(saltavalod>1218 && saltavalod<=1222){b=3;} else if(saltavalod>1222 && saltavalod<=1226){b=4;}
    else if(saltavalod>1226 && saltavalod<=1230){b=5;} else if(saltavalod>1230 && saltavalod<=1234){b=6;}
    else if(saltavalod>1234 && saltavalod<=1238){b=7;} else if(saltavalod>1238 && saltavalod<=1243){b=8;}
    else if(saltavalod>1243 && saltavalod<=1247){b=9;} else if(saltavalod>1247 && saltavalod<=1251){b=10;}
    else if(saltavalod>1251 && saltavalod<=1255){b=11;} else if(saltavalod>1255 && saltavalod<=1259){b=12;}
    else if(saltavalod>1259 && saltavalod<=1263){b=13;} else if(saltavalod>1263 && saltavalod<=1267){b=14;}
    else if(saltavalod>1267 && saltavalod<=1271){b=15;} else if(saltavalod>1271 && saltavalod<=1276){b=16;}
    else if(saltavalod>1276 && saltavalod<=1280){b=17;} else if(saltavalod>1280 && saltavalod<=1284){b=18;}
    else if(saltavalod>1284 && saltavalod<=1288){b=19;} else if(saltavalod>1288 && saltavalod<=1292){b=20;}
    else if(saltavalod>1292 && saltavalod<=1296){b=21;} else if(saltavalod>1296 && saltavalod<=1300){b=22;}
    else if(saltavalod>1300 && saltavalod<=1304){b=23;} else if(saltavalod>1304 && saltavalod<=1309){b=24;}
    else if(saltavalod>1309 && saltavalod<=1313){b=25;} else if(saltavalod>1313 && saltavalod<=1317){b=26;}
    else if(saltavalod>1317 && saltavalod<=1321){b=27;} else if(saltavalod>1321 && saltavalod<=1325){b=28;}
    else if(saltavalod>1325 && saltavalod<=1329){b=29;} else if(saltavalod>1329 && saltavalod<=1333){b=30;}
    else if(saltavalod>1333 && saltavalod<=1337){b=31;} else if(saltavalod>1337 && saltavalod<=1342){b=32;}
    else if(saltavalod>1342 && saltavalod<=1346){b=33;} else if(saltavalod>1346 && saltavalod<=1350){b=34;}
    else if(saltavalod>1350 && saltavalod<=1354){b=35;} else if(saltavalod>1354 && saltavalod<=1358){b=36;}
    else if(saltavalod>1358 && saltavalod<=1362){b=37;} else if(saltavalod>1362 && saltavalod<=1366){b=38;}
    else if(saltavalod>1366 && saltavalod<=1370){b=39;} else if(saltavalod>1370 && saltavalod<=1375){b=40;}
    else if(saltavalod>1375 && saltavalod<=1379){b=41;} else if(saltavalod>1379 && saltavalod<=1383){b=42;}
    else if(saltavalod>1383 && saltavalod<=1387){b=43;} else if(saltavalod>1387 && saltavalod<=1391){b=44;}
    else if(saltavalod>1391 && saltavalod<=1395){b=45;} else if(saltavalod>1395 && saltavalod<=1399){b=46;}
    else if(saltavalod>1399 && saltavalod<=1403){b=47;} else if(saltavalod>1403 && saltavalod<=1408){b=48;}
    else if(saltavalod>1408 && saltavalod<=1412){b=49;} else if(saltavalod>1412 && saltavalod<=1416){b=50;}
    else if(saltavalod>1416 && saltavalod<=1420){b=51;} else if(saltavalod>1420 && saltavalod<=1424){b=52;}
    else if(saltavalod>1424 && saltavalod<=1428){b=53;} else if(saltavalod>1428 && saltavalod<=1432){b=54;}
    else if(saltavalod>1432 && saltavalod<=1436){b=55;} else if(saltavalod>1436 && saltavalod<=1441){b=56;}
    else if(saltavalod>1441 && saltavalod<=1445){b=57;} else if(saltavalod>1445 && saltavalod<=1449){b=58;}
    else if(saltavalod>1449 && saltavalod<=1453){b=59;} else if(saltavalod>1453 && saltavalod<=1457){b=60;}
    else if(saltavalod>1457 && saltavalod<=1461){b=61;} else if(saltavalod>1461 && saltavalod<=1465){b=62;}
    else if(saltavalod>1465 && saltavalod<=1469){b=63;} else if(saltavalod>1469 && saltavalod<=1474){b=64;}
    else if(saltavalod>1474 && saltavalod<=1478){b=65;} else if(saltavalod>1478 && saltavalod<=1482){b=66;}
    else if(saltavalod>1482 && saltavalod<=1486){b=67;} else if(saltavalod>1486 && saltavalod<=1490){b=68;}
    else if(saltavalod>1490 && saltavalod<=1494){b=69;} else if(saltavalod>1494 && saltavalod<=1498){b=70;}
    return b;
    
}

int faseleh;
int mahbad;
int ca(int saltavalod,int mahtavalod){
    do{
        int sum=0;
    
    printf("\n\n\nEnter Year : ");
    scanf("%d",&saltavalod);
    if(saltavalod==0){
        a=0;
        d=menu(0);
    }
    else if(saltavalod>1498 || saltavalod<1206){
        printf("Invalid input !");
    }
    else{
    printf("Enter Month : ");
    scanf("%d",&mahtavalod);
    if(mahtavalod>12 || mahtavalod<1){
        do{
            printf("Invalid input !");
            printf("\nEnter Month : ");
            scanf("%d",&mahtavalod);
        }
        while(mahtavalod>12);
    }
    if(mahtavalod>12 || mahtavalod<1){
        printf("Invalid input !");
    }
    else
    {
    deltasal=saltavalod-1206;
    c=kabisehnumber(saltavalod);
    majmooehsal=(deltasal*365)+b;
    if(mahtavalod<7){
        roozmah=(mahtavalod-1)*31;
    }
    else if(mahtavalod>6 && mahtavalod<12){
        roozmah=((mahtavalod-7)*30)+186;
    }
    else if(mahtavalod==12){
        roozmah=336;
    }
    majmooehrooz=roozmah+majmooehsal;
    remind2=saltavalod%33;
    
    if(saltavalod>1209 && saltavalod<=1498){
        if(remind2==1 || remind2==5 || remind2==9 || remind2==13 || remind2==17 || remind2==22 || remind2==26 || remind2==30)
        {
            vaziat=1;
        }
        else
        {
           vaziat=0; 
        }
    
     switch(mahtavalod){
        
        case 1:
        printf("[");
        printf("________");
        printf("Farvardin");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 2:
        printf("[");
        printf("________");
        printf("Ordibehesht");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 3:
        printf("[");
        printf("________");
        printf("Khordad");
        printf("________");
        printf("]");;
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 4:
        printf("[");
        printf("________");
        printf("Tir");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 5:
        printf("[");
        printf("________");
        printf("Mordad");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 6:
        printf("[");
        printf("________");
        printf("Shahrivar");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 7:
        printf("[");
        printf("________");
        printf("Mehr");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 8:
        printf("[");
        printf("________");
        printf("Aban");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 9:
        printf("[");
        printf("________");
        printf("Azar");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 10:
        printf("[");
        printf("________");
        printf("Dey");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 11:
        printf("[");
        printf("________");
        printf("Bahman");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 12:
        printf("[");
        printf("________");
        printf("Esfand");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
    }
    remind3=(majmooehrooz+1)%7;
    
    if(remind3==1){
        printf("              ");
    }
    else if(remind3==2){
        printf("                 ");
    }
    else if(remind3==4){
        printf("  ");
    }
    else if(remind3==5){
        printf("     ");
    }
    else if(remind3==6){
        printf("        ");
    }
    else if(remind3==0){
        printf("           ");
    }
    
    if(mahtavalod<7){
    for(i=1;i<32;i++){
             majmooehrooz=majmooehrooz+1;
             remind=majmooehrooz%7;
             sum=sum+1;
             if(remind==3){
                 if(sum<10){
                 printf("\n");
                 printf("0%d",sum);
                 }
                 else{
                 printf("\n");
                 printf("%d",sum);   
                 }
             }
             else if(remind==4){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==5){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==6){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==0){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
              else if(remind==1){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==2){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
    }
    }
    else if(mahtavalod>6 && mahtavalod<12){
    for(i=1;i<31;i++){
             majmooehrooz=majmooehrooz+1;
             remind=majmooehrooz%7;
             sum=sum+1;
             sum1=sum%31;
             if(remind==3){
                 if(sum1<10){
                 printf("\n");
                 printf("0%d",sum);
                 }
                 else{
                 printf("\n");
                 printf("%d",sum);   
                 }
             }
             else if(remind==4){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==5){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==6){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==0){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
              else if(remind==1){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==2){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             
    }
    }
    else if(mahtavalod==12 && vaziat==1){
    for(i=1;i<31;i++){
            majmooehrooz=majmooehrooz+1;
            remind=majmooehrooz%7;
            sum=sum+1;
            sum1=sum%31;
             if(remind==3){
                 if(sum1<10){
                 printf("\n");
                 printf("0%d",sum1);
                 }
                 else{
                 printf("\n");
                 printf("%d",sum1);   
                 }
             }
             else if(remind==4){
                 if(sum<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
             else if(remind==5){
                 if(sum<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
             else if(remind==6){
                 if(sum1<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
             else if(remind==0){
                 if(sum1<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
              else if(remind==1){
                 if(sum1<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
             else if(remind==2){
                 if(sum1<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
    }
    }
    else if(mahtavalod==12 && vaziat==0){
    for(i=1;i<30;i++){
            majmooehrooz=majmooehrooz+1;
            remind=majmooehrooz%7;
            sum=sum+1;
             if(remind==3){
                 if(sum<10){
                 printf("\n");
                 printf("0%d",sum);
                 }
                 else{
                 printf("\n");
                 printf("%d",sum);   
                 }
             }
             else if(remind==4){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==5){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==6){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==0){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
              else if(remind==1){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==2){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
    }
    }
    }
    }
    }
    sum=0;
    if(mahtavalod!=0){
    printf("\n\nEnter distance :");
    scanf("%d",&faseleh);
    if(faseleh==0){
        a=0;
        d=menu(0);
    }
    }
    mahbad=(faseleh+mahtavalod)%12;
    deltasal=saltavalod-1206;
    c=kabisehnumber(saltavalod);
    majmooehsal=(deltasal*365)+b;
    if(mahbad<7){
        roozmah=(mahbad-1)*31;
    }
    else if(mahbad>6 && mahbad<12){
        roozmah=((mahbad-7)*30)+186;
    }
    else if(mahbad==12){
        roozmah=336;
    }
    majmooehrooz1=roozmah+majmooehsal;
    remind2=saltavalod%33;
    
    if(saltavalod>1209 && saltavalod<=1498){
        if(remind2==1 || remind2==5 || remind2==9 || remind2==13 || remind2==17 || remind2==22 || remind2==26 || remind2==30)
        {
            vaziat=1;
        }
        else
        {
           vaziat=0; 
        }
        if(faseleh>0){
    switch(mahbad){
        
        case 1:
        printf("[");
        printf("________");
        printf("Farvardin");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 2:
        printf("[");
        printf("________");
        printf("Ordibehesht");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 3:
        printf("[");
        printf("________");
        printf("Khordad");
        printf("________");
        printf("]");;
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 4:
        printf("[");
        printf("________");
        printf("Tir");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 5:
        printf("[");
        printf("________");
        printf("Mordad");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 6:
        printf("[");
        printf("________");
        printf("Shahrivar");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 7:
        printf("[");
        printf("________");
        printf("Mehr");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 8:
        printf("[");
        printf("________");
        printf("Aban");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 9:
        printf("[");
        printf("________");
        printf("Azar");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 10:
        printf("[");
        printf("________");
        printf("Dey");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 11:
        printf("[");
        printf("________");
        printf("Bahman");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
        case 12:
        printf("[");
        printf("________");
        printf("Esfand");
        printf("________");
        printf("]");
        printf("\n\nSH YE DO SE CH PA JO \n\n");
        break;
        
    }
    remind3=(majmooehrooz+1)%7;
    
    if(remind3==1){
        printf("              ");
    }
    else if(remind3==2){
        printf("                 ");
    }
    else if(remind3==4){
        printf("  ");
    }
    else if(remind3==5){
        printf("     ");
    }
    else if(remind3==6){
        printf("        ");
    }
    else if(remind3==0){
        printf("           ");
    }
    
    if(mahbad<7){
    for(i=1;i<32;i++){
             majmooehrooz=majmooehrooz+1;
             remind=majmooehrooz%7;
             sum=sum+1;
             if(remind==3){
                 if(sum<10){
                 printf("\n");
                 printf("0%d",sum);
                 }
                 else{
                 printf("\n");
                 printf("%d",sum);   
                 }
             }
             else if(remind==4){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==5){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==6){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==0){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
              else if(remind==1){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==2){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
    }
    }
    else if(mahbad>6 && mahbad<12){
    for(i=1;i<31;i++){
             majmooehrooz=majmooehrooz+1;
             remind=majmooehrooz%7;
             sum=sum+1;
             sum1=sum%31;
             if(remind==3){
                 if(sum1<10){
                 printf("\n");
                 printf("0%d",sum);
                 }
                 else{
                 printf("\n");
                 printf("%d",sum);   
                 }
             }
             else if(remind==4){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==5){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==6){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==0){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
              else if(remind==1){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==2){
                 if(sum1<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             
    }
    }
    else if(mahbad==12 && vaziat==1){
    for(i=1;i<31;i++){
            majmooehrooz=majmooehrooz+1;
            remind=majmooehrooz%7;
            sum=sum+1;
            sum1=sum%31;
             if(remind==3){
                 if(sum1<10){
                 printf("\n");
                 printf("0%d",sum1);
                 }
                 else{
                 printf("\n");
                 printf("%d",sum1);   
                 }
             }
             else if(remind==4){
                 if(sum<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
             else if(remind==5){
                 if(sum<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
             else if(remind==6){
                 if(sum1<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
             else if(remind==0){
                 if(sum1<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
              else if(remind==1){
                 if(sum1<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
             else if(remind==2){
                 if(sum1<10){
                 printf(" 0%d",sum1);
                 }
                 else{
                 printf(" %d",sum1);   
                 }
             }
    }
    }
    else if(mahbad==12 && vaziat==0){
    for(i=1;i<30;i++){
            majmooehrooz=majmooehrooz+1;
            remind=majmooehrooz%7;
            sum=sum+1;
             if(remind==3){
                 if(sum<10){
                 printf("\n");
                 printf("0%d",sum);
                 }
                 else{
                 printf("\n");
                 printf("%d",sum);   
                 }
             }
             else if(remind==4){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==5){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==6){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==0){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
              else if(remind==1){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
             else if(remind==2){
                 if(sum<10){
                 printf(" 0%d",sum);
                 }
                 else{
                 printf(" %d",sum);   
                 }
             }
    }
    }
    }
    }
    }
    while(saltavalod!=0);
}

    int salshamsiconversion;
    int mahshamsiconversion;
    int roozshamsiconversion;
    
int conversion(int salshamsiconversion,int mahshamsiconversion,int roozshamsiconversion){
    
    int salnahayishamsiconversion;
    int mahnahayishamsiconversion;
    // ----------------------------------
    int rooznahayishamsiconversion;
    int rooznahayimiladiconversion;;
    // ----------------------------------
    int salmiladiconversion;
    int mahmiladiconversion;
    int roozmiladiconversion;
    // ----------------------------------
    int vaziatkabisehshamsiconversion;
    int vaziatkabisehmiladiconversion;
    // ----------------------------------
    int kabisehconversion;
    // ----------------------------------
    do{
    printf("\n\nEnter year : ");
    scanf("%d",&salshamsiconversion);
    if(salshamsiconversion==0){
        a=0;
        d=menu(0);
    }
    if(salshamsiconversion!=0){
    printf("Enter month : ");
    scanf("%d",&mahshamsiconversion);
    if(mahshamsiconversion<1 || mahshamsiconversion>12){
        printf("Invalid input !");
    }
    else{
    printf("Enter day : ");
    scanf("%d",&roozshamsiconversion);
    if(mahshamsiconversion<7 &&roozshamsiconversion>31){
        printf("invalid input !");
    }
    else if(mahshamsiconversion>6 && roozshamsiconversion>30){
        printf("invalid input !");
    }
    else if(mahshamsiconversion==12 && roozshamsiconversion>29){
        printf("invalid input !");
    }
    else{
    if(mahshamsiconversion<10){
        salmiladiconversion=salshamsiconversion+621;
    }
    else if(mahshamsiconversion==10){
        if(roozshamsiconversion<11){
        salmiladiconversion=salshamsiconversion+621;
        }
        else if(roozshamsiconversion>=11){
        salmiladiconversion=salshamsiconversion+622;   
        }
    }
    else if(mahshamsiconversion>10){
        salmiladiconversion=salshamsiconversion+622;
    }
    printf("Year in christian calender is : ");
    printf("%d",salmiladiconversion);
    // -------------------------------------------------------------------------
    if(mahshamsiconversion<7){
        mahnahayishamsiconversion=(mahshamsiconversion-1)*31;
    }
    else if(mahshamsiconversion>6 && mahshamsiconversion<12){
        mahnahayishamsiconversion=((mahshamsiconversion-7)*30)+186;
    }
    else if(mahshamsiconversion==12){
        mahnahayishamsiconversion=336;
    }
    // -------------------------------------------------------------------------
    if((salmiladiconversion)%100==0){
        if((salmiladiconversion)%400==0){
            vaziatkabisehmiladiconversion=1;
        }
        else{
            vaziatkabisehmiladiconversion=0;
        }
    }
    else{
        if((salmiladiconversion)%4==0){
            vaziatkabisehmiladiconversion=1;
        }
        else{
            vaziatkabisehmiladiconversion=0;
        }
    }
    // -------------------------------------------------------------------------
    if(vaziatkabisehmiladiconversion==1){
        kabisehconversion=-1;
    }
    // -------------------------------------------------------------------------
    rooznahayishamsiconversion=mahnahayishamsiconversion+roozshamsiconversion;
    if(vaziatkabisehmiladiconversion==0){
    if(rooznahayishamsiconversion<=11){
        printf("\nMonth in christian calender is : March");
        rooznahayimiladiconversion=rooznahayishamsiconversion+20;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>11 && rooznahayishamsiconversion<=31){
        printf("\nMonth in christian calender is : April");
        rooznahayimiladiconversion=rooznahayishamsiconversion-11;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>31 && rooznahayishamsiconversion<=41){
         printf("\nMonth in christian calender is : April");
         rooznahayimiladiconversion=rooznahayishamsiconversion-11;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>41 && rooznahayishamsiconversion<=62){
         printf("\nMonth in christian calender is : May");
         rooznahayimiladiconversion=rooznahayishamsiconversion-41;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>62 && rooznahayishamsiconversion<=72){
         printf("\nMonth in christian calender is : May");
         rooznahayimiladiconversion=rooznahayishamsiconversion-41;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>72 && rooznahayishamsiconversion<=93){
         printf("\nMonth in christian calender is : June");
         rooznahayimiladiconversion=rooznahayishamsiconversion-72;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>93 && rooznahayishamsiconversion<=102){
         printf("\nMonth in christian calender is : June");
         rooznahayimiladiconversion=rooznahayishamsiconversion-72;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>102 && rooznahayishamsiconversion<=133){
         printf("\nMonth in christian calender is : July");
         rooznahayimiladiconversion=rooznahayishamsiconversion-102;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>133 && rooznahayishamsiconversion<=164){
        printf("\nMonth in christian calender is : August");
        rooznahayimiladiconversion=rooznahayishamsiconversion-133;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>164 && rooznahayishamsiconversion<=194){
        printf("\nMonth in christian calender is : September");
        rooznahayimiladiconversion=rooznahayishamsiconversion-164;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion >194 && rooznahayishamsiconversion<=225){
        printf("\nMonth in christian calender is : October");
        rooznahayimiladiconversion=rooznahayishamsiconversion-194;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>225 && rooznahayishamsiconversion<=255){
        printf("\nMonth in christian calender is : November");
        rooznahayimiladiconversion=rooznahayishamsiconversion-225;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>255 && rooznahayishamsiconversion<=286){
        printf("\nMonth in christian calender is : December");
        rooznahayimiladiconversion=rooznahayishamsiconversion-255;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>286 && rooznahayishamsiconversion<=317){
        printf("\nMonth in christian calender is : January");
        rooznahayimiladiconversion=rooznahayishamsiconversion-286;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>317 && rooznahayishamsiconversion<=345){
        printf("\nMonth in christian calender is : February");
        rooznahayimiladiconversion=rooznahayishamsiconversion-317;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>345 && rooznahayishamsiconversion<=365){
        printf("\nMonth in christian calender is : March");
        rooznahayimiladiconversion=rooznahayishamsiconversion-345;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    }
    
    if(vaziatkabisehmiladiconversion==1){
    if(rooznahayishamsiconversion<=11){
        printf("\nMonth in christian calender is : March");
        rooznahayimiladiconversion=rooznahayishamsiconversion+20+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>11 && rooznahayishamsiconversion<=31){
        printf("\nMonth in christian calender is : April");
        rooznahayimiladiconversion=rooznahayishamsiconversion-11+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>31 && rooznahayishamsiconversion<=41){
         printf("\nMonth in christian calender is : April");
         rooznahayimiladiconversion=rooznahayishamsiconversion-11+kabisehconversion;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>41 && rooznahayishamsiconversion<=62){
         printf("\nMonth in christian calender is : May");
         rooznahayimiladiconversion=rooznahayishamsiconversion-41+kabisehconversion;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>62 && rooznahayishamsiconversion<=72){
         printf("\nMonth in christian calender is : May");
         rooznahayimiladiconversion=rooznahayishamsiconversion-41+kabisehconversion;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>72 && rooznahayishamsiconversion<=93){
         printf("\nMonth in christian calender is : June");
         rooznahayimiladiconversion=rooznahayishamsiconversion-72+kabisehconversion;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>93 && rooznahayishamsiconversion<=102){
         printf("\nMonth in christian calender is : June");
         rooznahayimiladiconversion=rooznahayishamsiconversion-72+kabisehconversion;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>102 && rooznahayishamsiconversion<=133){
         printf("\nMonth in christian calender is : July");
         rooznahayimiladiconversion=rooznahayishamsiconversion-102+kabisehconversion;
         printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>133 && rooznahayishamsiconversion<=164){
        printf("\nMonth in christian calender is : August");
        rooznahayimiladiconversion=rooznahayishamsiconversion-133+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>164 && rooznahayishamsiconversion<=194){
        printf("\nMonth in christian calender is : September");
        rooznahayimiladiconversion=rooznahayishamsiconversion-164+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion >194 && rooznahayishamsiconversion<=225){
        printf("\nMonth in christian calender is : October");
        rooznahayimiladiconversion=rooznahayishamsiconversion-194+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>225 && rooznahayishamsiconversion<=255){
        printf("\nMonth in christian calender is : November");
        rooznahayimiladiconversion=rooznahayishamsiconversion-225+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>255 && rooznahayishamsiconversion<=286){
        printf("\nMonth in christian calender is : December");
        rooznahayimiladiconversion=rooznahayishamsiconversion-255+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>286 && rooznahayishamsiconversion<=317){
        printf("\nMonth in christian calender is : January");
        rooznahayimiladiconversion=rooznahayishamsiconversion-286+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>317 && rooznahayishamsiconversion<=345){
        printf("\nMonth in christian calender is : February");
        rooznahayimiladiconversion=rooznahayishamsiconversion-317+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    else if(rooznahayishamsiconversion>345 && rooznahayishamsiconversion<=365){
        printf("\nMonth in christian calender is : March");
        rooznahayimiladiconversion=rooznahayishamsiconversion-345+kabisehconversion;
        printf("\nDay in christian calender is : %d",rooznahayimiladiconversion);
    }
    }
    }
    }
    }
    }
    while(salshamsiconversion!=0);
}
    
int menu(int a){
    if(a==0){
        system("clear");
    }
    printf("________MENU________\n");
    printf("-------------------\n");
    printf("[1] AGE\n");
    printf("[2] CALENDER\n");
    printf("[3] CONVERSION\n");
    printf("[0] QUIT\n");
    printf("-------------------\n");
    if(a==2){
        c=ca(saltavalod,mahtavalod);
    }
    if(a==1){
        c=sn(saltavalod,mahtavalod,rooztavalod);
    }
    if(a==3){
        c=conversion(salshamsiconversion,mahshamsiconversion,roozshamsiconversion);
    }
}

int b;
int c;


int main()
{
    printf("________MENU________\n");
    printf("-------------------\n");
    printf("[1] AGE\n");
    printf("[2] CALENDER\n");
    printf("[3] CONVERSION\n");
    printf("[0] QUIT\n");
    printf("-------------------\n");
    printf("select option :");
    int a;
    do{
    scanf("%d",&a);
    if(a==0){
        system("clear");
        printf("Bye!");
    }
    if(a!=0){
        system("clear");
        b=menu(a);
    }
    }
    while(a!=0);
}

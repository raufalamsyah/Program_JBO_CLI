#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <dos.h>
#include <dir.h>


int gotoxy(int x, int y)
{
    COORD coord= {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


struct akun
{
    char jabatan[2];
    char nama[19];
    char jk[2];
    char email[30];
    char password[30];
    char id_card[19];
    char alamat[30];
    char RT[2];
    char RW[2];
    char kelurahan[19];
    char propinsi[19];
    char kecamatan[19];
    char kabupaten[19];
    char kota[19];
    char kode_pos[10];
    char negara[19];
    char no_hp[19];
    char no_rek[30];
    struct akun *next;
};
struct akun *login_s;
struct akun *awal, *temp, *akhir;
int node_index=0,logo=0,logo_b=0;;char index[30];
FILE *baca;
char temp_email[30];
char username[30];
char password[30];
//int no_jabatan=0;

char pilihan[10],pilihan1;

void boot_logo()
{
    if(logo==5&&logo_b==0)
    {
        gotoxy(29,5);printf("\xDB\xDB");
        gotoxy(32,5);printf("\xDB\xDB");
        gotoxy(34,5);printf("\xDB\xDB");
        gotoxy(36,5);printf("\xDB\xDB");
        gotoxy(41,5);printf("\xDB\xDB");
        gotoxy(43,5);printf("\xDB\xDB");
    }
    else if(logo==6&&logo_b==0)
    {
        gotoxy(29,6);printf("\xDB\xDB");
        gotoxy(32,6);printf("\xDB\xDB");
        gotoxy(37,6);printf("\xDB\xDB");
        gotoxy(40,6);printf("\xDB\xDB");
        gotoxy(44,6);printf("\xDB\xDB");
    }
    else if(logo==7&&logo_b==0)
    {
        gotoxy(29,7);printf("\xDB\xDB");
        gotoxy(32,7);printf("\xDB\xDB");
        gotoxy(36,7);printf("\xDB\xDB");
        gotoxy(34,7);printf("\xDB\xDB");
        gotoxy(40,7);printf("\xDB\xDB");
        gotoxy(44,7);printf("\xDB\xDB");
    }
    else if(logo==8&&logo_b==0)
    {
        gotoxy(29,8);printf("\xDB\xDB");
        gotoxy(32,8);printf("\xDB\xDB");
        gotoxy(37,8);printf("\xDB\xDB");
        gotoxy(40,8);printf("\xDB\xDB");
        gotoxy(44,8);printf("\xDB\xDB");
    }
    else if(logo==9&&logo_b==0)
    {
       gotoxy(29,9);printf("\xDB\xDB");
       gotoxy(25,9);printf("\xDB\xDB");
       gotoxy(32,9);printf("\xDB\xDB");
       gotoxy(37,9);printf("\xDB\xDB");
       gotoxy(40,9);printf("\xDB\xDB");
       gotoxy(44,9);printf("\xDB\xDB");
    }
    else if(logo==10&&logo_b==0)
    {
        gotoxy(29,10);printf("\xDB\xDB");
        gotoxy(28,10);printf("\xDB\xDB");
        gotoxy(26,10);printf("\xDB\xDB");
        gotoxy(25,10);printf("\xDB\xDB");
        gotoxy(32,10);printf("\xDB\xDB");
        gotoxy(33,10);printf("\xDB\xDB\xDB\xDB\xDB");
        gotoxy(41,10);printf("\xDB\xDB");
        gotoxy(43,10);printf("\xDB\xDB");

    }
    logo++;
    if(logo>=14)
    {
        logo_b++;
        if(logo_b==1)
        {
            gotoxy(0,10);printf("                                                                       ");
        }
        if(logo_b==2)
        {
            gotoxy(0,9); printf("                                                                       ");
        }
        if(logo_b==3)
        {
            gotoxy(0,8); printf("                                                                       ");
        }
        if(logo_b==4)
        {
            gotoxy(0,7); printf("                                                                       ");
        }
        if(logo_b==5)
        {
            gotoxy(0,6); printf("                                                                       ");
        }
        if(logo_b==6)
        {
            gotoxy(0,5); printf("                                                                       ");
        }
        if(logo_b==7)
        {
            logo_b=0;
            logo=0;
        }

    }

}

void bootproses()
{
    int i,people_index=0;
    int *pindex;
    baca=fopen("people_index.dat","a+");
        gotoxy(25,15);
        printf("WELCOME TO JBO SOFTWARE");
        pindex=(int *)malloc(sizeof(int));
        fread(pindex,sizeof(int),1,baca);
        people_index=*pindex;
        fclose(baca);

        //printf("%d %d",*pindex,people_index);

        baca=fopen("db_akun.dat","a+");
        for(i=0;i<people_index;i++)
        {
            baca_file();
        }
        fclose(baca);

        //Start Loading
        int j=0,c=0;








        gotoxy(10,17);
        printf("============================================================");
        gotoxy(10,19);
        printf("============================================================");
        for(i=0;i<=100;i++)
        {
            gotoxy(65,18);
            printf("%-3d %c",i,'%');Sleep(50);
            if(i%2==0)
            {
                boot_logo();
                gotoxy(j+10,18);
                printf("\xDB");
                j++;
                if(c%5==0)
                {
                    system("title J");
                    switch(c)
                    {
                        case 1:
                        {
                            system("Color F9");system("title J");
                            break;
                        }
                        case 2:
                        {
                            system("Color F0");system("title Ju");
                            break;
                        }
                        case 3:
                        {
                            system("Color FC");system("title Jual");
                            break;
                        }
                        case 4:
                        {
                            system("Color 0F");system("title Jual ");
                            break;
                        }
                        case 5:
                        {
                            system("Color 0E");system("title Jual B");
                            break;
                        }
                        case 6:
                        {
                            system("Color CE");system("title Jual Be");
                            break;
                        }
                        case 7:
                        {
                            system("Color CF");system("title Jual Bel");
                            break;
                        }
                        case 8:
                        {
                            system("Color C0");system("title Jual Beli");
                            break;
                        }
                        case 9:
                        {
                            system("Color A0");system("title Jual Beli ");
                            break;
                        }
                        case 10:
                        {
                            system("Color A9");system("title Jual Beli O");
                            break;
                        }
                        case 11:
                        {
                            system("Color AC");system("title Jual Beli On");
                            break;
                        }
                        case 12:
                        {
                            system("Color 9F");system("title Jual Beli Onl");
                            break;
                        }
                        case 13:
                        {
                            system("Color 9E");system("title Jual Beli Onli");
                            break;
                        }
                        case 14:
                        {
                            system("Color B9");system("title Jual Beli Onlin");
                            break;
                        }
                        case 15:
                        {
                            system("Color B0");system("title Jual Beli Online");
                            break;
                        }
                        case 16:
                        {
                            system("Color BC");system("title Jual Beli Online");
                            break;
                        }
                        case 17:
                        {
                            system("Color EC");
                        break;
                        }
                        case 18:
                        {
                            system("Color E9");
                            break;
                        }
                        case 19:
                        {
                            system("Color E0");
                            break;
                        }
                    }
                    if(c==20)
                    {
                    c=0;
                    }

                }
                c++;

            }
        }
        Sleep(2000);
        //End Loading

        system("cls");
        //printf("%s",awal->next->nama);




}


void header()
{
    printf("==================================================================================");
    gotoxy(21,1);
    printf("  Jual Beli Online (www.jbo.com)");
    printf("\n==================================================================================\n");
}

void menu_utama()
{
    system("cls");


    //if(no_jabatan==0)
    //{
        header();

        gotoxy(18,5);printf("(1) Login");
        gotoxy(18,6);printf("(2) Buat Akun Baru");
        gotoxy(18,7);printf("(3) Lihat Barang");
        gotoxy(47,5);printf("(4) Exit");
        gotoxy(18,11);printf("Note:");
        gotoxy(18,12);printf("Masukan nomor diatas untuk memilih");
        gotoxy(18,13);printf("Ketik 'help' untuk informasi lebih lanjut");
        //tampil();
        gotoxy(18,9);printf("Pilihan : ");scanf("%s",&pilihan);fseek(stdin,0,SEEK_END);
        if(strcmp(pilihan,"change")==0)
        {
            change_color();
            menu_utama();
        }
        if(strcmp(pilihan,"help")==0)
        {
            gotoxy(0,15);printf("Help");
            gotoxy(0,16);printf("==================================================================================");

            gotoxy(0,18);printf("Ketik 'change' untuk Merubah Warna Background dan Font");
            gotoxy(0,19);printf("Ketik '1' untuk masuk kesistem sehingga dapat melakukan transaksi");
            gotoxy(0,20);printf("Ketik '2' untuk membuat akun baru jika anda belum terdaftar");
            gotoxy(0,21);printf("Ketik '3' untuk melihat daftar barang yang dijual");
            getch();
            system("cls");
            menu_utama();
        }
        pilihan1=pilihan[0];
        switch(pilihan1)
        {
            case '1':
            {
                login();
                break;
            }
            case '2':
            {
                registrasi_anggota();
                break;
            }
            case '3':
            {
                break;
            }
            case '4':
            {
                printf("Good Bye..");getch();
                exit(0);
                break;
            }
            default:
            {
                printf("Nomor yang anda masukkan tidak ada pada menu..");getch();
                system("cls");
                menu_utama();
                break;
            }
        }
    //}
    //else if(no_jabatan==3)
    //{

    //}

}


void menu_owner()
{
    system("cls");
    header();
        gotoxy(18,3);printf("Welcome %s",login_s->nama);
        gotoxy(18,5);printf("(1) Buat Akun Admin");
        gotoxy(18,6);printf("(2) Manajemen Barang");
        gotoxy(18,7);printf("(3) Manajemen Akun");
        gotoxy(47,5);printf("(4) Lihat Barang");
        gotoxy(47,6);printf("(5) Perpesanan/Message");
        gotoxy(47,7);printf("(6) Laporan Pelanggaran");
        gotoxy(18,11);printf("Note:");
        gotoxy(18,12);printf("Masukan nomor diatas untuk memilih");
        gotoxy(18,13);printf("Ketik 'help' untuk informasi lebih lanjut");
        //tampil();
        gotoxy(18,9);printf("Pilihan : ");scanf("%s",&pilihan);fseek(stdin,0,SEEK_END);
        if(strcmp(pilihan,"change")==0)
        {
            change_color();
            menu_owner();
        }
        else if(strcmp(pilihan,"logout")==0)
        {
            //no_jabatan=0;
            menu_utama();
        }
        if(strcmp(pilihan,"help")==0)
        {
            gotoxy(0,15);printf("Help");
            gotoxy(0,16);printf("==================================================================================");

            gotoxy(0,18);printf("Ketik 'logout' untuk keluar dari akun");
            gotoxy(0,19);printf("Ketik 'change' untuk Merubah Warna Background dan Font");
            gotoxy(0,20);printf("Ketik '1' untuk membuat akun admin");
            gotoxy(0,21);printf("Ketik '2' untuk memanajemen barang");
            gotoxy(0,22);printf("Ketik '3' untuk memanajemen akun");
            gotoxy(0,23);printf("Ketik '4' untuk melihat daftar barang yang dijual");
            gotoxy(0,24);printf("Ketik '5' untuk melihat atau mengirim pesan");
            gotoxy(0,25);printf("Ketik '6' untuk melihat laporan pelanggaran");
            getch();
            system("cls");
            menu_owner();
        }
        pilihan1=pilihan[0];
        switch(pilihan1)
        {
            case '1':
            {
                //login();
                break;
            }
            case '2':
            {
                //registrasi_anggota();
                break;
            }
            case '3':
            {
                break;
            }
            case '4':
            {
                printf("Good Bye..");getch();
                exit(0);
                break;
            }
            default:
            {
                printf("Nomor yang anda masukkan tidak ada pada menu..");getch();
                system("cls");
                menu_owner();
                break;
            }
        }
}

void baca_file()
{

    if(node_index==0)
    {
        temp=(struct akun *)malloc(sizeof(struct akun));
        //openfile=fopen("db_data.txt","a+");
        fread(temp,sizeof(struct akun),1,baca);
        awal=temp;
        temp->next=NULL;
        akhir=temp;
        node_index++;
    }
    else
    {
        temp=(struct akun *)malloc(sizeof(struct akun));
        //openfile=fopen("db_data.txt","a+");
        fread(temp,sizeof(struct akun),1,baca);
        temp->next=NULL;
        akhir->next=temp;
        akhir=temp;
        node_index++;

    }
}

void reg_input()
{
    temp=(struct akun *)malloc(sizeof(struct akun));
    gotoxy(0,15);printf("Registrasi Akun Baru (ketik 'exit' untuk batal registrasi)");
    gotoxy(0,16);printf("==================================================================================");
    fseek(stdin,0,SEEK_END);
    printf("\nNama                    +: ");gets(temp->nama);fseek(stdin,0,SEEK_END);

    if(strcmp(temp->nama,"exit")==0)
    {

        free(temp);
        system("cls");
        menu_utama();
    }
    printf("\nJenis Kelamin [L/K]     +: ");gets(temp->jk);fseek(stdin,0,SEEK_END);
    input_email(&temp->email);
    strcpy(temp->email,temp_email);
    printf("\nPassword                +: ");gets(temp->password);fseek(stdin,0,SEEK_END);

    printf("\nNo. Id Card (KTP/SIM)   +: ");gets(temp->id_card);fseek(stdin,0,SEEK_END);
    printf("\nAlamat                  +: ");gets(temp->alamat);fseek(stdin,0,SEEK_END);
    printf("\nRT                      +: ");gets(temp->RT);fseek(stdin,0,SEEK_END);
    printf("\nRW                      +: ");gets(temp->RW);fseek(stdin,0,SEEK_END);
    printf("\nKelurahan               +: ");gets(temp->kelurahan);fseek(stdin,0,SEEK_END);
    printf("\nPropinsi                +: ");gets(temp->propinsi);fseek(stdin,0,SEEK_END);
    printf("\nKecamatan               +: ");gets(temp->kecamatan);fseek(stdin,0,SEEK_END);
    printf("\nKabupaten               +: ");gets(temp->kabupaten);fseek(stdin,0,SEEK_END);
    printf("\nKota                    +: ");gets(temp->kota);fseek(stdin,0,SEEK_END);
    printf("\nKode Pos                +: ");gets(temp->kode_pos);fseek(stdin,0,SEEK_END);
    printf("\nNegara                  +: ");gets(temp->negara);fseek(stdin,0,SEEK_END);
    printf("\nNo. HP                  +: ");gets(temp->no_hp);fseek(stdin,0,SEEK_END);
    printf("\nNo. Rekening            +: ");gets(temp->no_rek);fseek(stdin,0,SEEK_END);
    strcpy(temp->jabatan,"1");

}

void registrasi_anggota()
{
    int i;
    if(node_index==0)
    {
        reg_input();
        awal=temp;
        temp->next=NULL;
        akhir=temp;
        node_index++;


        baca=fopen("db_akun.dat","w+");fseek(stdin,0,SEEK_END);
        fwrite(temp,sizeof(struct akun),1,baca);
        fclose(baca);


        baca=fopen("people_index.dat","w+");fseek(stdin,0,SEEK_END);
        _putw(node_index,baca);
        fclose(baca);
    }
    else if(node_index>0)
    {
        reg_input();
        temp->next=NULL;
        akhir->next=temp;
        akhir=temp;
        node_index++;

        baca=fopen("db_akun.dat","w+");fseek(stdin,0,SEEK_END);
        fwrite(temp,sizeof(struct akun),1,baca);
        fclose(baca);


        baca=fopen("people_index.dat","w+");fseek(stdin,0,SEEK_END);
        _putw(node_index,baca);
        fclose(baca);
    }
    printf("\nMenyimpan data");
    for(i=0;i<3;i++)
        {
            printf(".");Sleep(900);
        }
    printf("\n\nData anda telah disimpan !");getch();
    system("cls");
    menu_utama();
}

void input_email()
{
    fseek(stdin,0,SEEK_END);
    printf("\nEmail                   +: ");scanf("%s",&temp_email);fseek(stdin,0,SEEK_END);
    int i,correct=0;
    for(i=0;i<30;i++)
    {
        if(temp_email[i]=='@')
        {
            correct=1;
            break;
        }
    }

    if(correct==0)
    {
        gotoxy(27,22);printf("Email anda invalid");getch();
        gotoxy(27,22);printf("                  ");
        gotoxy(27,21);input_email();
    }
}

void login()
{
    login_s=awal;
    char input,stop=1;
    int i=0,inputINT,cekpass=0,hitungpass=0;
    char password_temp[30],password[30];
    gotoxy(0,15);printf("Silahkan Masukkan Email dan Password Anda, untuk batal login ketik 'exit' \nJika anda lupa password ketik 'lupapassword'");
    gotoxy(0,17);printf("                                                                                  ");
    gotoxy(0,17);printf("Email          : ");scanf("%s",&username);
    if(strcmp(username,"exit")==0)
    {
        system("cls");
        menu_utama();
    }
    for(i=0;i<node_index;i++)
    {
        if(strcmp(login_s->email,username)==0)
        {
            strcpy(password,login_s->password);
            break;
        }
    }


    gotoxy(0,18);printf("                                                                                  ");
    gotoxy(0,18);printf("Password       : \n");

    //=============================================================
    //proses inputan karakter satu persatu
    while(stop!=0)
    {
        input=getch();
        inputINT=input;     //konversi char ke bentuk int utk mengetahui kode ASCII

        if(inputINT==8)     //8 adalah kode ASCII tombol backspace, ini proses jika menekan tombol backspace
        {
            if(i==0)        // i tetap nol agar proses dari decrement tidak membuat i minus
            {
                i=0;
            }
            else
            {
                i--;        // decrement i untuk mengubah/menimpa karakter sebelumnya
            }
        }

        if(inputINT!=8)
        {
            password_temp[i]=input;
            i++;
            password_temp[i]=NULL;
        }

        if(inputINT==13)    //13 adalah tombol enter dalam bentuk ASCII
        {

            stop=0;
        }
    }

    //=============================================================
    //ini adalah proses perhitungan password_temp dengan hitungpass, karena posisi null password temp berubah

    i=0;
    while(1)
    {
        if(password_temp[i]==NULL)
        {
            break;
        }
        hitungpass++;
        i++;
    }
    hitungpass--;

    //=============================================================
    //ini adalah proses menghitung kecocokan antara password_temp dan password
    i=0;
    while(password_temp[i]!=NULL)
    {
        if(password[i]==password_temp[i])
        {
            cekpass++;
        }
        i++;
    }

    //=============================================================
    //ini adalah proses pencocokan hasil hitung cekpass dengan hitungpass, jika sama maka proses login berhasil
    if(cekpass==hitungpass)
    {
        printf("\nWelcome, %s !!",login_s->nama);
        printf("\nTekan tombol apa saja untuk lanjut..");
        if(strcmp(login_s->jabatan,"3")==0)
        {
            menu_owner();
        }
        fseek(stdin,0,SEEK_END);
        getch();

    }
    else
    {
        printf("Username & Password salah...");getch();
        gotoxy(0,19);printf("                                                                                  ");
        login();
    }




}

void tampil()
{
    int i;
    struct akun *tampil;
    tampil=awal;
    for(i=0;i<node_index;i++)
    {
        printf("\n%s",tampil->nama);
        tampil=tampil->next;
    }
}

void change_color()
{
    char pilihan;
    printf("Tekan (T/t) untuk ganti warna atau tekan (Y/y) untuk menetapkan warna ");
    while(1)
    {
        system("Color F9");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color F0");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color FC");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color 0F");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color 0E");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color CE");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color CF");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color C0");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color A0");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color A9");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color AC");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color 9F");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color 9E");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color B9");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color B0");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color BC");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color EC");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color E9");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
        system("Color E0");pilihan=getch();if(pilihan=='Y'||pilihan=='y'){break;}
    }
    system("cls");
    //menu_utama();
}

void main()
{   //registrasi_anggota();
    //system("del people_index.dat");
    //node_index++;
    //baca=fopen("people_index.dat","a+");
    //_putw(node_index,baca);
    //fclose(baca);

    system("mode con:cols=82 lines=25");

    bootproses();
    system("Color F9");system("title Jual Beli Online");


    menu_utama();



    login();
}

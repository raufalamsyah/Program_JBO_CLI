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
    char RT[7];
    char RW[7];
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
struct akun *tampil_d;
int node_index=0,logo=0,logo_b=0;;char index[30];
FILE *baca;
char temp_email[30];
char username[30];
char password[30];
int no_jabatan=0;

char input=NULL,stop=1;
int inputINT,cekpass=0,hitungpass=0;
char password_temp[30],password[30];


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
    no_jabatan=0;

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
    no_jabatan=3;
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
                registrasi_anggota();
                break;
            }
            case '2':
            {
                //registrasi_anggota();
                break;
            }
            case '3':
            {
                manajemen_akun();
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
    printf("\nJenis Kelamin [L/P]     +: ");gets(temp->jk);fseek(stdin,0,SEEK_END);
    if(strcmp(temp->jk,"l")==0)
    {
        temp->jk[0]=NULL;
        strcpy(temp->jk,"L");
    }
    else if(strcmp(temp->jk,"p")==0)
    {
        temp->jk[0]=NULL;
        strcpy(temp->jk,"P");
    }
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
    if(no_jabatan==3 && strcmp(login_s->id_card,"1456401035")==0)
    {
        strcpy(temp->jabatan,"2");
    }
    else
    {
        strcpy(temp->jabatan,"1");
    }


}



void registrasi_anggota()
{
    struct akun *simpan;
    simpan=awal;
    int i;
    //struct akun *simpan;
    //simpan=awal;
    if(node_index==0)
    {
        reg_input();
        awal=temp;
        temp->next=NULL;
        akhir=temp;
        node_index++;


        baca=fopen("db_akun.dat","w+");fseek(stdin,0,SEEK_END);
        while(fwrite(simpan,sizeof(struct akun),1,baca))
        {
            simpan=simpan->next;
        };
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
        while(fwrite(simpan,sizeof(struct akun),1,baca))
        {
            simpan=simpan->next;
        };
        //fwrite(temp,sizeof(struct akun),1,baca);
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
    if(no_jabatan==3)
    {
        menu_owner();
    }
    else
    {
        menu_utama();
    }
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
    int i, lupa=0;

    login_s=awal;
    stop=1;
    password[0]=NULL;
    hitungpass=0;
    cekpass=0;
    gotoxy(0,15);printf("Silahkan Masukkan Email dan Password Anda, untuk batal login ketik 'exit' \nJika anda lupa password ketik 'lupapassword'");
    gotoxy(0,17);printf("                                                                                  ");
    gotoxy(0,17);printf("Email          : ");scanf("%s",&username);
    if(strcmp(username,"exit")==0)
    {
        system("cls");
        menu_utama();
    }
    else if(strcmp(username,"lupapassword")==0)
    {
        gotoxy(0,15);printf("                                                                                                                           ");
        gotoxy(0,16);printf("                                                                                                                           ");
        gotoxy(0,15);printf("Silahkan Masukkan data dibawah ini dengan benar, untuk batal login ketik 'exit'");
        gotoxy(0,17);printf("                                                                                  ");
        gotoxy(0,17);printf("Email          : ");scanf("%s",&username);fseek(stdin,0,SEEK_END);
        if(strcmp(username,"exit")==0)
        {
            system("cls");
            menu_utama();
        }
        tampil_d=awal;
        for(i=0;i<node_index;i++)
        {
            if(strcmp(tampil_d->email,username)==0)
            {
                //printf("*");
                lupa++;
                break;
            }
        }
        printf("No.ID Card     : ");scanf("%s",&username);fseek(stdin,0,SEEK_END);
        if(strcmp(username,"exit")==0)
        {
            system("cls");
            menu_utama();
        }
        if(strcmp(tampil_d->id_card,username)==0)
        {
            //printf("*");
            lupa++;
        }
        else
        {
            lupa=0;
        }
        printf("RT             : ");scanf("%s",&username);fseek(stdin,0,SEEK_END);
        if(strcmp(username,"exit")==0)
        {
            system("cls");
            menu_utama();
        }
        i=atoi(username);
        inputINT=atoi(tampil_d->RT);
        if(i==inputINT)
        {
            //printf("*");
            lupa++;
        }
        else
        {
            lupa=0;
        }
        printf("RW             : ");scanf("%s",&username);fseek(stdin,0,SEEK_END);
        if(strcmp(username,"exit")==0)
        {
            system("cls");
            menu_utama();
        }
        i=atoi(username);
        inputINT=atoi(tampil_d->RW);
        if(i==inputINT)
        {
            //printf("*");
            lupa++;
        }
        else
        {
            lupa=0;
        }
        printf("No.Rek         : ");scanf("%s",&username);fseek(stdin,0,SEEK_END);

        if(strcmp(username,"exit")==0)
        {
            system("cls");
            menu_utama();
        }

        if(strcmp(tampil_d->no_rek,username)==0)
        {
            //printf("*");
            lupa++;
        }
        else
        {
            lupa=0;
        }

        printf("Kode Pos       : ");scanf("%s",&username);fseek(stdin,0,SEEK_END);
        if(strcmp(username,"exit")==0)
        {
            system("cls");
            menu_utama();
        }
        if(strcmp(tampil_d->kode_pos,username)==0)
        {
            //printf("*");
            lupa++;
        }
        else
        {
            lupa=0;
        }

        printf("No.HP          : ");scanf("%s",&username);fseek(stdin,0,SEEK_END);
        if(strcmp(username,"exit")==0)
        {
            system("cls");
            menu_utama();
        }
        if(strcmp(tampil_d->no_hp,username)==0)
        {
            //printf("*");
            lupa++;
        }
        else
        {
            lupa=0;
        }

        if(lupa==7)
        {
            tampil_d->password[0]=NULL;
            printf("Masukkan new password : ");scanf("%s",&tampil_d->password);fseek(stdin,0,SEEK_END);



            tampil_d=awal;
            baca=fopen("db_akun.dat","w+");fseek(stdin,0,SEEK_END);
            while(fwrite(tampil_d,sizeof(struct akun),1,baca))
            {
                tampil_d=tampil_d->next;
            };
            //fwrite(temp,sizeof(struct akun),1,baca);
            fclose(baca);


            /*baca=fopen("people_index.dat","w+");fseek(stdin,0,SEEK_END);
            _putw(node_index,baca);
            fclose(baca);*/

            printf("\nMenyimpan data");
            for(i=0;i<3;i++)
            {
                printf(".");Sleep(900);
            }
            printf("\nData sudah dirubah !!");
            getch();
        }

        else
        {
            printf("Data yang anda masukkan tidak sesuai. Jika anda merasa kesulitan, silahkan hubungi Admin/Customer Service JBO..");getch();
        }
        //printf("%d",lupa);getch();
        i=0;
        inputINT=0;
        lupa=0;
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
        login_s=login_s->next;
    }


    gotoxy(0,18);printf("                                                                                  ");
    gotoxy(0,18);printf("Password       : \n");
    fseek(stdin,0,SEEK_END);
    //=============================================================
    //proses inputan karakter satu persatu
    i=0;
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

    if(hitungpass<=0)
    {
        login();
    }

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
        printf("\nTekan tombol apa saja untuk lanjut..");getch();fseek(stdin,0,SEEK_END);
        if(strcmp(login_s->jabatan,"3")==0)
        {
            menu_owner();
        }
        else if(strcmp(login_s->jabatan,"2")==0)
        {
            menu_owner();
        }
        else if(strcmp(login_s->jabatan,"1")==0)
        {
            menu_utama();
        }

    }
    else
    {
        printf("Username & Password salah...");getch();
        gotoxy(0,19);printf("                                                                                  ");
        fseek(stdin,0,SEEK_END);
        login();
    }




}

/*void tampil()
{
    int i;
    struct akun *tampil;
    tampil=awal;
    for(i=0;i<node_index;i++)
    {
        printf("\n%s",tampil->nama);
        tampil=tampil->next;
    }
}*/

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

void manajemen_akun()
{
    tampil_d=awal;
    int i;


    system("cls");
    no_jabatan=3;
    header();
        gotoxy(18,3);printf("Welcome %s",login_s->nama);
        gotoxy(18,5);printf("(1) Lihat Akun Anggota");
        gotoxy(18,6);printf("(2) Lihat Akun Admin");
        gotoxy(18,7);printf("(3) Change Data Akun");
        gotoxy(47,5);printf("(4) Back");


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
            gotoxy(0,20);printf("Ketik '1' untuk melihat data akun anggota ");
            gotoxy(0,21);printf("Ketik '2' untuk melihat data akun admin");
            gotoxy(0,22);printf("Ketik '3' untuk mengubah data akun anggota dan admin");
            gotoxy(0,23);printf("Ketik '4' untuk kembali ke menu sebelumnya");

            getch();
            system("cls");
            manajemen_akun();
        }
        pilihan1=pilihan[0];
        switch(pilihan1)
        {
            case '1':
            {
                tampil_d=awal;
                gotoxy(0,15);printf("%-3s %-19s %-2s %-15s","ID","Nama","JK","No.HP");
                printf("\n=================================================================");
                i=0;
                while(tampil_d!=NULL)
                {
                    if(strcmp(tampil_d->jabatan,"1")==0)
                    {
                        printf("\n%-3d %-19s %-2s %-15s",i,tampil_d->nama,tampil_d->jk,tampil_d->no_hp);
                    }
                    tampil_d=tampil_d->next;
                    i++;
                }
                printf("\n\nApakah anda ingin melihat informasi detail dari data diatas ? (y/n): ");pilihan1=getche();
                if(pilihan1=='y' || pilihan1=='Y')
                {
                    printf("\nInformasi detail dengan ID berapa : ");scanf("%d",&inputINT);
                    tampil_d=awal;
                    for(i=0;i<node_index;i++)
                    {
                        if(i==inputINT && strcmp(tampil_d->jabatan,"1")==0)
                        {
                            printf("Nama      : %s\n",tampil_d->nama);
                            printf("No.IDCard : %s\n",tampil_d->id_card);
                            printf("JK        : %s\n",tampil_d->jk);
                            printf("Email     : %s\n",tampil_d->email);
                            printf("No.HP     : %s\n",tampil_d->no_hp);
                            printf("No.Rek    : %s\n",tampil_d->no_rek);
                            printf("Alamat    : %s\n",tampil_d->alamat);
                            printf("RT        : %-2s\n",tampil_d->RT);
                            printf("RW        : %-2s\n",tampil_d->RW);
                            printf("Kelurahan : %s\n",tampil_d->kelurahan);
                            printf("Kecamatan : %s\n",tampil_d->kecamatan);
                            printf("Kabupaten : %s\n",tampil_d->kabupaten);
                            printf("Propinsi  : %s\n",tampil_d->propinsi);
                            printf("Kota      : %s\n",tampil_d->kota);
                            printf("Negara    : %s\n",tampil_d->negara);
                            printf("Kode Pos  : %s\n",tampil_d->kode_pos);
                            break;
                        }
                        tampil_d=tampil_d->next;
                    }


                }
                getch();
                manajemen_akun();
                break;
            }
            case '2':
            {
                tampil_d=awal;
                gotoxy(0,15);printf("%-3s %-19s %-2s %-15s","ID","Nama","JK","No.HP");
                printf("\n=================================================================");
                i=0;
                while(tampil_d!=NULL)
                {
                    if(strcmp(tampil_d->jabatan,"2")==0)
                    {
                        printf("\n%-3d %-19s %-2s %-15s",i,tampil_d->nama,tampil_d->jk,tampil_d->no_hp);
                    }
                    tampil_d=tampil_d->next;
                    i++;
                }
                printf("\n\nApakah anda ingin melihat informasi detail dari data diatas ? (y/n): ");pilihan1=getche();
                if(pilihan1=='y' || pilihan1=='Y')
                {
                    printf("\nInformasi detail dengan ID berapa : ");scanf("%d",&inputINT);
                    tampil_d=awal;
                    for(i=0;i<node_index;i++)
                    {
                        if(i==inputINT && strcmp(tampil_d->jabatan,"2")==0)
                        {
                            printf("Nama      : %s\n",tampil_d->nama);
                            printf("No.IDCard : %s\n",tampil_d->id_card);
                            printf("JK        : %s\n",tampil_d->jk);
                            printf("Email     : %s\n",tampil_d->email);
                            printf("No.HP     : %s\n",tampil_d->no_hp);
                            printf("No.Rek    : %s\n",tampil_d->no_rek);
                            printf("Alamat    : %s\n",tampil_d->alamat);
                            printf("RT        : %-2s\n",tampil_d->RT);
                            printf("RW        : %-2s\n",tampil_d->RW);
                            printf("Kelurahan : %s\n",tampil_d->kelurahan);
                            printf("Kecamatan : %s\n",tampil_d->kecamatan);
                            printf("Kabupaten : %s\n",tampil_d->kabupaten);
                            printf("Propinsi  : %s\n",tampil_d->propinsi);
                            printf("Kota      : %s\n",tampil_d->kota);
                            printf("Negara    : %s\n",tampil_d->negara);
                            printf("Kode Pos  : %s\n",tampil_d->kode_pos);
                            break;
                        }
                        tampil_d=tampil_d->next;
                    }


                }
                getch();
                manajemen_akun();
                break;
            }
            case '3':
            {

                while(pilihan1!='y' || pilihan1!='Y')
                {
                    gotoxy(0,16);printf("                                                                    ");
                    gotoxy(0,15);printf("                                                                    ");
                    gotoxy(0,15);printf("Masukkan no ID yang akan diubah : ");scanf("%d",&inputINT);
                    tampil_d=awal;
                    for(i=0;i<node_index;i++)
                    {
                        if(i==inputINT)
                        {
                            gotoxy(0,16);printf("Apakah data dengan nama %s yang akan diubah ? (y/n) : ",tampil_d->nama);pilihan1=getche();
                            if(pilihan1=='Y' || pilihan1=='y')
                            {
                                tampil_edit_auto();
                                gotoxy(0,16);printf("                                                                    ");
                                gotoxy(0,15);printf("                                                                    ");
                                gotoxy(0,15);printf("Edit data akun");
                                gotoxy(0,16);printf("==================================================================================");
                                fseek(stdin,0,SEEK_END);
                                gotoxy(0,17);printf("Apakah anda ingin merubah Nama ?      (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->nama[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);printf("Nama [MAX = 19karakter] +: ");gets(tampil_d->nama);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);printf("Apakah anda ingin merubah JK ?        (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->jk[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);printf("Jenis Kelamin [L/P]     +: ");gets(tampil_d->jk);fseek(stdin,0,SEEK_END);
                                    if(strcmp(tampil_d->jk,"l")==0)
                                    {
                                        tampil_d->jk[0]=NULL;
                                        strcpy(tampil_d->jk,"L");
                                    }
                                    else if(strcmp(tampil_d->jk,"p")==0)
                                    {
                                        tampil_d->jk[0]=NULL;
                                        strcpy(tampil_d->jk,"P");
                                    }
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Email ?     (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->email[0]=NULL;
                                    gotoxy(0,21);printf("                                                            ");
                                    gotoxy(0,21);input_email(&tampil_d->email);
                                    strcpy(tampil_d->email,temp_email);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,22);printf("                                                            ");
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Password ?  (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->password[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);printf("Password                +: ");gets(tampil_d->password);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah No.ID Card ?(y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->id_card[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);printf("No. Id Card (KTP/SIM)   +: ");gets(tampil_d->id_card);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Alamat ?    (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->alamat[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("Alamat                  +: ");gets(tampil_d->alamat);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah RT ?        (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->RT[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("RT                      +: ");gets(tampil_d->RT);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah RW ?        (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->RW[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("RW                      +: ");gets(tampil_d->RW);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Kelurahan ? (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->kelurahan[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("Kelurahan               +: ");gets(tampil_d->kelurahan);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }

                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Propinsi ?  (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->propinsi[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("Propinsi                +: ");gets(tampil_d->propinsi);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Kecamatan ? (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->kecamatan[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("Kecamatan               +: ");gets(tampil_d->kecamatan);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Kabupaten ? (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->kabupaten[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("Kabupaten               +: ");gets(tampil_d->kabupaten);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Kota ?      (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->kota[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("Kota                    +: ");gets(tampil_d->kota);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Kode Pos ?  (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->kode_pos[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("Kode Pos                +: ");gets(tampil_d->kode_pos);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah Negara ?    (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->negara[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("Negara                  +: ");gets(tampil_d->negara);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah No.HP ?     (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->no_hp[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("No. HP                  +: ");gets(tampil_d->no_hp);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }
                                gotoxy(0,17);printf("                                                            ");
                                gotoxy(0,17);
                                printf("Apakah anda ingin merubah No.Rek ?    (y/n) : ");pilihan1=getche();
                                if(pilihan1=='Y' || pilihan1=='y')
                                {
                                    tampil_d->no_rek[0]=NULL;
                                    gotoxy(0,17);printf("                                                            ");
                                    gotoxy(0,17);
                                    printf("No. Rekening            +: ");gets(tampil_d->no_rek);fseek(stdin,0,SEEK_END);
                                    tampil_edit_auto();
                                }

                                tampil_d=awal;
                                baca=fopen("db_akun.dat","w+");fseek(stdin,0,SEEK_END);
                                while(fwrite(tampil_d,sizeof(struct akun),1,baca))
                                {
                                    tampil_d=tampil_d->next;
                                };
                                //fwrite(temp,sizeof(struct akun),1,baca);
                                fclose(baca);


                                /*baca=fopen("people_index.dat","w+");fseek(stdin,0,SEEK_END);
                                _putw(node_index,baca);
                                fclose(baca);*/

                                printf("\nMenyimpan data");
                                for(i=0;i<3;i++)
                                {
                                    printf(".");Sleep(900);
                                }
                                printf("\nData sudah dirubah !!");
                                getch();
                                manajemen_akun();
                                break;

                            }

                        }
                        tampil_d=tampil_d->next;
                    }
                }




                break;
            }
            case '4':
            {
                menu_owner();
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






    gotoxy(0,15);printf("");

    for(i=0;i<node_index;i++)
    {

    }
}

void tampil_edit_auto()
{
    int i;
    gotoxy(0,24);
    for(i=0;i<18;i++)
    {
        gotoxy(0,24+i);printf("                                                                                      ");
    }
    gotoxy(0,24);
                                printf("Nama      : %s\n",tampil_d->nama);
                                printf("No.IDCard : %s\n",tampil_d->id_card);
                                printf("JK        : %s\n",tampil_d->jk);
                                printf("Email     : %s\n",tampil_d->email);
                                printf("Password  : %s\n",tampil_d->password);
                                printf("No.HP     : %s\n",tampil_d->no_hp);
                                printf("No.Rek    : %s\n",tampil_d->no_rek);
                                printf("Alamat    : %s\n",tampil_d->alamat);
                                printf("RT        : %s\n",tampil_d->RT);
                                printf("RW        : %s\n",tampil_d->RW);
                                printf("Kelurahan : %s\n",tampil_d->kelurahan);
                                printf("Kecamatan : %s\n",tampil_d->kecamatan);
                                printf("Kabupaten : %s\n",tampil_d->kabupaten);
                                printf("Propinsi  : %s\n",tampil_d->propinsi);
                                printf("Kota      : %s\n",tampil_d->kota);
                                printf("Negara    : %s\n",tampil_d->negara);
                                printf("Kode Pos  : %s\n",tampil_d->kode_pos);
}

void main()
{   //registrasi_anggota();
    //system("del people_index.dat");
    //node_index++;
    //baca=fopen("people_index.dat","a+");
    //_putw(node_index,baca);
    //fclose(baca);

    system("mode con:cols=82");

    bootproses();
    system("Color F9");system("title Jual Beli Online");


    menu_utama();



    login();
}

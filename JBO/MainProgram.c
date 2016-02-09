#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>


struct akun
{
    char jabatan[2];
    char nama[19];
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

struct akun *awal, *temp, *akhir;
int node_index=0;
FILE *baca;
char temp_email[30];
char username[30];
char password[30];

void header()
{
    printf("==================================\n");
    printf("  Jual Beli Online (www.jbo.com)\n");
    printf("==================================\n");
}

void menu_utama()
{
    char pilihan;
    printf("\n(1) Login");
    printf("\n(2) Buat Akun Baru");
    printf("\n(3) Lihat Barang");
    printf("\n(4) Exit");
    printf("\nNote: Masukan nomor diatas untuk memilih");
    printf("\n\nPilihan : ");scanf("%c",&pilihan);fflush(stdin);
    switch(pilihan)
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
            header();
            menu_utama();
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
    printf("\nNama                    : ");scanf("%s",&temp->nama);fflush(stdin);
    input_email(&temp->email);
    strcpy(temp->email,temp_email);
    printf("\nPassword                : ");scanf("%s",&temp->password);fflush(stdin);
    printf("\nNo. Id Card (KTP/SIM)   : ");scanf("%s",&temp->id_card);fflush(stdin);
    printf("\nAlamat                  : ");scanf("%s",&temp->alamat);fflush(stdin);
    printf("\nRT                      : ");scanf("%s",&temp->RT);fflush(stdin);
    printf("\nRW                      : ");scanf("%s",&temp->RW);fflush(stdin);
    printf("\nKelurahan               : ");scanf("%s",&temp->kelurahan);fflush(stdin);
    printf("\nPropinsi                : ");scanf("%s",&temp->propinsi);fflush(stdin);
    printf("\nKecamatan               : ");scanf("%s",&temp->kecamatan);fflush(stdin);
    printf("\nKabupaten               : ");scanf("%s",&temp->kabupaten);fflush(stdin);
    printf("\nKota                    : ");scanf("%s",&temp->kota);fflush(stdin);
    printf("\nKode Pos                : ");scanf("%s",&temp->kode_pos);fflush(stdin);
    printf("\nNegara                  : ");scanf("%s",&temp->negara);fflush(stdin);
    printf("\nNo. HP                  : ");scanf("%s",&temp->no_hp);fflush(stdin);
    printf("\nNo. Rekening            : ");scanf("%s",&temp->no_rek);fflush(stdin);
    strcpy(temp->jabatan,"3");
}

void registrasi_anggota()
{
    if(node_index==0)
    {
        reg_input();
        awal=temp;
        temp->next=NULL;
        akhir=temp;
        node_index++;
        baca=fopen("db_akun.dat","a+");
        fwrite(temp,sizeof(struct akun),1,baca);
        fclose(baca);
    }
    else if(node_index>0)
    {
        reg_input();
        temp->next=NULL;
        akhir->next=temp;
        akhir=temp;
        node_index++;
        baca=fopen("db_akun.dat","a+");
        fwrite(temp,sizeof(struct akun),1,baca);
        fclose(baca);
    }
}

void input_email()
{
    printf("\nEmail                   : ");scanf("%s",&temp_email);fflush(stdin);
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
        printf("=====================================Email anda invalid");getch();
        input_email();
    }
}

void login()
{
    char input,stop=1;
    int i=0,inputINT,cekpass=0,hitungpass=0;
    char password_temp[30];
    printf("Username/Email : ");scanf("%s",&username);




    printf("Password       : \n");

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
        printf("berhasil");
        getch();
        exit(0);
    }
    printf("Username & Password salah...");getch();
    login();

}

void main()
{
    baca=fopen("db_akun.dat","a+");
    baca_file();
    fclose(baca);
    header();
    menu_utama();



    login();
}

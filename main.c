#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "buku.c"

#define len 50
#define cls system("cls");
#define symbl printf("--> ");
#define enter printf("Tekan 'Enter' untuk melanjutkan...");

int template_fitur ();

void ascii_art ();
void main_menu ();
void book_management ();
void people_management ();

void displayBuku ();
void insertBuku ();
void searchBuku ();
void updateBuku ();

void displayPeople ();
void pinjamBuku ();
void returnBuku ();

void memberManagement ();
void addMembership ();
void deleteMembership ();
void updateMembership ();

int main () {
    int option;
    int option_case_1;
    int option_case_2; 

    do {
        cls
        ascii_art();
        main_menu();
        option = template_fitur();

        // Main switch
        switch (option) {
            // Untuk manajemen buku
            case 1:
                cls
                ascii_art();
                book_management();
                option_case_1 = template_fitur();
                switch (option_case_1) {
                    case 1:
                        /* code */
                        break;

                    case 2:
                        /* code */
                        break;

                    case 3:
                        /* code */
                        break;

                    case 4:
                        /* code */
                        break;
                    
                    default:
                        break;
                }
                getchar();
                break;
            
            // Untuk manajemen peminjam
            case 2:
                cls
                ascii_art();
                people_management();
                option_case_2 = template_fitur();
                switch (option_case_2) {
                    case 1:
                        /* code */
                        break;

                    case 2:
                        /* code */
                        break;

                    case 3:
                        /* code */
                        break;

                    case 4:
                        cls
                        ascii_art();
                        memberManagement();
                        int option_member = template_fitur();
                        switch (option_member) {
                            case 1:
                                addMembership();
                                break;

                            case 2:
                                /* code */
                                break;

                            case 3:
                                /* code */
                                break;
                            
                            default:
                                break;
                        }

                        break;
                    
                    default:
                        break;
                }
                getchar();
                break;

            // Exit
            case 0:
                cls
                ascii_art();
                printf("Terima Kasih!\n");
                getchar();
                break;

            default:
                cls
                ascii_art();
                printf("Invalid Input\n");
                getch();
                break;
        }

    } while (option != 0);
    

    return 0;
}

// Main Function
void ascii_art () {
    printf ("  _    ___ ___ ___    _   _____   __    _   ___ ___  ___ \n");
    printf (" | |  |_ _| _ ) _ \\  /_\\ | _ \\ \\ / /   /_\\ | _ \\ _ \\/ __|\n");
    printf (" | |__ | || _ \\   / / _ \\|   /\\ V /   / _ \\|  _/  _/\\__ \\\n");
    printf (" |____|___|___/_|_\\/_/ \\_\\_|_\\ |_|   /_/ \\_\\_| |_|  |___/\n");
    printf ("----------------------------------------------------------\n");
}

void main_menu () {
    printf("1. Kelola Buku\n");
    printf("2. Kelola Peminjam\n");
    printf("0. EXIT\n");
    printf ("----------------------------------------------------------\n");
}

void book_management () {
    printf("1. List Buku\n");
    printf("2. Tambah Buku Baru\n");
    printf("3. Cari Buku\n");
    printf("4. Update Buku\n");
    printf ("----------------------------------------------------------\n");
}

void people_management () {
    printf("1. List Peminjam\n");
    printf("2. Peminjaman Buku\n");
    printf("3. Pengembalian Buku\n");
    printf("4. Membership\n");
    //printf("5. Reminder\n");
    printf ("----------------------------------------------------------\n");
}

int template_fitur () {
    int number;

    printf("Pilih fitur\n");
    symbl scanf("%d", &number);

    return number;
}

// Manajemen Buku
void displayBuku () {

}

void insertBuku () {
    
}

void searchBuku () {

}

void updateBuku () {

}

// Peminjam Buku
void displayPeople () {

}

void pinjamBuku () {

}

void returnBuku () {

}

// Membership
void memberManagement () {
    printf("1. Tambah Membership\n");
    printf("2. Hapus Membership\n");
    printf("3. Update Membership\n");
    printf ("----------------------------------------------------------\n");
}

void addMembership () {
    cls

    char nama [len];
    char phone [len];
    char alamat [len];

    ascii_art();
    printf("Nama\t\t: "); scanf("%s", nama);
    printf("No. HP\t\t: "); scanf("%s", phone);
    printf("Alamat\t\t: "); scanf("%s", alamat);

    printf("\n\nData berhasil ditambahkan\n");
    enter getchar();
}

void deleteMembership () {

}

void updateMembership () {

}
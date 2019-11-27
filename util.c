#include <windows.h>

const int COLUNA=120;
const int LINHA=27;

void clrscr(){
    system("cls");
}

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void pintar(int cor){
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, cor);
}

void linha(){
    int x=0;
    for(x=0;x<COLUNA;x++){
        printf("%c",205);
    }
}

void coluna(int posicao){
    int x;
    for(x=0;x<LINHA;x++){
        gotoxy(posicao,x);
        printf("%c",186);
    }
}
void pscr(){
    system("pause");
}
void Desenhar(){
    pintar(175);
    printf("\n\n");
    linha();
    coluna(5);
    coluna(114);
    printf("\n");
    linha();
}

void DesenharMenu(){
    gotoxy(22,4);
    printf("  __  __                            _____           _          _           _ ");
    gotoxy(22,5);
    printf(" |  \\/  |                          |_   _|         (_)        (_)         | |");
    gotoxy(22,6);
    printf(" | \\  / |   ___   _ __    _   _      | |    _ __    _    ___   _    __ _  | |");
    gotoxy(22,7);
    printf(" | |\\/| |  / _ \\ | '_ \\  | | | |     | |   | '_ \ | |    / __| | |  / _` | | |");
    gotoxy(22,8);
    printf(" | |  | | |  __/ | | | | | |_| |    _| |_  | | | | | | | (__  | | | (_| | | |");
    gotoxy(22,9);
    printf(" |_|  |_|  \\___| |_| |_|  \\__,_|   |_____| |_| |_| |_|  \\___| |_|  \\__,_| |_|");
}

void DesenharNome(){
    gotoxy(30,5);
    printf("   ___               _____                                 ");
    gotoxy(30,6);
    printf("  / _ \\             |  __ \\                                ");
    gotoxy(30,7);
    printf(" | (_) |     ___    | |__) |   ___    _   _    ___    ___  ");
    gotoxy(30,8);
    printf("  > _ <     / _ \\   |  ___/   / _ \\  | | | |  / __|  / _ \\ ");
    gotoxy(30,9);
    printf(" | (_) |   |  __/   | |      | (_) | | |_| | | (__  | (_) |");
    gotoxy(30,10);
    printf("  \\___/     \\___|   |_|       \\___/   \\__,_|  \\___|  \\___/ ");
}
void DesenharLoja1(){
    gotoxy(40,4);
    printf("  _                  _             __ ");
    gotoxy(40,5);
    printf(" | |                (_)           /_ |");
    gotoxy(40,6);
    printf(" | |        ___      _    __ _     | |");
    gotoxy(40,7);
    printf(" | |       / _ \\    | |  / _` |    | |");
    gotoxy(40,8);
    printf(" | |____  | (_) |   | | | (_| |    | |");
    gotoxy(40,9);
    printf(" |______|  \\___/    | |  \\__,_|    |_|");
    gotoxy(40,10);
    printf("                   _/ |               ");
    gotoxy(40,11);
    printf("                  |__/                ");

}

void DesenharLoja2(){
    gotoxy(40,4);
    printf("  _                  _             ___  ");
    gotoxy(40,5);
    printf(" | |                (_)           |__ \\ ");
    gotoxy(40,6);
    printf(" | |        ___      _    __ _       ) |");
    gotoxy(40,7);
    printf(" | |       / _ \\    | |  / _` |     / / ");
    gotoxy(40,8);
    printf(" | |____  | (_) |   | | | (_| |    / /_ ");
    gotoxy(40,9);
    printf(" |______|  \\___/    | |  \\__,_|   |____|");
    gotoxy(40,10);
    printf("                   _/ |                 ");
    gotoxy(40,11);
    printf("                  |__/                  ");
}

void DesenharLoja3(){
    gotoxy(40,4);
    printf("  _                  _             ____  ");
    gotoxy(40,5);
    printf(" | |                (_)           |___ \\ ");
    gotoxy(40,6);
    printf(" | |        ___      _    __ _      __) |");
    gotoxy(40,7);
    printf(" | |       / _ \\    | |  / _` |    |__ < ");
    gotoxy(40,8);
    printf(" | |____  | (_) |   | | | (_| |    ___) |");
    gotoxy(40,9);
    printf(" |______|  \\___/    | |  \\__,_|   |____/ ");
    gotoxy(40,10);
    printf("                   _/ |                  ");
    gotoxy(40,11);
    printf("                  |__/                   ");

}

void dscr(){

Sleep(3);
}

void DesenharCardapio(){
    gotoxy(22,4);
    printf("   _____              _____    _____               _____    _____    ____  ");
    gotoxy(22,5);
    printf("  / ____|     /\\     |  __ \\  |  __ \\      /\\     |  __ \\  |_   _|  / __ \\ ");
    gotoxy(22,6);
    printf(" | |         /  \\    | |__) | | |  | |    /  \\    | |__) |   | |   | |  | |");
    gotoxy(22,7);
    printf(" | |        / /\\ \\   |  _  /  | |  | |   / /\\ \\   |  ___/    | |   | |  | |");
    gotoxy(22,8);
    printf(" | |____   / ____ \\  | | \\ \\  | |__| |  / ____ \\  | |       _| |_  | |__| |");
    gotoxy(22,9);
    printf("  \\_____| /_/    \\_\\ |_|  \\_\\ |_____/  /_/    \\_\\ |_|      |_____|  \\____/ ");
}

void DesenharEstoque(){
    gotoxy(28,4);
    printf("  ______    _____   _______    ____     ____    _    _   ______ ");
    gotoxy(28,5);
    printf(" | ____|  / ____| |__   __|  / __ \\   / __ \\  | |  | | |  ____|");
    gotoxy(28,6);
    printf(" | |__   | (___      | |    | |  | | | |  | | | |  | | | |__   ");
    gotoxy(28,7);
    printf(" | __|    \\___ \\     | |    | |  | | | |  | | | |  | | |  __|  ");
    gotoxy(28,8);
    printf(" ||____   ____) |    | |    | |__| | | |__| | | |__| | | |____ ");
    gotoxy(28,9);
    printf(" |______| |_____/    |_|     \\____/   \\___\\_\\  \\____/  |______|");
}

void DesenharCaixa(){
    gotoxy(35,4);
    printf("   _____              _____  __   __           ");
    gotoxy(35,5);
    printf("  / ____|     /\\     |_   _| \\ \\ / /     /\\    ");
    gotoxy(35,6);
    printf(" | |         /  \\      | |    \\ V /     /  \\   ");
    gotoxy(35,7);
    printf(" | |        / /\\ \\     | |     > <     / /\\ \\  ");
    gotoxy(35,8);
    printf(" | |____   / ____ \\   _| |_   / . \\   / ____ \\ ");
    gotoxy(35,9);
    printf("  \\_____| /_/    \\_\\ |_____| /_/ \\_\\ /_/    \\_\\");

}

void DesenharMesas(){
    gotoxy(35,4);
    printf("  __  __   ______    _____               _____ ");
    gotoxy(35,5);
    printf(" |  \\/  | |  ____|  / ____|     /\\      / ____|");
    gotoxy(35,6);
    printf(" | \\  / | | |__    | (___      /  \\    | (___  ");
    gotoxy(35,7);
    printf(" | |\\/| | |  __|    \\___ \\    / /\\ \\    \\___ \\ ");
    gotoxy(35,8);
    printf(" | |  | | | |____   ____) |  / ____ \\   ____) |");
    gotoxy(35,9);
    printf(" |_|  |_| |______| |_____/  /_/    \\_\\ |_____/ ");
}
void DesenharPedidos(){
     gotoxy(30,4);
    printf("  _____    ______   _____    _____   _____     ____     _____ ");
    gotoxy(30,5);
    printf(" |  __ \\  |  ____| |  __ \\  |_   _| |  __ \\   / __ \\   / ____|");
    gotoxy(30,6);
    printf(" | |__) | | |__    | |  | |   | |   | |  | | | |  | | | (___  ");
    gotoxy(30,7);
    printf(" |  ___/  |  __|   | |  | |   | |   | |  | | | |  | |  \\___ \\ ");
    gotoxy(30,8);
    printf(" | |      | |____  | |__| |  _| |_  | |__| | | |__| |  ____) |");
    gotoxy(30,9);
    printf(" |_|      |______| |_____/  |_____| |_____/   \\____/  |_____/");
}

void DesenharLogin(){
    gotoxy(35,4);
    printf("  _         ____     _____   _____   _   _ ");
    gotoxy(35,5);
    printf(" | |       / __ \\   / ____| |_   _| | \\ | |");
    gotoxy(35,6);
    printf(" | |      | |  | | | |  __    | |   |  \\| |");
    gotoxy(35,7);
    printf(" | |      | |  | | | | |_ |   | |   | . ` |");
    gotoxy(35,8);
    printf(" | |____  | |__| | | |__| |  _| |_  | |\\  |");
    gotoxy(35,9);
    printf(" |______|  \\____/   \\_____| |_____| |_| \\_|");
}
void DesenharSalgadas(){
    gotoxy(20,4);
    printf("   _____              _         _____              _____                _____ ");
    gotoxy(20,5);
    printf("  / ____|     /\\     | |       / ____|     /\\     |  __ \\      /\\      / ____|");
    gotoxy(20,6);
    printf(" | (___      /  \\    | |      | |  __     /  \\    | |  | |    /  \\    | (___  ");
    gotoxy(20,7);
    printf("  \\___ \\    / /\\ \\   | |      | | |_ |   / /\\ \\   | |  | |   / /\\ \\    \\___ \ ");
    gotoxy(20,8);
    printf("  ____) |  / ____ \\  | |____  | |__| |  / ____ \\  | |__| |  / ____ \\   ____) |");
    gotoxy(20,9);
    printf(" |_____/  /_/    \\_\\ |______|  \\_____| /_/    \\_\\ |_____/  /_/    \\_\\ |_____/ ");
}

void DesenharDoces(){
    gotoxy(35,4);
    printf("  _____     ____     _____   ______    _____ ");
    gotoxy(35,5);
    printf(" |  __ \\   / __ \\   / ____| |  ____|  / ____|");
    gotoxy(35,6);
    printf(" | |  | | | |  | | | |      | |__    | (___  ");
    gotoxy(35,7);
    printf(" | |  | | | |  | | | |      |  __|    \\___ \\ ");
    gotoxy(35,8);
    printf(" | |__| | | |__| | | |____  | |____   ____) |");
    gotoxy(35,9);
    printf(" |_____/   \\____/   \\_____| |______| |_____/ ");
}

void DesenharBebidas(){
    gotoxy(23,4);
    printf("  ____    ______   ____    _____   _____                _____ ");
    gotoxy(23,5);
    printf(" |  _ \\  |  ____| |  _ \\  |_   _| |  __ \\      /\\      / ____|");
    gotoxy(23,6);
    printf(" | |_) | | |__    | |_) |   | |   | |  | |    /  \\    | (___  ");
    gotoxy(23,7);
    printf(" |  _ <  |  __|   |  _ <    | |   | |  | |   / /\\ \\    \\___ \\ ");
    gotoxy(23,8);
    printf(" | |_) | | |____  | |_) |  _| |_  | |__| |  / ____ \\   ____) |");
    gotoxy(23,9);
    printf(" |____/  |______| |____/  |_____| |_____/  /_/    \\_\\ |_____/ ");
}
void DesenharAdicionar(){
    gotoxy(17,4);
    printf("             _____    _____    _____   _____    ____    _   _              _____ ");
    gotoxy(17,5);
    printf("     /\\     |  __ \\  |_   _|  / ____| |_   _|  / __ \\  | \\ | |     /\\     |  __ \\ ");
    gotoxy(17,6);
    printf("    /  \\    | |  | |   | |   | |        | |   | |  | | |   \| |    /  \\    | |__) |");
    gotoxy(17,7);
    printf("   / /\\ \\   | |  | |   | |   | |        | |   | |  | | | . ` |   / /\\ \\   |  _  / ");
    gotoxy(17,8);
    printf("  / ____ \\  | |__| |  _| |_  | |____   _| |_  | |__| | | |\\  |  / ____ \\  | | \\ \\ ");
    gotoxy(17,9);
    printf(" /_/    \\_\\ |_____/  |_____|  \\_____| |_____|  \\____/  |_| \\_| /_/    \\_\\ |_|  \\_\\");
}

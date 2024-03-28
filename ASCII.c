#include <stdio.h>

char* ASCII[100] = {
"                                                  ____    _    __  __ _____   ____   ___   ___  __  __ ____",         
"                                                 / ___|  / \\  |  \\/  | ____| |  _ \\ / _ \\ / _ \\|  \\/  / ___|",            
"                                                | |  _  / _ \\ | |\\/| |  _|   | |_) | | | | | | | |\\/| \\___ \\ ", 
"                                                | |_| |/ ___ \\| |  | | |___  |  _ <| |_| | |_| | |  | |___) |",
"                                                 \\____/_/   \\_\\_|  |_|_____| |_| \\__\\___/ \\___/|_|  |_|____/",                                            
" / |   | \\ | |_   _ _ __ ___ | |__   ___ _ __",
" | |   |  \\| | | | | '_ ` _ \\| '_ \\ / _ \\ '__|          .",
" | |_  | |\\  | |_| | | | | | | |_) |  __/ |    .        ;       *               *          .",   
" |_(_) |_| \\_|\\__,_|_| |_| |_|_.___/\\___|_|         - --+- -",
"       _ __  _   _ _______| | ___  ___                  !                         *                *             *          .      .",
"      |  _ \\| | | |_  /_  / |/ _ \\/ __|                 .     .        *   *",
"      | |_) | |_| |/ / / /| |  __/\\__ \\   .      *                           *         *",
" ____ | .__/_\\__,_/___/___|_|\\___||___/               .                            *                   *       .                        .     ,",
"|___ \\|_|  / ___|_ __ __ _ _ __ ___  _ __ ___   __ _ _ __   *              .               *                *                *", 
"  __) |   | |  _| '__/ _` | '_ ` _ \\| '_ ` _ \\ / _` | '__|                        *                 *",
" / __/ _  | |_| | | | (_| | | | | | | | | | | | (_| | |               *                  *                   *                  *",
"|_____(_)  \\____|_|  \\__,_|_| |_| |_|_| |_| |_|\\__,_|_|    *                .                      .                                     *",
"            __ _ _   _(_)___________  ___                                   .                      ;            *          .",   
"           / _` | | | | |_  /_  / _ \\/ __|           *        *             :       ,          - --+- -                                          *",
"          | (_| | |_| | |/ / / /  __/\\__ \\               .                  !           .          !                 ,             .",
"           \\__, |\\__,_|_/___/___\\___||___/        *              *          |        .             .",
" _____    __  |_|          _                    _        .                  |_         +                .      .           ,",
"|___ /   |  \\/  |_   _ ___(_) ___    __ _ _   _(_)___________  ___       ,  | `.                       O",
"  |_ \\   | |\\/| | | | / __| |/ __|  / _` | | | | |_  /_  / _ \\/ __|--- --+-<#>-+- ---  --  -          .        .      *           .          *           *", 
" ___) |  | |  | | |_| \\__ \\ | (__  | (_| | |_| | |/ / / /  __/\\__ \\      `._|_,'                     /",
"|____(_) |_|__|_|\\__,_|___/_|\\___|  \\__, |\\__,_|_/___/___\\___||___/         T                 :     /        .               *             *                *",   
"| || |    |  _ \\ __ _| |_| |_ ___ _ __ |_|_                                 |                   ,  O",
"| || |_   | |_) / _` | __| __/ _ \\ '__| '_ \\              *                 !                     /",
"|__   _|  |  __/ (_| | |_| ||  __/ |  | | | |     *                         :         . :    #/##/#                          *          .",   
"   |_|(_) |_|   \\__,_|\\__|\\__\\___|_|  |_| |_|         *                     .       *     ###/##O#  #",
"           _ __  _   _ _______| | ___  ___        .                                      ###/##/#  #*#",
"          | '_ \\| | | |_  /_  / |/ _ \\/ __|   *                        .                 ##/##/#  #*##                   *                *",                 
"          | |_) | |_| |/ / / /| |  __/\\__ \\                                              #/##O#  #*##",
"          | .__/ \\__,_/___/___|_|\\___||___/              .     *               .           #/# #*#",
" ____  _  |_|      _                               *                                  .    /          .                         .",
"| ___|| | | |_ __ | | ___ __   _____      ___ __    ___________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---______________/===\\___",
"|___ \\| | | | '_ \\| |/ / '_ \\ / _ \\ \\ /\\ / / '_ \\                     /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---",
" ___) | |_| | | | |   <| | | | (_) \\ V  V /| | | |   .                      --           -            --  -      -         ---  __       ^",
"|____(_)___/|_| |_|_|\\_\\_| |_|\\___/ \\_/\\_/ |_| |_|           .        --  __                      ___--  ^  ^                         --  __"
};

int main() {
    for (int i = 0; i < 39; ++i) {
        printf("%s", ASCII[i]);
        printf("\n");
    }
    return 0;
}
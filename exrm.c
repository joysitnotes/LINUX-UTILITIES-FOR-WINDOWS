#include <stdio.h>
#include <windows.h>
// Remove all exif data in current directory
int main(void){
    system("exiftool -all= -overwrite_original *.*");
        return 0;
}

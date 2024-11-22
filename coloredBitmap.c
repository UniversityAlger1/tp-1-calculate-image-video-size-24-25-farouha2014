#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
// Taille brute de l'image en octets (3 octets par pixel)
    float sizeInBytes = w * h * 3;

    // Conversion de la taille en fonction de l'unit� demand�e
    if (unit="ko") {
        // Taille en kilobits (1 Ko = 1024 bits)
        return (sizeInBytes ) / 1024;
    } else if (unit="mo") {
        // Taille en m�gabits (1 Mo = 1024 Ko)
        return (sizeInBytes ) / 1024 /1024;
    } else if (unit="go") {
        // Taille en gigabits (1 Go = 1024 Mo)
        return (sizeInBytes ) / 1024 /1024 /1024;
    } else {
        // Unit� inconnue : retourner -1 comme code d'erreur
        return -1;
    }
   // YOUR CODE HERE - END
   return 0;
}

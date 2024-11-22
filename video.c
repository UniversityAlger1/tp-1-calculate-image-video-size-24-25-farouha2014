#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
// Taille d'une image en couleur (3 bytes par pixel pour RGB)
    float colorImageSize = w * h * 3 ;
    // Taille d'une image noir et blanc (1 byte par pixel)
    float bwImageSize = w * h;

    // Nombre total de frames dans chaque section
    int colorFrames = durationMovie * fps;
    int bwFrames = durationCredits * fps;

    // Calcul de la taille totale en bytes
    float totalSizeInBytes = (colorImageSize * colorFrames ) + (bwImageSize * bwFrames);

     float sizeInBytes=totalSizeInBytes;
    
    if (unit =="ko") {
        // Retourne la taille en kilobits (1 KB = 1024 bits)
        return (float)(sizeInBytes  ) / 1024;
    } else if (unit =="mo"){
        // Retourne la taille en mégabits (1 MB = 1024 KB, 1 KB = 1024 bits)
        return (float)(sizeInBytes ) / 1024 / 1024;
    } else if (unit =="go") {
        // Retourne la taille en gigabits (1 GB = 1024 MB, 1 MB = 1024 KB, 1 KB = 1024 bits)
        return (float)(sizeInBytes  ) / 1024 / 1024 / 1024;
    } else {
        // Si l'unité est inconnue, retourne -1 pour signaler une erreur
        return -1;
    }
   // YOUR CODE HERE - END
   return 0;
}
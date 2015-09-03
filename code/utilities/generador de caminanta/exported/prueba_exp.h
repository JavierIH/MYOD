#ifndef PRUEBA_H
#define PRUEBA_H

extern Robot myod;

void prueba(){

/*-------CONFIG------
tiempo total: 800
numero de pasos: 20
cadera: 20
rodilla: 8
avance: 10
cintura: 5
brazos avance: 6
brazos cadera: 0
*/
int inctime = 40;
int vector_1[25] = { 85, 85,165, 15, 87, 81, 90, 90, 90, 90, 95, 95, 90, 90, 93, 93, 90, 90, 90, 90, 93, 93, 91, 91, 90};
int vector_2[25] = { 85, 85,165, 15, 87, 81, 90, 90, 90, 90, 95, 95, 93, 93, 93, 93, 90, 90, 90, 90, 93, 93, 94, 94, 90};
int vector_3[25] = { 86, 86,165, 15, 88, 82, 90, 90, 90, 90, 94, 94, 96, 96, 92, 89, 90, 87, 90, 93, 92, 95, 97, 97, 90};
int vector_4[25] = { 87, 87,165, 15, 89, 83, 90, 90, 90, 90, 93, 93, 96, 96, 91, 82, 90, 81, 90, 99, 91,100, 97, 97, 90};
int vector_5[25] = { 88, 88,165, 15, 91, 85, 90, 90, 90, 90, 92, 92, 96, 96, 90, 74, 90, 74, 90,106, 90,106, 97, 97, 90};
int vector_6[25] = { 90, 90,165, 15, 93, 87, 90, 90, 90, 90, 90, 90, 96, 96, 89, 69, 90, 70, 90,110, 89,109, 97, 97, 90};
int vector_7[25] = { 92, 92,165, 15, 95, 89, 90, 90, 90, 90, 88, 88, 96, 96, 88, 72, 90, 74, 90,106, 88,104, 97, 97, 90};
int vector_8[25] = { 93, 93,165, 15, 97, 91, 90, 90, 90, 90, 87, 87, 96, 96, 87, 78, 90, 81, 90, 99, 87, 96, 97, 97, 90};
int vector_9[25] = { 94, 94,165, 15, 98, 92, 90, 90, 90, 90, 86, 86, 96, 96, 87, 84, 90, 87, 90, 93, 87, 90, 97, 97, 90};
int vector_10[25] = { 95, 95,165, 15, 99, 93, 90, 90, 90, 90, 85, 85, 93, 93, 87, 87, 90, 90, 90, 90, 87, 87, 94, 94, 90};
int vector_11[25] = { 95, 95,165, 15, 99, 93, 90, 90, 90, 90, 85, 85, 90, 90, 87, 87, 90, 90, 90, 90, 87, 87, 91, 91, 90};
int vector_12[25] = { 95, 95,165, 15, 99, 93, 90, 90, 90, 90, 85, 85, 87, 87, 87, 87, 90, 90, 90, 90, 87, 87, 87, 87, 90};
int vector_13[25] = { 94, 94,165, 15, 98, 92, 90, 90, 90, 90, 86, 86, 85, 85, 90, 87, 93, 90, 87, 90, 84, 87, 84, 84, 90};
int vector_14[25] = { 93, 93,165, 15, 97, 91, 90, 90, 90, 90, 87, 87, 85, 85, 97, 88, 99, 90, 81, 90, 79, 88, 84, 84, 90};
int vector_15[25] = { 92, 92,165, 15, 95, 89, 90, 90, 90, 90, 88, 88, 85, 85,105, 89,106, 90, 74, 90, 73, 89, 84, 84, 90};
int vector_16[25] = { 90, 90,165, 15, 93, 87, 90, 90, 90, 90, 90, 90, 85, 85,110, 90,110, 90, 70, 90, 70, 90, 84, 84, 90};
int vector_17[25] = { 88, 88,165, 15, 91, 85, 90, 90, 90, 90, 92, 92, 85, 85,107, 91,106, 90, 74, 90, 75, 91, 84, 84, 90};
int vector_18[25] = { 87, 87,165, 15, 89, 83, 90, 90, 90, 90, 93, 93, 85, 85,101, 92, 99, 90, 81, 90, 83, 92, 84, 84, 90};
int vector_19[25] = { 86, 86,165, 15, 88, 82, 90, 90, 90, 90, 94, 94, 85, 85, 96, 93, 93, 90, 87, 90, 90, 93, 84, 84, 90};
int vector_20[25] = { 85, 85,165, 15, 87, 81, 90, 90, 90, 90, 95, 95, 87, 87, 93, 93, 90, 90, 90, 90, 93, 93, 87, 87, 90};


myod.move(inctime, vector_1);
myod.move(inctime, vector_2);
myod.move(inctime, vector_3);
myod.move(inctime, vector_4);
myod.move(inctime, vector_5);
myod.move(inctime, vector_6);
myod.move(inctime, vector_7);
myod.move(inctime, vector_8);
myod.move(inctime, vector_9);
myod.move(inctime, vector_10);
myod.move(inctime, vector_11);
myod.move(inctime, vector_12);
myod.move(inctime, vector_13);
myod.move(inctime, vector_14);
myod.move(inctime, vector_15);
myod.move(inctime, vector_16);
myod.move(inctime, vector_17);
myod.move(inctime, vector_18);
myod.move(inctime, vector_19);
myod.move(inctime, vector_20);

}
#endif

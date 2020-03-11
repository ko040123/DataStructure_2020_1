/*
On my honor, I pledge that I have neither received nor provided improper assistance in my completion on this assignment.
Signed: Kim Woo Bin   Student Number: 21600124
*/
#ifndef SORT_H
#define SORT_H

void bubbleSort(int *list, int n);
void insertionSort(int *list, int n);
void selectionSort(int *list, int n);
int partition(int list[], int lo, int hi);
void _quickSort(int *list, int lo, int hi, int n);
void quickSort(int *a, int n);
void print_list(int *list, int n);



#endif

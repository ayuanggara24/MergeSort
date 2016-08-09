#include <stdio.h>
#define MAX 7
int Data[MAX];
int temp[MAX];

// Prosedur merge sort
void merge(int Data[], int temp[], int kiri, int tengah, int kanan)
{
            int i, left_end, num_elements, tmp_pos;
            left_end = tengah - 1;
            tmp_pos = kiri;
            num_elements = kanan - kiri + 1;

            while ((kiri <= left_end) && (tengah <= kanan))
            	 {
                        if (Data[kiri] <= Data[tengah])
                        {
                        	 temp[tmp_pos] = Data[kiri];
                        	  tmp_pos = tmp_pos + 1;
                                    kiri = kiri +1;
                        }
                                    
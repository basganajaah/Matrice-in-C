#include <stdio.h>
#define MAX 100

int main();

void penjumlahanPenguranganMatriks(int opsiOperasi) {
    int i, j, size;
    printf("Masukkan jumlah baris dan kolom matriks: ");
    scanf("%d", &size);
    
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    
    printf("Masukkan elemen matriks A:\n");
    for (int i = 0; i < size; i++) {
    	for (int j = 0; j < size; j++) {
    		printf("Elemen[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
		}
        	
	}
    printf("Masukkan elemen matriks B:\n");
    for (int i = 0; i < size; i++) {
    	for (int j = 0; j < size; j++) {
    		printf("Elemen[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
		}	
	}
	printf("Matriks A:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("Matriks B:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	
	if (opsiOperasi == 1) {
		printf("Hasil penjumlahan matriks A dan B:\n");
    	for (int i = 0; i < size; i++) {
	        for (int j = 0; j < size; j++) {
	            C[i][j] = A[i][j] + B[i][j];
	            printf("%d ", C[i][j]);
	        }
	        printf("\n");
    	}
	} else {
		printf("Hasil pengurangan matriks A dan B:\n");
    	for (int i = 0; i < size; i++) {
	        for (int j = 0; j < size; j++) {
	            C[i][j] = A[i][j] - B[i][j];
	            printf("%d ", C[i][j]);
	        }
	        printf("\n");
    	}
	}
	
    
}

void perkalianMatriks() {
    int baris1, kolom1, baris2, kolom2;
    printf("Masukkan jumlah baris matriks pertama: ");
    scanf("%d", &baris1);
    printf("Masukkan jumlah kolom matriks pertama: ");
    scanf("%d", &kolom1);
    
    printf("Masukkan jumlah baris matriks kedua: ");
    scanf("%d", &baris2);
    printf("Masukkan jumlah kolom matriks kedua: ");
    scanf("%d", &kolom2);
    
    if (baris1 != kolom2) {
        printf("Perkalian matriks tidak dapat dilakukan.\n");
        perkalianMatriks();
    }
    
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    
    printf("Masukkan elemen matriks A:\n");
    for (int i = 0; i < baris1; i++) {
    	for (int j = 0; j < kolom1; j++) {
    		printf("Elemen[%d][%d]: ", i, j);
        	scanf("%d", &A[i][j]);
		}
	}
        
    printf("Masukkan elemen matriks b:\n");
    for (int i = 0; i < baris2; i++) {
    	for (int j = 0; j < kolom2; j++) {
    		printf("Elemen[%d][%d]: ", i, j);
        	scanf("%d", &B[i][j]);
		}
	}
    
    printf("Matriks A:\n");
	for (int i = 0; i < baris1; i++) {
		for (int j = 0; j < kolom1; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
    
    printf("Matriks B:\n");
	for (int i = 0; i < baris2; i++) {
		for (int j = 0; j < kolom2; j++) {
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
    
    printf("Hasil perkalian matriks A dan B:\n");
    for (int i = 0; i < baris1; i++) {
        for (int j = 0; j < kolom2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < kolom1; k++)
                C[i][j] += A[i][k] * B[k][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void perkalianSkalar() {
	int baris, kolom, skalar;
    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom matriks: ");
    scanf("%d", &kolom);
    printf("Masukkan jumlah nilai skalar: ");
    scanf("%d", &skalar);
	
	int A[MAX][MAX], B[MAX][MAX];
	
	printf("Masukkan elemen matriks A:\n");
    for (int i = 0; i < baris; i++) {
    	for (int j = 0; j < kolom; j++) {
    		printf("Elemen[%d][%d]: ", i, j);
        	scanf("%d", &A[i][j]);
		}
	}
	
	printf("Matriks A:\n");
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	printf("Hasil perkalian matriks dengan skalar %d:\n", skalar);
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            B[i][j] = 0;
            B[i][j] +=  skalar * A[i][j];
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}


void kombinasiLinear() {
    // belum diimplementasikan (opsional)
}

void transposeMatriks() {
    int baris, kolom;
    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom matriks: ");
    scanf("%d", &kolom);
    
    int A[MAX][MAX], B[MAX][MAX];
    
    printf("Masukkan elemen matriks:\n");
    for (int i = 0; i < baris; i++) {
    	for (int j = 0; j < kolom; j++) {
    		printf("Elemen[%d][%d]: ", i, j);
        	scanf("%d", &A[i][j]);
		}
	}
	
	printf("Matriks:\n");
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
    printf("Hasil transpose matriks:\n");
    for (int j = 0; j < kolom; j++) {
        for (int i = 0; i < baris; i++) {
            B[j][i] = A[i][j];
            printf("%d ", B[j][i]);
        }
        printf("\n");
    }
}

void traceMatriks() {
    int size;
    printf("Masukkan ukuran matriks persegi (baris = kolom): ");
    scanf("%d", &size);
    
    int A[MAX][MAX];
    int trace = 0;
    
    printf("Masukkan elemen matriks:\n");
    for (int i = 0; i < size; i++) {
    	for (int j = 0; j < size; j++) {
    		printf("Elemen[%d][%d]: ", i, j);
        	scanf("%d", &A[i][j]);
		}
	}
    
    printf("Matriks:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
    
    for (int i = 0; i < size; i++)
        trace += A[i][i];
    
    printf("Trace matriks: %d\n", trace);
}

void matriksNol() {
    int baris, kolom;
    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &kolom);
    
    int A[MAX][MAX] = {0};
    
    printf("Matriks Nol (%d x %d):\n", baris, kolom);
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

void matriksIdentitas() {
    int size;
    printf("Masukkan ukuran matriks persegi (baris = kolom): ");
    scanf("%d", &size);
    
    int A[MAX][MAX] = {0};
    
    for (int i = 0; i < size; i++)
        A[i][i] = 1;
    
    printf("Matriks Identitas (%d x %d):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

void inversMatriks() {
	// invers matriks hanya untuk ordo 2x2
    int size;
    printf("Masukkan ukuran matriks persegi (baris = kolom): ");
    scanf("%d", &size);
    
    if (size != 2) {
        printf("Invers matriks hanya diimplementasikan untuk matriks 2x2.\n");
        main();
    }
    
    int A[MAX][MAX];
    float inversA[MAX][MAX];
    
    printf("Masukkan elemen matriks 2x2:\n");
    for (int i = 0; i < size; i++) {
    	for (int j = 0; j < size; j++) {
    		printf("Elemen[%d][%d]: ", i, j);
        	scanf("%d", &A[i][j]);
		}
	}
	
    int determinan = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    
    if (determinan == 0) {
        printf("Matriks tidak memiliki invers karena determinan = 0.\n");
        main();
    }
    
    inversA[0][0] = A[1][1] / (float)determinan;
    inversA[0][1] = -A[0][1] / (float)determinan;
    inversA[1][0] = -A[1][0] / (float)determinan;
    inversA[1][1] = A[0][0] / (float)determinan;
    
    printf("Invers matriks 2x2:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%0.2f ", inversA[i][j]);
        }
        printf("\n");
    }
}

void opsiOperasi() {

}

int main() {
    int opsiMenu;
    
    do {
        printf("Menu Utama:\n");
        printf("1. Penjumlahan atau Pengurangan\n");
        printf("2. Perkalian Matriks\n");
        printf("3. Perkalian Skalar Matriks\n");
        printf("4. Kombinasi Linear\n");
        printf("5. Transpose Matriks\n");
        printf("6. Trace Matriks\n");
        printf("7. Matriks Nol\n");
        printf("8. Matriks Identitas\n");
        printf("9. Invers Matriks\n");
        printf("0. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &opsiMenu);
        
        switch (opsiMenu) {
            case 1:
            	int opsiOperasi;
					printf("1. Penjumlahan\n2. Pengurangan\n");
					printf("Pilihan Anda: ");
					scanf("%d", &opsiOperasi);
				
					switch(opsiOperasi) {
						case 1:
							penjumlahanPenguranganMatriks(opsiOperasi);
							main();
						case 2:
							penjumlahanPenguranganMatriks(opsiOperasi);
							main();
						default:
							printf("Opsi tidak tersedia.\n");
		            	    break;
					}   
		    	break;
            case 2:
                perkalianMatriks();
                break;
            case 3:
                perkalianSkalar();
                break;
            case 4:
                kombinasiLinear();
                break;
            case 5:
                transposeMatriks();
                break;
            case 6:
                traceMatriks();
                break;
            case 7:
                matriksNol();
                break;
            case 8:
                matriksIdentitas();
                break;
            case 9:
            	inversMatriks();
            	break;
            case 0:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Opsi tidak tersedia.\n");
                break;
        }
        
    } while (opsiMenu != 0);
    
    return 0;
}

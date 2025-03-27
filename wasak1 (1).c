#include <stdio.h>
#include <string.h>
int a;
int a1;
int fibo;
int x1 ;
int soma2 = 0 ;
int sm1 = 0 ;
int array[10] = {6,4,5,3,2,7,8,5,9,9};//51
int result ;
int conta = 0 ;
int resul = 0 ;
int hanoi = 2 ;
int N5 = 5 ;
int MAX_N =100;
int tabuleiro[100][100];
int n6 = 5 ;
int labirinto[5][5] = {
    {0, 1, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0},
    {1, 1, 0, 0, 0},
    {0, 0, 0, 1, 0}
};

int fatorial(int n){
	n--;
	a=a*(n);
	if(n>1){
		fatorial(n);
	}
}
int soma(int n1){
	n1--;
	a1--;
	a1=a1+(n1);

	if(n1>0){
	soma(n1);
	}
	
}
int fibonacci(int f1,int f2,int b,int i){
	i++;
	fibo = f1 + f2;
	printf("%i ",fibo);
	if(i<b){
		fibonacci(f2,fibo,b,i);
	}
	
}
int elevado (int n2,int x2){
	if(n2>1){
		x1 = x1*x2;
		elevado(n2-1,x2);
	}
}
int regressiva(int cont){
	printf("%i ",cont);
	cont--;
	if(cont<0){ return 1 ;}
	regressiva(cont);
}
int somadi (int di){
	int soma = di % 10 ;
	di = (di-soma) / 10 ;
	
	soma2 = soma + soma2;
	
	if(di>0){
	somadi(di);
	}
}
void inverterStringRecursivo(char *str, int esquerda, int direita) {
    char temp = str[esquerda];
    str[esquerda] = str[direita];
    str[direita] = temp; 
    if (esquerda <= direita) {
      inverterStringRecursivo(str, esquerda + 1, direita - 1);
    }
}
int Palindromo(char *str1, int esquerda1, int direita1) {
   
    if (esquerda1 >= direita1) {
        return 1;
    }
    if (tolower(str1[esquerda1]) == tolower(str1[direita1])) {
        return Palindromo(str1, esquerda1 + 1, direita1 - 1);
    } else {
        return 0;
    }
}
int mmc(int m,int c){
	int resto = m % c ;
	if(resto == 0){
		printf("o mmc e:%i",c);
	}
	else{
		mmc(c,resto);
	}
}
int multisoma(int sm,int sd){
	sm1 = sm+sm1 ;
	if(sd > 1){
		sd--;
		multisoma(sm,sd);
		
	}
}
int contarCaracter(char *str2, char c, int index) {

    if (str2[index] == '\0') {
        return 0;
    }
    if (str2[index] == c) {
        return 1 + contarCaracter(str2, c, index + 1);
    } else {
        return contarCaracter(str2, c, index + 1);
    }
}

int somaarray(int i){
	
	result = array[i] + result;
	if(i >= 0){
		i--;
		somaarray(i);
	}
}
int numeroprimo(int pri,int divi){
	pri % divi;
	if(divi == 1){
		return 1 ;
	}
	else if(pri % divi == 0){
	conta++;
	}
	numeroprimo(pri,divi-1);
}
int binario(int bi,int p){
	int bina = bi % 2 ;
	bi = bi / 2 ;
	resul  = resul + (bina * p) ;
	p = p * 10;
	if(bi>0){
		binario(bi,p);
	}
}
int numerospares(int conpar,int i){
	
	printf("%i",i);
	i++;
	i++;
	if(i <= conpar){
	numerospares(conpar,i);
    }
}
int numeroimpar(int conimpar,int i1){
	
	printf("%i",i1);
	i1++;
	i1++;
	if(i1 < conimpar){
	numeroimpar(conimpar,i1);
    }
}
int comarray(int comar,int u){
	int vetor[10] = {10,4,6,2,8,9,7,3,1,5};
	if(vetor[u] == comar){
		printf("a elementos parecidos com:%i",comar);
		return 1 ;
	}
	else if(u > 9){
		
		printf("nao a elementos parecidos com:%i",comar);
		return 1 ;
	}
	u++;
	comarray(comar,u);
}
int string_length(const char *str) {
    if (*str == '\0') {
        return 0; 
    }
    return 1 + string_length(str + 1);
}
int torre(int disco){
	hanoi = hanoi * 2 ;
	disco--;
	if(disco == 1 ){
		return 0;
	}
	torre(disco);
}
void swap(char *a, char *b) {
    char temp1 = *a;
    *a = *b;
    *b = temp1;
}
void permute(char *str4, int l, int r) {
    if (l == r) {
        printf("%s\n", str4);
    } 
	int i1 = l;
        while(i1 <= r) {
            swap(&str4[l], &str4[i1]);
            permute(str4, l + 1, r);
            swap(&str4[l], &str4[i1]);
            i1++;
        }
}
void combinar(char *stra, char *data, int start, int index1, int k, int n) {
	int i2 = start;
    if (index1 == k) {
        data[k] = '\0';
        printf("%s\n", data);
        return;
    }
    while(i2 < n+1) {
        data[index1] = stra[i2];
        combinar(stra, data, i2 + 1, index1 + 1, k, n);
        i2++;
    }
}
void gerarSubconjuntos(int arr[], int n, int index, int subset[], int subsetSize) {
    if (index == n) {
        int i = 0;
        while (i < subsetSize) { 
            printf("%d", subset[i]);
            i++;
        }
        printf("\n");
        return;
    }
    gerarSubconjuntos(arr, n, index + 1, subset, subsetSize);
    subset[subsetSize] = arr[index];
    gerarSubconjuntos(arr, n, index + 1, subset, subsetSize + 1);
}
void merge(int arra[], int esquerda, int meio, int direita) {
    int i = 0, j = 0, k = esquerda;
    int tamanhoEsq = meio - esquerda + 1;
    int tamanhoDir = direita - meio;
    int L[tamanhoEsq], R[tamanhoDir];
    while (i < tamanhoEsq) {
        L[i] = arra[esquerda + i];
        i++;
    }
    while (j < tamanhoDir) {
        R[j] = arra[meio + 1 + j];
        j++;
    }
    i = 0;
    j = 0;
    while (i < tamanhoEsq && j < tamanhoDir) {
        if (L[i] <= R[j]) {
            arra[k] = L[i];
            i++;
        } else {
            arra[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < tamanhoEsq) {
        arra[k] = L[i];
        i++;
        k++;
    }
    while (j < tamanhoDir) {
        arra[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arra[], int esquerda2, int direita2) {
    if (esquerda2 < direita2) {
        int meio = esquerda2 + (direita2 - esquerda2) / 2;
        mergeSort(arra, esquerda2, meio);
        mergeSort(arra, meio + 1, direita2);
        merge(arra, esquerda2, meio, direita2);
    }
}
void imprimirArray(int arra[], int tamanho) {
    int i = 0;
    while (i < tamanho) {
        printf("%d ", arra[i]);
        i++;
    }
    printf("\n");
}
void trocar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int dividir(int nums[], int start, int end) {
    int pivot = nums[end];
    int i = (start - 1);
    int j = start;
    while( j <= end - 1) {
        if (nums[j] < pivot) {
            i++;
            trocar(&nums[i], &nums[j]);
        }
         j++;
    }

    trocar(&nums[i + 1], &nums[end]);
    return (i + 1);
}

void ordenar(int nums[], int start, int end) {
    if (start < end) {
        int pivotIndex = dividir(nums, start, end);

        ordenar(nums, start, pivotIndex - 1);
        ordenar(nums, pivotIndex + 1, end);
    }
}

void exibirArray(int nums[], int size) {
	int i = 0;
    while ( i < size) {
        printf("%d ", nums[i]);
         i++;
    }
    printf("\n");
}
int buscaBinaria(int lista[9],int chave,int in) {
	int posicao ;
    if(lista[in] == chave){
    	posicao = in + 0 ; 
    	printf("Elemento encontrado no indice %d\n", posicao);
    	return 1 ;
	}
	
	if(in == 8){
		 printf("Elemento nao encontrado\n");
		return 0 ;
	}
	in++;
	buscaBinaria(lista,chave,in);
}
int exponenciacaorapida(int base,int expo,int impar,int base1 ){
	int res ;
	
	if(impar == 1){
		res = (base * base)*base1;
		printf("%i\n",res);
		return 1 ;
	}
	if(expo == 2){
		res = base * base ;
		printf("%i\n",res);
		return 1 ;
	}
	if(expo == 0){
	    res = base * base ;
		printf("%i\n",res);
		return 1 ;
	}
    if(expo % 2 == 0){
    	expo = expo / 2 ; 
    	base = base * base ;
    	exponenciacaorapida(base,expo,impar,base1);
	}
	
	else{
		expo = (expo - 1) / 2 ;
		base = base * base ;
		impar++;
		exponenciacaorapida(base,expo,impar,base1);
	}
	
}

int encontrarCaminho(int matriz[N5][N5], int x, int y, int destinoX, int destinoY, int visitado[N5][N5]) {
    if (x == destinoX && y == destinoY) {
        printf("(%d, %d)\n", x, y);
        return 1;
    }
    if (x < 0 || y < 0 || x >= N5 || y >= N5 || matriz[x][y] == 0 || visitado[x][y]) {
        return 0;
    }
    visitado[x][y] = 1;
    if (encontrarCaminho(matriz, x + 1, y, destinoX, destinoY, visitado)) {
        printf("(%d, %d)\n", x, y);
        return 1;
    }
    if (encontrarCaminho(matriz, x, y + 1, destinoX, destinoY, visitado)) {
        printf("(%d, %d)\n", x, y);
        return 1;
    }
    if (encontrarCaminho(matriz, x - 1, y, destinoX, destinoY, visitado)) {
        printf("(%d, %d)\n", x, y);
        return 1;
    }
    if (encontrarCaminho(matriz, x, y - 1, destinoX, destinoY, visitado)) {
        printf("(%d, %d)\n", x, y);
        return 1;
    }
    visitado[x][y] = 0;
    return 0;
}

int podeColocarRainha(int tabuleiro[MAX_N][MAX_N], int linha, int coluna, int N) {
    int i = 0;
    while (i < linha) {
        if (tabuleiro[i][coluna] == 1) {
            return 0;
        }
        i++;
    }

    i = 0;
    while (i < linha) {
        if (coluna - (linha - i) >= 0 && tabuleiro[i][coluna - (linha - i)] == 1) {
            return 0;
        }
        i++;
    }

    i = 0;
    while (i < linha) {
        if (coluna + (linha - i) < N && tabuleiro[i][coluna + (linha - i)] == 1) {
            return 0;
        }
        i++;
    }

    return 1;
}
void resolverNRainhas(int tabuleiro[MAX_N][MAX_N], int linha, int N,int nba) {
    if (linha == N) {
        int i = 0;
        while (i < N) {
            int j = 0;
            while (j < N) {
                if (tabuleiro[i][j] == 1) {
                    printf("%d ", j + 1);
                    nba++;
                    if(nba >= N){
            	       printf("\n");
			        }
                }
                j++;
            }
            i++;
            
        }
        return;
    }

    int coluna = 0;
    while (coluna < N) {
        if (podeColocarRainha(tabuleiro, linha, coluna, N)) {
            tabuleiro[linha][coluna] = 1;
            resolverNRainhas(tabuleiro, linha + 1, N,0);
            tabuleiro[linha][coluna] = 0;  // Backtrack
        }
        coluna++;
    }
}
void imprimirLabirinto(int l[n6][n6]) {
    int m, n;
    for (m = 0; m < n6; m++) {
        for (n = 0; n < n6; n++) {
            if (l[m][n] == 0)
                printf("  ");
            else
                printf("� ");
        }
        printf("\n");
    }
}

int ehValido(int l[n6][n6], int x, int y) {
    return (x >= 0 && x < n6 && y >= 0 && y < n6 && l[x][y] == 0);
}

int encontrarCaminho1(int l[n6][n6], int x, int y) {
    if (x == n6 - 1 && y == n6 - 1) {
        l[x][y] = 2;
        return 1;
    }

    if (ehValido(l, x, y)) {
        l[x][y] = 2;

        if (encontrarCaminho1(l, x + 1, y)) return 1;
        if (encontrarCaminho1(l, x, y + 1)) return 1;
        if (encontrarCaminho1(l, x - 1, y)) return 1;
        if (encontrarCaminho1(l, x, y - 1)) return 1;

        l[x][y] = 0;
    }

    return 0;
}
void gerarCombinacoesRecursivo(char *combinacao, int abertos, int fechados, int pares) {
    if (abertos == pares && fechados == pares) {
        printf("%s\n", combinacao);
        return;
    }
    if (abertos < pares) {
        combinacao[abertos + fechados] = '(';
        gerarCombinacoesRecursivo(combinacao, abertos + 1, fechados, pares);
    }
    if (fechados < abertos) {
        combinacao[abertos + fechados] = ')';
        gerarCombinacoesRecursivo(combinacao, abertos, fechados + 1, pares);
    }
}
void gerarCombinacoes(int pares) {
    char *combinacao = (char *)malloc(2 * pares + 1);
    combinacao[2 * pares] = '\0';
    gerarCombinacoesRecursivo(combinacao, 0, 0, pares);
    free(combinacao);
}
int main(){	
    int n2 ;
    int cont ;
    int du ;
    char pala[50] ;
    char str[100];
    int enm ;
    int enc ;
    int somu ;
    int sodu ;
    char str2[100];
    char str4[100];
    char c;
    int pr ;
    int bi ;
    int conpar ;
    int conimpar ;
    int comar ;
    char str3[100];   
    int disco ;
    char stra[100];
    int k = 2;
    int n = strlen(stra);
    char data[k + 1];
    int sub ;
    int arr[] = {1, 2, 3};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int subset[n1]; 
    int arra[] = {38, 27, 43, 3, 9, 82, 10};
    int tamanho = sizeof(arra) / sizeof(arra[0]);
    int nums[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int lista[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int chave ;
    int base ;
    int expo ;
    int entra1 ;
    int matriz[5][5] = {
        {1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 1, 1},
        {1, 1, 0, 1, 0},
        {1, 0, 1, 1, 1}
    };   
	int visitado[5][5] = {0};
    int inicioX = 0;
	int inicioY = 0;
	int destinoX = 4;
	int destinoY = 4;
    int N;
	int i5 = 0;
	int pares;
    scanf("\n%i",&a);
	  fatorial(a);
	  printf("%i\n",a);

	  scanf("%i",&a1);
	  soma(a1);
	  printf("%i\n",a1);
	
	  scanf("%i",&fibo);
	  fibonacci(0,1,fibo,0);
	  printf("\n");
	
	  scanf("%i",&x1);
	  scanf("%i",&n2);
	  elevado(n2,x1);
	  printf("%i",x1);
    printf("\n");
	
	  scanf("%i",&cont);
	  regressiva(cont);
	  printf("\n");
	
	  scanf("%i",&du);
	  somadi(du);
    printf("%i",soma2);

	  scanf("%s",pala);
	  inverterStringRecursivo(pala, 0, strlen(pala) - 1);
	  printf("%s",pala);

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int comprimento = strlen(str);
    if (Palindromo(str, 0, comprimento - 1)) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

    scanf("%i",&enm);
    scanf("%i",&enc);
    mmc(enm,enc);

    scanf("%i",&somu);
    scanf("%i",&sodu);
    multisoma(somu,sodu);
    printf("%i\n",sm1);

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    scanf(" %c", &c);
    int resultado = contarCaracter(str2, c, 0);
    printf("aparece %d vezes.\n", resultado);

    somaarray(10);
    printf("%i",result);
      
    scanf("%i",&pr);
    numeroprimo(pr,pr-1);
    if(conta>0){
     	printf("nao e primo");
	  }
	  else{
	  	printf("e primo");
	  }

    scanf("%i",&bi);
    binario(bi,1);
    printf("%i",resul);

    scanf("%i",&conpar);
    numerospares(conpar,0);
    printf("\n");
        
    scanf("%i",&conimpar);
    numerospares(conimpar,1);
    printf("\n");
        
    scanf("%i",&comar);
	  comarray(comar,0);
	  printf("\n");
	  
 	  fgets(str3, sizeof(str3), stdin);  
	  if (str3[string_length(str3) - 1] == '\n') {
        str3[string_length(str3) - 1] = '\0';
    }
    printf("O comprimento da string e: %d\n", string_length(str3));
      
    scanf("%i",&disco);
	  torre(disco);
	  hanoi--;
	  printf("%i",hanoi);

    scanf("%s", str4);
    int n7 = strlen(str4);
    printf("Permutacoaes da string \"%s\":\n", str4);
    permute(str4, 0, n7 - 1);

    scanf("%s",&stra);
    combinar(stra, data, 0, 0, k, n);
    printf("\n");

    printf("subconjuntos");
    gerarSubconjuntos(arr, n1, 0, subset, 0);
    
    printf("Array original: ");
    imprimirArray(arra, tamanho);
    mergeSort(arra, 0, tamanho - 1);
    printf("Array ordenado: ");
    imprimirArray(arra, tamanho);
    
    printf("Array original: ");
    exibirArray(nums, size);
    ordenar(nums, 0, size - 1);
    printf("Array ordenado: ");
    exibirArray(nums, size);

    scanf("%i",&chave); //{1, 3, 5, 7, 9, 11, 13, 15, 17}
    buscaBinaria(lista,chave,0);
    
    scanf("%i",&base);
    scanf("%i",&expo);
    exponenciacaorapida(base,expo,0,base);
    if (encontrarCaminho(matriz, inicioX, inicioY, destinoX, destinoY, visitado)) {
        printf("Caminho encontrado!\n");
    } else {
        printf("Nenhum caminho poss�vel.\n");
    }  

    scanf("%d", &N);
    int i = 0;
    while (i < N) {
        int j = 0;
        while (j < N) {
            tabuleiro[i][j] = 0;
            j++;
        }
        i++;
    }
    resolverNRainhas(tabuleiro, 0, N,0);
    
    printf("Labirinto original:\n");
    imprimirLabirinto(labirinto);

    if (encontrarCaminho1(labirinto, 0, 0)) {
        printf("\nCaminho encontrado no labirinto:\n");
        imprimirLabirinto(labirinto);
    } else {
        printf("\nN�o h� caminho poss�vel.\n");
    }
    
    scanf("%d", &pares);
    gerarCombinacoes(pares);

}

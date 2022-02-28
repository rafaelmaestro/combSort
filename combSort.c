void Comb_Sort (int *V, int N)
{
	int Salto;
	int Auxiliar, Trocas;
	int i, j;
	Salto = N * 10 / 13; 
	for(i = 0; (i < N) && Salto > 0; i++)
	{
		Trocas = 0;
		for(j = 0; j < N; j++)
		{
			if((V[j] > V[j + Salto]) && (j + Salto < N))
			{
				Auxiliar = V[j];
				V[j] = V[j + Salto];
				V[j + Salto] = Auxiliar;
				Trocas = 1;
			}
		}
		printf("\nVetor atual:\n\t");
		for(j = 0; j < N; j++)
		{
			printf("%d ", V[j]);
		}
		printf("\n");
		Salto = Salto / 1.3;
	}
}
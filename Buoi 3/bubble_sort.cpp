void bubble(int a[], int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (a[j] > a[j + 1]){
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
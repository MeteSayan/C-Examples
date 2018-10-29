
struct Student{
	
	char isim[15];
	char soyIsim[15];
	int numara;
	int yas;
	
	
	
	
};

int main(){
	
	struct Student ahmet = {"Ahmet", "Gedikli",135,23};
	
	printf("%s %s %d %d",ahmet.isim,ahmet.soyIsim,ahmet.numara,ahmet.yas);
	
	return 0;
}

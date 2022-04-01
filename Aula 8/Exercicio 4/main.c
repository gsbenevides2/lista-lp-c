int len(char s[]){
	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}

void rev(char s[]){
 int i =	0;
	char c;
	int j =	len(s) - 1;

	while(i < j){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}

int main(void){
 char v[10] = "ROMA";
 rev(v);
 puts(v);
 return 0;
}

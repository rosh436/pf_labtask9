#include<stdio.h>
#include<string.h>
int main(){
	/*char passWord[10], userName[10];
	char match='@';
	printf("Enter the user name:");
	scanf("%s", userName);
	printf("Enter a password");
	scanf("%s", passWord);
	if(strlen(passWord)>=8){
		printf("The length is valid");
	}
		if(strcmp(passWord, userName)==0){
		printf("valid");
	}
	if(strchr(passWord, match)){
		printf("valid");
	}
	else{
		printf("not valid");
	}

}
char name[20];
char lastName[20];
printf("Enter the first name:");
scanf("%s", name);
printf("Enter the last name");
scanf("%s", lastName);
printf("Hello %s %s\n", name, lastName);
char VIP[]="ali";
if(strstr(lastName,"ali")){

	printf("found\n");
	printf("%s", VIP);
}
else
printf("not found\n");
printf("%s", strncpy(lastName, name,2));}
char arr1[3][3]={{'e', 'a', 't'}, {'i', 'y', 'r'},{'e', 'v', 'c'}};
char searchWord[3];
char arr2[3][3];
int i, count=0, j;
printf("Enter the word you want to search in the first row: ");
scanf("%s", searchWord);        
for(i=0;i<3;i++){    //as it is a search program so we asked the user for the word heehee
if(arr1[0][i]==searchWord[i]){
	printf("foundd\n");}
else
printf("loop it again\n");  //i didnt know how to make the loop word one more time so i did this
}
printf("Count the specific character in the array:");
for(j=0;j<3;j++){
	for(i=0;i<3;i++){
	if(arr1[j][i]=='e'){
		count++;
	}
}
}
printf("The number of times the character appears is %d", count);
printf("the string is:");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		arr2[i][j]==arr1[i][j];
	}
	printf("%s", arr2[i][j]);
}
}*/
char marks[5][4];
char grades[3][3];
printf("Enter the grade:");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%c", &grade[i][j]);
	}
printf("\n");
}
printf("Enter the grade:");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%c", grade[i][j]);
	}
printf("\n");
}




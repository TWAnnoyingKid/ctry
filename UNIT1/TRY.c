#include <stdlib.h>
#include <stdio.h>
main(){
	printf("%d\n",65); //�L��� "65"
	printf("%c\n",65); //�L�r�� "A"
	printf("%o\n",65); //�L8�i�� "101"
	printf("%x\n",65); //�L16�i�� "41"(�j�p�g���t) 
	printf("%f\n",65.65); //�L�B�I�ƨ�p���I6�� 65.650000 
	printf("%.2f\n",65.65999); //�L�B�I�� %.Xf .X�N���p���I��X�� �åH(x+1)�찵�|�ˤ��J "65.66" 
	printf("%.3s\n","ottff"); //�L�r�� %.Xs .X�N���ĴX�Ӧ줸 "ott"
	printf("%6d\n",65); //�L�ƻ򳣦� %Xd X�N��w�dX�Ӧr���e "65"�e��� �ҥH"65"�e���Q�۰ʸɤW4�ӪŮ�V�k��� "    65"  
	printf("%-6d\n",65); //�L�ƻ򳣦� %-Xd -X�N��w�dX�Ӧr���e "65"�e��� �ҥH"65"�e���Q�۰ʸɤW4�ӪŮ�V����� "65"  
	printf("%e\n",81); //�H���ƧΦ��L��� "4.001932e-322 "
	printf("%c\n",'A'); //�L�r�� "A"
	printf("%s\n","�r��"); //�L�r�� "�r��"
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int ch;
	char ans,a,b,c,d;
	printf("**************************\t\n\tWELCOME\t\n**************************\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	do{
	
		
		if(ch==1){
		
			printf("Start");
		    printf("Let's start\n");
		    printf("1.Grand Central Terminal, Park Avenue, New York is the world's\n(a)largest railway station\n(b)highest railway station\n(c)longest railway station\n(d)None of the above\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='a')
		       printf("Correct");
	        else
		       printf("Wrong");
		    printf("\n2.Entomology is the science that studies\n(a)Behavior of human beings\n(b)Insects\n(c)The origin and history of technical and scientific terms\n(d)The formation of rocks\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='b')
		       printf("Correct");
	        else
		       printf("Wrong");
		    printf("\n3.Eritrea, which became the 182nd member of the UN in 1993, is in the continent of\n(a)Asia\n(b)Africa\n(c)Europe\n(d)Australia\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='b')
		       printf("Correct");
	        else
		       printf("Wrong");   
		    
		    printf("\n4.Garampani sanctuary is located at\n(a)Junagarh, Gujarat\n(b)Diphu, Assam\n(c)Kohima, Nagaland\n(d)Gangtok, Sikkim\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='b')
		       printf("Correct");
	        else
		       printf("Wrong");
		    printf("\n5.For which of the following disciplines is Nobel Prize awarded?\n(a)Physics and Chemistry\n(b)Physiology or Medicine\n(c)Literature, Peace and Economics\n(d)All of the above\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='d')
		       printf("Correct");
	        else
		       printf("Wrong");
		    printf("\n6.Hitler party which came into power in 1933 is known as\n(a)Labour Party\n(b)Nazi Party\n(c)Ku-Klux-Klan\n(d)Democratic Party\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='b')
		       printf("Correct");
	        else
		       printf("Wrong");
		    printf("\n7.FFC stands for\n(a)Foreign Finance Corporation\n(b)Film Finance Corporation\n(c)Federation of Football Council\n(d)None of the above\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='b')
		       printf("Correct");
	        else
		       printf("Wrong");
		    printf("\n8.Fastest shorthand writer was\n(a)Dr. G. D. Bist\n(b)J.R.D. Tata\n(c)J.M. Tagore\n(d)Khudada Khan\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='a')
		       printf("Correct");
	        else
		       printf("Wrong");
		    printf("\n9.Epsom (England) is the place associated with\n(a)Horse racing\n(b)Polo\n(c)Shooting\n(d)Snooker\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='a')
		       printf("Correct");
	        else
		       printf("Wrong");
		    printf("\n10.First human heart transplant operation conducted by Dr. Christiaan Barnard on Louis Washkansky, was conducted in\n(a)1967\n(b)1968\n(c)1958\n(d)1922\n");
	        printf("Your ans:");
	        getchar();
	        scanf("%c",&ans);
	        if(ans=='a')
		       printf("Correct");
	        else
		       printf("Wrong");
		    break;
	    }
		else
		    printf("Stop");
		    break;
	
	    
//		system("cls");
		
		
	}while(ch==1);
	
	
}

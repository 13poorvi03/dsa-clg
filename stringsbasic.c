// int = 4bytes=32bits
//char= 1bytes= 8bits


// strings is a character arrays

//code 1----


// #include<stdio.h>
// int main(){
//     int a[4]={1,2,3,4};
    // printf("%p\n",&a[0]);
    // printf("%p\n",&a[1]);
    // printf("%p\n",&a[2]);
    // printf("%p\n",&a[3]);



//     char arr[5]={'a','t','l','s','q'};
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     printf("%p\n",&arr[3]);
//     printf("%p\n",&arr[4]);

//     return 0;
// }




//ASCII VALUE
//'A'=65
//'a'=97
//'0'=48
//'9'=57

//code 2------

// #include<stdio.h>
// int main(){
//     // char ch='0';
//     // int x=(int)ch;              //type casting
//     // printf("%d",x);
//     // return 0;



//         char ch='A';
//     int x=(int)ch;              //type casting
//     printf("%d",x);
//     return 0;

// }





//code 3-----

// #include<stdio.h>
// int main(){
//     char arr[11]={'H','e','l','l','o',' ','W','o','r','l','d'};
//     for(int i=0; i<11;i++){
//         printf("%c",arr[i]);
//     }

// }

//code 4-------

//null character

// #include<stdio.h>
// int main(){
//     // char arr[] = {'H','e','l','l','o','\0'};
//     // int i=0;
//     // while(arr[i] !='\0'){
//     //     printf("%c",arr[i]);
//     //     i++;
//     // }

//         char arr[] = {'H','e','l','l','o','!'};
//     int i=0;
//     while(arr[i] !='!'){
//         printf("%c",arr[i]);
//         i++;
//     }

// }


//code 5------

//creating string

// #include<stdio.h>
// int main(){
//     char arr[]="i don't like digital system subject and teacher too\0";  //in this computer put \0 in sentence when we intialize string like this 
//     int i=0;
//     while(arr[i]!='\0'){
//         printf("%c",arr[i]);
//         i++;
//     }
//     return 0;
// }

//size of string  --- char str[13]="physics wallah";  this is wrong coz in the and there is hidden \0 so thats why it has 14 character size
//13+1


//code 6-------

//accessing individual characters

// #include<stdio.h>
// int main(){
//     char arr[]="CollegeWallah";
//     int i=0;
//     while(arr[i]!='\0'){
//         printf("%c",arr[4]);
//         i++;
//     }
//     return 0;
// }


//code 7 --------

//modifying individual characters

// #include<stdio.h>
// int main(){




    // char arr[]="hello ji khem cho";
    // arr[0]='M';
    // int i=0;
    // while (arr[i]!='\0'){
    //     printf("%c",arr[i]);
    //     i++;
    
//different

//     char str[20]="CollegeWallah";
//     str[1]=98;
//     int i= 0;
//     while(str[i]!='\0'){
//         printf("%c",str[i]);
//         i++;
//     }
//     return 0;
// }


//code 8 --------

//ways of printing particular elements

// #include<stdio.h>
// int main(){
//         char str[20]="CollegeWallah";
//     str[1]=98;
//     int i= 0;
//     while(str[i]!='\0'){
//         // printf("%c",i[str]);
//         // i++;

//         printf("%c",*(str+i));
//         i++;
//     }
//     return 0;
// }


//code 9--------

//input and output of string without loop

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[] ="College Wallah is best";
//    
      
       //printf("%s",str);

//     // puts(str);     //only to print strings



//     puts("hello everyone");
//     return 0;
// }


//code 10-------
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     // scanf("%s",str);  //only the first word will be considered
//    scanf("%[^\n]s",str); 
//     // gets(str);  //entire sentence can be input 
//     printf("your input was : %s",str);
//     return 0;
// }



//code 11---------

//declaring string without size
#include<stdio.h>
#include<string.h>
int main(){
    char str [15];
    puts("enter a string ");
    scanf("%[^\n]s",str);

    // size

    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
     char temp =str[i];
     str[i]= str[j];
     str[j]=temp;
    }
      puts(" the reverse string is :");
      puts(str);
    return 0;
}
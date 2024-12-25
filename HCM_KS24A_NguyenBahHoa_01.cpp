#include<stdio.h>
int main(){
  const int  MAX_SIZE=100;
	int a[MAX_SIZE];
	int size= 0,choice;
	do{
	  printf("\n=======MENU========\n");
	  printf("1. Nhap so phan tu va cac gia tri cua mang\n");
	  printf("2. In ra cac phan tu gia tri theo mang \n");
	  printf("3. tim gia tri nho nhat vaf lon nhat trong  mang  \n");
	  printf("4. Tinh tong cac gia tri \n");
	  printf("5. Them phan tu moi vao vi tri ngau nhien trong mang\n");
	  printf("6. Xoa phan tu tai vi tri ban nhap vao\n");
	  printf("7. Sap xep mang theo vi tri tang dan \n");
	  printf("8. Tim kiem phan tu ban nhap vao \n");
	  printf("9. In ra toàn bo so nguyên to trong mang. \n");
	  printf("10.Sap xep theo thu tang  dan  \n");
	  int choice; 
	  printf( " moi ban nhap vao lua chon cua ban\n");
	  scanf("%d", &choice);
	  switch (choice) {
	  	case 1:{
	  		int n ;
	  	printf( " moi ban nhap so luong phan tu ");
	  	scanf("%d",&n);
	  	if(n < 0 || n > MAX_SIZE){
		  	printf( " nhap so luong phan tu khong hop le");
		  	break;
		  }for(int  i = 0;  i< n; i++){
		  	printf(" moi ban nhap phan tu thu %d", i );
		  	scanf("%d",&a[i]);
		  		  }
		  size= n ;
	  		break;
	  	}
	  	case 2:
	  		if( size==0){
			  	printf(" mang khong hop le vui long nhap lai mang ");
			  	break;
			  }
	  		for(int i=0;i< size;i++){
			  	printf("%d", a[i]);
			  }
			  printf("\n");
	  		break;
	  
		case 3 :{
			int min=a[0],max=a[0] ;
		for(int i=0;i<size ;i++){
			if(min > a[i]){
				min = a[i];
			}if(max < a[i]){
				max= a[i]; 
			}
		 }
		  
		  printf( " phan tu nho nhat trong mang la %d\n", min);
		  printf ( "phan tu lon nhat trong mang la %d\n", max);
		  break;
		  }
		case 4 :{
			int sum= 0 ;
			for(int i = 0; i < size ; i++){
				sum  += a[i];
			}
		 printf( "Tong cua mang tren la ", sum );
			
		}  
		case 5 :{
			if( size==MAX_SIZE){
		printf ( " mang da day khong the them nua ");
				break;
			}int addVlune;
			printf ( " moi banj nhap vao gia tri can them moi ");
			scanf("%d", &addVlune);
			for( int i = size - 1; i >0; i--){
				a[i+1]=a[i];
			} a[size]=addVlune;
			size++;
			printf ("Da them vao thanh cong");
	  
			break;
			}
			
						
						
			
			
			
			
			
			
		case 6 :{
			int indexdelete;
			printf( "  moi ban nhap vi tri can xoa");
			scanf("%d",&indexdelete);
			if( indexdelete<0 || indexdelete> size){
				printf( " ban nhap vao vi tri xoa khong hop le ");
			}else{
			 for( int i = indexdelete; i< size ; i++){
			 	a[i]=a[i+1];
			 }size--;
			  printf( "da xoa phan tu trong mang ");
		} 
		break ;
		}
		case 7 : {
			for( int i=0; i< size-1; i++){
				for(int j = i+1;j<size; j++){
				 if (a[i]>a[j]){
				 	int temp = a[j];
				 	    a[j]=a[i];
				 	    a[i]=temp;
				 }
			}
		}
		printf(" day cua ban duoc sap xep tang dan ");
		break;
		}
	case 8 : {
		int x,check=0; 
		printf(" moi ban nhap vao so can tim ");
		scanf( "%d", &x);
	  for(int i = 0; i< size ; i++){
	     if( a[i]== x){
		 	printf ( " so cua ban can tim o vi tri %d\n",i);
		 	check=1;
		   break;
	     }
		 }if (!check){
		 	printf( " so ban can tim khong co o day ");
		
		 }
	break;
	}
   case 9 : {
		int dem=0;
		
		/*int prime=1;
		for( int i = 0; i < size ;i++){
			for( int j =2; j< a[i] ;j++){
				if( a[i]% j == 0){
					prime=0;
				}
				
			}
			if( prime==1){
			printf("%d ", a[i]);
			
			}
			} 
				if (prime==0){
								printf(" khong co so nguyen to nao trong mang cua ban da nhap ");*/
	    printf("cac so nguyen to trong mang la");
			for(int i=0;i<size;i++){
				int isPrime = 1;
				if(a[i]==2||a[i]==3){
					isPrime=1;
				} 
				        if (a[i] <= 1) {
				            isPrime = 0; 
				        } else {
				for(int j=2;j<i;j++){
					if(a[i]%j==0){
					
						isPrime=0;
					}
					}if(isPrime){
						printf(" %d ",a[i]);
						dem=1;
						
					}
					} 
				        }	if (dem==0){
								printf(" khong co so nguyen to nao trong mang cua ban da nhap ");
			}        
         break;      
	}	   
			   case 10: {printf("Selection Sort\n");
			   				for(int i=0;i<size;i++){
			   					int min=a[i];
			   					for(int j=i+1;j<size;j++){
			   						if(a[j]<min){
			   							min=a[j];
			   							a[j]=a[i];
			   							a[i]=min;
			   						}
			   					}	
			   				}
			   				printf("phan tu theo thu tu tang dan la: ");
			   				for(int i=0;i<size;i++){
			   					printf("%d ",a[i]);
			   				}
			   				printf("\n");
			   				break;
			   			}
               
        
            case 0: {
                printf("Thoat chuong trinh.\n");
                return 0;
                break;
            }
            default:
                printf("Lua chon khong hop le.\n");
     }   
	}
     while (choice!= 0);

    return 0;
  }

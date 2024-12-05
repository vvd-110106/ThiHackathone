#include<stdio.h>

int main(){
	int n, position, value;
	int choice;
	int arr[100];
	int check=-1;
	
	do{
		printf("\n           MENU          \n");
		printf("1. Nhap so phan tu va gia tri cho mang \n");
		printf("2. In ra gia tri cac phan tu trong mang \n");
		printf("3. Dem so luong cac so nguyen to trong mang \n");
		printf("4. Tim gia tri nho thu 2 trong mang \n");
		printf("5. Them 1 phan tu vao mang \n");
		printf("6. Xoa phan tu tai mot vi tri theo yeu cau \n");
		printf("7. Sap xep mang theo thu tu giam dan \n");
		printf("8. Tim kiem phan tu xem co trong mang hay khong \n");
		printf("9. Xoa toan bo phan tu trung lap trong mang va in ra cac phan tu khong trung lap \n");
		printf("10. Dao nguoc thu tu cac phan tu trong mang \n");
		printf("11. Thoat chuong trinh \n");
		printf("Ban hay lua chon (1-11) o MENU tren:  ");
		scanf("%d", &choice);
		switch(choice){
			case 1: // 1. Nhap so phan tu va gia tri cho mang \n"
			    printf("Ban hay nhap kich co cho mang:  ");
			    scanf("%d", &n);
			    if(n<=0){
			    	printf("Kich co khong hop le");
				}else{
					printf("Ban hay nhap gia tri cho cac phan tu:  \n");
					for(int i=0; i<n; i++){
						printf("Phan tu thu [%d] la: ", i+1);
						scanf("%d", &arr[i]);
					}
				}
			
				break;
			case 2: //2. In ra gia tri cac phan tu trong mang \n
			
			    if(n==0){
			    	printf("Mang dang rong. Ban hay nhap gia tri cho mang. ");
				}else{
					printf("Gia tri cac phan tu cua mang la: ");
					for(int i=0; i<n ; i++){
						printf("arr[%d]=%d,  ", i, arr[i]);
					}
				}
				break;
			case 3: //Dem so luong cac so nguyen to trong mang \n
			
					if(n==0){
	    			   printf("Mang dang rong ");
				    }else{
					printf("Cac so nguyen to trong mang la: ");
			        for (int i = 0; i <= n; i++) {
			            int isPrime = 1;
			            if (arr[i] <= 1) {
			               isPrime = 0;
			           } else {
			                for (int j = 2; j * j <= arr[i]; j++) {
			                    if (arr[i] % j == 0) {
			                       isPrime = 0;
			                    break;
			                    }
			                }
			            }
			        if (isPrime) {
			            printf("%d ", arr[i]);
			        }
			        }
			    printf("\n");
				}
	    		break;
			case 4: //
				
				break;
			case 5: // Them 1 phan tu vao mang \n
			
			    printf("Mang ban dau cua ban la: ");
			    for(int i=0; i<n; i++){
			    	printf("%3d", arr[i]);
				}
			    printf("\nBan hay nhap vi tri ma ban muon them phan tu: ");
	    		scanf("%d", &position);
	    		if(position<0 || position>n){
	    			printf("Vi tri khong hop le.");
	    			break;
				}
					printf("Ban hay nhap gia tri muon them vao mang: ");
				    scanf("%d", &value);
				    for(int i=n;i>position; i--){
				    	arr[i]=arr[i-1];
					}
					arr[position]=value;
					n++;
				
			     	printf("Mang sau khi duoc them la: ");
				    for(int i=0; i<n; i++){
					printf("%d\t", arr[i]);
				}
	    		break;
			case 6:
				if(n==0){
	    			printf("Mang dang rong ");
				}else{
					printf("Ban hay nhap vi tri ma ban muon xoa phan tu: ");
	    		    scanf("%d", &position);
	    		    if(position<0 || position>n){
	    		    	printf("Vi tri khong hop le.");
				    }else{
					    for(int i=position; i<n-1; i++){
						   arr[i]=arr[i+1];
					    }
					n--;
					printf("Mang sau khi xoa la: ");
				    for(int i=0; i<n; i++){
					    printf("  %d   ", arr[i]);
				    }
				}
				}
				break;
			case 7:
				if(n==0){
	    			printf("Mang dang rong ");
				}else{
					for( int i = 0; i < n -1 ; i++ ){
					    for( int j = 0; j < n - i - 1; j++){
						    if(arr[j] < arr[j +1]){
						        int temp = arr[j];
						        arr[j] = arr[j + 1];
						        arr[j + 1] = temp;
						    }
					    }
				}
				printf("\nMang sau khi duoc sap xep theo thu tu giam dan : ");
				for( int i = 0; i <n ; i++){
					printf("%3d",arr[i]);
				}
				}
	    		break;
	    	case 8:
	    		if(n==0){
	    			printf("Mang dang rong ");
				}else{
					printf("Ban muon tim kiem phan tu nao trong mang : ");
				    scanf("%d",&value);
				    for(int i = 0; i < n; i++){
					    if(value == arr[i]){
						    check=1;
						    position= i;
						    continue;
					    }
				    }
				if(check==1){
					printf("Co phan tu %d trong mang: ", value);
				}else{
					if(check!=1){
						printf("Phan tu khong co trong mang.");
			        }
				}
				}
	    		break;
			case 9:
				break;
			case 10:
				if(n==0){
					printf("Mang dang rong khong the dao nguoc. ");
				}else{
					printf("Mang dao nguoc la: ");
					for(int i=n-1; i>-1; i--){
						printf("%3d", arr[i]);
					}
				}
				break;
			case 11:
				return 0;
			default:
				printf("Ban hay nhap lai tu (1-11) thoi nhe. \n");
	    }
	}while(choice!=11);
	return 0;
}

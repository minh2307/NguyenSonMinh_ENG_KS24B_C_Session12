#include <stdio.h>

void addAllItem(int a[],int n){
	for(int i=0;i<n;i++){
		printf("nhap vao phan tu thu %d: \n",i);
		scanf("%d",&a[i]);
	}
}

void showItem(int a[],int n){
	printf("cac phan tu dang quan ly\n");
	for(int i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}

void addItem(int *size,int a[],int index,int value){
	for(int i=*size-1; i>=index; i--){
		a[i]=a[i-1];
	}
		a[index]=value;
		(*size)++;
}

void editItem(int a[],int index,int value){
		a[index]=value;
}

void delItem(int a[],int *size,int index){
	for(int i = index; i < *size - 1; i++){
        a[i] = a[i + 1];
    }
    (*size)--;
}

void Sort_descending(int a[],int *size){
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp
			}
		}
	}
}

void Sort_Ascending(int a[],int *size){
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp
			}
		}
	}
}	

void Linear_search(int a[],int *size,int value){
	for(int i=0;i<size;i++){
		if(a[i]==value) 
			printf("gia tri nam o vi tri thu %d trong mang",i)
	}
}

int binary_search(int a[],int *size,int value){
	int l=0;
	int r=size-1;
	int m=(l+r)/2
	while(l<=r){
		if(a[m]==value){
			printf("gia tri nam o vi tri thu %d trong mang",m);
		}else if(a[m]<value){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return 0;	
}
int main(){
	int choice;
	int a[10];
	int size;
	do {
    printf("\n");
    printf("1. Them so luong phan tu va nhap gia tri\n");
    printf("2. In ra cac phan tu dang quan ly\n");
    printf("3. Them mot phan tu vao vi tri chi dinh\n");
    printf("4. Sua mot phan tu o vi tri chi dinh\n");
    printf("5. Xoa mot phan tu o vi tri chi dinh\n");
    printf("6. Sap xep cac phan tu\n");
    printf("7. Tim kiem phan tu nhap vao\n");
    printf("8. Thoat\n");
    printf("Moi ban lua chon: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("So luong phan tu: ");
            scanf("%d", &size);
            addAllItem(a, size);
            break;

        case 2:
            showItem(a, size);
            break;

        case 3: {
            int index, value;
            printf("Nhap vao vi tri muon them vao: ");
            scanf("%d", &index);
            printf("Nhap vao gia tri muon them vao: ");
            scanf("%d", &value);
            addItem(&size, a, index, value);
            showItem(a, size);
            break;
        }

        case 4: {
            int index, value;
            printf("Nhap vao vi tri muon sua: ");
            scanf("%d", &index);
            printf("Nhap vao gia tri moi: ");
            scanf("%d", &value);
            editItem(a, index, value);
            showItem(a, size);
            break;
        }

        case 5: {
            int index;
            printf("Nhap vao vi tri muon xoa: ");
            scanf("%d", &index);
            delItem(a, &size, index);
            showItem(a, size);
            break;
        }

       case 6:
		    printf("a. Giam dan\n");
		    printf("b. Tang dan\n");
		    printf("Lua chon cua ban: ");
		    scanf(" %c", &choice1); 
    	if (choice1 == 'a') {
       		 Sort_descending(a, size);
    	} else if (choice1 == 'b') {
        	Sort_Ascending(a, size);
    	 else {
        	printf("Lua chon khong hop le.\n");
    	}
    	showItem(a, size);
    	break;

	case 7:
	   	printf("Moi ban nhap vao gia tri muon tim kiem: ");
	    scanf("%d", &value_Item);
	    printf("a. Tim kiem tuyen tinh\n");
	    printf("b. Tim kiem nhi phan\n");
	    printf("Lua chon cua ban: ");
	    scanf(" %c", &choice2); 
    if (choice2 == 'a') {
        Linear_search(a, size, value_Item);
    } else if (choice2 == 'b') {
        Sort_Ascending(a, size);  
        binary_search(a, size, value_Item);
    } else {
        printf("Lua chon khong hop le.\n");
    }
    break;


        case 8:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le.\n");
    }
	}while(choice!=8);



return 0;
}


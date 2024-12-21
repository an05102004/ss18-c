#include<stdio.h>
#include<string.h>

int main(){
	struct Dish {
		int id;
		char name[30];
		int price;
		
	};
	struct Dish menu[100];
	int choice;
	int n;
	int MonAn=5;
	struct Dish menu1={1 ,"bun bo",30};
	struct Dish menu2={2 ,"bun ca",45};
	struct Dish menu3={3 ,"bun tron",45};
	struct Dish menu4={4 ,"bun cha",45};

	do{
		printf("...MENU...:\n");
		printf("in ra cac gia tri phan tu co trong menu mon an theo dang 1. member:value\n");
		printf("them mot phan tu vao vi tri chi dinh :\n");
		printf("sua mot phan tu o vi tri chi dinh:\n");
		printf("xoa mot phan tu o vi tri chi dinh:\n");
		printf("sap xep cac phan tu :\n");
		printf("giam dan theo price :\n");
		printf("tang dan theo price:\n");
		printf("tim kiem phan tu theo name nhan vao:\n");
		printf("tim kiem tuyen tinh :\n");
		printf("tim kiem nhi phan :\n");
		printf("thoat :\n");
		scanf("%d", &choice);		
	switch(choice){
	case 1: 
	printf("mon an :%d ten mon:%s gia mon la:%d\n", menu1.id,menu1.name,menu1.price);
	printf("mon an :%d ten mon:%s gia mon la:%d\n", menu2.id,menu2.name,menu2.price);
	printf("mon an :%d ten mon:%s gia mon la:%d\n", menu3.id,menu3.name,menu3.price);
	printf("mon an:%d  ten mon:%s gia mon la:%d\n", menu4.id,menu4.name,menu4.price);
	break;
	case 2:
	if(n<=6) {
	struct Dish newDish; 
		   	  	printf("Nhap ID mon an moi:\n ");
		   	  	scanf("%d", &newDish.id);
		   	  	printf("Nhap ten mon an moi:\n ");
		   	  	scanf("%s",  newDish.name);
		   	  	printf("Nhap gia mon an moi: \n");
		   	  	scanf("%d", &newDish.price);

	}else{
		          	printf("Menu da day, khong the them mon moi:");
				  }
    break; 
    case 4: 
	int vitriXoa;
                printf("nhap vi tri muon xoa menu: ");
                scanf("%d", &vitriXoa);
    if(vitriXoa < 0 || vitriXoa >= 5){
                    printf("vi tri them khong hop le");
    break;
                }
    for(int i = vitriXoa; i < MonAn; i++){
                    Menu[i].id = Menu[i + 1].id;
                    strcpy(Menu[i].name, Menu[i + 1].name);
                    Menu[i].price = Menu[i + 1].price;
                }
                MonAn--;
                printf("da xoa mon an trong menu");
                break;
    case 7: 
                return 0;
                break;
            default:
                printf("lua chon khong hop le");            
            }
		    }

	}
	}while(choice!=8);
}
	return 0;
}
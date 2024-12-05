#include<stdio.h>
int main(){
    int soPhanTu = 0,arr[100];
    int choice;
    int position,giaTri;
    int searchValue;
    do{
        printf("\n----MENU-----\n");
        printf("1. Nhập số phần tử và giá trị cho mảng\n");
        printf("2. In phần tử trong mảng\n");
        printf("3. Đếm số lượng số hoàn hảo\n");
        printf("4. Tìm giá trị lớn thứ 2 trong mảng, không được sắp xếp mảng\n");
        printf("5. Thêm phần tử\n");
        printf("6. Xóa phần tử ở vị trí cụ thể\n");
        printf("7. Sắp xếp mảng theo thứ tự tăng dần (Insertion sort)\n");
        printf("8. Cho người dùng nhập vào một phần tử, tìm kiếm xem phần tử đó có tồn tại trong mảng hay không (Binary search)\n");
        printf("9. Sắp xếp lại mảng và hiển thị ra toàn bộ phần tử có trong mảng sao cho toàn bộ số chẵn đứng trước, số lẻ đứng sau\n");
        printf("10. Đảo ngược thứ tự của các phần tử có trong mảng\n");
        printf("11. Thoát\n");
        printf("Nhập lựa chọn của bạn: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Nhập số phần tử (1-100):");
            scanf("%d",&soPhanTu);
            if(soPhanTu < 0 || soPhanTu > 100){
                printf("Nhập sai số rồi");
                break;
            }
            for (int i = 0; i < soPhanTu; i++){
                printf("Nhập phần tử thứ %d: ",i+1);
                scanf("%d",&arr[i]);
            } 
            break;
        case 2:
            if (soPhanTu == 0){
                printf("Mảng trống\n");
                break;
            }
            printf("\n Phần tử trong mảng là: ");
            for (int i = 0; i < soPhanTu; i++)
            {
                printf("%2d", arr[i]);
            } 
            break;
        case 3:

            break;
        case 4:
            break;
        case 5:
            printf("Nhập vị trí muốn thêm phần tử(1-%d): ",soPhanTu);
            scanf("%d",&position);
            printf("Nhập giá trị muốn thêm vào: ");
            scanf("%d",&giaTri);
            if (position < 0 || position > soPhanTu) {
                printf("Vị trí không hợp lệ.\n");
                break;
            }
            for(int i=soPhanTu ; i>position; i--){
                    arr[i]=arr[i-1];
                }
            arr[position] = giaTri;
            soPhanTu++;
            printf("\nThêm phần tử thành công\n");
            break;
        case 6:
            printf("\nNhập vị trí cần xóa (từ 1 đến %d): ",soPhanTu);
            scanf("%d", &position);
            if (position < 0 || position > soPhanTu) {
                printf("Vị trí không hợp lệ.\n");
            } else {
                for (int i = position-1; i <= soPhanTu ; i++) {
                    arr[i] = arr[i + 1];
                }
                soPhanTu--;
                printf("Đã xóa phần tử thành công.\n");
            }
            break;
        case 7:
            for(int i =1; i<soPhanTu; i++){
				int key = arr[i];
				int j;
				for(j=i-1; j>=0&&arr[j]>key; j--){
					arr[j+1]= arr[j];
				}
				arr[j+1]=key;
			}
			printf("Cac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<soPhanTu;i++){
				printf("%d\t", arr[i]);}
            break;
        case 8:
            int start=0;
            int end = sizeof(arr)/sizeof(int);
            int mid = (start+end)/2;
            printf("Nhập phần tử cần tìm: ");
            scanf("%d",&searchValue);
            while (start<=end){
                if(searchValue==arr[mid]){
                    printf("\nPhần tử tồn tại trong mảng tại vị trí: %d",mid);
                    break;
                }else if (arr[mid]>searchValue)
                {
                    end = mid-1;
                }else{
                    start = mid +1;
                }     
            }
            break;
        case 9:

            break;
        case 10:

            break;
        case 11:
            printf("Bạn đã thoát");
            break;
        default:
            printf("Bạn chọn sai rồi");
            break;
        }
    } while (choice != 11);
    return 0;
}
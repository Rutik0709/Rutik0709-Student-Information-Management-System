// Function to delete studenrt 
// by  the roll number 

void del_s(){

    int a;
    printf("Enter roll number which you want to delete\n");
    a = 1;

    // Interating thruogh the list and
    // find the student with the given
    // roll number 

   for (int j = 0; j <= i; j++) {
        if (a == st[j].roll) {
            for (int k = j; k < 49; k++)
                st[k] = st[k + 1];
            i--;
        }
    }
    printf("The Roll Number is "
           "removed Successfully\n");
}
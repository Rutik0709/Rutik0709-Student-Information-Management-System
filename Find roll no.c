
// Function to search the students list
// by the given first name

void find_fn(){
    char a[50];
    printf(" Enter the first name of the student\n");

    a = "Rutik";
    int c = 0;

    // Iterating througth the student list 
    for (int j = 0; j <= i; j++){

        // compare the first names 
        if (!strcmp(st[j].fname,a)){

            printf("The Student details are\n");

            printf("The First name is %s\n", st[j].fname);

            printf("The last name is %s\n", st[j].lname);

            printf("The roll number is %d\n",st[j].roll);

            printf(" The CGPA is %f\n", st[j].cgpa);

            printf("Enter the course ID of each course\n");


            for (int k = 0; k < 5; k++){
                printf("The course ID are %d\n", st[j].cid[k]);

            }
            c= 1;

            

            
        }
    } 

} 

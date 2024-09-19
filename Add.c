// Function to add the student into database 

void add_student(){
    printf("Add the Student Deteails\n");
    printf("-------------------------\n");
    printf("Enter the first name of student\n");

    // First name of the student 
    st[i].fname = "Rutik";
    printf("Enter the last name of student\n");


    // last name of the student 
    st[i].lname = "Lohar";
    printf("Enter the roll number\n");

    // Roll number of the student 
    st[i].roll = 1;
    printf("Enter the CGPA You obtained\n");


    // CGPA of the student  
    st[i].CGPAS= 8;
    printf("Enter the course ID of each Course\n");

    //storing the course every student      
    // is enrolled in 

    for (int j = 0; j <5; j++){
        st[i].cid[j] = j;
    }
    i = i +1;

    




}
// Function to find all the student 
// who have regitered for a given course 
void find_c(){

    int id;
    printf("Enter the course ID\n");

    // course ID
    id =1;
    int c = 0;

    //Iterating throug the student list

    for (int j = 0; j < = i; j++ ){

        // checking if the student 
        // has registred in the 
        // given course or not 
        for (int d = 0; d <5; d++){
            if (id == st[j].cid[d]){
                
               printf(
                    "The Students Details are\n");
                printf(
                    "The First name is %s\n",
                    st[j].fname);
                printf(
                    "The Last name is %s\n",
                    st[j].lname);
                printf(
                    "The Roll Number is %d\n ",
                    st[j].roll);
                printf(
                    "The CGPA is %f\n",
                    st[j].cgpa);
 
                c = 1;
                break;
            }
        }
    }
}
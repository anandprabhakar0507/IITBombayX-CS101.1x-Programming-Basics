
/* Question          : count number of students scoring X marks in GQ and store it in 'sum_gq'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   int sum_gq[]      : Integer array to be computed  */
void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
    // Write your solution code below this line

    for (int i = 0; i < 11; i++) {
        
        sum_gq[i] = 0;
        
    }

    for (int i = 0; i < numOfStudents; i++) {
        
        int mark_q = gq[i];
        sum_gq[mark_q]++;
        
    }

}



/* Question          : Count number of students scoring Y marks in GPA and store it in 'sum_gpa'
   int numOfStudents : Integer number containing the total number of students
   float gpa[]       : Array of type float containing the GPA marks of all students
   int sum_gpa[]     : Integer array to be computed */
void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
    // Write your solution code below this line
    
    for ( int i = 0; i < 4; i++ ) {
        
        sum_gpa[i] = 0;
        
    }
    
    for ( int i = 0; i < numOfStudents; i++ ) {
        
        float mark_p = gpa[i];
        float point_three = 0.3;
        float point_six = 0.6;

        if ( mark_p == 0 ) sum_gpa[0]++;
        else if ( mark_p == point_three ) sum_gpa[1]++;
        else if ( mark_p == point_six ) sum_gpa[2]++;
        else if ( mark_p == 1 ) sum_gpa[3]++;
        
    }

}



/* Question          : Count number of students scoring X marks in GQ, Y marks in GPA, total, and result, in 'count[][]'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   float gpa[]       : Array of type float, containing the GPA marks of all students
   int count[][]     : Integer array to be computed */
void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
    // Write your solution code below this line

    
    for (int i = 0; i < 12; i++) {
        
        for ( int j = 0; j < 5; j++ ) {
            
            count[i][j] = 0;
            
        }
        
    }
    
    
    for (int i = 0; i < numOfStudents; i++) {
        
        int mark_q = gq[i];
        int mark_p;
        float fmark_p = gpa[i];
        float point_three = 0.3;
        float point_six = 0.6;
        
        if (fmark_p == 0 ) mark_p = 0;
        else if ( fmark_p == point_three ) mark_p = 1;
        else if ( fmark_p == point_six ) mark_p = 2;
        else if ( fmark_p == 1 ) mark_p = 3;

        count[mark_q][mark_p]++;
        count[mark_q][4]++;
        count[11][mark_p]++;
        count[11][4]++;
        
    }

}


#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

class course{
    string stu; //this string stores grade of students under particular course
    public:
    
    int A[20];// this int array stores whether student registered for a particular course or not. 
                // if A[x] = y {y usually is rollnumber of student if he registered for a course. if y =100 that means he isn't registered for the course}

    void coureg(int coursenum){ //This gives info which student is registered for which course etc
         int i;
    if(coursenum == 1){
        ifstream read_students_incourse("c1stu.txt",ios::in);
        for(i=0;i<20;i++){
        read_students_incourse>>A[i];
            }
        read_students_incourse.close();
        }
    else if(coursenum == 2){
        ifstream read_students_incourse("c2stu.txt",ios::in);
            for(i=0;i<20;i++){
            read_students_incourse>>A[i];
            }
        read_students_incourse.close();
        }
    else if(coursenum == 3){
        ifstream read_students_incourse("c3stu.txt",ios::in);
        for(i=0;i<20;i++){
        read_students_incourse>>A[i];
            }
        read_students_incourse.close();
        }
    else if(coursenum == 4){
        ifstream read_students_incourse("c4stu.txt",ios::in);
        for(i=0;i<20;i++){
        read_students_incourse>>A[i];
            }
        read_students_incourse.close();
        }
    else if(coursenum == 5){
        ifstream read_students_incourse("c5stu.txt",ios::in);
        for(i=0;i<20;i++){
        read_students_incourse>>A[i];
            }
        read_students_incourse.close();
        }
    }
    // grade: it stores the grade of student for a particular course if faculty has given grades to them 
    // initially grade is set by default to 0. {0 : that course isn't graded}

    void grade(int roll,int grade=0,int course_id_num=0){ //(student rollno, student grade, coursenum)
 
      if(course_id_num == 1){
           ifstream read_grades("c1grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades >> stu[i];
            }
            stu[roll - 1] = grade + '0';        // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'

            read_grades.close();

            ofstream update_grades("c1grade.txt");

        for(int i=0;i<20;i++){
        update_grades<<stu[i]<<"\n";
            }
        
        update_grades.close();
      }
     else if(course_id_num == 2){
          ifstream read_grades("c2grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades >> stu[i];
            }
            stu[roll - 1] = grade + '0';        // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'

            read_grades.close();

            ofstream update_grades("c2grade.txt");

        for(int i=0;i<20;i++){
        update_grades<<stu[i]<<"\n";
            }
        
        update_grades.close();
     }
     else if(course_id_num == 3){
         ifstream read_grades("c3grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades >> stu[i];
            }
            stu[roll - 1] = grade + '0';        // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'

            read_grades.close();

            ofstream update_grades("c3grade.txt");

        for(int i=0;i<20;i++){
        update_grades<<stu[i]<<"\n";
            }
        
        update_grades.close();
    }
    else if(course_id_num==4){
         ifstream read_grades("c4grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades >> stu[i];
            }
            stu[roll - 1] = grade + '0';        // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'

            read_grades.close();

            ofstream update_grades("c4grade.txt");

        for(int i=0;i<20;i++){
        update_grades<<stu[i]<<"\n";
            }
        
        update_grades.close();
    }
    else if(course_id_num == 5){
         ifstream read_grades("c5grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades >> stu[i];
            }
            stu[roll - 1] = grade + '0';        // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'

            read_grades.close();

            ofstream update_grades("c5grade.txt");

        for(int i=0;i<20;i++){
        update_grades<<stu[i]<<"\n";
            }
        
        update_grades.close();
    }
}
    void printgrades(int,int); 
    void add(int,int);
    void remove(int,int);
};

//This updates int array A[] and add student to particular course if he registers for that.

void course :: add(int roll,int coursenum) {
    int i;

    if(coursenum == 1){
    ifstream read_students_incourse("c1stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i]; // reads and stores whether student is registered for course or not
    }
    A[roll -1] = roll;// if student adds the course then it updates its value
    read_students_incourse.close();

    ofstream update_students_incourse("c1stu.txt"); //this stores the updated list in text file externally
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully added"<<endl;
    }

// based on course numbers the data will entered and updated into corresponding text file

    else if(coursenum == 2){
    ifstream read_students_incourse("c2stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = roll;
    read_students_incourse.close();

    ofstream update_students_incourse("c2stu.txt");
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully added"<<endl;
    }
    else if(coursenum == 3){
    ifstream read_students_incourse("c3stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = roll;
    read_students_incourse.close();

    ofstream update_students_incourse("c3stu.txt");
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully added"<<endl;
    }
    else if(coursenum == 4){
    ifstream read_students_incourse("c4stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = roll;
    read_students_incourse.close();

    ofstream update_students_incourse("c4stu.txt");
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully added"<<endl;
    }
    else if(coursenum == 5){
    ifstream read_students_incourse("c5stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = roll;
    read_students_incourse.close();

    ofstream update_students_incourse("c5stu.txt");
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully added"<<endl;
    }
}
void course :: remove(int roll,int coursenum) {
       int i;
    
    if(coursenum == 1){
    ifstream read_students_incourse("c1stu.txt",ios::in); // reads and stores whether student is registered for course or not
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = 100; // if student removes the course then it updates its value to 100(100 in this code implies course isn't registered)
    read_students_incourse.close();

    ofstream update_students_incourse("c1stu.txt");
    for(int i=0;i<20;i++){ //this stores the updated list in text file externally
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully removed"<<endl;
    }
    else if(coursenum == 2){
    ifstream read_students_incourse("c2stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = 100;
    read_students_incourse.close();

    ofstream update_students_incourse("c2stu.txt");
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully removed"<<endl;
    }
    else if(coursenum == 3){
    ifstream read_students_incourse("c3stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = 100;
    read_students_incourse.close();

    ofstream update_students_incourse("c3stu.txt");
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully removed"<<endl;
    }
    else if(coursenum == 4){
    ifstream read_students_incourse("c4stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = 100;
    read_students_incourse.close();

    ofstream update_students_incourse("c4stu.txt");
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully removed"<<endl;
    }
    else if(coursenum == 5){
    ifstream read_students_incourse("c5stu.txt",ios::in);
    for(i=0;i<20;i++){
        read_students_incourse>>A[i];
    }
    A[roll -1] = 100;
    read_students_incourse.close();

    ofstream update_students_incourse("c5stu.txt");
    for(int i=0;i<20;i++){
        update_students_incourse<<A[i]<<"\n";
    }
    update_students_incourse.close();
    cout<<"course c"<<coursenum<<" is successfully removed"<<endl;
    }
   
}
//This function reads the grades from gradetxt file and stores it to stu[] string. and prints it value when called.

void course :: printgrades(int roll,int course_id_num2){
    
    if(course_id_num2 == 1){ //this (course_id_num2 == 1)implies req grades is from course c1.
         ifstream read_grades2("c1grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades2>> stu[i]; //reads the grades from gradetxt file
            }
            read_grades2.close();

        if(stu[roll-1] == ':'){          // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'
        cout<<"grade in c"<<course_id_num2<<" = 10"<<endl; //Hence output should be 10 instead of ':'
            }
        else{
        cout<<"grade in c"<<course_id_num2<<" = "<<stu[roll - 1]<<endl;
            }           
    }
    else if(course_id_num2 == 2){
         ifstream read_grades2("c2grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades2>> stu[i];
            }
            read_grades2.close();

        if(stu[roll-1] == ':'){          // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'
        cout<<"grade in c"<<course_id_num2<<" = 10"<<endl; //Hence output should be 10 instead of ':'
            }
        else{
        cout<<"grade in c"<<course_id_num2<<" = "<<stu[roll - 1]<<endl;
            }           
    }
    else if(course_id_num2 == 3){
         ifstream read_grades2("c3grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades2>> stu[i];
            }
            read_grades2.close();

        if(stu[roll-1] == ':'){          // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'
        cout<<"grade in c"<<course_id_num2<<" = 10"<<endl; //Hence output should be 10 instead of ':'
            }
        else{
        cout<<"grade in c"<<course_id_num2<<" = "<<stu[roll - 1]<<endl;
            }           
    }
    else if(course_id_num2 == 4){
         ifstream read_grades2("c4grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades2>> stu[i];
            }
            read_grades2.close();

        if(stu[roll-1] == ':'){          // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'
        cout<<"grade in c"<<course_id_num2<<" = 10"<<endl; //Hence output should be 10 instead of ':'
            }
        else{
        cout<<"grade in c"<<course_id_num2<<" = "<<stu[roll - 1]<<endl;
            }           
    }
    else if(course_id_num2 == 5){
         ifstream read_grades2("c5grade.txt",ios::in);
           for(int i=0; i<20; i++){
                read_grades2>> stu[i];
            }
            read_grades2.close();

        if(stu[roll-1] == ':'){          // if grade = 10 then stu[i] whose ASCII value is 10 + '0' = ':'
        cout<<"grade in c"<<course_id_num2<<" = 10"<<endl; //Hence output should be 10 instead of ':'
            }
        else{
        cout<<"grade in c"<<course_id_num2<<" = "<<stu[roll - 1]<<endl;
            }           
    }
}
// this function is called when student is logged into MINI-AIMS.
void Student(string id){
course c1,c2,c3,c4,c5;
   
    int pressed1,pressed2;
    cout<<"Press 1 to View Grades"<<endl;
    cout<<"Press 2 to View Courses"<<endl;
    int l=1;

    
    int roll; //stores roll number of student.

        //This converts stored rollno inform of string to integer i.e roll.
    if(id[4] == '\0'){
        roll = id[3] - '0';
    }
    else {
        roll = (id[3] - '0')*10  + (id[4] - '0');
    }

    cin>>pressed1;

    if(pressed1 == 1){
        
        // c1.grade(roll);
        c1.printgrades(roll,l);
        l++;
        // c2.grade(roll);
        c2.printgrades(roll,l);
        l++;
        // c3.grade(roll);
        c3.printgrades(roll,l);
        l++;
        // c4.grade(roll);
        c4.printgrades(roll,l);
        l++;
        // c5.grade(roll);
        c5.printgrades(roll,l);
    }

    else if(pressed1 == 2){

        cout<<"c1 c2 c3 c4 c5"<<endl; //initially displays available courses i.e, 5.
        cout<<"Press 1 to add courses"<<endl;
        cout<<"Press 2 to delete course"<<endl;

        cin>>pressed2;

        //enters add courses mode
        if(pressed2 == 1){
            string cid;
            int coursenum;
            cout<<"Enter the course id (eg:c1)"<<endl;
            cin>>cid;
        
            if(cid == "c1"){
                coursenum = 1; //as course is c1 therefore, course number is given 1.
                c1.add(roll,coursenum);
            }
            else if(cid == "c2"){
                coursenum = 2;
                c2.add(roll,coursenum);
            }
            else if(cid == "c3"){
                coursenum=3;
                c3.add(roll,coursenum);
            }
            else if(cid == "c4"){
                coursenum=4;
                c4.add(roll,coursenum);
            }
            else if(cid == "c5"){
                coursenum=5;
                c5.add(roll,coursenum);
            }
        }

            // enters delete courses mode
            else if(pressed2 == 2){
            string cid;
            int coursenum;
            cout<<"Enter the course id (eg:c1)"<<endl;
            cin>>cid;
        
            if(cid == "c1"){
                coursenum = 1;
                c1.remove(roll,coursenum);
            }
            else if(cid == "c2"){
                coursenum = 2;
                c2.remove(roll,coursenum);
            }
            else if(cid == "c3"){
                coursenum=3;
                c3.remove(roll,coursenum);
            }
            else if(cid == "c4"){
                coursenum=4;
                c4.remove(roll,coursenum);
            }
            else if(cid == "c5"){
                coursenum=5;
                c5.remove(roll,coursenum);
            }
        }
    }
return;    
}
// this function is called when Faculty is logged into MINI-AIMS.

void Faculty(string facid){

    course c1,c2,c3,c4,c5;
    int roll;
    roll = facid[3] - '0';

    // when logged into faculty : 1 who takes course c1.
    if(roll == 1){
            int pressed3;
            int grade;
            int none=0;

    cout<<"Your Course : c"<<roll<<endl;
    cout<<endl;
    cout<<"students registered for your course:"<<endl;

    c1.coureg(1); //this is called to check students registered for the course
    for(int i=0;i<20;i++){

            //This implies A[x] = y (and y != 100 ) then he is registered.
        if((c1.A[i] < 21)&&(c1.A[i] > 0)){ 
            cout<<"stu"<<c1.A[i]<<endl;
            cout<<endl;
            none = 1;
        }
    }
    //none = 0 implies none are registered in that course.
    if(none == 0){
        cout<<"None"<<endl;
        cout<<endl;
    }
        // this implies under some course atleast one student registered. and now faculty can grade him.
    if(none != 0){cout<<"enter student rollno to submit grade (eg:for stu12 enter 12)"<<endl;
    cin>>pressed3;      //roll number of the student.
    cout<<"enter Grade"<<endl;
    cin>>grade;
    
    c1.grade(pressed3,grade,roll); //(stu_roll, grade, course_num)
    cout<<"Grade submitted successfully"<<endl;
        }
    }
    else if(roll == 2){
            int none = 0;
            int pressed3;
            int grade;

    cout<<"Your Course : c"<<roll<<endl;
    cout<<endl;
    cout<<"students registered for your course:"<<endl;

    c2.coureg(2);
    for(int i=0;i<20;i++){

        if((c2.A[i] < 21)&&(c2.A[i] > 0)){
            cout<<"stu"<<c2.A[i]<<endl;
            cout<<endl;
            none = 1;
        }
    }
    if(none == 0){
        cout<<"None"<<endl;
        cout<<endl;
        }
    if(none != 0){cout<<"enter student rollno to submit grade (eg:for stu12 enter 12)"<<endl;
    cin>>pressed3;      //roll number of the student.
    cout<<"enter Grade"<<endl;
    cin>>grade;
    
    c2.grade(pressed3,grade,roll); //(stu_roll, grade, course_num)
    cout<<"Grade submitted successfully"<<endl;
        }
    }
     else if(roll == 3){
            int none=0;
            int pressed3;
            int grade;

    cout<<"Your Course : c"<<roll<<endl;
    cout<<endl;
    cout<<"students registered for your course:"<<endl;

    c3.coureg(3);
    for(int i=0;i<20;i++){

        if((c3.A[i] < 21)&&(c3.A[i] > 0)){
            cout<<"stu"<<c3.A[i]<<endl;
            cout<<endl;
            none = 1;
        }
    }
    if(none == 0){
        cout<<"None"<<endl;
        cout<<endl;
        }
    if(none != 0){cout<<"enter student rollno to submit grade (eg:for stu12 enter 12)"<<endl;
    cin>>pressed3;      //roll number of the student.
    cout<<"enter Grade"<<endl;
    cin>>grade;
    
    c3.grade(pressed3,grade,roll); //(stu_roll, grade, course_num)
    cout<<"Grade submitted successfully"<<endl;
        }
    }
     else if(roll == 4){
         int none=0;
            int pressed3;
            int grade;

    cout<<"Your Course : c"<<roll<<endl;
    cout<<endl;
    cout<<"students registered for your course:"<<endl;

    c4.coureg(4);
    for(int i=0;i<20;i++){

        if((c4.A[i] < 21)&&(c4.A[i] > 0)){
            cout<<"stu"<<c4.A[i]<<endl;
            cout<<endl;
            none=1;
        }
    }
    if(none == 0){
        cout<<"None"<<endl;
        cout<<endl;
        }
    if(none != 0){cout<<"enter student rollno to submit grade (eg:for stu12 enter 12)"<<endl;
    cin>>pressed3;      //roll number of the student.
    cout<<"enter Grade"<<endl;
    cin>>grade;
    
    c4.grade(pressed3,grade,roll); //(stu_roll, grade, course_num)
    cout<<"Grade submitted successfully"<<endl;
    }
        }
    else if(roll == 5){
        int none=0;
            int pressed3;
            int grade;

    cout<<"Your Course : c"<<roll<<endl;
    cout<<endl;
    cout<<"students registered for your course:"<<endl;

    c5.coureg(5);
    for(int i=0;i<20;i++){

        if((c5.A[i] < 21)&&(c5.A[i] > 0)){
            cout<<"stu"<<c5.A[i]<<endl;
            cout<<endl;
            none=1;
        }
    }
if(none == 0){
        cout<<"None"<<endl;
        cout<<endl;
        }
    if(none != 0){cout<<"enter student rollno to submit grade (eg:for stu12 enter 12)"<<endl;
    cin>>pressed3;      //roll number of the student.
    cout<<"enter Grade"<<endl;
    cin>>grade;
    
    c5.grade(pressed3,grade,roll); //(stu_roll, grade, course_num)
    cout<<"Grade submitted successfully"<<endl;
        }
    }
return;
}

// this function is called when Faculty is logged into MINI-AIMS.
void Admin(){
    course c1,c2,c3,c4,c5;
 int pressed4,pressed5;
    int lastrollno=21;
    //there are initally 20 students and hence next number is 21.
    int stu_rollno,course_no;

    string add_stu,club;
    string stu_count;

    cout<<"Press 1 to Edit Student Credentials :"<<endl;
    cout<<"Press 2 to add course under a student"<<endl;
    cout<<"Press 3 to remove student from a course"<<endl;


    cin>>pressed4;

    if(pressed4 == 1){
        cout<<"press 1 to add students in IIT H:"<<endl;
        cin>>pressed5;

        if(pressed5 == 1){

            ifstream read("count_stu.txt",ios::in); //This reads tot number of students in AIMS
            read >> stu_count;
            cout << stu_count<<endl ;
            read.close();
            
            istringstream(stu_count)>> lastrollno; // enters no.of students into an integer variable lastrollno.

            cout<<"enter the password for stu"<<lastrollno<<endl;

            cin>>add_stu;
            club = "stu"+ stu_count + add_stu; //creates new studentid and password unique string (requries during login)

            lastrollno = lastrollno + 1; //updates student number as we increased a student at clg

            ostringstream ss1;
            ss1<<lastrollno; 
            stu_count = ss1.str(); // edit no.of students in text file

            ofstream update("count_stu.txt");
            update<<stu_count;
            update.close();
            
            cout<<"Student successfully added and Roll Number is "<<lastrollno-1<<endl;

            ofstream update_stulist("List.txt",ios::app);
            update_stulist<<club<<"\n";
            update_stulist.close();
            
        }
    }
    //DELETE STUDENT   
     // 2 // Add courses

    //3 //Add stu to course
    
    else if(pressed4 == 2){
    cout<<"Enter roll number of student (eg: for stu14 - roll number = 14)"<<endl;
    cin>>stu_rollno;
    cout<<"Enter course number to register for stu (eg: for c2 - course number is 2)"<<stu_rollno<<" : "<<endl;
    cin>>course_no;

// This is same as adding courses by students

    if(course_no == 1){
        c1.add(stu_rollno,1);
        }
    else if(course_no == 2){
        c1.add(stu_rollno,2);
        }
    else if(course_no == 3){
        c1.add(stu_rollno,3);
        }
    else if(course_no == 4){
        c1.add(stu_rollno,4);
        }
    else if(course_no == 5){
        c1.add(stu_rollno,5);
        }        

    cout<<"Successfully registered student to course"<<endl;
    }

    //Remove stu from course
    // This is same as adding courses by students

    else if(pressed4 == 3){
        cout<<"Enter roll number of student (eg: for stu14 - roll number = 14)"<<endl;
    cin>>stu_rollno;
        cout<<"Enter course number to deregister for stu"<<stu_rollno<<" (eg: for c2 - course number is 2) : "<<endl;
    cin>>course_no;

    if(course_no == 1){
        c1.remove(stu_rollno,1);
        }
    else if(course_no == 2){
        c1.remove(stu_rollno,2);
        }
    else if(course_no == 3){
        c1.remove(stu_rollno,3);
        }
    else if(course_no == 4){
        c1.remove(stu_rollno,4);
        }
    else if(course_no == 5){
        c1.remove(stu_rollno,5);
        } 
    cout<<"Successfully deregistered student from the course"<<endl;
    }
return;    
}

int main(){
    
    int l=99; //l=0:student , l=1 : faculty , l=2 : admin ;
    int k=1;
    string id, pw, result;

    while(k != 0){

        cout<<"Enter Used Id"<<endl;
        cin>>id;

        cout<<"Enter password"<<endl;
        cin>>pw;

        result = id + pw;

        fstream my_file;
        my_file.open("list.txt",ios::in);
        
        string c;
        while(1){
            my_file>>c;
             if(c == result){
            k=0;
            break;
            }
            else if(my_file.eof())break;
        }

        if((k == 0)&&(c[0]=='s')){
            l = 0; //implies Student.
            cout<<"Logged in as Student"<<endl;
            Student(id);
        }
        else if((k == 0)&&(c[0]=='f')){
            l = 1; //implies Faculty.
            cout<<"Logged in as Faculty"<<endl;
            Faculty(id);
        }
        else if((k==0)&&(c[0]='a')) {//implies Admin.
            l = 2;
            cout<<"Logged in as Admin"<<endl;
            Admin();
        } 
        else{
            cout<<endl;
            cout<<endl;
            cout<<"Enter Password is Incorrect, Please retry"<<endl;
        }
    }
return 0;
}